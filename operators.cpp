//understanding bitwise operators
#include <iostream>
using namespace std;

int main(){
    int a = 4, b = 5;
    

    cout << "And operator a & b = " << (a&b) <<endl; 
    cout << "OR operator a | b = " << (a|b) <<endl;
    cout << "And operator ~a = " << ~a <<endl;
    cout << "And operator A ^ b = " << (a^b) <<endl;

    cout << (17 >> 1) << endl; //right shift operations
    cout << (17 >> 2) << endl;

    cout << (19 << 1) << endl; //left shift operations
    cout << (21 << 2) << endl;
    //if we want to left shift a bigger no it will make it a negative number

    int i = 7;
    cout << (++i) <<endl; //8
    cout << (i++) <<endl; //8, i = 9
    cout << (--i) <<endl; //8, i = 8
    cout << (i--) <<endl; //8 , i = 7
}