#include <iostream>

using namespace std;

int main()
{
  string word;
  int vowles=0;
  int consonents=1;
  cout<<"Enter any word"<<endl;
  getline(cin,word);
  for(int i=1;i<5;i++){
    if(word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U'||word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
        vowles++;}
    else{consonents++;}}
    cout<<"The number of vowels in your word  is: "<<vowles<<endl;
    cout<<"The number of consonents in your word is: "<<consonents<<endl;

    return 0;
}
