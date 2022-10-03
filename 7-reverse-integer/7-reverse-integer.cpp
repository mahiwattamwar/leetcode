class Solution {
public:
    int reverse(int x) {
        
              int num = x;
        int newNum = 0;
        int rem =0;
        
            while(num!=0){
                 rem = num % 10;
                if( (newNum > INT_MAX/10) || (newNum <INT_MIN/10)){
                return 0;
            } 
                newNum = newNum * 10;
                newNum += rem;
               
                num = num / 10;
            }
            
        
    return newNum;
        
        
    }
};