class Solution {
public:
    bool isAnagram(string s, string t) {
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int s1=s.length();
        int s2=t.length();
        
        
        if(s==t)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};