class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int i = 0;
        int j = numbers.size() - 1;
        vector<int> v;
        int sum = 0;
        while (i < j)
        {
            sum = numbers[i] + numbers[j];
            if (sum > target)
            {
                j--;
            }
            else if (sum < target)
            {
                i++;
            }
            else
            {
                v.push_back(i + 1);
                v.push_back(j + 1);
                break;
            }
        }
        return v;
    }
};