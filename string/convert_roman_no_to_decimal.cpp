//
// Created by Priyank Vora on 1/23/17.
//

#include <iostream>

using namespace std;

int convert(char r)
{
  if (r == 'I')
    return 1;
  if (r == 'V')
    return 5;
  if (r == 'X')
    return 10;
  if (r == 'L')
    return 50;
  if (r == 'C')
    return 100;
  if (r == 'D')
    return 500;
  if (r == 'M')
    return 1000;
  return -1;
}


int convert_to_decimal(string roman)
{
  int res = 0;

  for(int i=0; i<roman.size(); i++)
  {
    int s1 = convert(roman[i]);

    if(i+1 < roman.size())
    {
      int s2 = convert(roman[i+1]);
      if(s1 >= s2)
        res = res + s1;
      else
      {
        res = res + s2 - s1;
        i++;
      }
    }
    else
    {
      res = res + s1;
      i++;
    }
  }
  return res;
}


int main()
{
  string ro_no = "MCMIV";
  cout << convert_to_decimal(ro_no);
  return 0;
}