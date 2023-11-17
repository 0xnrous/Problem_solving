//
//  problem1.cpp
//  PS
//
//  Created by 0xnrous on 10/11/2023.
#include "iostream"
using namespace std;
int main(){
    int a; int b;   int c;
    cin >>  a;  cin >>b;    cin>>c;
     if (a >= b   && a >=  c){
        if (b>c && b<a){
            cout << c   <<  ' '<<   a<<endl;
        }
    else {
        cout << b   <<  ' '<<   a<<endl;
    }
     }


    if (b > a   && b >  c){
        if (a>c && a<b){
            cout << c   <<  ' '<<   b<<endl;
        }
    else {
        cout << a   <<  ' '<<   b<<endl;
    }
     }


    if (c > b   && c >  a){
        if (b>a && b<c){
            cout << a   <<  ' '<<   c<<endl;
        }
    else {
        cout << b   <<  ' '<<   c<<endl;
    }
     }
     
    return 0;
}

/*
Given 3 numbers A, B and C, Print the minimum and the maximum numbers
Input
Onlv one line containing 3 numbers A. B and C (-105 < A. B. C ≤ 105)
Output
Print the minimum number followed by a single space then print the maximum number.
Examples input
1 2 3
output
1 3
input
50 - 1
output
-1 5
input
3 3 3
output
3 3
*/