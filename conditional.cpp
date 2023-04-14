//if-else
//The if statement block is only not executed when the expression evalutes to 0. For all the other values, it will be treated as true.
//if we when that compiler read space, tab and enter that is given in input use cin.get() as cin ignores those things
/*#include<iostream>

using namespace std;

int main(){
    int a, b;
    cout<<"Enter two numbers";
    cin>>a >>b;

    if(a == b){
        cout<<"Both the numbers are equal" <<endl;
        }
        else if(a > b){
            cout << "a is greather then b" <<endl;
            }
            else if(a < b){
                cout << "b is greather than a" <<endl;
            }
        return 0;
        }*/
    
#include<iostream>

using namespace std;

int main(){
    int a = 10, b = 20, c = 100;
    if(a<=b || c<=b){
        cout<<"Hello" <<endl;
    }
    else if(a<=b || a<=c){ // || is a logical OR operator
        cout<<"Hii" <<endl;
    }
    else{
        cout<<"Hey" <<endl;
    }
    return 0;
}