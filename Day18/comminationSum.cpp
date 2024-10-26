class Solution
{
private:
    void findCombinationSum(int index, vector<int> &candidates, int target, vector<int> &commination, vector<vector<int>> &result)
    {
        if (index == candidates.size())
        {
            if (target == 0)
            {
                result.push_back(commination);
            }
            return;
        }
        if (candidates[index] <= target)
        {
            commination.push_back(candidates[index]);
            findCombinationSum(index, candidates, target - candidates[index], commination, result);
            commination.pop_back();
        }
        findCombinationSum(index + 1, candidates, target, commination, result);
    }

public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<int> commination;
        vector<vector<int>> result;
        findCombinationSum(0, candidates, target, commination, result);
        return result;
    }
};