#include <iostream>
using namespace std;

void helper(int n, char src, char hel, char dst){
    if(n==0) return;
    helper(n-1,src,dst,hel);
    cout<<"Disk "<<n<<" moved from "<<src<<" to "<<dst<<endl;
    helper(n-1,hel,src,dst);
    // return;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	helper(n,'A','B','C');
	return 0;
}
