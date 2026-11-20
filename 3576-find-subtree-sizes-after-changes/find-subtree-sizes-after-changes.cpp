
class Solution {
public:
    vector<int> answer;

    void findParent(int u, vector<vector<int>>& adj, string& s,
                    vector<int>& parent, vector<int>& last) {

        int c = s[u] - 'a';
        int old = last[c];

        if (u != 0 && old != -1)
            parent[u] = old;

        last[c] = u;

        for (int v : adj[u])
            findParent(v, adj, s, parent, last);

        last[c] = old;
    }

    int dfs(int u, vector<vector<int>>& adj) {
        int sz = 1;

        for (int v : adj[u])
            sz += dfs(v, adj);

        return answer[u] = sz;
    }

    vector<int> findSubtreeSizes(vector<int>& parent, string s) {
        int n = parent.size();

        vector<vector<int>> adj(n), tree(n);

        for (int i = 1; i < n; i++)
            adj[parent[i]].push_back(i);

        vector<int> last(26, -1);

        findParent(0, adj, s, parent, last);

        for (int i = 1; i < n; i++)
            tree[parent[i]].push_back(i);

        answer.resize(n);
        dfs(0, tree);

        return answer;
    }
};
