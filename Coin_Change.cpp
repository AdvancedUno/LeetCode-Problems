//https://leetcode.com/problems/coin-change/


class Solution {
public:
    int ans;
    vector<int> save = vector<int>(10001, -1);
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(), coins.end());
        
        solve(coins, amount, 0);
        return save[0];
    }

    int solve(vector<int>& coins, int amount, int cnt) {

        if (amount < 0) {
            return 0;
        }
        if(save[amount] > -1){
            if(save[amount] > cnt){
                save[amount] = cnt;
            }else{
                return 0;
            }
        }
        
        save[amount] = cnt;
        if (amount == 0) {
            return 0;
        }
        for (int i = coins.size() - 1; i >= 0; i--) {
            if (coins[i] <= amount) {
                amount = amount - coins[i];
                solve(coins, amount, cnt + 1);
                amount = amount + coins[i];
            }
        }


        return 0;
    }
};
