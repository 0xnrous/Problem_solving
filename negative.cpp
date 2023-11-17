#include<iostream>
using namespace std;
int main (){
    long long A,B,C;
    cin >> A>> B>>C;
    if (A < B && A < C ){
        if (A <= 0 && A == -1){
            cout << A<<endl;
        }
    }
    if (B<A && B<C){
    if (B <= 0 && B == -1){
            cout << B<<endl;
            }
    }
    if (C <= 0 && C == -1){
        if (C < A && C < B){
            cout << C<<endl;
        }
    }
}