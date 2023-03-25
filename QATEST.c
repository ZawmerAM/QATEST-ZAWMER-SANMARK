
//#include <stdio.h>

int main() {
    //Variables
    char runner_name[30];
    int radius;
    int start_time, end_time, duration;
    int number_of_laps;
    float length, speed;
    const float pi = 3.14159;
   
   //User Inputs
    printf("Runner Name: ");
    scanf("%s", runner_name);
    
    printf("Radius (km): ");
    scanf("%d", &radius);
    
    printf("Enter the start time in hour: ");
    scanf("%d", &start_time);
    
    printf("Enter the end time in hour: ");
    scanf("%d", &end_time);
    
    printf("Number of Laps: ");
    scanf("%d", &number_of_laps);
    
    //Output
    duration = end_time - start_time;
    printf("Duration: %d hour\n", duration);
    
    length = 2 * pi * radius * number_of_laps;
    speed = length / duration;
    
   
    printf("Speed: %.2f kmph\n", speed);
    
    return 0;
}
