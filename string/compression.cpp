//
// Created by Priyank Vora on 2/9/17.
//

#include <string>
#include<iostream>

using namespace std;

string compression (string text)
{
  int n = text.size();
  string result = "";
  int count = 1;
  for(int i=0; i<n; i++)
  {
    if(text[i] == text[i+1])
    {
      count++;
    }
    else
    {
      if(count > 1)
      {
        result = result + text[i] + to_string(count);
        count = 1;
      }
      else
      {
        result = result + text[i];
        count = 1;
      }

    }
  }
  return result;
}

int main()
{
  string sample = "aaabbcd";
  string result1 = compression(sample);
  cout << result1 << endl;
  return 0;
}