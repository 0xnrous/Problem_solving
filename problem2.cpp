//
//  problem1.cpp
//  PS
//
//  Created by 0xnrous on 10/11/2023.

# include <iostream>
using namespace std;
int main(){
    long long n ;
    cin >>n;
    if (n==0){
        return 0;
    }
    else {
        cout << (n%10)+((n/10)%10)+((n/100)%10)<<endl;
    }
    return 0;
}
