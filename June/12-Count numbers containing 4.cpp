class Solution {
  public:
    int countNumberswith4(int n) {
        int count = 0;
    for (int i = 1; i <= n; ++i) {
        if (containsDigitFour(i)) {
            count++;
        }
    }
    return count;
        
    }
    bool containsDigitFour(int num) {
    string str = to_string(num);
    return str.find('4') != string::npos;
}
};

