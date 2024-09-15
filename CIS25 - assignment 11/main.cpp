//
//  CIS25 - assignment 11
//
//  Created by maya nachiappan on 9/15/24.
//
// program that ask the user to enter two values, store the larger value in a separate variable, and then prints it

#include <iostream>
using namespace std;
int main()
{
    int value1, value2, largeValue;
    cout << "enter a value: " << endl;
    cin >> value1;
    cout << "enter the second value: " << endl;
    cin >> value2;
    if(value1>value2)
    {
        largeValue=value1;
    }
    else
    {
        largeValue=value2;
    }
    cout << "The larger value is: "<< largeValue << endl;
    return 0;
}


