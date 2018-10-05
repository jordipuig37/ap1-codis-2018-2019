#include <iostream>
using namespace std;

void triangle_superior (int n){

	int z = 1;
	int espais = n-1;
	int punts = 1;

	for (z = 1; z <= n; ++z){

	int i;

	for (i = 0; i < espais; ++i){

		cout << " ";
	}

	espais = espais - 1;

	int a;

	for (a = 1; a <= punts; ++a){

		cout << "*";
	}

	punts = punts + 2;

	cout << endl;
}
}

void triangle_inferior (int n){

	int z;
	int espais = 1;
	int punts = 2*n-3;
	int altura = n-1;

	for (z = 0; z < altura; ++z ){

		int i;

	for (i = 0; i < espais; ++i){

	    cout << " ";
	}

	espais = espais + 1;
    
    int a;

    for (a = 0; a < punts; ++a){

        cout << "*";
    }

    punts = punts - 2;
    
    cout << endl;
}
}

int main (){

	int n;
	cin >> n;

	triangle_superior (n);
	triangle_inferior (n);
}