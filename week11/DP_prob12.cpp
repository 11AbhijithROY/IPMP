class SortCriterion
{
public:
bool operator()(vector& a, vector& b) {return a[0] < b[0];}

bool compare(vector<int>& a, vector<int>& b){
    for(int i = 0; i < a.size(); i++)
        if(a[i] >= b[i]) return false;

    return true;
}

};

int solution(vector<vector>& boxes){
int n = boxes.size();
vector lis(n, 1);

SortCriterion check;
sort(boxes.begin(), boxes.end(), check);

for(int i = 1; i < n; i++)
    for(int j = 0; j < i; j++)
        if(check.compare(boxes[j], boxes[i]))
            lis[i] = max(lis[i], lis[j] + 1);

return *max_element(lis.begin(), lis.end());

}