#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
       string s;
       cin>>s;
        string sh=s.substr(0,2),sm=s.substr(3,2);
        int hh=stoi(sh),mm=stoi(sm);
        string am_pm=hh<12?"AM":"PM";
        if(hh==0) hh=12;
        else if(hh>12) hh-=12;
       
        cout<<(hh<10?"0":"")<<hh<<":"<<(mm<10?"0":"")<<mm<<" "<<am_pm<<endl;
    }
    return 0;
}