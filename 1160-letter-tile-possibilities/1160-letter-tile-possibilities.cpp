class Solution {
public:
    void backtrack(string &tiles, vector<bool> &seen, string &curr, unordered_set<string> &st) {
        if (!curr.empty()) st.insert(curr);
        for (int i = 0; i < tiles.size(); i++) {
            if (!seen[i]) {
                seen[i] = true;
                curr.push_back(tiles[i]);
                backtrack(tiles, seen, curr, st);
                curr.pop_back();
                seen[i] = false;
            }
        }
    }

    int numTilePossibilities(string tiles) {
        unordered_set<string> st;
        vector<bool> seen(tiles.size(), false);
        string curr;
        backtrack(tiles, seen, curr, st);
        return st.size();
    }
};