//
// Created by Priyank Vora on 10/4/16.
//

#include <iostream>
#include <algorithm>

using namespace std;

bool find_elements(int array[], int x, int size)
{
  int l,r;
  sort(array, array+size);

  l = 0;
  r = size-1;
  while(l<r)
  {
    if((array[l]+array[r]) == x)
    {
      return 1;
    }
    else if((array[l]+array[r]) < x)
    {
      l++;
    }
    else
    {
      r--;
    }
  }
  return 0;
}

int main()
{
  int array[] = {2,5,7,4,8};
  int n = 35;
  int size = sizeof(array)/ sizeof(array[0]);
  if(find_elements(array, n, size))
    cout << "Found" << endl;
  else
    cout << "Not Found" << endl;
  return 0;
}
