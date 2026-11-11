# SUAMS – Smart University Academic Management System

A university academic management system project developed for **CSE 3205 – Software Engineering**. This repository demonstrates software development, testing, automation, and configuration management practices through a Course Registration module.

## Project Overview

The **Smart University Academic Management System (SUAMS)** aims to support academic activities within a university environment.

This repository focuses on the Course Registration module and demonstrates how software engineering concepts can be applied through:

- C++ implementation of course registration logic.
- Unit testing with GoogleTest.
- Browser automation using Selenium.
- Continuous Integration (CI) using GitHub Actions.
- Version control and collaboration using Git and GitHub.

## Repository Structure

```text
suams-cse-3205/
│
├── .github/
│   └── workflows/
│       └── cpp-tests.yml
│
├── suams-testing/
│   ├── course_registration.cpp
│   ├── course_registration.h
│   └── course_registration_test.cpp
│
├── suams-web/
│   ├── course_registration.html
│   └── selenium_test.py
│
├── .gitignore
└── README.md
```

## Implemented Components

### 1. Course Registration Module

**Location:** `suams-testing/`

The module implements course registration validation using C++.

It checks the following conditions:

- Whether the student is active.
- Whether the required prerequisite has been completed.
- Whether seats are available.
- Whether the registration exceeds the maximum credit limit of 21 credits.

The module returns an appropriate registration status based on these conditions.

### 2. Unit Testing – GoogleTest

**Location:** `suams-testing/course_registration_test.cpp`

GoogleTest is used to verify the Course Registration module.

The committed test checks whether a valid student can successfully register for a course when all registration conditions are satisfied.

### 3. Web Interface

**Location:** `suams-web/course_registration.html`

A simple HTML-based Course Registration interface demonstrates the registration workflow.

It allows a user to:

- Enter a student name.
- Select a course.
- Submit a registration request.
- View the registration result.

The interface includes basic input validation.

### 4. Browser Automation – Selenium

**Location:** `suams-web/selenium_test.py`

Selenium WebDriver is used to automate the browser-based registration process.

The script:

1. Opens the Course Registration page in Chrome.
2. Enters a student name.
3. Selects a course.
4. Clicks the Register Course button.
5. Verifies the registration result.
6. Saves a screenshot of the test execution.

## Technologies Used

| Technology | Purpose |
|---|---|
| C++ | Course Registration logic |
| GoogleTest | Unit testing |
| HTML and JavaScript | Registration interface |
| Python | Selenium test automation |
| Selenium WebDriver | Browser automation |
| Git | Version control |
| GitHub | Repository hosting and collaboration |
| GitHub Actions | Continuous Integration |

## Getting Started

### Prerequisites

Install the following tools:

- GCC / G++ compiler with C++17 support
- GoogleTest
- Python 3
- Google Chrome
- Selenium
- Git

### 1. Clone the Repository

```bash
git clone https://github.com/redwanizazz/suams-cse-3205.git
```

Navigate to the project directory:

```bash
cd suams-cse-3205
```

### 2. Compile and Run C++ Unit Tests

Compile the Course Registration module and its GoogleTest file:

```bash
g++ -std=c++17 suams-testing/course_registration.cpp suams-testing/course_registration_test.cpp -lgtest -pthread -o course_registration_tests
```

Run the test executable:

**Windows PowerShell:**

```powershell
.\course_registration_tests.exe
```

**Linux:**

```bash
./course_registration_tests
```

Make sure GoogleTest is installed and its headers and libraries are accessible to the compiler.

### 3. Run Selenium Automation

Install Selenium:

```bash
pip install selenium
```

Navigate to the web interface directory:

```bash
cd suams-web
```

Run the automation script:

```bash
python selenium_test.py
```

Google Chrome must be installed. Selenium Manager can automatically manage the appropriate ChromeDriver in supported environments.

The script opens the local registration page, performs the registration workflow, verifies the expected result, and saves a screenshot.

## Continuous Integration – GitHub Actions

GitHub Actions is configured to automatically compile and execute the C++ Course Registration tests.

**Workflow file:**

```text
.github/workflows/cpp-tests.yml
```

The workflow runs on:

- Pushes to the `main` branch.
- Pushes to the `feature/course-registration` branch.
- Pull Requests targeting `main`.

The CI pipeline performs the following steps:

1. Checks out the repository.
2. Installs the required compiler and GoogleTest dependencies.
3. Compiles the Course Registration tests.
4. Executes the test suite.

This helps identify build and testing issues during development and integration.

## Version Control Workflow

Git and GitHub are used to manage source-code changes.

The project follows a feature-branch workflow:

1. Maintain stable code in the `main` branch.
2. Create separate feature branches for development.
3. Commit changes with meaningful messages.
4. Push feature branches to GitHub.
5. Create Pull Requests for review.
6. Merge approved changes into `main`.
7. Use release tags to identify stable versions.

Example commands:

```bash
git checkout -b feature/course-registration
git add .
git commit -m "Implement course registration module"
git push -u origin feature/course-registration
```

## Project Objectives

- Apply software engineering principles to a university management system.
- Implement and validate academic registration logic.
- Practice unit testing and browser-based testing.
- Understand automated testing and Continuous Integration.
- Apply Git-based version control and collaborative development practices.

## Academic Information

| Field | Details |
|---|---|
| Project | Smart University Academic Management System (SUAMS) |
| Course Code | CSE 3205 |
| Course Title | Software Engineering |
| University | Rajshahi University of Engineering & Technology (RUET) |
| Repository | [GitHub – SUAMS CSE 3205](https://github.com/redwanizazz/suams-cse-3205) |

## Author

**A.N.M. Sharzil Izaz Mahmud**  
Department of Computer Science and Engineering  
Rajshahi University of Engineering & Technology (RUET)

---

*This repository is an academic software engineering project developed for CSE 3205.*
