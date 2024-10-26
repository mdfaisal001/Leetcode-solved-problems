class Solution
{
private:
    void getCombinationSum(int index, int n, int k, vector<int> &array, vector<int> &combination, vector<vector<int>> &result)
    {
        if (n == 0)
        {
            if (combination.size() == k)
            {
                result.push_back(combination);
                return;
            }
        }

        for (int i = index; i < array.size(); i++)
        {
            if (i > index && array[i] == array[i - 1])
                continue;
            if (array[i] > n)
                break;
            combination.push_back(array[i]);
            getCombinationSum(i + 1, n - array[i], k, array, combination, result);
            combination.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<int> array = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<int> combination;
        vector<vector<int>> result;
        getCombinationSum(0, n, k, array, combination, result);
        return result;
    }
};