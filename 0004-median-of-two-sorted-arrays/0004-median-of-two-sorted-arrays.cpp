class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> nums3;
        for(int i =0; i<nums1.size(); i++)
        {
            nums3.push_back(nums1[i]);
        }
         for(int i =0; i<nums2.size(); i++)
        {
            nums3.push_back(nums2[i]);
        }
        
        int n = sizeof(nums3) / sizeof(nums3[0]);
    
        sort(nums3.begin(), nums3.end());
        
        int low, high;
        low=0;
        high=nums3.size()-1;
        if(nums3.size()%2!=0)
        {
        float mid=(low+high)/2;
            
        return nums3[mid];
        }
        
        else
        {
        int m = nums3.size()/2;
        float c =(nums3[m]+nums3[m-1])/2.0;
            
        return c;
        }
        
        
       
    }
};