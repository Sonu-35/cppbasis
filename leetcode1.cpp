//subtract the product and sum of digits of an integer
//Given an integer n, return the difference between the products of its digits and sum of the its digits
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter integer: " << endl;
    cin >> n;
    int sum = 0;
    int prod = 1;

    while( n! = 0){
        int digit = n % 10;
        prod = prod * 1;
        sum = sum + 1;

        n = n / 10;
    }
    int ans = prod - sum;
    return ans;

}