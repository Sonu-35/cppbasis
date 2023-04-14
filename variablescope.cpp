//pratical explanation of Variable scope
#include<iostream>

using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<<glo;
}

int main(){
    int glo = 9;
    glo = 78;
    int a = 14, b = 15;
    float pi = 3.14;
    char c = 's';
    bool is_true = true;
    sum();
    cout<< glo << is_true;
    return 0; 
}