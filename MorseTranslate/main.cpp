//============================================================================
// Name        : Morse.cpp
// Author      : Michal Tyrlik
// Version     : 1 (RELEASE)
// Copyright   :
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

string morse[67] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..",".-.-.-","--..--","---...","..--..",".----.","-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};
string alpha[67] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z",".",",",":","?","'","0","1","2","3","4","5","6","7","8","9"};

int characters = 67;
string phrase = "";	//input phrase
string newphrase = ""; //translate phrase
int length = 0;	//input phrase length
string c = "";	//character compared
int pos = 0; //position in the string
int choice;
string var;

int main() {
	
	while(true)
	{
	newphrase = "";
		
    cout << "Enter phrase to translate (or # to quit): " << endl;
    getline(cin,phrase);
		
	if(phrase == "#")
	{
		return 0;
	}
		
    else if(phrase[0] == '.' || phrase[0] == '-')
    {
        for(int pos = 0; pos < phrase.length(); pos++)	//while not at the end
        {
            
            if(phrase[pos] != ' ')
            {
                c.append(phrase.substr(pos,1));
            }

            if(phrase[pos] == ' ' || pos == phrase.length()-1)
            {
                for(int i = 0; i < characters; i++)
                {
                    if(c == morse[i])
                    {
                        newphrase.append(alpha[i]);
                    }
                }
                c = "";

            }
            
                    }
        cout << endl << "Translated phrase is " << endl << newphrase << endl;
    }	//end
    
    else
    {
        for(int i = 0; i < phrase.length(); i++)
        {
            for(int j = 0; j < characters; j++)
            {
                if(phrase.substr(i,1) == alpha[j])
                {
                    newphrase.append(morse[j]);
                    newphrase.append(" ");
                }
            }
        }
        
        cout << endl << "Translated phrase is " << endl << newphrase << endl;
    }	//end
	
    
		cout << endl << endl;
		cout << "============================================" << endl;
}	//end while(true)

}
