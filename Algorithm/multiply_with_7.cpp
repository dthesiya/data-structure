//
// Created by Priyank Vora on 10/10/16.
//

// do left shift 3 times and then substract that number from that.

#include <iostream>

using namespace std;

int MultiplyWith7(int n)
{
  int result = (n<<3) - n;
  return result;
}


int main()
{
  int n;
  cout << "Please enter no: ";
  cin >> n;
  int result = MultiplyWith7(n);
  cout << "Ans is : " << result << endl;
  return 0;
}