class Solution {
  public:
    //Function to find two repeated elements.
    vector<int> twoRepeated (int arr[], int n) {
        // Your code here
         vector<int>res;
        for(int i = 0 ; i < n+2 ; i++){
            if(arr[abs(arr[i])] < 0)
             res.push_back(abs(arr[i]));
             else
              arr[abs(arr[i])] = - arr[abs(arr[i])];
        }
        return res;
    }
};
