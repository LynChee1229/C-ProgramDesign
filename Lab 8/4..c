#include<stdio.h>
float get_current(float voltage,float resistance);
float get_battery_life(float watt,float voltage,float current);
char* get_status(float battery_life);
void store_record(int id,float battery_life);

int main()
{
	FILE *finput;
	int id; char status[20];
	float watt,voltage,resistance,current,battery_life,highest_life;
	
	finput = fopen("battery.txt","r");
	
	if(finput==NULL)
	{
		printf("File does not exist.");
		exit(1);
	}
	else
	{
		while(!feof(finput))
		{
			fscanf(finput,"%d %f %f %f",&id,&watt,&voltage,&resistance);
			current = get_current(voltage,resistance);
			battery_life = get_battery_life(watt,voltage,current);
			strcpy(status,get_status(battery_life));
			store_record(id,battery_life);
			
			if(highest_life < battery_life)
				highest_life = battery_life;
				
			printf("ID	     : %d\n",id);
			printf("Battery Life : %.2f\n",battery_life);
			printf("Status	     : %s\n\n",status);
		}
		printf("Highest battery life : %.2f",highest_life);
	}
	fclose(finput);
	return 0;
}

float get_current(float voltage,float resistance)
{
	float current;
	current = voltage/resistance;
	return current;
}

float get_battery_life(float watt,float voltage,float current)
{
	float battery_life;
	battery_life = watt/(voltage*current);
	return battery_life;
}

char* get_status(float battery_life)
{
	char status[30];
	
	if(battery_life<=1.5)
		strcpy(status,"Not Good");
	else if(battery_life<=3)
		strcpy(status,"Average");
	else if(battery_life>3)
		strcpy(status,"Very Good");
		
	return status;
}

void store_record(int id,float battery_life)
{
	FILE *fwrite;
	
	fwrite = fopen("summary.txt","a");
	fprintf(fwrite,"\n%d %.2f",id,battery_life);
	fclose(fwrite);
}
