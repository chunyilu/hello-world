//============================================================================
// Name        : 170514_exe.cpp
// Author      : chunyi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

double refcube(const double &ra)
{
return ra * ra * ra;
}

int main()
{
	cout << "exe page 392" << endl;

	double side = 3.0;
	double * pd = &side;
	double & rd = side;
	long edge = 5L;
	double lens[4] = { 2.0, 5.0, 10.0, 12.0};
	double c1 = refcube(side); // ra is side
	double c2 = refcube(lens[2]); // ra is lens[2]
	double c3 = refcube(rd); // ra is rd is side
	double c4 = refcube(*pd); // ra is *pd is side
	double c5 = refcube(edge); // ra is temporary variable
	double c6 = refcube(7.0); // ra is temporary variable
	double c7 = refcube(side + 10.0); // ra is temporary variable

	cout << "c1 = " << c1 << endl;
	cout << "c2 = " << c2 << endl;
	cout << "c3 = " << c3 << endl;
	cout << "c4 = " << c4 << endl;
	cout << "c5 = " << c5 << endl;
	cout << "c6 = " << c6 << endl;
	cout << "c7 = " << c7 << endl;
	return 0;
}
