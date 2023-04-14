//print number from 1 to N
/*#include<iostream>
using namespace std;

int main()
    {
        int i = 1, n;
        cout << "Enter the value of N: ";
        cin >> n;

        while(i <= n){
            cout << i << endl;
            i = i + 1;
        } 
        return 0;
    }*/
     
//to check whether a number is prime or not
#include <iostream>
using namespace std;

int main(){
    int n, d;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    d = 2;
    bool divided = false;
    while(d < n){
        if (n % d == 0){
            divided = true;
            break;
        }
            d = d + 1;
    }
    if(!divided)
        cout << "n is a prime number" <<endl;
    else
        cout<<"n is not a prime numbe"<<endl;
    return 0;
}