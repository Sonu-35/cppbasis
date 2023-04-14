/*float, double and long double literals data type*/
#include<iostream>
using namespace std;
int main(){
    float d = 34.4F;
    long double e = 34.4L;
    cout<<"The value of d is "<<d<<endl<<"the value of e is "<<e<<endl;//trying to print whole code using a single line of code
    return 0;
}

/*Reference Variables*/
#include<iostream>
using namespace std;
int main(){
    float x = 400;
    float & y = x;//declearing y as x(variable is same just another name is given to it)
    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}

/*Type Casting(Changind one varible type to another one)*/
#include<iostream>
using namespace std;
int main(){
    int a = 45;
    float b = 56.5;
    cout<<"The value of a is "<<float(a)<<endl;//changing int type to float
    cout<<"The value of b is "<<int(b)<<endl;//changing float type to int 

    cout<<"the sum is "<< a + b<<endl;
    cout<<"The sum is "<< a + int(b)<<endl;
    cout<<"The sum is "<< int(a) + b<<endl;

    return 0;
}