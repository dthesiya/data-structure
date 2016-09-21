//
// Created by Priyank Vora on 9/20/16.
//

#include <iostream>
#define MAX_SIZE 10

using namespace std;

class Queue
{
private:
    int A[MAX_SIZE];
    int front;
    int rear;
public:
    Queue();
    void enqueue(int x);
    void Dequeue();
    bool IsEmpty();
    bool IsFull();
    int Front();
    void print();
};

Queue :: Queue()
{
  front = -1;
  rear = -1;
}

void Queue :: print()
{
  for (int i = front ; i<=rear ; i++)
  {
    cout << A[i] << "\t";
  }
  cout << "\n";
}

bool Queue ::IsEmpty()
{
  if (front == -1 && rear == -1)
    return true;
}

bool Queue ::IsFull()
{
  if (rear == MAX_SIZE-1)
    return true;
}

int Queue :: Front()
{
  if (front == -1)
  {
    cout << "Queue is empty";
    return -1;
  }
  return A[front];
}

void Queue :: enqueue(int x)
{
  if (IsFull())
  {
    cout << "Queue is Full" << "\n";
    return;
  }
  if (IsEmpty())
  {
    front = rear = 0;
  }
  else
  {
    rear += 1;
  }
  A[rear] = x;
}

void Queue :: Dequeue()
{
  if (IsEmpty())
  {
    cout << "Queue is empty" << "\n";
    return;
  }
  else if (front == rear)
  {
    front = rear = -1;
  }
  else
  {
    front += 1;
  }
}

int main()
{
  Queue Q;
  Q.enqueue(5); Q.print();
  Q.enqueue(3); Q.print();
  Q.enqueue(4); Q.print();
  cout << "Front element is : " << Q.Front() << "\n";
  Q.enqueue(1); Q.print();
  Q.Dequeue(); Q.print();
  Q.Dequeue(); Q.print();
  cout << "Front element is : " << Q.Front() << "\n";
  return 0;
}