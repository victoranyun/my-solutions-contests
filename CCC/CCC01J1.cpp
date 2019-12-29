#include<iostream>

using namespace std;

int main() {
  int x = 1;
  int rows;
  int lenght;
  int star_counter = 1;
  int star_limit = 1;
  int star_counter2 = 1;
  int star_limit2;
  int space = 1;
  star_limit2 = rows;
  cin >> rows;
  lenght = 2 * rows - 1;
  int space_limit;
  space_limit = lenght - 1;
  while (x <= rows / 2 + 1) {
    star_counter = 1;
    while (star_counter <= star_limit) {
      cout << "*";
      ++star_counter;
    }
    space = 1;
    while (space <= space_limit) {
      cout << " ";
      ++space;
    }
    star_counter = 1;
    while (star_counter <= star_limit) {
      cout << "*";
      ++star_counter;
    }
    space_limit = space_limit - 4;
    star_limit = star_limit + 2;
    cout << endl;
    ++x;
  }
  int x2;
  space_limit = space_limit + 4;
  star_limit = star_limit - 2;
  x2 = x - 2;
  while (x2 >= 1) {
    star_counter = 1;
    space_limit = space_limit + 4;
    star_limit = star_limit - 2;
    while (star_counter <= star_limit) {
      cout << "*";
      ++star_counter;
    }
    space = 1;
    while (space <= space_limit) {
      cout << " ";
      ++space;
    }
    star_counter = 1;
    while (star_counter <= star_limit) {
      cout << "*";
      ++star_counter;
    }
    cout << endl;
    --x2;
  }
}