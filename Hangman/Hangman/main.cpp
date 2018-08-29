#include <iostream>
#include <string>

using namespace std;

bool validHangmanCharacter(char letter)
{
	if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'z'))
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





int main()
{
	string puzzle = "You keep using that word. I dont think it means what you think it means.";
	
	bool myBool = puzzleContainsLetter(puzzle, 'Y');
	
	cout << myBool << endl;

	string dummy;
	cin >> dummy;
}

