
# ATM_LCD

A Qt / C++ desktop application simulating an ATM interface using an LCD-style GUI.

## Author

George Read  
LinkedIn: https://www.linkedin.com/in/george-yaccoup/

---

## Table of Contents

- [Overview](#overview)  
- [Features](#features)  
- [Project Structure](#project-structure)  
- [Prerequisites](#prerequisites)  
- [Build & Run](#build--run)  
- [Usage](#usage)  
- [Contributing](#contributing)  
- [License](#license)  

---

## Overview

This project implements an ATM simulation with a graphical interface (LCD-style) using Qt framework and C++.  
It supports standard ATM operations like withdrawing, depositing, checking balance, changing password, etc.

---

## Features

- User authentication / login  
- Display of account statement  
- Deposit money  
- Withdraw money  
- Money transfer  
- Change password  
- Basic animated transitions / GUI pages  

---

## Project Structure

```

ATM_LCD/
├── main.cpp
├── intro_page.*
├── dialog.*
├── accountstatment.*
├── antheramount.*
├── changepassowrd.*
├── dipoet.*
├── moneytransfer.*
├── withdraw.*
├── thankyou.*
├── resourses.qrc
├── ATM.pro
└── ATM.pro.user



- `.cpp` / `.h` — C++ source and headers  
- `.ui` — Qt Designer UI form files  
- `resourses.qrc` — Qt resource file  
- `ATM.pro` — Qt project file  

---

## Prerequisites

- Qt (Qt5 or Qt6) installed  
- Qt Creator or any build tool supporting qmake  
- C++ compiler (e.g. GCC / MSVC / Clang)  
- Basic knowledge of Qt Widgets and signal/slot mechanism  

---

## Build & Run

1. Clone the repository:

   ```bash
   git clone https://github.com/georgeyaccoup/ATM_LCD.git
   cd ATM_LCD
````

2. Open `ATM.pro` using Qt Creator, or run via command line:

   ```bash
   qmake ATM.pro
   make     # or mingw32-make, or `nmake` on Windows, depending on your setup
   ```

3. Launch the compiled executable.

---

## Usage

* On startup, the user is asked to log in (or insert their “card”).
* After authentication, the user can navigate through different operations:

  * View account statement
  * Deposit money
  * Withdraw money
  * Transfer funds
  * Change password
  * Exit / log out
* The GUI mimics an ATM screen flow with pages and transitions.


```
::contentReference[oaicite:0]{index=0}
```
