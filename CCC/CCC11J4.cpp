#include <iostream>
using namespace std;

int main () {
	bool wellPlan[401][200];
	for (int i = 0; i < 401; ++i){
	  for (int k = 0; k < 200; ++k){
	    wellPlan[i][k] = false;
	  }
	}
  wellPlan[201][0] = true;
  wellPlan[201][1] = true;
  wellPlan[201][2] = true;
  wellPlan[202][2] = true;
  wellPlan[203][2] = true;
  wellPlan[204][2] = true;
  wellPlan[204][3] = true;
  wellPlan[204][4] = true;
  wellPlan[205][4] = true;
  wellPlan[206][4] = true;
  wellPlan[206][3] = true;
  wellPlan[206][2] = true;
  wellPlan[207][2] = true;
  wellPlan[208][2] = true;
  wellPlan[208][3] = true;
  wellPlan[208][4] = true;
  wellPlan[208][5] = true;
  wellPlan[208][6] = true;
  wellPlan[207][6] = true;
  wellPlan[206][6] = true;
  wellPlan[205][6] = true;
  wellPlan[204][6] = true;
  wellPlan[203][6] = true;
  wellPlan[202][6] = true;
  wellPlan[201][6] = true;
  wellPlan[200][6] = true;
  wellPlan[200][5] = true;
  wellPlan[200][4] = true;
  int position[2] = {200, 4};
  char direction;
  int dist = 0;
  bool check = false;
  while (direction != 'q' && check != true){
    cin >> direction >> dist;
    
    // Left; Test [200][4]
    if (direction == 'l'){
      position[0] = position[0] - dist;
      int i = position[0];
      if (wellPlan[i][position[1]] == true){
        cout << "DANGER" << endl;
        check == true;
        break;
      }
      else
        cout << position[0] - 201 << " " << position[1] - 9 << " safe" << endl; 
    }
    
    // Down; Test [198][4]
    if (direction == 'd'){
      position[1] = position[1] - dist;
      int j = position[1];
      if (wellPlan[position[0]][j] == true){
        cout << "DANGER" << endl;
        check == true;
        break;
      }
      else
        cout << position[0] - 201 << " " << position[1] - 9 << " safe" << endl; 
    }
    
    // Right; Test [198][2]
    if (direction == 'r'){
      position[0] = position[0] + dist;
      int k = position[0];
      if (wellPlan[k][position[1]] == true){
        cout << "DANGER" << endl;
        check == true;
        break;
      }
      else
        cout << position[0] - 201 << " " << position[1] - 9 << " safe" << endl; 
    }
    
    // Up
    if (direction == 'u'){
      position[1] = position[1] + dist;
      int m = position[0];
      if (wellPlan[position[0]][m] == true){
        cout << "DANGER" << endl;
        check == true;
        break;
      }
      else
        cout << position[0] - 201 << " " << position[1] - 9 << " safe" << endl; 
    }
    
  }
	return 0;
}