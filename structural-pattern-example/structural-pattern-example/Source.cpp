#include "FileCryptographerFacade.h"



int main()
{
	File* fileEncrypt = new File("example");
	Cryptographer* cryptographer = new Cryptographer(22);
	FileCryptographerFacade* facadeEncrypt = new FileCryptographerFacade(fileEncrypt, cryptographer);
	facadeEncrypt->EncryptFile();
	
	File* fileDcrypt = new File("exampleEncrypted");
	FileCryptographerFacade* facadeDecrypt = new FileCryptographerFacade(fileDcrypt, cryptographer);
	facadeDecrypt->DecryptFile();
	
}