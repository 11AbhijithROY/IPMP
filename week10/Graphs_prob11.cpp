int isCycle(Graph* graph)
{
    int* parent = new int[graph->V * sizeof(int)];
    memset(parent, -1, sizeof(int) * graph->V);
    
    for (int i = 0; i < graph->E; ++i) {
        int x = find(parent, graph->edge[i].src);
        int y = find(parent, graph->edge[i].dest);
        if (x == y)
            return 1;
        Union(parent, x, y);
    }
    return 0;
}