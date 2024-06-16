
class Solution
{

public:
    bool isPrefixAndSuffix(string a, string b)
    {
        int l1 = a.size();
        int l2 = b.size() ;
        if(l1>l2){
            return 0;
        }
l2=l2-1;

        for (int i = 0, j = l2, k = l1 - 1; i < l1 && j >= 0; i++, j--, k--)
        {
            if (a[i] != b[i])
            {
                return 0;
            }
            if (a[k] != b[j])
            {
                return 0;
            }
        }
        return 1;
    }

    int countPrefixSuffixPairs(vector<string> &words)
    {
        int w = words.size();
        int count = 0;
        int i = 0;
        int j = 1;
        for (int i = 0; i < w; i++)
        {
            for (int j = 1; j < w; j++)
            {
                if (isPrefixAndSuffix(words[i], words[j]) && i < j)
                {
                    count++;

                }
            
            }
        }

        return count;
    }
};