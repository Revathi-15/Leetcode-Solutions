#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int getMinMemory(vector<int> memoryRequirement, vector<int> memoryAvailable) {
    sort(memoryRequirement.begin(), memoryRequirement.end());
    sort(memoryAvailable.begin(), memoryAvailable.end());
    
    int min_capacity = INT_MAX;
    int n = memoryRequirement.size();
    int m = memoryAvailable.size();
    
    if (m < n - 1) return -1;
    
    for (int exclude = 0; exclude < n; exclude++) {
        bool valid = true;
        int req_idx = 0;
        int avail_idx = 0;
        
        while (req_idx < n && avail_idx < m) {
            if (req_idx == exclude) {
                req_idx++;
                continue;
            }
            if (req_idx >= n) {
                break;
            }
            if (memoryRequirement[req_idx] <= memoryAvailable[avail_idx]) {
                req_idx++;
                avail_idx++;
            } else {
                avail_idx++;
            }
        } 
        if (req_idx >= n || (req_idx == n - 1 && req_idx == exclude)) {
            valid = true;
        } else {
            valid = false;
        }
        
        if (valid) {
            min_capacity = min(min_capacity, memoryRequirement[exclude]);
        }
    }
    return (min_capacity != INT_MAX) ? min_capacity : -1;
}

int main() {
    vector<int> req1 = {5, 2, 3, 7};
    vector<int> avail1 = {6, 2, 8};
    cout << getMinMemory(req1, avail1) << endl;
    
    vector<int> req2 = {3, 7, 2, 5};
    vector<int> avail2 = {8, 1, 6};
    cout << getMinMemory(req2, avail2) << endl;
    
    vector<int> req3 = {0, 2, 3, 7};
    vector<int> avail3 = {0, 2, 8};
    cout << getMinMemory(req3, avail3) << endl;
    
    vector<int> req4 = {1, 2, 3};
    vector<int> avail4 = {1, 2};
    cout << getMinMemory(req4, avail4) << endl;
    
    return 0;
}