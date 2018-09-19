
#include <stdio.h>
#include <string.h>
const int NAMELEN = 10;
char month1[19][NAMELEN] ={"pop","no","zip","zotz","tzec","xul","yoxkin","mol","chen","yax","zac","ceh","mac","kankin","muan","pax","koyab","cumhu","uayet"};
char month2[20][NAMELEN] ={"imix","ik","akbal","kan","chicchan","cimi","manik","lamat","muluk",  "ok","chuen","eb","ben","ix","mem","cib","caban","eznab","canac","ahau"};
void main()
{
	int nCases, i, m;
	scanf("%d", &nCases);
	printf("%d\n", nCases);
	for (i = 0; i < nCases; i++){
		int day, year, dates;
		char month[NAMELEN];
		scanf("%d. %s %d", &day, month, &year);//Read the date of the Haab calendar
		for(m = 0; m < 19; m++)
			if (!strcmp(month1[m], month))
				break;//Find the number corresponding to the month
		dates = year * 365 + m * 20 + day;//Calculate the number of days since the beginning of the world, starting at 0
		printf("%d %s %d\n", 1 + dates % 13, month2[dates % 20], dates / 260);//Output
	}
}
