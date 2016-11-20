//
// Created by Priyank Vora on 10/24/16.
//

#include <iostream>

using namespace std;

int FindFactorial(int no)
{
  if (no == 0)
    return 1;
  return no*FindFactorial(no-1);
}


int main()
{
  cout << "Enter No : ";
  int no;
  cin >> no;
  int result = FindFactorial(no);
  cout << "Factorial is : " << result << endl;
  return 0;
 }