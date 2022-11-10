#include <iostream>
#include<algorithm>
using namespace std;

int main() {

  int scores[9];

  cout<<"Enter your eight best scores"<<endl;

  cin>> scores[0];
  cin>> scores[1];
  cin>> scores[2];
  cin>> scores[3];
  cin>> scores[4];
  cin>> scores[5];
  cin>> scores[6];
  cin>> scores[7];
  cin>> scores[8];

  cout<<"Here is your score: "<<endl;
  for(int i = 0; i<9; i++)
    cout<< scores[i] <<endl;
    cout<<endl <<endl;


  sort(scores,scores+9);

  cout<< "Here is your scores in order: "<<endl;
  for (int i=0;i<9;i++)
    cout<<scores[i]<<endl;
  cout<< endl<<endl;

  cout<<"Your top score is: "<<scores[8] <<endl;   

}
