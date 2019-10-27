#include <iostream>
#include <string>

/*
 * NOTE: You may want to see part 1 of operators lesson first.
 *
 * Now, after you 've learned how to declare a new string, it is time to expand your knowledge.
 * You also need to remember from the first part, that when assigning a value to char, we use single quotes.
 * But if you want to assign new sequence of characters and symbols to a string you need to use double quotes.
 * 
 */

using namespace std;
int main() {

    char letter = 'A'; // the single quotes
    string car = "Volkswagen"; // notice double quotes

    // Remember: Once assigning values to a variable, we always use =
    // unless we use assignment operator.

    // Now it is time for us to use assignment operator.
    cout<<car<<endl; // Outputs 'Volkswagen' and ends the line

    car += "Golf"; // Concatenates 'Golf' to 'Volkswagen'
    cout<< car<<endl; // Result: 'VolkswagenGolf'

    // Notice how there is no space between these two words, so we need to add the space manually: " "
    // Now we will reassign the value of 'Volkswagen' to variable car again.

    // First, we need to clear the string.
    car.clear();
    car = "Volkswagen";

    // And now, we will add space and 'Golf'.
    car += " Golf"; // 99% of programming language expect you to add a space between two values while performing mathematical operations for better readability
    cout<<car; // Expected output has been printed out.
    return 0;
}