class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;
        map <int,int> mpp;
        for (int i = 0; i < nums2.size(); i++) {
            mpp[nums2[i]] = -1;
            for (int j = i + 1; j < nums2.size(); j++) {
                if (nums2[j] > nums2[i]) {
                    mpp[nums2[i]] = nums2[j];
                    break;
                }
            }  
        }
        for (int i = 0; i < nums1.size(); i++) {
            ans.push_back(mpp[nums1[i]]);
        }
        return ans;
    }
};