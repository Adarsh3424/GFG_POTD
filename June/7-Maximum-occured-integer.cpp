class Solution {
  public:
    // l and r are input array
    // maxx : maximum in r[]
    // n: size of array
    // arr[] : declared globally with size equal to maximum in l[] and r[]
    // Function to find the maximum occurred integer in all ranges.
    int maxOccured(int n, int l[], int r[], int maxx) {
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[l[i]]++;
            m[r[i]+1]--;
        }
        int ans=0;
        int left=0;
        int sum=0;
        for(auto i:m){
            sum+=i.second;
            if(sum>ans){
                left=i.first;
                ans=sum;
            }
        }
        return left;
    }
};
