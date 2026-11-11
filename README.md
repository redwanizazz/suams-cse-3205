# SUAMS – Smart University Academic Management System

A university academic management system project developed for **CSE 3205 – Software Engineering** at Rajshahi University of Engineering & Technology (RUET). This repository demonstrates implementation, software testing, browser automation, continuous integration, and configuration management.

## Project Overview

The Smart University Academic Management System (SUAMS) is intended to support academic activities within a university. This coursework repository demonstrates selected components through C++ modules, automated tests, a simple web interface, and a GitHub-based workflow.

## Repository Structure

```text
suams-cse-3205/
├── .github/
│   └── workflows/
│       └── cpp-tests.yml
├── suams-testing/
│   ├── blackbox_marks_test.cpp
│   ├── continuous_assessment.cpp
│   ├── continuous_assessment.h
│   ├── course_registration.cpp
│   ├── course_registration.h
│   ├── course_registration_test.cpp
│   ├── integration_result_test.cpp
│   ├── integration_student_course_test.cpp
│   ├── marks_validation.cpp
│   ├── marks_validation.h
│   ├── result_processing.cpp
│   ├── result_processing.h
│   ├── result_processing_test.cpp
│   ├── role_based_access.cpp
│   ├── role_based_access.h
│   ├── student_information.cpp
│   ├── student_information.h
│   ├── system_course_registration_test.cpp
│   ├── system_result_processing_test.cpp
│   └── system_role_access_test.cpp
├── suams-web/
│   ├── course_registration.html
│   └── selenium_test.py
├── .gitignore
└── README.md
```

Generated executable files are intentionally excluded from version control. Compile the tests locally or use the GitHub Actions workflow to run them.

## Implemented Components

### 1. Course Registration

**Location:** `suams-testing/`

The C++ module validates student registration based on:
- Student account activity.
- Prerequisite completion.
- Available course seats.
- The maximum credit limit of 21 credits.

### 2. Examination Result Processing

The result-processing components demonstrate continuous-assessment mark aggregation, GPA calculation using course credits, marks validation, and role-based access control for academic actions.

### 3. Automated Testing – GoogleTest

Eight GoogleTest executables cover the following test suites:

| Test suite | Coverage |
|---|---|
| `course_registration_test.cpp` | Registration decisions and credit-limit boundary values |
| `result_processing_test.cpp` | GPA calculation, zero credits, and unequal credits |
| `blackbox_marks_test.cpp` | Equivalence partitions for valid and invalid marks |
| `integration_student_course_test.cpp` | Student Information and Course Registration integration |
| `integration_result_test.cpp` | Continuous Assessment and final-exam mark aggregation |
| `system_course_registration_test.cpp` | End-to-end course registration scenarios |
| `system_result_processing_test.cpp` | End-to-end result-processing scenarios |
| `system_role_access_test.cpp` | Role permissions and rejected access |

### 4. Web Interface and Selenium

**Location:** `suams-web/`

The HTML registration page provides a basic workflow for entering a student name, selecting a course, submitting a registration, and viewing the result. The Selenium script automates the browser workflow, checks the displayed result, and saves a screenshot.

## Technologies Used

| Technology | Purpose |
|---|---|
| C++17 | Academic module implementation |
| GoogleTest | Unit, integration, and system test execution |
| HTML and JavaScript | Demonstration registration interface |
| Python and Selenium | Browser test automation |
| Git and GitHub | Version control and collaboration |
| GitHub Actions | Automated build and test pipeline |

## Getting Started

### Prerequisites

- GCC/G++ with C++17 support
- GoogleTest
- Python 3
- Google Chrome
- Selenium
- Git

### 1. Clone the repository

```bash
git clone https://github.com/redwanizazz/suams-cse-3205.git
cd suams-cse-3205
```

### 2. Compile and run a GoogleTest suite

For example, to run Course Registration tests:

```bash
g++ -std=c++17 suams-testing/course_registration.cpp suams-testing/course_registration_test.cpp -lgtest -pthread -o course_registration_tests
```

Run on Windows PowerShell:

```powershell
.\course_registration_tests.exe
```

Run on Linux:

```bash
./course_registration_tests
```

The other test suites can be compiled with their corresponding module source files. The GitHub Actions workflow compiles and runs all eight suites automatically.

### 3. Run Selenium automation

Install Selenium:

```bash
pip install selenium
```

Then run:

```bash
cd suams-web
python selenium_test.py
```

Google Chrome must be installed. Selenium Manager can manage the compatible ChromeDriver in supported environments.

## Continuous Integration – GitHub Actions

**Workflow:** `.github/workflows/cpp-tests.yml`

The workflow runs on pushes to `main` and `feature/course-registration`, and on pull requests targeting `main`. It checks out the repository, installs the compiler and GoogleTest, then compiles and executes all eight C++ test suites. A failed compilation or test causes the workflow to fail.

Selenium is run separately and is not part of this C++ GitHub Actions workflow.

## Version Control Workflow

The project uses a feature-branch workflow:

1. Keep stable code in `main`.
2. Create a feature branch for each change.
3. Commit and push changes with meaningful messages.
4. Open a Pull Request for review.
5. Merge approved changes into `main`.
6. Use release tags to identify stable versions.

Example:

```bash
git checkout -b feature/course-registration
git add .
git commit -m "Implement course registration module"
git push -u origin feature/course-registration
```

## Project Objectives

- Apply software engineering principles to a university management system.
- Implement and validate academic registration and result-processing logic.
- Practice unit, integration, system, and black-box testing.
- Apply browser automation and continuous integration.
- Use Git and GitHub for configuration management.

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
2203160
Department of Computer Science and Engineering  
Rajshahi University of Engineering & Technology (RUET)

---
