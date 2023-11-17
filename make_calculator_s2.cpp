#include<iostream>
#include<string>
using namespace std;
int main (){
    long long A, B;
    char S; 
    cin >> A >> S  >> B;
    if (S ==    '+' ){
        cout << A+B <<endl;
    }
    else if (S ==    '-'){

        cout<<  A-B <<endl;
    }
    else if(S ==    '*'){

        cout<<  A*B  <<endl;
    } 
    else

        cout<<  A/B  <<endl;

}