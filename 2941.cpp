#include <iostream>
#include <string>
using namespace std;

int main(){
  string arr[8] = {"c=","c-","dz=","d-","lj","nj","s=","z="};
  string input;
  cin >> input;
  int cnt=0;
  for(int i=0; i<8; i++){
    if(text.find(arr[i])!=string::npos) cnt++;
  }
  cout << cnt;
  return 0;
}
