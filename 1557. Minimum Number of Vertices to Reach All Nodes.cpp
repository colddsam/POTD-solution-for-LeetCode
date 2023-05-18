vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        //count the vertices with zero indegree because they cant be reached
        //rest all can be reached
        vector<int>adj[n];
        vector<int>ans;
        //fill the adjacency list
        for(int i=0;i<edges.size();i++){
            adj[ edges[i][0] ].push_back(edges[i][1]);
        }
        int indegree[100000]={0};
        for(int i=0;i<n;i++){
            for(auto it:adj[i])indegree[it]++;
        }
        for(int i=0;i<n;i++){
            if(indegree[i]==0)ans.push_back(i);
        }
        return ans;
    }
