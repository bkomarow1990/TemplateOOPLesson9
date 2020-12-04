// OOPLesson9Template.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Func.h"
#include <string>
using namespace std;
int main()
{
    const int SIZE = 5;
    int array[SIZE]{10,23,-45,1111,4.2};
    cout << "Max in Array: "<<maxInArray(array,SIZE)<<endl;
    string fruits[SIZE] = { "apple","orange","banana","watermelon","lemon" };
    cout << "Max in Array: " << maxInArray(fruits, SIZE) << endl;
    int i = 102;
    double d = 100.5;
    cout << "Max: " << max(i, d) << endl;
    char symbols[SIZE] = {'a','C','Z','m','y'};
    cout << "Max in symbol array: " << maxInArray<char>(symbols, SIZE)<<endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
