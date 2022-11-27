#include<iostream>
using namespace std;
int p=5;//global variable
int main(){
    int p=8;//local variable
    p--;
    cout<<::p<<endl;//to call local variable use ::(scope resolution)


}