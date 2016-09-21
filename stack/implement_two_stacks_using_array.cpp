//
// Created by Priyank Vora on 9/20/16.
//

/*The structure of the class is
class twoStacks
{
    int *arr;
    int size;
    int top1, top2;
public:
   twoStacks(int n=100){size = n; arr = new int[n]; top1 = -1; top2 = size;}

   void push1(int x);
   void push2(int x);
   int pop1();
   int pop2();
};
*/


/* The method push to push element into the stack 2 */
void twoStacks :: push1(int x)
{
  top1 += 1;
  *(arr+top1) = x;
}

/* The method push to push element into the stack 2*/
void twoStacks ::push2(int x)
{
  top2 -= 1;
  *(arr+top2) = x;

}

/* The method pop to pop element from the stack 1 */
int twoStacks ::pop1()
{
  if (top1 == -1)
  {
    return -1;
  }
  int x = *(arr+top1);
  top1 -= 1;
  return x;
}

/* The method pop to pop element from the stack 2 */
int twoStacks :: pop2()
{
  if (top2 == size)
  {
    return -1;
  }
  int x = *(arr+top2);
  top2 += 1;
  return x;
}