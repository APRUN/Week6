#include<iostream>
using namespace std;
main()
{
    string day,fruitname;
    float fruitquantity,final;
    cout<<"Enter the day of week: ";
    cin>>day;
    cout<<"Enter the name of fruit: ";
    cin>>fruitname;
    cout<<"Enter the fruit quantity: ";
    cin>>fruitquantity;
    if(day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday")
    {
        if(fruitname=="banana")
        {final=fruitquantity*2.50;}
        if(fruitname=="apple")
        {final=fruitquantity*1.20;}
        if(fruitname=="orange")
        {final=fruitquantity*0.85;}
        if(fruitname=="grapefruit")
        {final=fruitquantity*1.45;}
        if(fruitname=="kiwi")
        {final=fruitquantity*2.70;}
        if(fruitname=="pineapple")
          {final=fruitquantity*5.50;}
        if(fruitname=="grapes")
        {final=fruitquantity*3.85;}
    }

        if(day=="saturday"||day=="sunday")
        {
                    if(fruitname=="banana")
        {final=fruitquantity*2.70;}
        if(fruitname=="apple")
        {final=fruitquantity*1.25;}
        if(fruitname=="orange")
        {final=fruitquantity*0.90;}
        if(fruitname=="grapefruit")
        {final=fruitquantity*1.60;}
        if(fruitname=="kiwi")
        {final=fruitquantity*3.00;}
        if(fruitname=="pineapple")
          {final=fruitquantity*5.60;}
        if(fruitname=="grapes")
        {final=fruitquantity*4.20;}
       
        }
cout
<<final;

    

}