[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=20995548)
# CMP9133 - Workshop 2


#### <div align="center">    University of Lincoln</br> School of Computer Science </br> CMP9133 – Advanced Programming</br> </div>


## Task1
Modify the `factorial.hpp` file for computing the factorial of a given number.
This task will introduce you to basic control structures (loops) and basic mathematical operations in C++.

Hint: the factorial for negative numbers is not defined, so you will need to raise an ìnvalid_argument`exception in that case. Go look online how to do that 😉

```text
Test Case:

Input: 5
Output: 120

Mathematically, the factorial of a number n is n!, which is given by either

    1. n! = 1 x 2 x 3 x … x (n-2) x (n-1) x n
    2. n! = n x (n-1)!
```

## Task2

Modify the file `bank_account.hpp` that defines a simple bank account class. The class should have the following properties and methods:
    
1. Properties:
    - Account Number
    - Account Holder Name
    - Balance 
2. Methods:
    - Constructor: Initialize the account with an account number, account holder name, and initial balance.
    - Deposit: Accept an amount and add it to the balance.
    - Withdraw: Accept an amount and deduct it from the balance. Make sure the withdrawal doesn't exceed the available balance.
    - Display Account Information: Display the account number, account holder name, and balance. 

The program will prompt the user to enter the bank account number, account name, and initial balance, and then create an instance of the BankAccount class using the provided input. It will then demonstrate the usage of the class by performing deposits and withdrawals and displaying account information.


```
Test Case:
Input: > bank_account.exe 
Output:
```
![image](https://github.com/user-attachments/assets/27a0630a-bd90-403c-b656-7a2adb872b4d)

