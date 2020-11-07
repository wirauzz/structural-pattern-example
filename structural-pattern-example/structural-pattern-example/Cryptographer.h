#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Cryptographer
{
private:
	int key;
public:
	Cryptographer(int key);
	void EncryptMessage(string Path);
	void DecryptMessage(string Path);
	string EncryptWord(string Text);
	string DecryptWord(string Text);

};

