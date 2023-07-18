#include<bits/stdc++.h>
using namespace std;

class disjointSet{
    vector<int> rank,parent,size;
    public:
       // Constructor !!!
       disjointSet(int n){
            rank.resize(n+1,0);
            parent.resize(n+1);
            size.resize(n+1,1);
            for(int i=0;i<=n;i++) parent[i]=i;
       }

       // Path compression and parent finding
       int findPar(int u){
           if(u==parent[u]) return u;
           return parent[u]= findPar(parent[u]);
       }

       // Union by rank
       void unionByRank(int u, int v){
            int pu= findPar(u);
            int pv= findPar(v);
            if(pu==pv) return ;
            if(rank[pu]<rank[pv]){
                parent[pu]=pv;
            }else if(rank[pv]<rank[pu]){
                parent[pv]=pu;
            }else{
                parent[pv]=pu;
                rank[pu]++;
            }
       }
    
       // Union by size!!
       void unionBySize(int u, int v){
            int pu= findPar(u);
            int pv= findPar(v);
            if(pu==pv) return;
            if(size[pu]<size[pv]){
                parent[pu]=pv;
                size[pv]+=size[pu];
            }else{
                parent[pv]=pu;
                size[pu]+=size[pv];
            }
       }
};

int main(){
    disjointSet ds(7);
    ds.unionBySize(1,2);
    ds.unionBySize(2,3);
    ds.unionBySize(4,5);
    ds.unionBySize(6,7);
    ds.unionBySize(5,6);
    if(ds.findPar(3)==ds.findPar(7)){
        cout<<"same"<<endl;
    }else{
        cout<<"Not same"<<endl;
    }
    ds.unionBySize(3,7);

    if(ds.findPar(3)==ds.findPar(7)){
        cout<<"same"<<endl;
    }else{
        cout<<"Not same"<<endl;
    }
}