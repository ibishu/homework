#include<iostream>
#include<ctime>
#include<stdio.h>
void vivod(float** arr, int n, int m);// создаю прототип функии для вывода. N и M размерность масива
int main()
{
        srand(time(NULL));
        int M,N;
        float sum = 0;
        std::cout << "vvedite rozmer dvohmernogo masiva";
        std::cin >> N;
        std::cin >> M;
        float** arr = new float* [N];
        for(int i = 0; i < N; i++) // создаю двохмерный дин. масив
            arr[i] = new float [M];
        for(int i = 0, n = N - 1; i <= n; n--, i++) // в этом циктле присваеваю ранд. значение
            for(int j = 0; j < M; j++)
            {
                arr[i][j] = (float(rand()%20)/10) - 1;
                arr[n][j] = (float(rand()%20)/10) - 1;
                sum = sum + arr[i][j] + arr[n][j];
            }
        sum = (sum)/float(N*M);
        vivod(arr,N , M);// вывожу первоначальный масив
        std::cout << "seredne znachennya  =  " << sum << std::endl << std::endl;
        for(int i = 0, n = N - 1; i <= n; i++, n--)
            for(int j = 0; j < M; j++)
            {
                if(arr[i][j] < (-0.5))
                    arr[i][j] = sum;
                if(arr[n][j] < (-0.5))
                    arr[n][j] = sum;
            }
        vivod(arr, N, M);// вывожу конечный масив
        return 0;
}
void vivod(float** arr, int n, int m)// функция которая выводит масив
    
{
    for(int i = 0; i < n;  i++)
    {
        for(int j = 0; j < m; j++)
        {
            std::cout << arr[i][j] << "  ";
        }
        std::cout << std::endl;
    }
}
