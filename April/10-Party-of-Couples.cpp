class Solution{
    public:
    int findSingle(int n, int arr[]){
        // code here
        int xorSum = 0;
        for(int i=0; i<n; i++) {
            xorSum ^= arr[i];
        }
        return xorSum;
    }
};
