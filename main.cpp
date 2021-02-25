#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>
#include<map>
#include<string>
using namespace std;

string cpystr(string source, int start, int end)
{
	string dest;

	for (int i = start; i <= end; i++)
	{
		dest += source[i];
	}

	return dest;
}

//method for gettting frequency
map<string,int> getpizahz(vector<vector<string>>pizzas)
{
	map<string,int>pizzahz;
	string ingr;

	for (vector<string> pizza : pizzas)
	{
		for (string ingr : pizza)
		{
			//pizzahz.insert({pizza,0});
			pizzahz[ingr]++;
		}

	}

	return pizzahz;
}
/*for(vector<string> pizza : pizzas)
  {
  ingr = pizzas

  }

*/

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
	string myText = " ";
	string line;
	vector<int> input;
	vector<int> teams;
	vector<vector<string>> pizzas;
	ifstream MyReadFile("a_example");
	getline(MyReadFile, line);
	stringstream s(line);
	int n;
	int index = 1;
	vector<int>teamNum;

	while (s>>n)
	{
		input.push_back(n);
	}

	for (int i = 0; i < input[0]; i++)
	{
		getline(MyReadFile, line);
		string token;
		vector<string> ingr;
		int n;
		
		line = cpystr(line, 2, line.length() - 1);
		stringstream s(line);

		while (getline(s, token, ' '))
		{
			ingr.push_back(token);
		}
		pizzas.push_back(ingr);
	}

	MyReadFile.close();


	/*for (vector<string> pizza : pizzas)
	  {
	  for (string ingr : pizza)
	  {
	  cout << ingr;
	  }
	  cout << " " << pizza.size();
	  cout << endl;
	  }
	*/

	while (index != 4)
	{

		for(int i = 0; i < input[index]; i++)
		{
			teamNum.push_back(index+1);
		}

		index++;
	}

	/*for (int e=0; e < teamNum.size(); e++)
	  {
	  cout << teamNum[e] << endl;
	  }*/
	/*map<string,int>ans = getpizahz(pizzas);


	for(auto itr = ans.begin();itr != ans.end();++itr ){
		cout << itr->first
			<< '\t' << itr->second << '\n';

	}*/

	return 0;
}
