class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> hashmap;
        int result=0,start=0;
        int n= s.length();
        for(int i=0;i<n;i++){
            if(hashmap.count(s[i])){
                start=max(start,hashmap[s[i]]);
            }
            hashmap[s[i]]=i+1;
            result=max(result,i-start+1);
        }
        return result;
    }
};
