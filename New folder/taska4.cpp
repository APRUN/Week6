#include <iostream>
using namespace std;
float process(float, char, char);
main()
{

    char customertype;
    float minutes;
    char time;
    float final;
    cout << "Enter the type of  customer(r/p):  ";
    cin >> customertype;
    if (customertype == 'p')
    {
        char time;
        cout << "Press 'D' for day time or press 'N' for night: ";
        cin >> time;
    }

    cout << "Enter the number of minutes: ";
    cin >> minutes;
    final = process(minutes, customertype, time);
    cout << final;
}

float process(float minutes, char customertype, char time)
{
    float price;

    if (customertype == 'r')
    {

        if (minutes > 50)

        {
            minutes = minutes - 50;

            price = 10 + minutes * 0.2;
        }
        else{
            price = 10;
        }
    }

    else
    {

        if (time == 'd')
        {

            if (minutes > 75)
            {
                minutes = minutes - 75;

                price = 25 + minutes * 0.1;
            }
            else
            {
                price = 25;
            }
        }

        else
        {

            if (minutes > 100)
            {

                minutes = minutes - 100;

                price = 25 + minutes * 0.5;
            }
            else
            {
                price = 25;
            }
        }
    }
    return price;
}