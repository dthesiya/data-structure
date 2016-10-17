//
// Created by Priyank Vora on 10/4/16.
//

#include <iostream>

using namespace std;

void Find_two_missing_elements(int array[], int n)
{
  int XOR,i;
  for(i=0; i<n-2; i++)
  {
    XOR ^= array[i];
  }
  for (i=1; i<=n; i++)
  {
    XOR ^= i;
  }
  int set_bit = XOR & ~(XOR - 1);

  int x=0,y=0;
  for (i = 0; i<n-2; i++)
  {
    if (array[i] & set_bit)
      x ^= array[i];
    else
      y ^= array[i];
  }

  for (i=1; i<=n; i++)
  {
    if (i & set_bit)
      x ^= i;
    else
      y ^= i;
  }

  cout << "Missing Number is :" << x << " and " << y << endl;
}

int main()
{
  int array[] = {1,3,5,6};
  int n = 2 + (sizeof(array)/ sizeof(array[0]));
  Find_two_missing_elements(array, n);
  return 0;
}