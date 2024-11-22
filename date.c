// date.c an example code to understand union

#include <stdio.h>

typedef union UDate UDate;
typedef struct Date Date;
typedef struct MixedDate MixedDate;
typedef struct NumericDate NumericDate;

void print_date(const Date* date);

enum Date_Format{numeric, text, mixed};

struct MixedDate
{
	char *day;
	char *date;
	int year;
};

struct NumericDate
{
	int day;
	int month;
	int year;
};

union UDate
{
	char *date_str;
	MixedDate day_date;
	NumericDate nDate;
};

struct Date
{
	enum Date_Format format;
	UDate date;
};

int main(void)
{
	NumericDate yesterday = { 11,11,2012};
	MixedDate today = {"Monday", "12th November", 2012};
	char tomorrow[] = "Tues 13th Nov 2012";

	UDate udate = {tomorrow};
}
}
}
