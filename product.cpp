#include<iostream>
using namespace std;
int main(){
    long long a,b;
    long long c = a+1;
    cin >>a>>b;

    if ((a*b*c )> 0 ){
        cout << "Positive"  <<endl;

    }
    else if ((a*b*c)< 0){
        cout << "Negative"  <<endl;
    }
    else{
        cout << "Zero"  <<endl;
    }
}