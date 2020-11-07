#include "Cryptographer.h"




Cryptographer::Cryptographer(int key)
{
    this->key = key;
}

void Cryptographer::EncryptMessage(string Path)
{
    string Text;
    fstream File(Path + ".txt");
    ofstream newEncryptedFile;
	while (getline(File, Text))
	{
        newEncryptedFile.open(Path + "Encrypted.txt");
        newEncryptedFile << EncryptWord(Text);
        newEncryptedFile.close();
	}
}

string Cryptographer::EncryptWord(string Text)
{
    char letter;
    for (int i = 0; Text[i] != '\0'; ++i)
    {
        letter = Text[i];

        if (letter >= 'a' && letter <= 'z')
        {
            letter = letter + key;
            if (letter > 'z')
            {
                letter = letter - 'z' + 'a' - 1;
            }
            Text[i] = letter;
        }
        else if (letter >= 'A' && letter <= 'Z')
        {
            letter = letter + key;
            if (letter > 'Z')
            {
                letter = letter - 'Z' + 'A' - 1;
            }
            Text[i] = letter;
        }
    }
    return Text;
}

void Cryptographer::DecryptMessage(string Path)
{
    string Text;

    fstream File(Path + ".txt");
    ofstream newDeryptedFile;
    while (getline(File, Text))
    {
        newDeryptedFile.open(Path + "Decrypted.txt");
        newDeryptedFile << DecryptWord(Text);
        newDeryptedFile.close();
    }
}


string Cryptographer::DecryptWord(string Text)
{
    char letter;

    for (int i = 0; Text[i] != '\0'; ++i) 
    {
        letter = Text[i];
        if (letter >= 'a' && letter <= 'z') 
        {
            letter = letter - key;
            if (letter < 'a')
            {
                letter = letter + 'z' - 'a' + 1;
            }
            Text[i] = letter;
        }
        else if (letter >= 'A' && letter <= 'Z')
        {
            letter = letter - key;
            if (letter < 'A') 
            {
                letter = letter + 'Z' - 'A' + 1;
            }
            Text[i] = letter;
        }
    }
    return Text;
}