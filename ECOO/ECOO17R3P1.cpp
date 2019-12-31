#include <iostream>
using namespace std;

  int main () {
    for(int i = 0; i <= 9; ++i){
    int fcolumns;
    int drows;
    int sum = 0;
    int sum2 = 0;
    int counter = 0;
    int counter2 = 0;
    cin >> fcolumns >> drows;
    int **matrix;
    matrix=new int*[drows]; 
	  for(int i=0; i<drows; ++i)
	    matrix[i]= new int[fcolumns];
	  for ( int i= 0; i<drows; i++){
		  for ( int j=0; j<fcolumns; j++){
		    cin>>matrix[i][j];
		  }
}
    for (int i = 0; i < drows; ++i){
      for (int j = 0; j < fcolumns; ++j){
        sum = sum + matrix[i][j];
        }
        if (sum % 13 == 0){
          counter = counter + sum/13;
        }
        sum = 0;
      }
      
    
    for (int i = 0; i < fcolumns; ++i){
      
      for (int j = 0; j < drows; ++j){
        sum2 = sum2 + matrix[j][i];
        }
        if (sum2 % 13 == 0){
        counter2 = counter2 + sum2/13;
      }
      sum2 = 0;
    }

    cout << counter + counter2 << endl;
    }
    return 0;
  }