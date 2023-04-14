/*there are two types of header files:
1. System Header file: It comes with the complier */
#include<iostream>
//2. User defined file: It is written by the programmer 
// #include"this.h" --> This will produce an error if this file is nor present in current directory

 using namespace std;
 int main(){
    cout<<"Hello World!" <<endl; //'<<endl' works as same as '\n'
    return 0;
 }
 /*for refernce of cpp header file go to cppreferance.com*/

 /*In C++ every variable contain garbage value before their initialisation*/