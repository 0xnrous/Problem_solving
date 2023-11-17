#include<iostream>
using namespace std;
int main(){
    long long Number ;  cin >>Number;
    long long last_N = Number % 10;
    int last_NN = (Number % 100)/10;

    long long sum = last_N + last_NN;
        if (last_N == Number){
        cout << Number  <<endl;
    }
    else{
    cout << sum << endl;
    }

}