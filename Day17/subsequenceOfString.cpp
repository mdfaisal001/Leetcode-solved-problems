#include <bits/stdc++.h>
#include <vector>
#include <string>
void subseqHelper(int index, string current, vector<string> &result, string str, int n)
{
    if (index >= n)
    {
        if (!current.empty())
        {
            result.push_back(current);
        }
        return;
    }

    subseqHelper(index + 1, current + str[index], result, str, n);
    subseqHelper(index + 1, current, result, str, n);
}

vector<string> subsequences(string str)
{
    int n = str.size();
    vector<string> result;

    subseqHelper(0, "", result, str, n);
    return result;
}

#include <bits/stdc++.h>
#include <algorithm>
#include <string>

vector<string> subsequences(string str)
{
    int n = str.size();
    int total = 1 << n;
    vector<string> result;

    for (int bit = 1; bit < total; bit++)
    {
        string newSubseq = "";
        for (int i = 0; i < n; i++)
        {
            if (bit & (1 << i))
            {
                newSubseq += str[i];
            }
        }
        result.push_back(newSubseq);
    }
    return result;
}
