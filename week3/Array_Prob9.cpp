unrodered_map<int, int> umap;
	for(int i = c - 1; i > 0;i--){
	    umap[i*i] = i;
	}
	for(int i = 1;i < c;i++){
	    if(umap.find(c*c - i*i) != umap.end()){
	        return {umap[c*c - i*i], i};
	    }
	}
	return 0;