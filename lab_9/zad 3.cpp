#include <iostream>
#include <time.h>
const int myDay = 9;
const int myMounth = 10;
const int myYear = 1999;
using namespace std;
bool proverka(int day, int mounth,  int year)
{
    bool R = false;
    if(day == myDay && mounth == myMounth && year == myYear)
        R = true;
    return R;
}
void viev (int day, int mounth, int year)
{
    cout << " random date :\t" << day << "\t" << mounth << "\t" << year << endl;
    cout << " my date     :\t" << myDay << "\t" << myMounth << "\t" << myYear << endl;
}
void RandDatee(int*&day, int*&mounth, int*&year)
{
    *day  = (rand()%30) + 1;
    *mounth = (rand()%12) + 1;
    *year = (rand()%5) + 1999;
}
int main()
{
    srand(time(NULL));
    int count = 0;
    int day = ((rand()%30) + 1);
    int mounth = ((rand()%12)+1);
    int year = ((rand()%5) + 1999);
    int *pDay= &day;
    int *pMounth = &mounth;
    int *pYear = &year;
    cout << "test your luck" << endl << "press enter to begin" << endl;
    cin.get();
    while (!proverka(day, mounth, year))
    {
        viev( day, mounth, year);
        cout << "try again, pls" << endl << "press enter to continue" << endl;
        cin.get();
        RandDatee(pDay, pMounth, pYear);
        count++;
        if(count > 30)
        {
            cout << "sorry, you are unluky, but you can try again" << endl;
            delete pDay;
            delete pMounth;
            delete pYear;
        }
    }
    viev(day, mounth, year);
    cout << "you are lucky!!" << endl;
    delete pDay;
    delete pMounth;
    delete pYear;
    return 0;
}
