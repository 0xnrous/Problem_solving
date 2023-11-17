#include<iostream>
#include<string>
using namespace std;
int main (){
    long long A;
    long long B;
    string S; 
cin >> A >> S  >> B;
    if (S=="+" ){
        cout << A+B <<endl;
    }
    if(S=="-"){

        cout<<  A-B <<endl;
    }
    if(S=="*"){

        cout<<  A*B  <<endl;
    } 
    if (S=="/"){

        cout<<  A/B  <<endl;
    }

}