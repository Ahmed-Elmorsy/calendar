#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{                   //0     1       2      3      4      5      6
                    //7%7   1%7    2%7    3%7    4%7    5%7    6%7
//    string days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    string days[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    int day, month, year, counter;
    cout<< "Enter your date \n";
    scanf("%d %d %d", &day, &month, &year);

//    month *= 30;
    counter = (month*30) - day; // total days calced .. index of the days

    if(year%4 != 0)
    {
        counter = counter + 6 - (year%10); // bcz years repeat itself after 6 years, and every year increase by +1
    }

    ////// Adjusting MONTHS //////

    if(month > 1)
        counter += 1;
    if(month > 3)
        counter += 2;
    if(month > 5)
        counter += 3;
    if(month > 7)
        counter += 4;
    if(month > 8)
        counter += 5;
    if(month > 10)
        counter += 6;
//    if(month >= 12)
//        counter += 7;



    cout << counter%7 << endl;
    cout << days[counter%7] << endl;


}
