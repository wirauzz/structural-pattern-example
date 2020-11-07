#pragma once
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class File
{
private:
	string FilePath;
public:
	File(string FilePath);
	string getFilePath();
	void ShowFile();
};

