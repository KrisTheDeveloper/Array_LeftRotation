#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d) 
{
	for (int index = 0; index < d; index++)
	{
		int temp = a[0];
		a.erase(a.begin());
		a.push_back(temp);

	}
	return a;
}

int main()
{
	
	int d = 4;
	vector<int> a = { 1, 2, 3, 4, 5 };
	vector<int> result = rotLeft(a, d);

	for (int i = 0; i < result.size(); i++) {
		cout << result[i];

		if (i != result.size() - 1) {
			cout << " ";
		}
	}

	return 0;
}


