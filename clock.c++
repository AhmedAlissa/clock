#include <iostream>
#include<windows.h>//for sleeping terminal
using namespace std;
int main(){
    //variables
int hours=0;
int min=0;
int sec=0;
    //! end of variables
cout<<"Hours : ";
cin>>hours;
cout<<"min : ";
cin>>min;
cout<<"sec : ";
cin>>sec;

//10:20:57
//10:20:58
//10:20:59
//10:21:0
//...

while (true){
    system("cls") ;//clen terminal
               cout<<"please Don't waste your time   ";

    if(sec>59){
        min++;
        sec=0;}
         
    if(min>59){
        hours++;
        min=0; }

    if(hours>23){
        hours=0;}    
        
        cout<<hours<<":"<<min<<":"<<sec;
        sec++;
        Sleep(970); //sleep of terminal 

        }



return 0;




}