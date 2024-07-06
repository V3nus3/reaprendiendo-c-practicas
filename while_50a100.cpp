#include <iostream>
using namespace std;
int main(){
    //sumar cada numero que hay entre 50 y 100
    int a,sum;
    a=50;
    sum=0;
    while(a<=100){
        sum+=a;
        ++a;
    }
    cout<<"the sum the numbers from 50 to 100 is "<<sum<<endl;
}