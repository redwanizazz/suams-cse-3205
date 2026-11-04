from pathlib import Path

from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import Select
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC


html_file = Path(__file__).parent / "course_registration.html"
page_url = html_file.resolve().as_uri()

driver = webdriver.Chrome()

try:
    driver.get(page_url)

    wait = WebDriverWait(driver, 10)

    # Enter student name
    student_name = wait.until(
        EC.presence_of_element_located((By.ID, "studentName"))
    )
    student_name.send_keys("Sharzil Izaz Mahmud")

    # Select course
    course_dropdown = Select(
        driver.find_element(By.ID, "course")
    )
    course_dropdown.select_by_value("CSE3205")

    # Click Register Course
    driver.find_element(By.ID, "registerBtn").click()

    # Verify result
    result = wait.until(
        EC.presence_of_element_located((By.ID, "result"))
    )

    assert result.text == "Registration Successful"

    print("TEST PASSED")
    print("Student name entered successfully")
    print("Course selected successfully")
    print("Registration button clicked")
    print("Expected result: Registration Successful")
    print("Actual result:", result.text)

    # Save evidence screenshot
    driver.save_screenshot("selenium_success.png")

    input("Press Enter to close the browser...")

finally:
    driver.quit()