#include<iostream>
#include<time.h>
using namespace std;

void viev(const int* arr, int n)
{
    cout << endl << "array" << endl;
    for ( int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl << endl;
}
void  createVect (int*& arr, int n)
{
    for(int i = 0; i < n; i++)
         arr[i] = rand()%20-10;
}
void Sel_Num (int*&arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        if (arr[i]%2 == 0)
            arr[i] = 0;
    }
    viev(arr, n);
}
int main()
{
    int n;
    int *arrA, *arrB, *arrC;
    cout << " zadayte kilkst elementiv - ";
    cin >> n;
    arrA = new int[n];
    createVect(arrA, n);
    viev(arrA,n);
    cout << endl << endl;
    Sel_Num(arrA,n);
    cout << "zadayte kilkist elementiv - ";
    cin >> n;
    arrB = new int[n];
    createVect(arrB, n);
    viev(arrB, n);
    cout << endl << endl;
    Sel_Num(arrB, n);
    cout << "zadayte kilkist elementiv - ";
    cin >> n;
    createVect(arrC, n);
    viev(arrC, n);
    cout << endl << endl;
    Sel_Num(arrC, n);
    delete []arrA;
    delete []arrB;
    delete []arrC;
    return 0;
}
