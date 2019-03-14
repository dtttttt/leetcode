class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     if (nums.empty())
	{
		return 0;
	}
	vector<int>::iterator iter = nums.begin();
	for (vector<int>::iterator it = nums.begin(); it != nums.end();it++)
	{
		if (*it!=val)
		{
			*iter = *it;
			iter++;
		}
	}
	return iter - nums.begin();
    }
};