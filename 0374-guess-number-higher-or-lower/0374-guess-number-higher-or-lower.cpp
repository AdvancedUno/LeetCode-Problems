/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        int cntNum = n/2;
        
        int side = 1;
        
        int highBound = n;
        int lowBound = 0;
        
        while(side != 0){
            side = guess(cntNum);
            if(side > 0){
                lowBound = cntNum;
                cntNum += (highBound - cntNum+1)/2;
            }
            else if(side < 0){
                highBound = cntNum;
                cntNum -= (cntNum - lowBound +1)/2;
                
            }
        }
        return cntNum;
        
    }
};