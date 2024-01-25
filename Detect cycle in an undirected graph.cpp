bool dfsCycle(vector<int> adj[],vector<bool>&isVisited,int start,int parent){
        isVisited[start]=true;
        for(int &ans:adj[start]){
            if(ans==parent) continue;
            if(isVisited[ans]) return true;
            if(dfsCycle(adj,isVisited,ans,start)) return true;
            
        }return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool>isVisited(V,false);
        
        for(int i=0;i<V;i++){
            if(isVisited[i]==false && dfsCycle(adj,isVisited,i,-1)){
                return true;
            }
        }return false;
    }
