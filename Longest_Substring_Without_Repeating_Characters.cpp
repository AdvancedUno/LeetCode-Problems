class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int iPointer1 = 0;
        int iPointer2 = 0;


        if (s.length() < 1) {
            return 0;
        }
        if (s.length() < 2) {
            return 1;
        }




        int iContainerPosition[128] = { 0, };
        for (int i = 0; i < 128; i++) {
            iContainerPosition[i] = -1;
        }
        int iMaxLen = 0;




        while (iPointer2 < s.length()) {
            if (iContainerPosition[int(s[iPointer2])] >= iPointer2 || iContainerPosition[int(s[iPointer2])] < iPointer1)
            {

                iContainerPosition[int(s[iPointer2])] = iPointer2;
                if (iPointer2 - iPointer1 > iMaxLen) {
                    iMaxLen = iPointer2 - iPointer1;
                }
                iPointer2++;
            }
            else if (iContainerPosition[int(s[iPointer2])] < iPointer2 && iContainerPosition[int(s[iPointer2])] >= iPointer1)
            {
                iPointer1 = iContainerPosition[int(s[iPointer2])] + 1;

                iContainerPosition[int(s[iPointer2])] = iPointer2;

                if (iPointer2 - iPointer1 > iMaxLen) {
                    iMaxLen = iPointer2 - iPointer1;
                }

                iPointer2++;
            }

        }
        return iMaxLen + 1;


    }
};