string pattern(vector<vector<int>> &arr) {
        
         string ans = "-1";
        int n = arr.size();
        for(int i = 0; i < n; i++){
            bool flag = true;
            
            int temp1 = 0;
            int temp2 = n-1;
            
            while(temp1 <= temp2){
                if(arr[i][temp1] != arr[i][temp2]){
                    flag = false;
                }
                temp1++;
                temp2--;
            }
            
            if(flag){
                ans.erase();
                ans.append(to_string(i));
                ans.append(" R");
                return ans;
            }
        }
         for(int i = 0; i < n; i++){
            bool flag = true;
            
            int temp1 = 0;
            int temp2 = n-1;
            
            while(temp1 <= temp2){
                if(arr[temp1][i] != arr[temp2][i]){
                    flag = false;
                }
                temp1++;
                temp2--;
            }
            
            if(flag){
                ans.erase();
                ans.append(to_string(i));
                ans.append(" C");
                return ans;
            }
        }
        
        return ans;
