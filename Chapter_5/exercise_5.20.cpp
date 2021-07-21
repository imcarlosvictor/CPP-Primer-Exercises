#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
	string input;
	vector<string> word_vec;	

	// Take in user input
	cout << "Enter a series of words: ";
	while (cin >> input)
	{
		for (int i = word_vec.size(); i > 0;)
		{
			// Compare element to previous element
			if (input == word_vec[i]) 
			{
				cout << "Duplicate encountered: " << input << endl;
				break;
			}
			else
			{
				// Add to vector
				word_vec.push_back(input);
			}	
		}
	}

	cout << "Done" << endl;
	return 0; 
}
