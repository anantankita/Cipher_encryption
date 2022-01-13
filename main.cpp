#include <iostream>
using namespace std;
string encrypt(string text, int s){
  int i;
  string ans= "";

  for (i=0; i<text.length(); i++){
    if (isupper(text[i])){
      ans+= char(int(text[i] + s - 65) % 26 + 65);
    }
    else{
      ans+= char(int(text[i]+ s - 97) % 26 + 97);
    }
  }
  return ans;
}

int main(){
  string text;
  int s;
  cout<<"Enter your message: ";
  cin>>text;
  cout<<"Enter shift key: ";
  cin>>s;
  cout<<endl<<"Message: "<<text<<endl;
  cout<<"Shift: "<<s<<endl<<endl;
  cout<<"Your encrypted message: "<<encrypt(text, s);
  return 0;
}