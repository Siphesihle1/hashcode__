#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>

using namespace std;

int getsum(vector<int> v)
{
	int psum = 0;
	for (int i : v)
	{
		psum += i;
	}
	return psum;
}

vector<int> sumfunc(vector<int>ipt,int target)
{
	
	vector<int>final;
	
	if (getsum(ipt) < target) return ipt;

	for(int findex = 0; findex < ipt.size(); findex++)
	{
		for (int sindex = findex + 1; sindex < ipt.size(); sindex++)
		{
			int sum = ipt[findex];
			final.push_back(ipt[findex]);
			for (int j = sindex; j < ipt.size(); j++)
			{
				if(sum < target)
				{
					sum += ipt[j];
					final.push_back(ipt[j]);

				}
				else if (sum > target)
				{
					final.erase(final.begin(), final.begin() + final.size());
					sum = 0;
					break;

				}
				else
				{
					return final;
				}

			}
		}

	}
	return {};
}






int main(void)
{
	int sum;
	vector<int> v = {2, 2, 3, 3, 3, 4};
	vector<int> v2;
	cout << "Enter sum" << endl;
	cin>>sum;

	v2 = sumfunc(v, sum);

	for (size_t i = 0; i < v2.size(); i++) 
	{
		cout << v2[i] << endl;
	}

	return 0;
}
