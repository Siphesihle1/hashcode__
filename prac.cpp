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

void printvec(vector<int> v)
{
	for (int i : v)
	{
		cout << i << " ";
	}
	cout << endl;
}

vector<int> sumfunc(vector<int>ipt,int target)
{
	
	vector<int>final;
	int sum = 0;

	if (getsum(ipt) < target) return ipt;

	for(int findex = 0; findex < ipt.size(); findex++)
	{
		for (int sindex = findex + 1; sindex < ipt.size(); sindex++)
		{
			sum = ipt[findex];
			final.push_back(ipt[findex]);

			if (sum == target) return final;

			for (int j = sindex; j < ipt.size(); j++)
			{
				sum += ipt[j];
				final.push_back(ipt[j]);

				if (sum > target) break;
				if (sum == target) return final;
			}

			sum = 0;
			final.clear();
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
