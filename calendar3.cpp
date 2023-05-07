#include<iostream>
#include<string>

using namespace std;

int main() {
    string days[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int day, month, year, counter;

    cout<< "Enter your date \n";
    scanf("%d %d %d", &day, &month, &year);

    int daysInMonth[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    counter = day;

    for(int i=0; i<month-1; i++) {
        counter += daysInMonth[i];
    }

    if((year%4)==0 && (year%100)!=0 || (year%400)==0) {
        counter++;
    }

    cout << days[counter%7] << endl;

    return 0;
}
