/**
 * First of all, I'd like to introduce C++, a fenomenal statically-typed, object-oriented programming language
 * which is still used a lot in the industry for all kinds of projects, applications, services, etc.
 * 
 *
 * We will start our journey with a simple input-output piece of code.
 * In our first program, we will output a little message to the user, 'Hello World!', respectively.
 *
 */

#include <iostream> // Our program needs to consume 'external' libraries to make it simple for us to output text.

int main() { // main() function is always the main function of a program. More on functions later...
    std::cout<<"Hello World!"; // We are using cout to output any data from the program. Each statement is closed with ;
    return 0; // Each function has a return value, in this case it is zero which is integer (take a look at line 13)
} 
// You may have noticed curly braces which are: { } 
// We use them to declare new blocks of code which will be executed as a part of a function.