# Unit-Currency_converter in C language
# Mini Project

Title: Unit & Currency Converter Mini Project


Description:

The Unit & Currency Converter is a simple yet powerful C language mini project designed to assist users in converting various units and currencies conveniently. This project aims to provide a user-friendly interface for quick and accurate conversions, making it a valuable tool for everyday tasks.



Features:

1) Unit Conversion:
Length: Convert between meters, kilometers, inches, feet, and miles.
Weight: Convert between grams, kilograms, ounces, pounds, and tons.
Temperature: Convert between Celsius and Fahrenheit.


2) Currency Conversion:
Real-time currency exchange rates using an API.
Support for multiple currencies, including USD, EUR, GBP, JPY, and more.
Accurate and up-to-date conversion rates for precise results.


3) User-Friendly Interface:
Simple menu-driven system for easy navigation.
Clear instructions and prompts for user input.
Visual feedback for successful conversions.


4) Error Handling:
Robust error handling to manage unexpected inputs and scenarios.
Informative error messages for users to understand and correct their input.
Implementation:




This C program is a console-based Unit Converter that covers conversions for Length, Temperature, Time, Mass, and Currency. It includes functionalities to perform conversions and save the results to a history file for each category. The program uses structures to store different units and their values.

Here's a brief overview of the key components:

Structures for Units:-
struct temp: Holds temperature unit values (Kelvin, Celsius, Fahrenheit).
struct len: Holds length unit values (centimeters, meters, kilometers, miles).
struct time: Holds time unit values (hours, seconds, minutes).
struct mass: Holds mass unit values (grams, kilograms, milligrams).
struct currency: Holds currency unit values (rupees, dollars, pounds).

Functions:-
length(), temperature(), time(), mass(), currency(): Functions to handle unit conversions for each category.
display(), display2(), display3(), display4(), display5(): Functions to display the history of previous calculations for each category.

File Handling:-
Uses file pointers (FILE *fp) to save and read conversion history to/from files (student3.txt, student2.txt, tim.txt, mas.txt, curr.txt).

Menu-Driven Interface:-
The main() function provides a menu-driven interface for the user to choose the category of conversion.
The user can perform conversions or check the history of previous conversions.

Error Handling:-
Checks for invalid credentials (negative values) during input.
Currency Conversion:

The program includes a currency conversion section, converting between rupees, dollars, and pounds.
Continuous Execution:

The program runs in an infinite loop, allowing the user to perform multiple conversions without restarting
