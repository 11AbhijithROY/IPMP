class Solution
{
    public:
    //Function to merge k sorted arrays.
    #define n 4
    struct MinHeapNode {
        int element;
        int i;
        int j;
    };
    class MinHeap {
        MinHeapNode *harr;
        int heap_size;
        public :
        MinHeap(MinHeapNode a[], int size);
        void MinHeapify(int);
        int left(int i){ return (2*i + 1);}
        int right(int i){ return (2*i + 2);}
        MinHeapNode getMin() {return harr[0];}
        void replaceMin(MinHeapNode x) { harr[0] = x; MinHeapify(0);}
    }
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
    //code here
        vector<int> res;//to store output array
        MinHeapNode *harr = new MinHeapNode[k];//Minheap with k heap nodes where every heap node has first element of each k arrray
        
        for(int i = 0;i < k;i++) {
            harr[i].element = arr[i][0];//all the first elements stored in heap node
            harr[i].i = i;
            harr[i].j = 1;
        }
        //with the heapnodes create the minheap
        MinHeap hp(harr, k);
        int n = sizeof(arr[0])/(sizeof(arr[0][0]));
        for(int count = 0; count < n*k;count++){
            MinHeapNode root = hp.getMin();
            res.push_back(root.element);
            if(root.j < n){
                root.element = arr[root.i][root.j];
                root.j++;
            }
            else root.element = INT_MAX;
            hp.replaceMin(root);
        }
        return res;
    }
    MinHeap::MinHeap(MinHeapNode a[], int size){
        heap_size = size;
        harr = a;
        int i = (heap_size - 1)/2;
        while(i >= 0){
            MinHeapify(i--);
        }
    }
    void MinHeap::MinHeapify(int i){
        int l = left(i);
        int r = right(i);
        int smallest = i;
        if(l < heap_size && harr[l].element < harr[i].element)
            smallest = l;
        if(r < heap_size && harr[r].element < harr[smallest].element)
            smallest = r;
        if(smallest != i){
            swap(harr[i], harr[smallest]);
            MinHeapify(smallest);
        }
    }
};