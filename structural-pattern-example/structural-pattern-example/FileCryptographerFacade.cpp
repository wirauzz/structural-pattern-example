#include "FileCryptographerFacade.h"



FileCryptographerFacade::FileCryptographerFacade(File* file, Cryptographer* cryptographer)
{
	this->cryptographer = cryptographer;
	this->file = file;
}

void FileCryptographerFacade::showFile()
{
	file->ShowFile();
}


void FileCryptographerFacade::DecryptFile()
{
	cryptographer->DecryptMessage(file->getFilePath());
	cout << "File " << file->getFilePath() << "is now decrypted" << endl;
}

void FileCryptographerFacade::EncryptFile()
{
	cryptographer->EncryptMessage(file->getFilePath());
	cout << "File " << file->getFilePath() << "is now encrypted" << endl;
}

FileCryptographerFacade::~FileCryptographerFacade()
{
	delete file;
	delete cryptographer;
}

