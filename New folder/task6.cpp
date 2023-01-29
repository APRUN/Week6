#include <iostream>
using namespace std;
main()
{
    string month;
    int nights;
    float pricestd, priceapar;
    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the nights to stay: ";
    cin >> nights;
    if (month == "may" || month == "october")
    {
        pricestd = nights * 50;
        priceapar = nights * 65;
        if (nights > 7 && nights < 14)
        {
            pricestd = pricestd * 0.95;
            priceapar = priceapar * 0.95;
        }
        if (nights > 14)
        {
            pricestd = pricestd * 0.70;
            priceapar = priceapar * 0.90;
        }
        cout<< pricestd<<endl;
        cout<< priceapar<<endl;
    }
    if (month == "june" || month == "september")
    {
        pricestd = nights * 75.20;
        priceapar = nights * 68.70;
        if (nights > 14)
        {
            pricestd = pricestd * 0.80;
            priceapar = priceapar * 0.90;
        }
                cout<< pricestd<<endl;
        cout<< priceapar<<endl;
    }

    if (month == "july" || month == "august")
    {
        pricestd = nights * 76;
        priceapar = nights * 77;
        if (nights > 14)
        {
            pricestd = pricestd * 0.90;
            priceapar = pricestd * 0.90;
        }
        cout<< pricestd<<endl;
        cout<< priceapar<<endl;
    }
}