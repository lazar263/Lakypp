/**
 * Now, it is time for you to learn different datatypes.
 * What are datatypes?
 * First of all, we should mention variables, as one of the most important components inside a program.
 * Variable is a modifiable value which consists of a name and a value.
 * There are several rules, as a part of a C++ syntax of naming the variable.
 * There are also different conventions of naming variables, so the code can be easily read by others.
 */


// Let's write all types of datatypes and explain them very carefully.
#include <iostream>
int main() {

    int number = 1; // As you can see, we have an integer, with a value of 1. To assign value to variable, use =
    std::cout<<number; // Outputs '1'.

    float pi = 3.14; // We've declared a floating value with value of 3.14
    bool iLoveCoding = true; // Bool(ean) variables take only true or false values.
    char letterA = 'A'; // char variables only take one character as a value. We use single quotes for char ''.
    double squareRootOfTwo = 1.41; // Double datatype, as mentioned, very similar to float.
    // We will use strings in next part, since we need to include another library to add strings to our program.
    // We will also use another cool library for mathematical functions and operations to make square roots a breeze.

    return 0;
}

// To avoid using static access to std namespace, before implementation of functions, declare: using namespace std; in global scope