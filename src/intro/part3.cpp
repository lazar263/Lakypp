#include <iostream>
/*
 * As you have seen, we 've written a lot of sentences that do not look like code,
 * but the code still works normally? Why? - We have used comments, which do not affect compilation,
 * and they aren't written inside the executable. Basically, they are ignored by compiler.
 * 
 * There are two types of comments, inline or the one that selects only a block of a comment
 * Watch the examples below:
 */

// INLINE COMMENT - ANY CODE WRITTEN ON THIS LINE WILL BE MARKED AS COMMENT (IGNORED BY COMPILER)
/* this is a second type of comment, functions and expressions on this line, before or after will be executed */

/*
    This is also a comment.
*/

/**
 *  Note how we used two asterisks to declare a comment, why? 
 *  - We oftenly want to documentate our code in our projects, so we use double asterisk to apostrophize docs. 
 */

/*
 * Notice how in mathematics we have integers, numbers recognized by nature.
 * Nature doesn't know for 1.41 (square root of 2), Ludolph's number (Pi=3.14), etc.
 * For these numbers, such as (1.41, 3.14, etc) we use keyword - float.
 * Keyword float represents a floating number.
 * There is also a datatype named - double, which is very similar to float.
 * We won't mention memory heap size and allocation now, but keep in mind they are slightly different than float. 
 * Let's get back to integers.
 * int is abbreviation for Integer in programming, in 99% of situations.
 * Almost every programming language uses int as a keyword for a integer - PHP, Java, Javascript, C++, Golang, ...
 * 
 * In code down below, we have a function named main, with a return value of 0 which is an integer.
 * Notice how we told compiler that the return value is integer by adding 'int' keyword next to main().
 * We will mention different types of functions' return values, but int is now very important for you to
 * understand the concept of programming, syntax and all the following instructions to compiler.
 * 
 * You may notice there is nothing inside braces next to main -> main().
 * What do braces mean? - They simply mean that the code you entered is a function.
 * Functions may and may not take one or many arguments (parameters), or they can be without arguments.
 * In this case, it is obvious that there are no arguments in this function.
 *
 * What is an argument?
 * - Argument is simply a variable passed to function for further usage and processing inside the function.
 * What is a parameter?
 * - Parameter, or a param is almost the same as an argument, but we use the term parameter when defining the 
 * function for the first time, the 'blueprint' of what the function does, while the term argument is being used
 * in usage in different block of code, or simply: while implementing and calling the function instead of defining it. 
 * 
*/
int main() {
    std::cout<<"Hello World!";
    return 0;
}

/**
 * What do curly brackets mean {} ?
 * They simply mean that we are declaring new block of code which will be executed.
 * Block of code can be preceded by control flow keywords and expressions 
 * such as( if, else, else if, for, while, do while) or by exception-handling blocks (try, catch).
*/