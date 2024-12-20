# Student Management System

## Description

This is a C program that allows users to manage and analyze student data for a classroom.

### The program provides functionalities to:
1.Enter student details.

2.Calculate the class average for a specific division.

2.Display the report card of a student based on their Student ID.

## Features

1. Enter Student Details
   
  Input the name, student ID, division, and marks for multiple students.
  
  The data is stored dynamically using a structure and dynamic memory allocation.

3. Calculate Class Average

  Calculate the average marks for students belonging to a specified division.
  
  Displays the computed class average for that division.

3. Display Report Card

  Retrieve and display the details of a student by entering their Student ID.
  
  Includes name, ID, division, and marks.

## Notes

### Key Points:

Ensure the input data is entered correctly as per prompts.

Division names are case-sensitive (e.g., A and a are considered different).

The program does not handle errors like division by zero if no students are in a division.

### Dependencies

Requires the stdio.h, string.h, and stdlib.h libraries.

### Limitations

Known Issues:

The program does not save data permanently. Once terminated, all data is lost.

No input validation for edge cases (e.g., invalid IDs or marks).
