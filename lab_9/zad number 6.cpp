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
void MaxElem(const int* arr, int n)
{
    int max = arr[0];
    for(int i = 1; i < n; i++)
        if (max < arr[i])
            max = arr[i];
    cout << endl << endl << "max element - " << max << endl;
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
    MaxElem(arrA,n);
    cout << "zadayte kilkist elementiv - ";
    cin >> n;
    arrB = new int[n];
    createVect(arrB, n);
    viev(arrB, n);
    MaxElem(arrB, n);
    cout << "zadayte kilkist elementiv - ";
    cin >> n;
    createVect(arrC, n);
    viev(arrC, n);
    MaxElem(arrC, n);
    delete []arrA;
    delete []arrB;
    delete []arrC;
    return 0;
}
