class Solution {
public:
    int myAtoi(string str) {
        int len=str.length();
        int result=0,sign=1;
        int i,temp;
        for(i=0;i<len;i++){
            if(str[i]>='0'&&str[i]<='9'){
                break;
            }
            if(str[i]==' '){
                continue;
            }
            else if(str[i]=='+'){
                sign=1;
                i++;
                break;
            }
            else if(str[i]=='-'){
                sign=0;
                i++;
                break;
            }
            else{
                return 0;
            }
        }
        if(!(str[i]>='0'&&str[i]<='9'))
            return 0;
        for(;i<len;i++){
            if(!(str[i]>='0'&&str[i]<='9'))
                return result;
            temp = str[i]-'0';
            if(sign){
                if(result>INT_MAX/10||(result==INT_MAX/10&&temp>7)) return INT_MAX;
                result=result*10+temp;
            }
            else{
                if(result<INT_MIN/10||(result==INT_MIN/10&&temp>8)) return INT_MIN;
                result=result*10-temp;
            }
        }
        return result;
    }
};
