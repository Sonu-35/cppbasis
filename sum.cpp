//sum of all even numbers from 1 to n
#include<iostream>
using namespace std;

int main(){
    int n, i, sum;
    cout<<"Enter the value of n: " <<endl;
    cin>>n;

    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0){
            cout<<i << endl;
            sum = sum + i;
        }
    }
    
    return 0;
}