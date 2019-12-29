#include <iostream>

using namespace std;
	int main()
  {
	int a, b;

	cin >> a;
	cin >> b;

	cout<<"All positions change in year "<<a<<endl;
	while (a<b){
		a = a + 60;
		if(a<=b)
		cout <<"All positions change in year "<<a<<endl;
	}

	return 0;
}