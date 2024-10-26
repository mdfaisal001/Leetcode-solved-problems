class Solution
{
private:
    void getSubSet(int index, vector<int> &nums, vector<int> &container, vector<vector<int>> &result)
    {
        result.push_back(container);

        for (int i = index; i < nums.size(); i++)
        {
            if (i > index && nums[i] == nums[i - 1])
                continue;
            container.push_back(nums[i]);
            getSubSet(i + 1, nums, container, result);
            container.pop_back();
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<int> container;
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        getSubSet(0, nums, container, result);
        return result;
    }
};