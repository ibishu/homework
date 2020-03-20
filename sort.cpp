#include<iostream>
#include<ctime>
#include<stdio.h>
void sort(int* arr); //фуникция сортировки(прототип)
void vivod(int* arr);// прототип функции вывода
int M,N;// global value
int main()
{
    std::cout << "vvedite rozmer masiva   ";
    std::cin >> M;
   srand(time(NULL));
    int* arr = new int [M];
    for(int i = 0; i < M; i++)
        {
            arr[i] = rand()%100;           
        }
    
    vivod(arr);// вывожу начальный масив
    std::cout << std::endl << std::endl;// розделяю чтобы не сливалось
    sort(arr);// сортирую
    vivod(arr);// вывожу конечный масив
}
void vivod(int* arr)
{
    for(int i = 0; i < M; i++)
    {
       std::cout << arr[i] << "   ";
       
    }
}
void sort(int* arr)
{
    int val;
    for(int i = M - 1; i >= 0; i-- )// количестово итераций для полной сортировки
    for(int num = 0; num <= i; num++ )// количество итераций для сортировки одного елемента
    {
        if((arr[num] < arr[num +1] ) &&((num + 1) != M) ) 
        {
            val = arr[num];
            arr[num] = arr[num + 1];
            arr[num + 1] = val;
        }
    } 
}
