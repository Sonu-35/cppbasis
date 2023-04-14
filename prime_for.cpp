//cheching whether a number is prime or not using for loop
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number to check prime or not: " << endl;
    cin >> n;

    bool isPrime = true;

    for(int i =2; i < n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }

    }
    if(isPrime == 0){
        cout <<"Not a prime number" <<endl;
    }
        else{
            cout << "is a prime number" << endl;
        }

}