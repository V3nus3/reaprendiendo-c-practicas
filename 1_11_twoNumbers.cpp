#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;//a must be menor to b
    cin>>b;
    while(a<b-1){
        ++a;
        cout<<a<<endl;
    }
}