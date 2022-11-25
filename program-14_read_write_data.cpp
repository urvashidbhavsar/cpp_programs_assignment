using namespace std;
#include<iostream>
#include<bits/stdc++.h>  

int main()
{  
  ifstream in("file1.txt");
  ofstream f("file2.txt");
      
  while(!in.eof())
  {
    string text;
    getline(in, text);
    f << text << endl;
  }
  return 0;
}
