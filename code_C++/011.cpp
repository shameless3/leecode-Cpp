class Solution {
public:
    int maxArea(vector<int>& height) {
        int result=0;
        int area;
        int len = height.size()-1;
        for(int i=0;i<len;){
            area = (len-i)*min(height[len],height[i]);
            if(area>result){
                result=area;
            }
            if(height[len]>height[i]){
                i++;
            }
            else{
                len--;
            }
        }
        return result;
    }
};
