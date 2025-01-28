#include <bits/stdc++.h>
using namespace std;

int main(){
        long long int n;
        cin>>n;
        vector<long long int> children(n);
        for(long long int i=0;i<n;i++){
            children[i]=i+1;
        }
        while(children.size()>1){
            vector<long long int> survivour;
            for(long long int i=0;i<children.size();i++){
                if(i%2==0)
                    survivour.push_back(children[i]);
                else 
                    cout<<children[i]<<" ";
            }
            if(children.size()%2==0)
                children=survivour;
            else{
                long long int starter=survivour.back();
                survivour.pop_back();
                children.clear();
                children.push_back(starter);
                for(long long int z:survivour){
                    children.push_back(z); 
                }
            }
         }
    cout<<children[0];
}