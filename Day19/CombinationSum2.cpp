class Solution
{
private:
    void getCombinationSum(int index, int target, vector<int> &array, vector<vector<int>> &result, vector<int> &combination)
    {
        if (target == 0)
        {
            result.push_back(combination);
            return;
        }
        for (int i = index; i < array.size(); i++)
        {
            if (i > index && array[i] == array[i - 1])
                continue;
            if (array[i] > target)
                break;
            combination.push_back(array[i]);
            getCombinationSum(i + 1, target - array[i], array, result, combination);
            combination.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<vector<int>> result;
        vector<int> combination;
        sort(candidates.begin(), candidates.end());
        getCombinationSum(0, target, candidates, result, combination);
        return result;
    }
};