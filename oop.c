#include<stdio.h>
int main() {

// to give grades to student from(1-100)

int marks;
printf("enter your marks(1-100) : ");
scanf("%d", &marks);


if(marks < 30) {

 printf("Your grade is C");
}
else if(marks >= 30  && marks < 70) {

    printf("Your grade is B");
}
else if(marks >= 70 && marks < 90) {

 printf("Your grade is A");
}
else {

    printf("Your grade is A+");
}

return 0;

}























