/*
* Project 2.1
* Talking to Mars
*/

#include <iostream>
using namespace std;

int main()
{
	double distance;
	double lightspeed;
	double delay;
	double delay_in_min;

	distance = 34000000.0; // 34,000,000 miles
	lightspeed = 186000.0; // 186,000 per second

	delay = distance / lightspeed;

	cout << "Time delay when talking to Mars: " <<
		delay << " seconds. \n";

	delay_in_min = delay / 60.0;

	cout << "This is " << delay_in_min << " minutes.";

	cout << "\n";
	system("pause");
	return 0;
}