/**
 * Just like in mathematics, each programming language consumes operators to perform mathematical operations
 * on different types of data cached allocated inside a executable (program).
 */

#include <iostream>
#include <cmath> // note: You don't need cmath for mathematical operations, unless you use functions from cmath lib.
using namespace std;

int main() {

    int a = 5, b = 3; // Notice how we can declare multiple variables with same datatype by separating them with comma.
    cout<< a + b <<endl; // Outputs sum of a and b ( 5+3=8 )

    // Very nice!

    // Now that we have a and b as variables with values of 5 and 3, we can modify them.
    // If we want to increment value of a variable, we use += assignment operator.

    // Now let's increment variable a by 5.
    a += 5;
    cout<<a<<endl; // Outputs 10 since (5+5=10)

    // Let's say we want to increment b by 1.
    // We can do it by using ++ operator.

    b++;
    cout<<b<<endl; // Outputs 4.

    // You could 've used b += 1 to increment b by one, but double-plus operator is prefered in the industry.
    // You could 've also incremented the value of any variable by using current value as base sum number:
    // a = a+5; or b = b+1; - notice how we call b to refer to it's value then change it by adding new value to sum expresion.

    // Now we want to decrement the variable value by one. We will use the double minus operator.
    b--;
    cout<<b<<endl; // Outputs 3.

    // You could 've used -= assignment operator, but since we are decreasing it by one, we don't need to.
    b -= 1;

    // Okay, you get the point.
    // Now you 'll see some real examples down below using math functions.

    // We will try to get distance between two points inside a Cartesian coordinate system.
    // Let's assign position of point 1 using x,y.
    int x1 = 3, y1 = 4; // placed inside first quadrant
    int x2 = -2, y2 = 1; // placed inside second quadrant

    // Watch the expression, we need to use cmath's functions here now:

    float result = sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2) ); // pow is basically power function with arguments of base and exponent
    cout<<"The distance between X and Y is: "<< result << endl; // Output: The distance between X and Y is: 5.83095

    return 0;
}