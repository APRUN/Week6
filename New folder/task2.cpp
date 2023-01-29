#include <iostream>
using namespace std;

main()
{
    string name,gradeA;
    int marks, s1, s2, s3, s4, s5;
    
    float totalmarks,percent,gradeB;
    cout << "Enter name of the Student: ";
    cin >> name;
    cout << "Enter marks of Subject 1: ";
    cin >> s1;
    cout << "Enter marks of Subject 2: ";
    cin >> s2;
    cout << "Enter marks of Subject 3: ";
    cin >> s3;
    cout << "Enter marks of Subject 4: ";
    cin >> s4;

    cout << "Enter marks of Subject 5: ";
    cin >> s5;

    cout << "Enter the total marks: "<<endl;
    cin >> marks;
    totalmarks=s1+s2+s3+s4+s5;
    percent= totalmarks/marks*100;
   
cout<<"The total percentage is: "<<percent;
    if(percent<50)
    {
        cout<<"The grade is F";
    }
    if(percent>=50 && percent<=60)
    {
        cout<<"The grade is C";
    }
    if(percent>=60 && percent<=70)
    {
        cout<<"The grade is B";
    }

    if(percent>=80 && percent<=90)
    {
        cout<<"The grade is A";
    }
    if(percent>=70 && percent<=80)
    {
        cout<<"The grade is B+";
    }
    if(percent>=90 && percent<=100)
    {
    cout<<"The grade is A+";
  
   }
}

    








