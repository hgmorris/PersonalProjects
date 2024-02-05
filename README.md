Scripture Manager

This program is a simple C++ program that allows users to input and store their favorite scriptures, sort them, and search for a specific scripture. This  program consists of three files: main.cpp, scripture.hpp, and scripture.cpp.

Here's a brief overview of each file:

main.cpp:

Handles the main program logic, including user input, scripture storage, sorting, and searching.
Uses the Scripture class defined in scripture.hpp.


//scripture.hpp:

Defines the Scripture class with private members reference and thoughts.
Provides a constructor to initialize the Scripture object with a reference and thoughts.
Includes getter methods to retrieve the reference and thoughts.
Overloads the < operator to enable sorting of Scripture objects.


scripture.cpp:

Implements the methods declared in scripture.hpp.

It initializes the Scripture object with the provided reference and thoughts, and defines the getter methods to access the reference and thoughts,and 
implements the < operator for sorting.
