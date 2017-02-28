/**************************************************************
 * Author: Neil Johnson
 *
 * Date: 2.27.2017
 *
 * Description: This file hosts a function known as smallSort2.
 * The goal of this program is to allow the user to provide
 * the function with 3 memory addresses and it will then
 * modify the contents stored at those addresses so that they
 * will appear in ascending order (smallest to largest).
**************************************************************/

// INCLUDED HEADERS
#include <iostream>

using namespace std;

// PROTOTYPES
void smallSort2(int *ptrA, int*ptrB, int *ptrC);

/*
int main()
{
    int a =  14;
    int b = -90;
    int c =  2;

    smallSort2(&a,&b, &c);
    cout << a << ", " << b << ", " << c << endl;
}
*/


/**************************************************************
 *                      smallSort2
 *  Description: This function takes in 3 memory addresses
 *  (&a, &b, &c) and modifies them so that the values
 *  stored in these memory addresses appear in ascending
 *  order (smallest to largest).
 **************************************************************/
void smallSort2(int *ptrA, int *ptrB, int *ptrC)  // Must call by reference rather than by value
{
    // Holding container for moving values
    int temp;

    // Check to see if A > B, if so flip the values so the smallest is furthest left
    if (*ptrA > *ptrB)
    {
        temp = *ptrA;
        *ptrA = *ptrB;
        *ptrB = temp;
    }
    // Then compare if the updated A value is greater than C, if so switch values so smallest is left
    if (*ptrA > *ptrC)
    {
        temp = *ptrA;
        *ptrA = *ptrC;
        *ptrC = temp;
    }
    // Compare the remaining two values to see which is larger, flip according so smallest number is left
    if (*ptrB > *ptrC)
    {
        temp = *ptrB;
        *ptrB = *ptrC;
        *ptrC = temp;
    }
}