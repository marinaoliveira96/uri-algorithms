 #include<stdio.h>
int main() {
 
 	int NUMBER, HOURS;
    double SALARY;
 	
    scanf("%d", &NUMBER);
    scanf("%d", &HOURS);
    scanf("%lf", &SALARY);
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2lf\n", SALARY * HOURS);
 
    return 0;
}

