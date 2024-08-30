class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        // code here
        sort(arr.begin(),arr.end());
        long long minval=arr[0];
        long long maxval=arr[arr.size()-1];
        return make_pair(minval,maxval);
    }
};
