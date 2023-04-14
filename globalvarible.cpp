//to understand the concept or global varible and how to print it
#include<iostream>

using namespace std;

int c = 45;//defing a global interger

int main(){
    int a, b, c;

    cout<<"Enter the value of a: " <<endl;
    cin>> a;

    cout<<"Enter the value of b: " <<endl;
    cin>> b;//used in place of scanf

    c = a + b;
    cout<<"The sum is: " << c <<endl;
    cout<<"The global variable: " <<::c;//to print global varible we need to use "::"

    return 0;

}