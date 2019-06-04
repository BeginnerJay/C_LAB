// Prints a one-month reminder list
#include <stdio.h>
#include <string.h>
#include "remind.h"

#define MAX_REMIND 50
#define MSG_LEN 60

main()
{
	char reminders[MAX_REMIND][MSG_LEN + 3];
	char day_str[3], msg_str[MSG_LEN + 1];
	int day, i, j, num_remind = 0;

	for ( ; ;)
	{
		if (num_remind == MAX_REMIND)
		{
			printf("NO SPACE LEFT\n");
			break;
		}

		printf("Enter day and reminder: ");
		scanf_s("%2d", &day);
		if (day == 0)
		{
			break;
		}
		sprintf_s(day_str, sizeof(day_str),"%2d", day);
		read_line(msg_str, MSG_LEN);
		for ( i = 0; i < num_remind; i++)
		{
			if (strcmp(day_str, reminders[i]) < 0 ) 
			{
				break;
			}
		}
		for ( j = num_remind; j > i; j--)
		{
			strcpy_s(reminders[j], sizeof(reminders[i]),reminders[j - 1]);
		}

		strcpy_s(reminders[i], sizeof(reminders[i]), day_str);
		strcat_s(reminders[i], sizeof(reminders[i]), msg_str);

		num_remind++;
	}

	printf("\n DAY REMINDER \n");
	for ( i = 0; i < num_remind; i++)
	{
		printf(" %s\n", reminders[i]);
	}
}