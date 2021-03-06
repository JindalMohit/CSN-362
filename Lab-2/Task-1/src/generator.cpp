#include <iostream>
#include <string>

#include "crc.h"

using namespace std;

int main(int argc, char **argv)
{
	string message;
	string polynomial;

	cin >> message >> polynomial;

	CRC *crc = new CRC(polynomial);

	cout << crc->generate(message) << endl;
	cout << crc->polynomial() << endl;

	return 0;
}
