# Complaint Management System

## Introduction
This Complaint Management System is a robust application built in C++ that allows users to manage customer complaints effectively. It provides separate functionalities for customers and administrators, allowing complaints to be added, viewed, printed, and managed through a user-friendly console interface.

## Features
- **Customer Interface**: Customers can add complaints with details such as complaint number, name, date, and description.
- **Administrator Login**: Secure login for administrators to manage complaints, including options to create, view, and print detailed complaints.
- **Dynamic Data Management**: Utilizes a linked list structure to store and navigate through complaint records.
- **File Output**: Complaints can be printed to a file, providing a permanent record of customer interactions and administrative actions.

## System Requirements
- C++ Compiler (GCC Recommended)
- Standard C++ Libraries
- Filesystem access for reading/writing complaint records

## Installation
1. Clone the repository or download the source code:
    ```bash
    git clone https://github.com/your-username/complaint-management-system.git
    ```
2. Navigate to the project directory:
    ```bash
    cd complaint-management-system
    ```
3. Compile the source code using a C++ compiler:
    ```bash
    g++ -o ComplaintSystem main.cpp
    ```
4. Run the compiled application:
    ```bash
    ./ComplaintSystem
    ```

## Usage
Upon launching the application, the user is greeted with a menu offering different options:
- **1. Customer**: Allows customers to enter and submit complaints.
- **2. Administrator**: Provides login functionality for system administration.
- **3. EXIT**: Exits the application.

### For Customers
1. Select the Customer option from the main menu.
2. Follow the prompts to enter complaint details and submit your complaint.

### For Administrators
1. Select the Administrator option from the main menu.
2. Login with the correct credentials (e.g., username: `furqan_56`, password: `221427`).
3. After login, choose from creating, viewing, or printing complaints.

## Contributing
Contributions to the project are welcome! Please fork the repository and submit a pull request with your enhancements.

## License
This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.
