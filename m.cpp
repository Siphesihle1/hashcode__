#include<iostream>
  #include<fstream>
  #include<vector>
  #include<sstream>
  using namespace std;


  int main(void){

  

  string myText = " ";
  string file;

  ifstream MyReadFile("a_example.txt");


    while(getline(MyReadFile,file)){
      myText = myText+file;
      stringstream s(str);
      string word;
      



    }

    MyReadFile.close();

    cout<<myText<<endl;


  return 0;
  }

