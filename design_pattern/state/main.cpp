#include <stdio.h>
#include "state_context.h"

int main(int argc, const char* argv[])
{
	StateContext sc;
	sc.writeName("Monday");
	sc.writeName("Tuesday");
	sc.writeName("Wednesday");
	sc.writeName("Thursday");
	sc.writeName("Saturday");
	sc.writeName("Sunday");
	return 0;
}
