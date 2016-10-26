//
// Created by Priyank Vora on 10/25/16.
//

#include <iostream>
#include <unordered_map>

using namespace std;

void PrintIternary(unordered_map<string,string> dataset)
{
  unordered_map<string,string> reversedata;
  unordered_map<string,string>::iterator it;

  for(it = dataset.begin(); it!=dataset.end(); it++)
  {
    reversedata[it->second] = it->first;
  }

  string start;
  for(it = dataset.begin(); it!=dataset.end(); it++)
  {
    if (reversedata.find(it->first) == reversedata.end())
    {
      start = it->first;
      break;
    }
  }

  it = dataset.find(start);
  while(it != dataset.end())
  {
    cout << it->first << "-->" << it->second << endl;
    it = dataset.find(it->second);
  }
}


int main()
{
  unordered_map<string,string> dataset;
  dataset["chennai"] = "banglore";
  dataset["bombay"] = "delhi";
  dataset["goa"] = "chennai";
  dataset["delhi"] = "goa";
  PrintIternary(dataset);
  return 0;
}