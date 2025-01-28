#include<bits/stdc++.h>
using namespace std;
struct point{
    long long int x;
    long long int y;
};
 
int angle(point p,point q,point r){
    long long int res=(q.y-p.y)*(r.x-q.y)-(r.y-q.y)*(q.x-p.x);
    if(res==0)  return 0;//q,r collinear
    return res>0 ? 1 : 2;
    // else if(res>0)  return 1; //r is left point,q is right point
    // else return 2;//q is left point and r is right
}
 
void convexhull(point pts[],int n){
   if(n<3)  return;
   vector<point> convhull;
   int l=0;
   for(int i=0;i<n;i++){
    if(pts[i].x<=pts[l].x){
        l=i;
    }
   }
    int p=l,q;
    do{
        convhull.push_back(pts[p]);
        q=(p+1)%n;
        for(int i=0;i<n;i++){
            if(angle(pts[p],pts[i],pts[q])==2){
                q=i;//now q is left point as i is left point
            }
        }
        p=q;//next left point
    }while(p!=l);
    cout<<convhull.size()<<endl;
    for(int i=0;i<convhull.size();i++){
        cout<<convhull[i].x<<" "<<convhull[i].y<<endl;
    }
}
 
int main(){
    int n;
    cin>>n;
    point p[n];
    for(int i=0;i<n;i++){
        cin>>p[i].x>>p[i].y;
    }
    convexhull(p,n);
}