//we have 1330 rs and we want to calcualte how many 100rs notes, 50rs notes, 20rs notes, 1rs notes needed
#include<iostream>
using namespace std;

int main(){
    int n = 1330;

    switch( n ){
        case '/' : cout << "No of 100rs notes = " << n/ 100 << endl;
        break;
    }

    return 0;
}