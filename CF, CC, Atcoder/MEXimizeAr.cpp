#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t>0){
	    int n,l,r;
	    cin>>n>>l>>r;
	    int arr[n];
	    for(int i=0;i<n;i++)    cin>>arr[i];
	    
	    int happ=0,maxi=0,mini=INT_MAX;
	    for(int i=0;i<n;i++){
	        if(l<=arr[i]&&arr[i]<=r)   happ+=1;
	        else happ-=1;
	        maxi=max(maxi,happ);
	        mini=min(mini,happ);
	    }
	    cout<<maxi<<" "<<mini<<endl;
        t--;
	}
}