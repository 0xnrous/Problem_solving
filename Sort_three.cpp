#include <iostream>
using namespace std;
int main(){
    long long a,b,c;
    cin >> a>>b>>c;
    if (a<=b && a<=c){
        if (b<=c){
            cout << a << ' '<<b<< ' '<< c<<endl;
        }
        else{
            cout << a << ' '<<c<< ' '<< b<<endl;
        }
    }
    else if (b<=a && b<=c){
            if(a<=c){
                cout << b << ' '<<a<< ' '<< c<<endl;
            }
            else {
                cout << b << ' '<<c<< ' '<< a<<endl;    
            }
        }
    else{
            if (a<=b){
                cout << c << ' '<<a<< ' '<< b<<endl;    
            }
            else{
                cout << c << ' '<<b<< ' '<< a<<endl;    
            }
    }

}