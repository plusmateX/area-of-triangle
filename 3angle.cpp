#include <iostream> 
#include <cmath>
using namespace std; 
int main() 
{
	int x, y, z;
	double s, v;
	cout << "enter 3 lengh : "; 
	cin >> x >> y >> z; 
	s = (x + y + z) * 0.5; 
	v=sqrt(s* (s - x) * (s - y) * (s - z)) ; 
	cout << "the area's value is : "<< v << endl; 

	return 0;

}
