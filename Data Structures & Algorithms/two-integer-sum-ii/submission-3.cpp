class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for (int i = 0; i < numbers.size(); i++) {
            int l = i+1, r=numbers.size()-1;
            while(l<=r){
            int mid = l+(r-l)/2;
            if(numbers[i]+numbers[mid]==target)
            return {i+1,mid+1};
            if(numbers[i]+numbers[mid]<target)
            l=mid+1;
            else
            r=mid-1;
            }
        }
        return {};
    }
};