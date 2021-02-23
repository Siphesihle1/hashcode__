#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>
using namespace std;


int main(void){

	string myText = " ";
	string line;
	vector<int> input;
	vector<int> teams;
	vector<vector<string>> pizzas;

	ifstream MyReadFile("a_example");

	getline(MyReadFile, line);

	stringstream s(line);

	int n;

	while (s>>n) 
	{
		input.push_back(n);
	}
	
	for (int i = 0; i < input[0]; i++)
	{
		getline(MyReadFile, line);
		stringstream s(line);
		string token;
		vector<string> ingr;
		int n;

		s >> n;

		while (getline(s, token, ' '))
		{
			ingr.push_back(token);
		}
		pizzas.push_back(ingr);
	}

	MyReadFile.close();


	for (vector<string> pizza : pizzas)
	{
		for (string ingr : pizza)
		{
			cout << ingr << ' ';
		}
		cout << endl;
	}

	return 0;
}

