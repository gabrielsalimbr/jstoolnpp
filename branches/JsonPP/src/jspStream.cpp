#include <cstdlib>
#include <cstdio>
#include <iostream>

#include "jspStream.h"

using namespace std;

int JSParserStream::GetChar()
{
	int ret = in.get();
	if(ret == EOF)
		return 0;
	return ret;
}

void JSParserStream::PutChar(int ch)
{
	out << static_cast<char>(ch);
}
