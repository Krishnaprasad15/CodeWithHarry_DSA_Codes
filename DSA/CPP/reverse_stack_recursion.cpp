#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &s,int temp ){
    if(s.size()==0){
        s.push(temp);
        return;
    }
    int a= s.top();
    s.pop();
    insert(s,temp);
    s.push(a);
    return;
}
void reversed(stack<int> &s){
    if(s.size()==1) return;
    int temp= s.top();
    s.pop();
    reversed(s);
    insert(s,temp);
    return;
}
int main(){
    stack<int> s,s1;
    for(int i=4;i>=1;i--){
        s.push(i);
    }
    s1=s;
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;
    reversed(s);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}