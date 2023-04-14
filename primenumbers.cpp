#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter the value of n" <<endl;
    cin >> n;

    int d = 2;
    bool divided = false;
    while(d < n){
        if(n % d == 0){
        cout<<"Not a prime number" <<endl;
        divided = true;
        }
        d = d + 1;
    }
    if(!divided){
        cout<<"Prime number" <<endl;
    }
    return 0;
}