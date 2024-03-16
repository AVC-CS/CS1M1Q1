#include "main.hpp"

int main()
{
	double score;
	string sname;
	int ret1;
	double ret2;

	// Call printStudents()
	score = 95.0;
	ret1 = printStudents(score);
	cout << "The total printed students " << ret1 << endl;

	/****************************************************/
	// Call getAVG()
	/****************************************************/
	sname = "Jason";
	ret2 = getAVG(sname);
	cout << "The average for " << sname << "\t" << ret2 << endl;
}
