/*
ID: yanjiah3
PROG: gift1
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

struct person
{
  string name;
  int init;
  int now;
};

int get_index(person *p, int len, string name)
{
  for(int i = 0; i < len; ++i)
    if(p[i].name == name)
      return i;
  return -1;
}

int main()
{
  ofstream fout ("gift1.out");
  ifstream fin ("gift1.in");
  
  int np;
  person p[10];

  fin >> np;
  for(int i = 0; i < np; i++){
    string name;
    fin >> name;
    p[i].name = name;
    p[i].init = p[i].now = 0;
  }

  for(int i = 0; i < np; i++){
    string name;
    int a, b;

    fin >> name;
    fin >> a >> b;
    
    int l = get_index(p, np, name);
    p[l].init = a;
    p[l].now = p[l].now + a;
    
    if(b > 0){
      int each = a / b;
      p[l].now = p[l].now - each * b;

      for(int j = 0; j < b; j++){
	string r;
	fin >> r;
	l = get_index(p, np, r);
	p[l].now = p[l].now + each;
      }
    }
  }

  for(int i = 0; i < np; i++){
    fout << p[i].name << " " << p[i].now - p[i].init << endl;
  }

  return 0;
}

      
    
