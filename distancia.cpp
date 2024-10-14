#include <bits/stdc++.h>
using namespace std;

int main() {
	double x1,y1,x2,y2,d;
	cout<<"PROGRAMA PARA CALCULAR LA DISTANCIA ENTRE 2 PUNTOS."<<endl;
	cout<<"x1:";
	cin>>x1;
	cout<<endl;
	cout<<"y1:";
	cin>>y1;
	cout<<endl;

	cout<<"x2:";
	cin>>x2;
	cout<<endl;
	cout<<"y2:";
	cin>>y2;
	cout<<endl;

	d=sqrt ((x2-x1)*(x2-x1)+(y2-y1)*(y2*y1));
	cout<<"LA DISTANCIA ENTRE 2 PUNTOS ES";
	cout<<d;
	cout<<endl;

}
