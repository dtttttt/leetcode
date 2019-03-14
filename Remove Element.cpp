class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       	if (nums.empty()||(nums.size()==1&&nums.back()==val))
		return 0;
	std::sort(nums.begin(), nums.end());
	vector<int>::iterator itfirst = find(nums.begin(), nums.end(), val);
	vector<int>::iterator itlast = nums.end();
	for (itlast-=1; itlast != nums.begin(); itlast--)
	{
		if (*itlast==val)
		{
			nums.erase(itfirst, itlast + 1);
			return nums.size();
		}
		
	}
	if (itfirst==nums.begin())
	{
		nums.erase(itfirst, itfirst + 1);
		
	}
	return nums.size();
	
    }
};