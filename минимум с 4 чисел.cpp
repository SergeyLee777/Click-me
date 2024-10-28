#include <iostream>
using namespace std;
int findmin1(int x, int y){
	return min(x,y);
}
int findmin(int a, int b, int c, int d){
	return findmin1 (findmin1(a,b), findmin1(c,d));

}
int main ()
{
	int a, b, c, d; 
	cin >> a>> b>> c>> d;
	cout << findmin(a,b,c,d);
	return 0;

}
