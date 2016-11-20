//
// Created by Priyank Vora on 10/24/16.
//

#include <iostream>

using namespace std;

// for stringr
int main()
{
  char str[] = "vorarov";
  int n = strlen(str);
  int j= n-1,i;
  for (i=0; i<n/2; i++)
  {
    if (str[i] != str[j])
    {
      cout << "not palindrome" << endl;
      break;
    }
    j--;
  }
  if (i == n/2)
    cout << "palindrome" << endl;
  return 0;
}

// for number
int main()
{
  int n = 151;
  int temp = n;
  int sum=0, rem;
  while(n)
  {
    rem = n % 10;
    n = n / 10;
    sum = sum*10 + rem;
  }
  if (temp == sum)
    cout << "Palindrome" << endl;
  else
    cout << "not palindrome" << endl;
  return 0;
}