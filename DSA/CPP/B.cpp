#include<bits/stdc++.h>
using namespace std;
#define nl '\n'
#define endl '\n'
#define vi  vector<int> 
#define pii pair<int,int>
#define fr first
#define sc second
#define sp " "
#define mkpr make_pair
#define all(x)  (x).begin(),(x).end()
#define gcd(a,b)   __gcd(a,b)  
#define vpi vector<pii> 
#define vvi vector<vi>
#define vvpi vector<vpi>
#define itlp(it,v)  for(auto it=v.begin();it!=v.end();it++)
#define mst(a,val)  memset(a,val,sizeof(a)) 
#define pn {cout<<"No"<<nl; return;}
#define prDouble(x) cout << fixed << setprecision(10) << x<<sp;
#define py {cout<<"Yes"<<nl; return;}
bool binarySearch(vector<long long>&arr,long long k){
    long long l=0,h=arr.size()-1;
    while(l<=h){
        long long mid=l+(h-l)/2;
        if(arr[mid]==k){
            return true;
        }else if(arr[mid]<k){
            l=mid+1;
        }else{
            h=mid-1;
        }
    }
    return false;
}
int main(){
   long long n,k;
   cin>>n >>k;
   vector<long long> arr(n),que(k);
   for(int i=0;i<n;i++) cin>>arr[i] ;
   for(int i=0;i<k;i++) cin>>que[i] ;
   for(auto it:que){
        bool res= binarySearch(arr,it);
        if(res) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
   }
   return 0;
}
