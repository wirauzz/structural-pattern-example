#pragma once
#include "File.h"
#include "Cryptographer.h"

class FileCryptographerFacade
{
protected:
	File* file;
	Cryptographer* cryptographer;
public:
	FileCryptographerFacade(File* file, Cryptographer* cryptographer);
	void showFile();
	void EncryptFile();
	void DecryptFile();
	~FileCryptographerFacade();

};

