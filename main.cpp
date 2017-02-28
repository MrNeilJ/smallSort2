/* Write a void function named smallSort2 that takes as parameters the addresses of three int variables and sorts
 * the ints at those addresses into ascending order.  For example if the main method has:
 *
 *  int a = 14;
 *  int b = -90;
 *  int c = 2;
 *  smallSort2(&a, &b, &c);
 *  cout << a << ", " << b << ", " << c << endl;
 *
 *  Then the output should be
 *
 *  -90, 2, 14
*/

// INCLUDED HEADERS
#include <iostream>

using namespace std;

// PROTOTYPES
void smallSort2(int &a, int &b, int &c);

int main()
{
    int a =  14;
    int b = -90;
    int c =  2;

    smallSort2(&a, &b, &c);
    cout << a << ", " << b << ", " << c << endl;
}

void smallSort2(int &a, int &b, int &c)  // Must call by reference rather than by value
{
    // Holding container for moving values
    int temp;

    // Check to see if A > B, if so flip the values so the smallest is furthest left
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    // Then compare if the updated A value is greater than C, if so switch values so smallest is left
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    // Compare the remaining two values to see which is larger, flip acording so smallest number is left
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }
}