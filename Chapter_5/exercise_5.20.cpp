#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() 
{
	string input;
	vector<string> word_vec;	

	// Take in user input
	cout << "Enter a series of words: ";
	while (getline(cin, input))
	{
		cout << "received" << endl;
		// Compare element to previous element
		if (!word_vec.empty() && input == word_vec[word_vec.size()]) 
		{
			cout << "Duplicate encountered: " << input << endl;
			break;
		}
		else
		{
			// Add to vector
			cout << "No duplicated found" << endl;
			word_vec.push_back(input);
		}	
		cout << "received" << endl;
	}

	cout << "Program done" << endl;
	return 0; 
}
