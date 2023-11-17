#include <iostream>
using namespace std;
int main(){
    int A,B , C; 
    char Eqall , oper ;
    cin >>A>>oper>>B>>Eqall>>C;
    if (oper == '+'){
        if (A+B==C){
            cout <<"Yes"<<endl;
        }
        else {
            cout << A+B<<endl;
        }

    }
    else if (oper=='-'){
        if (A-B==C){
            cout << "Yes"<<endl;
        }
        else{
            cout << A-B <<endl;
        }

    }
    else if (oper == '*'){
        if (A*B==C){
            cout << "Yes"<<endl;
        }
        else {
            cout << A*B <<endl;
        }

    }
    else{
        if (A/B==C){
            cout << "Yes" <<endl;
        }
        else{
            cout << A/B <<endl;
        }
    }
}