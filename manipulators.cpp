/*These are the keywords which are used to design the display to look good and easy to read*/
/*These include endl, setw etc*/

#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    int a = 3, b = 87, c = 999, d = 1233;
    cout<<"The value of a is "<<setw(4)<<a<<endl;//setw is used to give width to the printed output
    cout<<"The value of b is "<<setw(4)<<b<<endl;
    cout<<"The value of c is "<<setw(4)<<c<<endl;
    cout<<"The value of d is "<<setw(4)<<d<<endl;

    return 0;
}

/*Operator precedence*/
//tells about which operator will come in action if there are more then one
#include<iostream>

using namespace std;

int main(){
    int a = 75, b = 95;
    int c = a * 5 + b - 22;//a*b, a/b, a%b comes in play first then a+b, a-b
    cout<<c;
    return 0;
}