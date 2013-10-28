/*
ID: yanjiah3
PROG: ride
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int to_number(string s)
{
  int ret = 1;
  for(int i = 0; s[i]; ++i)
    ret = ret * (s[i] - 'A' + 1);
  return ret;
}

int main()
{
  ofstream fout ("ride.out");
  ifstream fin ("ride.in");
  
  string a, b;
  fin >> a >> b;

  if( (to_number(a) - to_number(b)) % 47 == 0 ){
    fout << "GO" << endl;
  }else{
    fout << "STAY" << endl;
  }
  return 0;
}
