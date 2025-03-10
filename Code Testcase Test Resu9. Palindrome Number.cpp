class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        if(x/10==0){
            return true;
        }
        int length=0;
        int xlength=x;
        while(xlength!=0){
            length++;
            xlength=xlength/10;
        }
        for(int i=1;i<length;i++){
            long long int c=pow(10,length-i);
            long long int a=x/c%10;
            long long int d=pow(10,i-1);
            long long int b=x/d%10;
            if(a!=b){
                return false;
            }

        }
    return true;} 
};
