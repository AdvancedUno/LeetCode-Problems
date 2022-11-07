class Solution
{
    public:
    int maximum69Number(int num)
    {

        int resultNum = num;

        int div = 10000;
        

        while (true)
        {
            num = num / div;

            
            if (num == 0)
            {
                num = resultNum;
                div = div / 10;
            }
            else if(num == 6)
            {
                resultNum += div * 3;
                return resultNum;
            }
            else{
                num = resultNum % div;
                div = div / 10;
            }
            
            
            if(div == 0)
            {
                return resultNum;
            }
        }
    }
};