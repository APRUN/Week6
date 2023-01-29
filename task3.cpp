#include <iostream>
using namespace std;
main()
{
    int date;
    string month;
    cout << "Enter date fo Birth: ";
    cin >> date;
    cout << "Enter month of birth: ";
    cin >> month;

    if ((date <= 19 && month == "march") || (date >= 21 && month == "April"))
        cout << "Aries";
    if ((date <= 20 && month == "april") || month == "may")
        cout << "Taurus";
    if ((date <= 21 && month == "may") || ( date <= 20 && month == "june"))
        cout << "Gemini";
    if ((date >= 21 && month == "june") ||  (date <= 22 && month == "july"))
        cout << "Cancer";
    if ((date >= 22 && month == "july" )|| (date <= 23 && month == "august"))
        cout << "Leo";

    if ((date >= 22 && month == "september") || (date <= 23 && month == "august"))
        cout << "Virgo";
    if ((date >= 22 && month == "september") ||  (date <= 23 && month == "october"))
        cout << "Libra";
    if ((date >= 21 && month == "october")  ||  (date <= 21 && month == "november"))
        cout << "Scorpio";
    if ((date >= 21 && month == "november") || (date <= 22 && month == "december"))
        cout << "Sagittarius";
    if ((date >= 19 && month == "december") ||  (date <= 22 && month == "january"))
        cout << "Capricorn";
    if ((date >= 18 && month == "january") || (date <= 29 && month == "feburary"))
        cout << "Aquarius";
    if ((date >= 19 && month == "feburary") ||  (date <= 20 && month == "march"))
        cout << "Pisces";
        
}