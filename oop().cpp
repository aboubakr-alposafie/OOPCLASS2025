// oop().cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <vector>
#include <iostream>

using namespace std;

void ReadNumber(vector <int> & vNumber)
{
	
	cout << "mazal tbe adef ?";
	char User ='Y';


	while (User == 'Y')
	{
		int x;
		cin >> x;
	vNumber.push_back(x);
	
	cout << "Y/N";

	cin >> User;
		}
}

void print(vector<int> & vNumber)
{
	for (int Number : vNumber)
	{
		cout << Number << " ";
	}
	cout << endl;
}
 int main ()
 {
	 int x;
	 vector <int> vNumber;

	 ReadNumber(vNumber);
	 print(vNumber);

	 return 0;
}

