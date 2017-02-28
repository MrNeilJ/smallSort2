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
void smallSort2(&a, &b, &c);

int main()
{
    int a =  14;
    int b = -90;
    int c =  2;

    smallSort2(&a, &b, &c);
    cout << a << ", " << b << ", " << c << endl;
}

void smallSort2(&a, &b, &c)
{

}