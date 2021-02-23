#include<iostream>
#include<fstream>
using namespace std;


int main(void)
{

	string myText;

	ifstream MyReadFile("a_example");


	while(getline(MyReadFile,myText)) {
		
		cout << myText << endl;
	}

	MyReadFile.close();


	return 0;
}
