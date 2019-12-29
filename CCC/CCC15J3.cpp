#include <iostream>

using namespace std;

int main()
{	
	char aeiou [28] = "aaaeeeeiiiiioooooouuuuuuuu";
	char consonants [28] = "acdfeghjiklmnpoqrstvuwxyzz"; 
	string word;
	string new_word = "";
	cin >> word;
	for (int i = 0; i < word.length(); ++i) {   
		if ((word[i] != 'a') && (word[i] != 'e') && (word[i] != 'i') && (word[i] != 'o') && (word[i] != 'u')) {
			new_word += word[i];
			new_word += aeiou[int(word[i]) - 97];
			new_word += consonants[int(word[i]) - 97];
		}
		else 
			new_word += word[i];	
	}
	for (int i = 0; i < new_word.length(); ++i)
		cout << new_word[i];
}