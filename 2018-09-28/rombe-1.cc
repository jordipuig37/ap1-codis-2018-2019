#include <iostream>
using namespace std;

int main (){

	int n;
	cin >> n;

	int i = 1;
	int b = 1;
	int x = n-1;

	while (i <= n){

		int p = 0;
		

		while (p <= x){
			
			cout << " ";
			++p;
		}
		
		x=x-1;


		int a = 1;

		while (a <= b){

			cout << "*";

			++a;
	}

	b = b + 2;

		cout << endl;

		++i;
	}

	
	int w = 1;
	b = b-4;
	int r = 2*n-1;

	while (i <= r){

		int q = 0;

		while (q <= w){

			cout << " ";

			++q;

		}

		w = w + 1;

		int e = 1;

		while (e <= b ){

			cout << "*";

			++e;
		}

		b = b-2;

		cout << endl;

		++i;
	}
}