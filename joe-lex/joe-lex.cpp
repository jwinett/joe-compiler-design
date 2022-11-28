// joe-lex.cpp : Defines the entry point for the application.
//

#include "joe-lex.h"

using namespace std;

static int yyparse(void);


int main()
{
	return yyparse();	// this isn't working yet, obviously
}
