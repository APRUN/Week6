#include<iostream>
using namespace std;
main()
{
    int hours,minutes,arrvhours,arrvminutes,time,arrvtime;
    cout<<"Exam starting time(hours): ";
    cin>>hours;
    cout<<"Exam starting time(minutes): ";
    cin>>minutes;
    cout<<"Enter the time of arrival: ";
    cin>>arrvhours;
    cout<<"Enter the minutes of arrival: ";
    cin>>arrvminutes;
   time=(hours*60)+minutes;
   arrvtime=(arrvhours*60)+arrvminutes;
   
   
   
   if(arrvtime<time)
 {
 cout<<"You are "<<time-arrvtime <<" minutes early.";
 }
 if(arrvtime>time)
 {
    cout<<"You are  "<<arrvtime-time <<" minutes late.";
 }
 if(arrvtime=time)
 {
   cout<<"in time";
 }

}
