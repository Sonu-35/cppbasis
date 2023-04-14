//Q5 another one printing counting 1 2 3 4 5
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the value of n: " <<endl;
    cin >> n;

    int i = 1;
    int count = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){
            cout << count <<" ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}