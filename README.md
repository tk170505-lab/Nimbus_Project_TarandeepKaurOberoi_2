# Nimbus_Project_TarandeepKaurOberoi_2

Nimbus Project – Banking Account Management System 

Overview

It is a console-based "Banking Account Management System" written in the C programming language.
It allows users to create bank accounts, deposit and withdraw money, view account information, and store account data persistently using file handling.

This project demonstrates core C concepts including:
1. Structures
2. File I/O operations
3. Modular programming
4. Functions & headers
5. User-driven menu-based interface

 Repository Structure

Nimbus_Project_TarandeepKaurOberoi_2/
│
├── main.c           ( Entry point; handles main menu and user flow)
├── bankacc.c        ( Contains banking functions (create, deposit, withdraw, display))
├── bankacc.h        (Header file with structure and function declarations)
├── project.c        (Additional helper logic / utility functions)
├── file1.c          ( File handling operations or extra features)
├── program.exe      ( Compiled executable (Windows))
└── README.md        (Project documentation)


 Features

1. Create New Account
  User can open a new bank account by entering name, initial deposit etc.

2. Deposit Money
  Adds amount to the selected account using account number.

3. Withdraw Money
  Deducts amount from an account (with balance validation).

4. Check Account Details / Balance
  Displays stored details of a specific account.

5.File-Based Data Storage
  Account information is stored using file handling so it remains available even after program exit.

6. Modular, Maintainable Code
  Code is separated across `.c` and `.h` files for better readability and modularity.


 Internal Structure & Logic

 1. Account Structure (in `bankacc.h`)

Defines the basic structure used for creating and managing accounts.

2.File Handling

* Stores accounts in a data file
* Reads/writes using `fread`, `fwrite`, `fprintf`, `fscanf` depending on implementation
* Enables persistence across program restarts

3. Modular Code

* `main.c` conducts UI + main loop
* `bankacc.c` handles account logic
* `file1.c` or `project.c` manages helper functions

This design makes the project readable and easier to maintain or extend.


