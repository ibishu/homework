#include<iostream>
#include<time.h>
using namespace std;

void viev(const int* arr, int n)
{
    cout << "array" << endl;
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
int main()
{
    int n;
    int *arrA, *arrB;
    cout << " zadayte kilkst elementiv - ";
    cin >> n;
    arrA = new int[n];
    createVect(arrA, n);
    viev(arrA,n);
    cout << "zadayte kilkist elementiv - ";
    cin >> n;
    arrB = new int[n];
    createVect(arrB, n);
    viev(arrB, n);
    delete []arrA;
    delete []arrB;
    return 0;
}
