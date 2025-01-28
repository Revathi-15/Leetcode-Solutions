#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string> permutation;
    do{
        permutation.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    cout<<permutation.size()<<endl;
    for(string per:permutation)
       cout<<per<<endl;
}