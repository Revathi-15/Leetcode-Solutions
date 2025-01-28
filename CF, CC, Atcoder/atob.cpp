#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long int a, b, k;
        cin >> a >> b >> k;
        long long int count = 0;

        while (a < b){
            if (b % k == 0){
                b /= k;
                count++;
            }
            else{
                long long int diff = (b - (b / k) * k);
                b -= diff;
                count += diff;
            }
        }
        cout << count << endl;
    }
    return 0;
}