class Solution
{
    public:
    string orderlyQueue(string S, int k)
    {
        if (k > 1){
            sort(S.begin(), S.end());
            return S;
        } 


        if (k == 1)
        {
            deque<char> s(begin(S), end(S));
            auto mn = s;
            for (auto i = 1; i < S.size(); ++i)
                s.push_back(s[0]), s.pop_front(), mn = min(mn, s);
            s.clear();
            return string(begin(mn), end(mn));
        }
        return S;
    }
};