//Q13 printing the pattern ABC DEF GHI
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int i = 1;
    char ch = 'A';
    while (i <= n){
        int j = 1;
        
        while (j <= n){
            cout << ch;
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}
