// Tyuiu.BreslavskayaIV.Sprint0.Task5.V4.cpp : Defines the functions for the static library.
//

#include <iostream>
#include "../Tyuiu.BreslavskayaIV.Sprint0.Task5.V4.Lib/Tyuiu.BreslavskayaIV.Sprint0.Task5.V4.Lib.cpp"
using namespace std;
int main()
{
    Isprint0Task5* date = new Isprint0Task5();
    cout << "Стоимость бензина";
    cout << " Result =" << date->Culc(67, 8.5, 6.5);
    cout << endl;
}
