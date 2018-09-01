#include <iostream>
#include <string>
#include "debugutils.h"

using namespace std;

bool validHangmanCharacter(char letter)
{
	if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'))
		return true;
	return false;
}

bool puzzleContainsLetter(string puzzle, char letter)
{
	// Check puzzle for existince of a letter
	for (char c : puzzle)
	{
		if (validHangmanCharacter(letter) && (c == letter || c+0x20 == letter))
			return true;
	}
	return false;

}

char toLower(const char& input)
{
	if (input >= 'A' && input <= 'Z')
		return input + 32;
	return input;
}



int main()
{
	string puzzle = "You keep using that word. I dont think it means what you think it means.";
	
	bool myBool = puzzleContainsLetter(puzzle, 'E');
	
	cout << myBool << endl;

	for (char c : puzzle)
		cout << toLower(c);
	cout << endl;

	printAddress(&puzzle);

	string dummy;
	cin >> dummy;
}

