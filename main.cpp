#include <iostream>
#include <algorithm>
#include "accounts.h"
using namespace std;

void printArray(int[], int);
void sortArrayAsc(int[], int);
int main() 
{
//using built in sort Ascending

cout << "\nStart: " << cpuTime() << endl;
//built-in sort sort(ameOfArray, nameArray+size);
sort(accountBalances, accountBalances+maxAccounts);
printArray(accountBalances, maxAccounts);
//call the sort function 

cout << "\nEnd: " << cpuTime() << endl;
  return 0;
}



void printArray(int arrayVals[], int size)
{
  cout << "\nPrinted values in array" << endl;
  for(int i = 0; i < size; i++)
    {
      cout << arrayVals[i] << ",";

    }
}

