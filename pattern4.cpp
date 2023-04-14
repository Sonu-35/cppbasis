//Q4 another one 321 321
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    int i = 1;
    while (i <= n){
        int j = n;
        while (j > 0){
            cout << j;
            --j;
        }
        cout << endl;
        i++;
    }
}