//TO-DO: Corina Aragon
//TO-DO: Nov 14, 2023
//CS1428 Lab
//Lab 11
//Description: this program will track weather for several days
//****************This is the line of 80 characters in length*******************
//############Your code should not exceed the length of the above line##########
#include <iostream>
#include <iomanip>
using namespace std;
//TODO: Create your struct
struct DailyClimate{
    string name;
    float rainfall;
    float temperature;
};
int main()
{
    const int WEEK = 3;
    DailyClimate myweek [WEEK]; //array of DailyClimate structs
    float total = 0;
    int lowest_rainfall = 0;
    int highest_temp = 0;
    for(int i = 0; i < WEEK; i++)
    {
        //TODO: Prompt/read daily climate information
        cout << "Enter day name: ";
        cin >> myweek[i].name;
        cout << "Enter rainfall: ";
        cin >> myweek[i].rainfall;
        cout << "Enter temperature: ";
        cin >> myweek[i].temperature;
        //adds current rainfall to total rainfall
        total += myweek[i].rainfall;
        //TODO: Find the index of the hottest day
        if(myweek[i].temperature > myweek[highest_temp].temperature)
        {
            highest_temp = i;
        }
        //TODO: Find the index of the day with lowest rainfall
        if(myweek[i].rainfall < myweek[lowest_rainfall].rainfall)
        {
            lowest_rainfall = i;
        }
    }
    float avg = total/WEEK;
    //TODO: output the average rainfall, the day with the lowest
    // temperature, and the day with the highest rainfall.
    cout << "Average rainfall: " << fixed << setprecision(2) << avg << endl;
    cout << "Highest temperature: " << myweek[highest_temp].temperature << endl;
    cout << "Lowest rainfall: " << myweek[lowest_rainfall].rainfall << endl;
    return 0;
}