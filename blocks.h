//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"\uf028 ", "pactl get-sink-volume @DEFAULT_SINK@ | awk '/Volume/ {print $5}'",         30,		1},
	{"\uf4bc ", "mpstat | awk '/all/ { print int(100-$13) \"%\"}'",                         5,		0},
	{"\ue266 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	                10,		0},
	{"\uf455 ", "date '+%b %d (%a) | \uf43a %I:%M%p'",                                       5,     0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
