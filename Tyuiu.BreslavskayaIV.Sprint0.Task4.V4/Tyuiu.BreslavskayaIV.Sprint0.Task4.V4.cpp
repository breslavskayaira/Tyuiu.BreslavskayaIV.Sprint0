﻿// Tyuiu.BreslavskayaIV.Sprint0.Task4.V4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.BreslavskayaIV.Sprint0.Task4.V4.Lib/Tyuiu.BreslavskayaIV.Sprint0.Task4.V4.Lib.cpp"
using namespace std;
int main()
{
    Isprint0Task4* date = new Isprint0Task4();
    cout << "2*3+7*4";
    cout << " Result =" << date->Culc(2, 3, 4, 7);
    cout << endl;
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
