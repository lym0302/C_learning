/* saymain.cpp */
#include "say.h"
int main(int argc,char *argv[])
{
	extern Say librarysay; // "extern" represents the definition of a variable or function in another file
	Say localsay = Say("Local instance of Say");
	sayhello();
	librarysay.sayThis("howdy");
	librarysay.sayString();
	localsay.sayString();
	return 0;
}
