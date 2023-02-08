#include <stdio.h>
#define SIZE 365
#define SIZE_2 364

double
averageTemp (double array[SIZE]) 
{
	
	double sum=0, ave;
	
	for (int i=0; i<=SIZE; ++i)
		sum = sum + array[i];
		
	ave = sum / 366;
	return(ave);
}
		
double 
findColdestAveTemp (double superior, double michegan, double huron, double erie, double ontario, double stclair, int *k)
{
	double temp = superior;
	*k = 0;
	
	if (michegan < temp)		{
		temp = michegan;
		*k = 1;
	}
		
	if (huron < temp) 		{
		temp = huron;
		*k = 2;
	}
	
	if (erie < temp)			{
		temp = erie;
		*k = 3;
	}
	
	if (ontario < temp)		{
		temp = ontario;
		*k = 4;
	}
	
	if (stclair < temp)		{
		temp = stclair;
		*k = 5;
	}	
	
	return (temp);
}

double 
findWarmestAveTemp (double superior, double michegan, double huron, double erie, double ontario, double stclair, int *k)
{
	double temp = superior;
	*k = 0;
	
	if (michegan > temp)		{
		temp = michegan;
		*k = 1;
	}
		
	if (huron > temp) 		{
		temp = huron;
		*k = 2;
	}
	
	if (erie > temp)			{
		temp = erie;
		*k = 3;
	}
	
	if (ontario > temp)		{
		temp = ontario;
		*k = 4;
	}
	
	if (stclair > temp)		{
		temp = stclair;
		*k = 5; 
	}	
	
	return (temp);
}

void
compareAve (double superior, double huron, double michegan, double erie, double ontario, double stclair, double average)
{	
	if (superior > average)
		printf ("Lake Superior has an average temperature greater than the average of all the lakes.\n");
	else
		printf ("Lake Superior has an average temperature less than the average of all the lakes.\n");
		
	if (huron > average)
		printf ("Lake Huron has an average temperature greater than the average of all the lakes.\n");
	else
		printf ("Lake Huron has an average temperature less than the average of all the lakes.\n");
		
	if (michegan > average)
		printf ("Lake Michegan has an average temperature greater than the average of all the lakes.\n");
	else
		printf ("Lake Michegan has an average temperature less than the average of all the lakes.\n");
		
	if (erie > average)
		printf ("Lake Erie has an average temperature greater than the average of all the lakes.\n");
	else
		printf ("Lake Erie has an average temperature less than the average of all the lakes.\n");
		
	if (ontario > average)
		printf ("Lake Ontario has an average temperature greater than the average of all the lakes.\n");
	else
		printf ("Lake Ontario has an average temperature less than the average of all the lakes.\n");
	
	if (stclair > average)
		printf ("Lake St.Clair has an average temperature greater than the average of all the lakes.\n");
	else
		printf ("Lake St.Clair has an average temperature less than the average of all the lakes.\n");
}

double 
warmestTemp (double lake[SIZE])
{
	double temp = lake[0];
	for (int i=0; i<=SIZE; ++i)
	{
		if (lake[i] > temp)
			temp = lake[i];
	}
	return(temp);
}

double 
coldestDay (double lake[SIZE])
{
	double temp = lake[0];
	for (int i=0; i<=SIZE; ++i)
	{
		if (lake[i] < temp)
			temp = lake[i];
	}
	return(temp);
}

void
dateMonth (int number)
{
		int month, day;
	
	if (number >0 && number<=31)	{
		month = 1;
		day = number;			}
		
	if (number >31 && number<=60)	{
		month = 2;
		day = number -31;		}
		
	if (number >60 && number<=91)	{
		month = 3;
		day = number -60;		}
		
	if (number >91 && number<=121)	{
		month = 4;
		day = number -91;		}
		
	if (number >121 && number<=152)	{
		month = 5;
		day = number -121;		}
		
	if (number >152 && number<=182)	{
		month = 6;
		day = number -152;		}
		
	if (number >182 && number<=213)	{
		month = 7;
		day = number -182;		}
		
	if (number >213 && number<=244)	{
		month = 8;
		day = number -213;		}

	if (number >244 && number<=274)	{
		month = 9;
		day = number -244;		}
		
	if (number >274 && number<=305)	{
		month = 10;
		day = number -274;		}
		
	if (number >305 && number<=335)	{
		month = 11;
		day = number -305;		}
	
	if (number >335 && number<=366)	{
		month = 12;
		day = number -335;		}
		
	printf("%d/%d", day, month);
}

void
tempTie (double array[SIZE], double temperature)
{
	for(int i=0; i<=SIZE; ++i)
		if (array[i] == temperature){
			dateMonth (i);
			printf(" "); }				
}

double
compareWarmestDay (double sup, double mich, double huron, double erie, double ont, double stclair, int*k)
{
	double warmest = sup;
	*k = 0;
	
	if (mich > warmest) 	{
		warmest = mich;
		*k = 1;			}
		
	if (huron > warmest) 	{
		warmest = huron;	
		*k = 2;			}
		
	if (erie > warmest) 	{
		warmest = erie;	
		*k = 3;			}
		
	if (ont > warmest) 		{
		warmest = ont;	
		*k = 4;			}
		
	if (stclair > warmest)	{
		warmest = stclair;
		*k = 5;			}
	
	return (warmest);
}

double
compareColdestDay (double sup, double mich, double huron, double erie, double ont, double stclair, int*k)
{
	double coldest = sup;
	*k = 0;
	if (mich < coldest) 	{
		coldest = mich;
		*k = 1;			}
		
	if (huron < coldest) 	{
		coldest = huron;
		*k = 2;			}
		
	if (erie < coldest) 	{
		coldest = erie;	
		*k = 3;			}
		
	if (ont < coldest) 		{
		coldest = ont;	
		*k = 4;			}
		
	if (stclair < coldest)	{
		coldest = stclair;
		*k = 5;			}
	
	return (coldest);
}

double
summerAverage (double array[SIZE])
{
	double sum=0, ave;
	
	for (int i=171; i<=264; ++i)
		sum = sum + array[i];
		
	ave = sum / 94;
	return(ave);
}

double
winterAverage (double array[SIZE])
{
	double sum=0, ave;
	
	for (int i=0; i<=78; ++i)
		sum = sum + array[i];
	
	for (int i=354; i<=364; ++i)
		sum = sum + array[i];
		
	ave = sum / 90;
	return(ave);
}

void
sortAverage (double superior, double michegan, double huron, double erie, double ontario, double stclair)
{
double temperature[] = {superior, michegan, huron, erie, ontario, stclair}, temp;
double order[] = {0,1,2,3,4,5};
char lakes[6][10] = {"Superior", "Michegan", "Huron", "Erie", "Ontaraio", "St.Clair"};
	
	for (int i=0; i<6; ++i)
	{
		for (int j=i+1; j<6; ++j)
		{
			if (temperature[i] > temperature[j])
			{
				temp = temperature[i];
				temperature[i] = temperature[j];
				temperature[j] = temp;
				temp = order[i];
				order[i] = order[j];
				order[j] = temp;
			}
		}
	}
	int a = order[0]; int b = order[1]; int c = order[2]; int d = order[3]; int e = order[4]; int f = order[5];
	
	printf ("Lake %s at %.2lf'C, ", lakes[f], temperature[5]);
	printf ("Lake %s at %.2lf'C, ", lakes[e], temperature[4]); 
	printf ("Lake %s at %.2lf'C, ", lakes[d], temperature[3]);
	printf ("Lake %s at %.2lf'C, ", lakes[c], temperature[2]); 
	printf ("Lake %s at %.2lf'C, ", lakes[b], temperature[1]); 
	printf ("Lake %s at %.2lf'C ", lakes[a], temperature[0]); 
}

int
frozenDays (double lake[SIZE])
{
	int days = 0;
	for (int i=0; i<=SIZE; ++i)
		
		if (lake[i] < 0)
			days = days + 1;
	
	return (days);
}

int 
warmSwimDays (double lake[SIZE])
{
	int days = 0;
	for (int i=0; i<=SIZE; ++i)
		
		if (lake[i] > 20)
			days = days + 1;
	
	return (days);
}

int
main (void)
{
	double superior[SIZE], michegan[SIZE], huron[SIZE], erie[SIZE], ontario[SIZE], stclair[SIZE];
	int year, day;
	
	FILE *data;
	data = fopen ("Term_Project_Data.txt", "r");
	
	while (fscanf (data, "%d %d", &year, &day) != EOF)
		fscanf(data, "%lf %lf %lf %lf %lf %lf", &superior[day-1], &michegan[day-1], &huron[day-1], &erie[day-1], &ontario[day-1], &stclair[day-1]);

	//Problem 1

	double aveSuperior = averageTemp(superior);
	double aveMichegan = averageTemp(michegan);
	double aveHuron = averageTemp(huron);
	double aveErie = averageTemp(erie);
	double aveOntario = averageTemp(ontario);
	double aveStclair = averageTemp(stclair);
	double aveTotal = (aveSuperior + aveMichegan + aveHuron + aveErie + aveOntario + aveStclair) / 6;
	
	printf("Lake Superior average temperature: %.2lf'C\n", aveSuperior);
	printf("Lake Michegan average temperature: %.2lf'C\n", aveMichegan);
	printf("Lake Huron average temperature: %.2lf'C\n", aveHuron);
	printf("Lake Erie average temperature: %.2lf'C\n", aveErie);
	printf("Lake Ontario average temperature: %.2lf'C\n", aveOntario);
	printf("Lake St. Clair average temperature: %.2lf'C\n", aveStclair);
	printf("Total Lake average temperature: %.2lf'C\n\n", aveTotal);
	
	//Problem 2
	
	double tempColdestAve, tempWarmestAve;
	char lakes[6][10] = {"Superior", "Michegan", "Huron", "Erie", "Ontaraio", "St.Clair"};
	int lakeColdestAve, lakeWarmestAve; 
	
	tempColdestAve = findColdestAveTemp(aveSuperior, aveMichegan, aveHuron, aveErie, aveOntario, aveStclair, &lakeColdestAve);
	tempWarmestAve = findWarmestAveTemp(aveSuperior, aveMichegan, aveHuron, aveErie, aveOntario, aveStclair, &lakeWarmestAve);

	printf ("The coldest lake was %s at an average of %.2lf'C.\n", lakes[lakeColdestAve], tempColdestAve);
	printf ("The warmest lake was %s at an average of %.2lf'C.\n\n", lakes[lakeWarmestAve], tempWarmestAve);	
	
	compareAve (aveSuperior, aveHuron, aveMichegan, aveErie, aveOntario, aveStclair, aveTotal);
	
	//Problem 3 - Fix the commas
	
	double warmestTempSuperior, warmestTempMichegan, warmestTempHuron, warmestTempErie, warmestTempOntario, warmestTempStclair; 
	
	warmestTempSuperior = warmestTemp (superior);
	printf("\nThe warmest water temperature for Lake Superior is %.2lf'C on ", warmestTempSuperior);
	tempTie (superior, warmestTempSuperior);
	
	warmestTempMichegan = warmestTemp (michegan);
	printf("\nThe warmest water temperature for Lake Michegan is %.2lf'C on ", warmestTempMichegan);
	tempTie (michegan, warmestTempMichegan);
	
	warmestTempHuron = warmestTemp (huron);
	printf("\nThe warmest water temperature for Lake Huron is %.2lf'C on ", warmestTempHuron);
	tempTie (huron, warmestTempHuron);
	
	warmestTempErie = warmestTemp (erie);
	printf("\nThe warmest water temperature for Lake Erie is %.2lf'C on ", warmestTempErie);
	tempTie (erie, warmestTempErie);
	
	warmestTempOntario = warmestTemp (ontario);
	printf("\nThe warmest water temperature for Lake Ontario is %.2lf'C on ", warmestTempOntario);
	tempTie (ontario, warmestTempOntario);
	
	warmestTempStclair = warmestTemp (stclair);
	printf("\nThe warmest water temperature for Lake St. Clair is %.2lf'C on ", warmestTempStclair);
	tempTie (stclair, warmestTempStclair);
	
	double coldestTempSuperior, coldestTempMichegan, coldestTempHuron, coldestTempErie, coldestTempOntario, coldestTempStclair; 
	
	coldestTempSuperior = coldestDay (superior);
	printf("\n\nThe coldest water temperature for Lake Superior is %.2lf'C on ", coldestTempSuperior);
	tempTie (superior, coldestTempSuperior);
	
	coldestTempMichegan = coldestDay (michegan);
	printf("\nThe coldest water temperature for Lake Michegan is %.2lf'C on ", coldestTempMichegan);
	tempTie (michegan, coldestTempMichegan);
	
	coldestTempHuron = coldestDay (huron);
	printf("\nThe coldest water temperature for Lake Huron is %.2lf'C on ", coldestTempHuron);
	tempTie (huron, coldestTempHuron);
	
	coldestTempErie = coldestDay (erie);
	printf("\nThe coldest water temperature for Lake Erie is %.2lf'C on ", coldestTempErie);
	tempTie (erie, coldestTempErie);
	
	coldestTempOntario = coldestDay (ontario);
	printf("\nThe coldest water temperature for Lake Ontario is %.2lf'C on ", coldestTempOntario);
	tempTie (ontario, coldestTempOntario);
	
	coldestTempStclair = coldestDay (stclair);
	printf("\nThe coldest water temperature for Lake St. Clair is %.2lf'C on ", coldestTempStclair);
	tempTie (stclair, coldestTempStclair);	
	
	//Problem 4 - Fix the commas
	
	double warmestTempOverall, coldestTempOverall;
	int k;
	
	warmestTempOverall = compareWarmestDay (warmestTempSuperior, warmestTempMichegan, warmestTempHuron, warmestTempErie, warmestTempOntario, warmestTempStclair, &k);
	printf ("\n\nThe warmest water temperature overall was %.2lf'C at Lake %s on ", warmestTempOverall, lakes [k]);
	tempTie (erie, warmestTempOverall);
	
	coldestTempOverall = compareColdestDay (coldestTempSuperior, coldestTempMichegan, coldestTempHuron, coldestTempErie, coldestTempOntario, coldestTempStclair, &k);
	printf ("\nThe coldest water temperature overall was %.2lf'C at Lake %s on ", coldestTempOverall, lakes[k]);
	tempTie (stclair, coldestTempOverall);

	//Problem 5
	
	double summerSuperior = summerAverage(superior);
	double summerMichegan = summerAverage(michegan);
	double summerHuron = summerAverage(huron);
	double summerErie = summerAverage(erie);
	double summerOntario = summerAverage(ontario);
	double summerStclair = summerAverage(stclair);
	
	printf("\n\nFor the summer months the average water temperature from warmest to coldest was:\n");
	sortAverage (summerSuperior, summerMichegan, summerHuron, summerErie, summerOntario, summerStclair);
	
	//Problem 6
	
	double winterSuperior = winterAverage(superior);
	double winterMichegan = winterAverage(michegan);
	double winterHuron = winterAverage(huron);
	double winterErie = winterAverage(erie);
	double winterOntario = winterAverage(ontario);
	double winterStclair = winterAverage(stclair);
	
	printf("\n\nFor the winter months the average water temperature from warmest to coldest was:\n");
	sortAverage (winterSuperior, winterMichegan, winterHuron, winterErie, winterOntario, winterStclair);

	//Problem 7
	
	int superiorWarm, micheganWarm, huronWarm, erieWarm, ontarioWarm, stclairWarm;
	
	superiorWarm = warmSwimDays (superior);
	micheganWarm = warmSwimDays (michegan);
	huronWarm = warmSwimDays (huron);
	erieWarm = warmSwimDays (erie);
	ontarioWarm = warmSwimDays (ontario);
	stclairWarm = warmSwimDays(stclair); 
	
	printf ("\n\nLake Superior was warm enough to swim comfortably for %d days.\n", superiorWarm);
	printf ("Lake Michegan was warm enough to swim comfortably for %d days.\n", micheganWarm);
	printf ("Lake Huron was warm enough to swim comfortably for %d days.\n", huronWarm);
	printf ("Lake Erie was warm enough to swim comfortably for %d days.\n", erieWarm);
	printf ("Lake Ontario was warm enough to swim comfortably for %d days.\n", ontarioWarm);
	printf ("Lake St.Clair was warm enough to swim comfortably for %d days.\n", stclairWarm);
	
	//Problem 8
	
	int superiorFrozen, micheganFrozen, huronFrozen, erieFrozen, ontarioFrozen, stclairFrozen;
	
	superiorFrozen = frozenDays (superior);
	micheganFrozen = frozenDays (michegan);
	huronFrozen = frozenDays (huron);
	erieFrozen = frozenDays (erie);
	ontarioFrozen = frozenDays (ontario);
	stclairFrozen = frozenDays (stclair); 
	
	printf ("\nLake Superior was frozen for %d days\n", superiorFrozen);
	printf ("Lake Michegan was frozen for %d days\n", micheganFrozen);
	printf ("Lake Huron was frozen for %d days\n", huronFrozen);
	printf ("Lake Erie was frozen for %d days\n", erieFrozen);
	printf ("Lake Ontario was frozen for %d days\n", ontarioFrozen);
	printf ("Lake St.Clair was frozen for %d days\n", stclairFrozen);
	
	//Problem 9
	
	double superior_2019[SIZE_2], michegan_2019[SIZE_2], huron_2019[SIZE_2], erie_2019[SIZE_2], ontario_2019[SIZE_2], stclair_2019[SIZE_2];
	int year_2, day_2;
	
	FILE *data_2;
	data_2 = fopen ("Term_Project_Data_2.txt", "r");
	
	while (fscanf (data_2, "%d %d", &year_2, &day_2) != EOF)
		fscanf(data_2, "%lf %lf %lf %lf %lf %lf", &superior_2019[day_2-1], &michegan_2019[day_2-1], &huron_2019[day_2-1], &erie_2019[day_2-1], &ontario_2019[day_2-1], &stclair_2019[day_2-1]);

	double aveSuperior_2019 = averageTemp(superior_2019);
	double aveMichegan_2019 = averageTemp(michegan_2019);
	double aveHuron_2019 = averageTemp(huron_2019);
	double aveErie_2019 = averageTemp(erie_2019);
	double aveOntario_2019 = averageTemp(ontario_2019);
	double aveStclair_2019 = averageTemp(stclair_2019);
	double aveTotal_2019 = (aveSuperior_2019 + aveMichegan_2019 + aveHuron_2019 + aveErie_2019 + aveOntario_2019 + aveStclair_2019) / 6;
	
	printf("\n\t\t2019 Average Temperature\t2020 Average Temperature\n");
	printf("Superior:\t\t %.2lf \t\t\t\t %.2lf \n", aveSuperior_2019, aveSuperior); 
	printf("Michegan:\t\t %.2lf \t\t\t\t %.2lf \n", aveMichegan_2019, aveMichegan);
	printf("Huron:\t\t\t %.2lf \t\t\t\t %.2lf \n", aveHuron_2019, aveHuron);
	printf("Erie:\t\t\t %.2lf \t\t\t\t %.2lf \n", aveErie_2019, aveErie);
	printf("Ontario:\t\t %.2lf \t\t\t\t %.2lf \n", aveOntario_2019, aveOntario);
	printf("St.Clair:\t\t %.2lf \t\t\t\t %.2lf \n", aveStclair_2019, aveStclair);
	printf("Total:\t\t\t %.2lf \t\t\t\t %.2lf \n", aveTotal_2019, aveTotal);
	
	return (0);
}
