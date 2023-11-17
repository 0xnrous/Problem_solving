#include<iostream>
#include<string>
using namespace std;
int main (){
    float N ; cin >> N ;
    long long c = N;
    string f = "float";
    string i =  "int";
    if (c == N){
        cout << i <<endl;
    }
    else {
        cout << f <<endl;
    }
}