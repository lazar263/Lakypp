#include <iostream> // Input-output library
#include <string> // We've mentioned before that we need to use the string library to enable strings.
#include <cmath> // We 've also mentioned we want to make square roots a breeze.

using namespace std; // We don't need to use static accessor :: by declaring namespace standard.

int main() {

    string helloWorld = "Hello World!";
    cout<<helloWorld; // outputs 'Hello World!', name of variable helloWorld can be absolutely anything if it doesn't break syntax rules of C++.

    cout<<endl; // We are outputting line break, so the next output doesn't get concatenated with previous output message.
    // endl can be also used concatenated inside other cout, for example: cout<<helloWorld<<endl;
    // endl is equal to "\n", so both are valid solutions to be used.

    float squareRootOfTwo = sqrt(2); // sqrt roughly means Square Root, it takes 2 as an argument, which we've spoke about recently.
    cout<<squareRootOfTwo; // output new variable.
    return 0;
}