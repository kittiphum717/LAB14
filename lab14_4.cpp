#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int x[] = {1000,500,100,50};
	int r,temp;
	int y[4];
	for(int i = 0;i < 4;i++){
		r = rand()%(4-i);
		y[i] = x[r];
		temp = x[3-i];
		x[3-i] = x[r];
		x[r] = temp;
	}
	a = y[0];
	b = y[1];
	c = y[2];
	d = y[3];
}

