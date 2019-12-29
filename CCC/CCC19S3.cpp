#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

int main() {
  vector <int> row1;
  vector <int> row2;
  vector <int> row3;
  for (int i = 0; i < 3; ++i)
  {
    string temp;
    cin >> temp;
    if (temp == "X")
      row1.push_back(0);
    else
    {
      int lol = std::stoi(temp);
      row1.push_back(lol);
    }
  }
  for (int i = 0; i < 3; ++i)
  {
    string temp;
    cin >> temp;
    if (temp == "X")
      row2.push_back(0);
    else
    {
      int lol = std::stoi(temp);
      row2.push_back(lol);
    }
  }
  for (int i = 0; i < 3; ++i)
  {
    string temp;
    cin >> temp;
    if (temp == "X")
      row3.push_back(0);
    else
    {
      int lol = std::stoi(temp);
      row3.push_back(lol);
    }
  }
  int xcount1 = 0;
  int xcount2 = 0;
  int xcount3 = 0;
  int ycount1 = 0;
  int ycount2 = 0;
  int ycount3 = 0;
  for (int i = 0; i < 3; ++i)
  {
    if (row1[i] == 0)
      ++xcount1;
    if (row2[i] == 0)
      ++xcount2;
    if (row3[i] == 0)
      ++xcount3;
  }
  if (row1[0] == 0)
      ++ycount1;
  if (row2[0] == 0)
      ++ycount1;
  if (row3[0] == 0)
      ++ycount1;

  if (row1[1] == 0)
      ++ycount2;
  if (row2[1] == 0)
      ++ycount2;
  if (row3[1] == 0)
      ++ycount2;

  if (row1[2] == 0)
      ++ycount3;
  if (row2[2] == 0)
      ++ycount3;
  if (row3[2] == 0)
      ++ycount3;

  if (row1[0] == 0 && xcount1 == 1)
  {
    row1[0] = row1[1] - (row1[2] - row1[1]);
  }
  if (row1[1] == 0 && xcount1 == 1)
  {
    row1[1] = (row1[0] + row1[2])/2;
  }
  if (row1[2] == 0 && xcount1 == 1)
  {
    row1[2] = row1[1] + (row1[1] - row1[0]);
  }

  if (row2[0] == 0 && xcount2 == 1)
  {
    row2[0] = row2[1] - (row2[2] - row2[1]);
  }
  if (row2[1] == 0 && xcount2 == 1)
  {
    row2[1] = (row2[0] + row2[2])/2;
  }
  if (row2[2] == 0 && xcount2 == 1)
  {
    row2[2] = row2[1] + (row2[1] - row2[0]);
  }

  if (row3[0] == 0 && xcount3 == 1)
  {
    row3[0] = row3[1] - (row3[2] - row3[1]);
  }
  if (row3[1] == 0 && xcount3 == 1)
  {
    row3[1] = (row3[0] + row3[2])/2;
  }
  if (row3[2] == 0 && xcount3 == 1)
  {
    row3[2] = row3[1] + (row3[1] - row3[0]);
  }

  if (row1[0] == 0 && ycount1 == 1)
  {
    row1[0] = row2[0] - (row3[0] - row2[0]);
  }
  if (row2[0] == 0 && ycount1 == 1)
  {
    row2[0] = (row1[0] + row3[0])/2;
  }
  if (row3[0] == 0 && ycount1 == 1)
  {
    row3[0] = row2[0] + (row2[0] - row1[0]);
  }

  if (row1[1] == 0 && ycount1 == 1)
  {
    row1[1] = row2[1] - (row3[1] - row2[1]);
  }
  if (row2[1] == 0 && ycount1 == 1)
  {
    row2[1] = (row1[1] + row3[1])/2;
  }
  if (row3[1] == 0 && ycount1 == 1)
  {
    row3[1] = row2[1] + (row2[1] - row1[1]);
  }

  if (row1[2] == 0 && ycount1 == 1)
  {
    row1[2] = row2[2] - (row3[2] - row2[2]);
  }
  if (row2[2] == 0 && ycount1 == 1)
  {
    row2[2] = (row1[2] + row3[2])/2;
  }
  if (row3[2] == 0 && ycount1 == 1)
  {
    row3[2] = row2[2] + (row2[2] - row1[2]);
  }

  for (int i = 0; i < 3; ++i)
  {
    cout << row1[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < 3; ++i)
  {
    cout << row2[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < 3; ++i)
  {
    cout << row3[i] << " ";
  }
}