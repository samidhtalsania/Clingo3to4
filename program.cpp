#include "clingo3to4.h"

int main(int argc, char const *argv[])
{
	clingo3to4 converter;
	converter.convert(argv);
	return 0;
}