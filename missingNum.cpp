// solution 1
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int currentSum = 0;
        int missingNum;
        int n = nums.size();
        int expectedSum = n * (n + 1) / 2;

        for (int i = 0; i < n; i++)
        {
            currentSum += nums[i];
        }
        missingNum = expectedSum - currentSum;
        return missingNum;
    }
};

// solution 2
sort(nums.begin(), nums.end());
int missingNum;
int n = nums.size();
if (find(nums.begin(), nums.end(), 0) == nums.end())
{
    return 0;
}

for (int i = 0; i < n; i++)
{
    if (nums[i] != i)
    {
        return missingNum = i;
    }
}
return n;
}