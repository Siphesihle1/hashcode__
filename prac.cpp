#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>
using namespace std;

vector<int> sumfunc(vector<int>ipt,int target){
  vector<int>final;
  //first  number we add
  int sindex = 1;
  //first number in the add
  int findex= 0;

  int sum = ipt[findex];

  for(int k = 0;k<ipt.size();k++)
  {
    for (int i = findex; i < ipt.size(); i++)
    {
      for (int j = sindex; j <ipt.size(); j++)
      {
            if(sum<target)
            {
              sum+=ipt[j];
              final.push_back(ipt[j]);
              
            }
            else if(sum >target)
            {
              sindex++;
              final.erase(final.begin(),final.begin()+final.size()-1);
              break;

            }
            else
            {
              return final;
            }

      }
    }

  }


  return final;
}






int main(void)
{
  int sun;
  vector<int> v = {2,2,3,3,3,4};
  vector<int> v2;
  cout<<"ENter SUm"<<endl;
  cin>>sun;

  v2 = sumfunc(v,sun);

  for (size_t i = 0; i< v2.size(); i++) {
    cout<<v2[i]<<endl;

  }






return 0;

}
