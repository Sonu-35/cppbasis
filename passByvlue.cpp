//n is differnt in both main and dummy functions
//here, increment in n is occuring only in dummy function
#include<iostream>
using namespace std;

void dummy(int n){
    n++;
    cout << "number is " << n << endl; 
}

int main(){
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    dummy(n);

    cout << "n is " << n << endl;

    return 0;
}