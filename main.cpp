#include <iostream>

using namespace std;

int main() {
  int size;
  cout << "Enter size matrix: ";
  cin >> size;
  int** arr = new int* [size];
  int temp = 0;


  for (int i = 0; i < size; i++)
  {
    arr[i] = new int[size];
  }

  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      cin >> arr[i][j];
    }
    cout << "\n" << endl;
  }
  for (int i = 0; i < size; i++)
  {
    for (int j = 0; j < size; j++)
    {
      cout << arr[i][j];
    }
    cout << "\n" << endl;

  }

  for (int i = 0; i < size-1; i++)
  {
    for (int j = 0; j < size-i-1; j++)
    {
      if (arr[i][j]!=arr[size-j-1][size-i-1])
      {
        temp++;
      }
    }
  }
  if (temp > 0) {
    cout << "matrix is not symmetrical" << endl;
  }
  else {
    cout << "matrix is symmetrical" << endl;
  }

  for (int i = 0; i < size; i++)
  {
    delete[] arr[i];
  }
  delete[] arr;

  return 0;
}
