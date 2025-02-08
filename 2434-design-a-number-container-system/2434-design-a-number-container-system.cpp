#include <bits/stdc++.h>
using namespace std;

class NumberContainers {
public:
    map<int, int> mp;  //{index -> number}
    unordered_map<int, set<int>> idx; //{number->sorted set of indices}
    
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        // If index already has a number, remove it from idx map
        if (mp.find(index) != mp.end()) {
            int x = mp[index];//old no
            idx[x].erase(index);
            if (idx[x].empty())  idx.erase(x);
        }
        mp[index] = number;
        idx[number].insert(index);
    }
    
    int find(int number) {
        if(idx.find(number)==idx.end()||idx[number].empty())  return -1;
        return *idx[number].begin();  //smallest index
    }
};
