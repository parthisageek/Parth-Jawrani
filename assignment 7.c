#include <stdio.h>
#include <string.h>

struct Sensor{
    int id;
    char type[20];
    float value, min, max;
    char status[10];  
};
int main(){
    int n, i, abnormal = 0;
    struct  Sensor s[10];

    printf("ENTER NUMBER OF SENSORS: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("\nEnter ID: "); scanf("%d", &s[i].id);
        printf("Enter Type: "); scanf("%s", &s[i].type);
        printf("Enter Value: "); scanf("%f", &s[i].value);
        printf("Enter Min Limit: "); scanf("%f", &s[i].min);
        printf("Enter Max: "); scanf("%f", &s[i].max);
        float lower = s[i].min - (0.10*s[i].min);
        float upper = s[i].max + (0.10*s[i].max);
        if(s[i].value >= s[i].min && s[i].value <= s[i].max){
            strcpy(s[i].status, "Normal");
        }else if(s[i].value >= lower && s[i].value <= upper){
            strcpy(s[i].status , "Warning");
        }else{
            strcpy(s[i].status, "Anomaly");
            abnormal++;
        }
    }
    printf("\n----Sensor Report----\n");
    printf("ID\   TYPE   VALUE   RANGE\    STATUS\n");
    for(i = 0; i < n, i++){
        printf("%d\ %s\ %.2f %.2f-%.2f  %s\n",s[i].id, s[i].type, s[i].value, s[i].min, s[i].max, s[i].status);    
    }
    printf("\nTotal Abnormal Sensors: %d\n", abnormal);

    return 0;
}