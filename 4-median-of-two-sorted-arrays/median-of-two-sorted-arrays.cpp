class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) { // O(log(min(m, n)))
        if (nums1.size() > nums2.size()) return findMedianSortedArrays(nums2, nums1);
        int m = nums1.size(), n = nums2.size();
        int l = 0, r = m;
        while (l <= r) {
            int i = (r - l) / 2 + l, j = (m + n + 1) / 2 - i;
            if (i < r && nums1[i] < nums2[j - 1]) l = i + 1;
            else if (i > l && nums1[i - 1] > nums2[j]) r = i - 1;
            else {
                int leftMax = 0;
                if (i == 0) leftMax = nums2[j - 1];
                else if (j == 0) leftMax = nums1[i - 1];
                else leftMax = max(nums1[i - 1], nums2[j - 1]);
                if ((m + n) % 2 == 1) return leftMax;
                int rightMin = 0;
                if (i == m) rightMin = nums2[j];
                else if (j == n) rightMin = nums1[i];
                else rightMin = min(nums1[i], nums2[j]);
                return (leftMax + rightMin) / 2.0;
            }
        }
        return 0.0;
    }
};