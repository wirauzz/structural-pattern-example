#include "File.h"


File::File(string FilePath)
{
	this->FilePath = FilePath;
}

string File::getFilePath()
{
	return FilePath;
}

void File::ShowFile()
{
	string Text;
	fstream File(FilePath);
	while (getline(File, Text))
	{
		cout << Text << "\n";
	}
	File.close();
}