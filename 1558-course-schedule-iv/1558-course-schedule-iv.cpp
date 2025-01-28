class Solution {
public:
    vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
        vector<vector<bool>> v(numCourses, vector<bool>(numCourses, false));
        for (auto it : prerequisites) v[it[0]][it[1]] = true;

        for (int k = 0; k < numCourses; k++) {//intermediate
            for (int i = 0; i < numCourses; i++) {//src
                for (int j = 0; j < numCourses; j++) {//target
                    v[i][j] = v[i][j] || (v[i][k] && v[k][j]);
                }
            }
        }

        vector<bool> res;//2D array into final vector for result
        for (auto it : queries) res.push_back(v[it[0]][it[1]]);
        return res;
    }
};