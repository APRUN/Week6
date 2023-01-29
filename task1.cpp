#include <iostream>
using namespace std;

main()
{
    string temp,humidity;
    cout<<"Enter the temprature type: ";
    cin>>temp;
    cout<<"Enter the humidity type: ";
    cin>>humidity;
if(temp=="warm" && humidity=="dry")
{
    cout<<"Play Tennis.";

}
if(temp=="warm" && humidity=="humid")
{
    cout<<"swim";
}
if(temp=="cold" && humidity=="dry")
{
    cout<<"play basketball";
}
if(temp=="cold" && humidity=="humid")
{
    cout<<"Watch TV.";
}
}

