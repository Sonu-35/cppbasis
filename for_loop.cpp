//using for loop to print counting
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    cout << "printing the counting from 1 to n: " << endl;

    for(int i = 1; i <= n; i++) {
        cout << i << endl;
    }
}

//another way for the same
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: " <<endl;
    cin >> n;

    cout << "Printing the counting from 1 to n: " <<endl;
    int i = 1;
    for( ; ; ){
         if(i <= n){
            cout << i <<endl;
         }
         else{
            break;
         }
         i++; 
    }
}