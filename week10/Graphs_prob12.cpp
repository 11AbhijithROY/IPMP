class DisjointDS{
public:
  vector<int> parent; 
  vector<int> rank; 
  DisjointDS(int n){ 
    parent.resize(n + 1); 
    rank.resize(n + 1);  
    rank.clear(); 
    
    for(int i = 0; i < n+1; i++){ 
      parent[i] = i;
    }
  }
  bool Union(int u, int v){ 
    int ru = Find(u);
    int rv = Find(v);
    if(ru == rv) return false; 
    if(rank[ru] > rank[rv]){
      parent[rv] = parent[ru];
    }else if (rank[rv] > rank[ru]){
      parent[ru] = parent[rv];
    }else{
      parent[rv] = parent[ru];
      rank[ru]++;
    }
    return true;
  }
  int Find(int node){ 
    if(parent[node] == node) return node; 
    parent[node] = Find(parent[node]); 
    return parent[node];
  }
};
class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
      int numOfNodes =  edges.size();
      DisjointDS dds(numOfNodes);
      for(auto& edge: edges){
        int u = edge[0];
        int v = edge[1];
        if(dds.Union(u, v) == false) return {u, v}; 
      }
      return {-1, -1};
    }
};