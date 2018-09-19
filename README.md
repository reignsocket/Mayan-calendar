Problem Description  
Last weekend, Professor M.A had a major discovery of the ancient Maya. From an ancient knot rope (for Maya)
In the tool of the note, the professor found that the Maya used a calendar called Haab that had 365 a year. This Haab calendar has 19 months. In the first 18 months, there are 20 days in a month. The names of the months are pop, no, zip, zotz, tzec, xul, yoxkin, mol, chen, yax, zac, ceh, Mac, kankin, muan, pax, koyab, cumhu. The dates in these months are represented by 0 to 19. The last month of the Haab calendar is called uayet, which is only 5 days and is represented by 0 to 4. The Mayans thought that the month with the least date was unlucky. In this month, the court did not sit in court, people did not engage in transactions, and no one even cleaned the corridors in the house. For religious reasons, the Mayans also used another calendar. In this calendar, the year is called Tzolkin (holly year). The year is divided into 13 different periods, each period has 20 days, and each day uses a number. Expressed in the form of a combination of words. The numbers used are 1~13, and there are 20 words used. They are: imix, ik, akbal, kan, chicchan, cimi, manik, lamat, muluk, ok, chuen, eb, ben, ix, mem, cib , caban, eznab, canac, ahau. Note: Every day of the year has a clear description. For example, at the beginning of the year, the date is as follows: 1 imix, 2 ik, 3 akbal, 4 kan, 5 chicchan, 6 cimi, 7 manik, 8 lamat, 9 Muluk, 10ok, 11 chuen, 12 eb, 13 ben, 1 ix, 2 mem, 3 cib, 4 caban, 5 eznab, 6 canac, 7 ahau, , 8 imix, 9ik, 10 akbal . . . That is to say, numbers and words are used independently. The years in the Haab calendar and the Tzolkin calendar are represented by the numbers 0,1,:::, and the number 0 indicates the beginning of the world. So the first day is expressed as:
  
Haab: 0. pop 0  
Tzolkin: 1 imix 0  
Please help Professor M.A. write a program that converts the Haab calendar into a Tzolkin calendar.  
  
Input data
The data in the Haab calendar is represented as follows:
Date. Month Years
The first line indicates the amount of data for the Haab calendar to be converted. Each line below represents a date, the number of years is less than
5000.
  
  
Output requirements  
The data in the Tzolkin calendar is represented as follows:
Day number day name number of years
The first line indicates the amount of data for the Haab calendar that needs to be converted. Each line below represents a date.  
  
Input sample  
3  
10. zac 0  
0. pop 0  
10. zac 1995  
  
Output sample  
3  
3 chuen 0  
1 imix 0  
9 cimi 2801  
  
Problem solving  
This question asks how to convert the date of the Haab calendar to the date of the Tzolkin calendar. First we have to figure out these two
A calendar that describes the rules of the date. Haab is divided into 19 months every year for 365 days, 20 days for the first 18 months, and 5 days for the 19th month. The names of 19 months are represented by different strings. The date of each month is recorded sequentially starting from 0. To calculate the day of the month as the day of the year, you can use the corresponding month as 0~18 and then calculate it by the formula: month*20+date+1. Tzolkin has 260 days in a year, and each date is a combination of a numeric part and a string part. The date part is recycled from 1~13, and the string part is taken out by 20 different string loops. It can be seen that the two components of the date in the Tzolkin calendar are independent of each other. For a certain day of the year, the numerical part and the string part can be separately obtained and then simply combined. Here exactly 260 is the smallest common multiple of 13 and 20, so no two days of the year are the same, and all combinations of numbers and strings are used to represent a certain day of the year. Next we can analyze the specific solution of the topic. The general idea is to first calculate the date given by the Haab calendar as the day after the start of the world (assuming k), then divide k by 260 to get the year of the Tzolkin calendar, and then use k to 260 to obtain the m. , using m to modulo 13 and 20 respectively to obtain d and s, and the combination of d and the sth string in the Tzolkin calendar is the required date. It should be noted here that if we use the 0th day of the world as 0 and the 260th day to 259, we just divide this number by 260 to get the year of the Tzolkin calendar, and m to 13 will get a value of 0 to 12. This value must be incremented by 1 to be used to represent the date of the Tzolkin calendar. At the same time, m is modulo 20 to get a value of 0~19, which means to take one of the 20 strings. If we use a string array to store these 20 strings, then the value of 0~19 corresponds to the array subscript of the required string.
