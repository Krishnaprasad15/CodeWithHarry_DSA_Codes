#include<iostream>
using namespace std;
int countStair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    return countStair(n-1)+countStair(n-2);
}
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    cout<<countStair(n);
}