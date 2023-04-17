#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


//Q1, a
// int main(){
//     float radius, area, circumference;
//     const float PI = 3.14159;
    
//     printf("Enter the radius of the circle: ");
//     scanf("%f", &radius);
    
//     area = PI * radius * radius;
//     circumference = 2 * PI * radius;
    
//     printf("The area of the circle is: %.2f\n", area);
//     printf("The circumference of the circle is: %.2f\n", circumference);
    
//     return 0;
// }

//   b
// int main() {
//     char ch;
    
//     printf("Enter a character: ");
//     scanf("%c", &ch);
    
//     printf("The ASCII value of %c is %d.\n", ch, ch);
    
//     return 0;
// }


//  c
// int main(){
//     float base, height,area;

//     printf("Enter the Base of Triangle: ");
//     scanf("%f",&base);

//     printf("Enter the height of Triangle: ");
//     scanf("%f",&height);

//     area = 0.5 * base * height;

//     printf("The area of the triangle is: %.2f\n",area);

//     return 0;
// }

// d
// int main() {
//     char firstName[20], middleName[20], lastName[20];
    
//     printf("Enter your first name: ");
//     scanf("%s", firstName);
    
//     printf("Enter your middle name: ");
//     scanf("%s", middleName);
    
//     printf("Enter your last name: ");
//     scanf("%s", lastName);
    
//     printf("Your name in abbreviated format is: %c.%c.%c.\n", firstName[0], middleName[0], lastName[0]);
    
//     return 0;
// }

// e
// int main() {
//     float principle, rate, time, interest;
    
//     printf("Enter the principle amount: ");
//     scanf("%f", &principle);
    
//     printf("Enter the rate of interest: ");
//     scanf("%f", &rate);
    
//     printf("Enter the time period (in years): ");
//     scanf("%f", &time);
    
//     interest = (principle * rate * time) / 100;
    
//     printf("The simple interest is: %.2f\n", interest);
    
//     return 0;
// }

//  f
// int main() {
//     float basicSalary, da, hra, grossSalary;
    
//     printf("Enter the basic salary of the employee: ");
//     scanf("%f", &basicSalary);
    
//     da = 0.4 * basicSalary;
//     hra = 0.2 * basicSalary;
    
//     grossSalary = basicSalary + da + hra;
    
//     printf("The gross salary of the employee is: %.2f\n", grossSalary);
    
//     return 0;
// }

//g
// int main(){
//     float sub1,sub2,sub3,sub4,sub5,total,percentage;

//     printf("Enter the marks of Subject 1: ");
//     scanf("%f",&sub1);

//     printf("Enter the marks of Subject 2: ");
//     scanf("%f",&sub2);

//     printf("Enter the marks of Subject 3: ");
//     scanf("%f",&sub3);

//     printf("Enter the marks of Subject 4: ");
//     scanf("%f",&sub4);

//     printf("Enter the marks of Subject 5: ");
//     scanf("%f",&sub5);

//     total = sub1+sub2+sub3+sub4+sub5;

//     percentage = total/500 * 100;

//     printf("Percentage of 5 Subjects is: %.2f", percentage);
//     return 0;

// }


// h
// int main(){
//     float celsius,fehrenheit;

//     printf("Enter temperature in celsius: ");
//     scanf("%f",&celsius);

//     fehrenheit = (celsius * 9/5) + 32;

//     printf("Temperature in Fehrenheit is: %.2f", fehrenheit);
// }

// i
// int main() {
//     printf("Size of char: %d byte(s)\n", sizeof(char));
//     printf("Size of short: %d byte(s)\n", sizeof(short));
//     printf("Size of int: %d byte(s)\n", sizeof(int));
//     printf("Size of long: %d byte(s)\n", sizeof(long));
//     printf("Size of long long: %d byte(s)\n", sizeof(long long));
//     printf("Size of float: %d byte(s)\n", sizeof(float));
//     printf("Size of double: %d byte(s)\n", sizeof(double));
//     printf("Size of long double: %d byte(s)\n", sizeof(long double));
    
//     return 0;
// }


// j
// int main() {
//     int num, i;
//     long fact = 1;
    
//     printf("Enter a positive integer: ");
//     scanf("%d", &num);
    
//     // Check if the number is negative
//     if (num < 0) {
//         printf("Error: Factorial of a negative number does not exist.");
//     }
//     else {
//         // Calculate the factorial
//         for (i = 1; i <= num; ++i) {
//             fact *= i;
//         }
//         printf("Factorial of %d = %llu", num, fact);
//     }
//     return 0;
// }


// k
// int main(){
//     float radius,area;

//     printf("Enter the Radius of Circle: ");
//     scanf("%f",&radius);

//     area = 3.14 * radius * radius;

//     printf("Area of Circle is: %.2f", area);

//     return 0;
// }


// l
// int gcd(int num1, int num2) {
//     if (num2 == 0) {
//         return num1;
//     }
//     else {
//         return gcd(num2, num1 % num2);
//     }
// }

// // function to calculate LCM of two numbers
// int lcm(int num1, int num2) {
//     return (num1 * num2) / gcd(num1, num2);
// }

// int main() {
//     int num1, num2;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     // calculate and print GCD and LCM
//     printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
//     printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));

//     return 0;
// }

// m
// #include <stdio.h>

// // Function with no arguments and no return value
// void sayHello() {
//     printf("Hello!\n");
// }

// // Function with arguments and no return value
// void printSum(int a, int b) {
//     printf("Sum of %d and %d is %d\n", a, b, a+b);
// }

// // Function with arguments and return value
// int multiply(int a, int b) {
//     return a * b;
// }

// // Function with no arguments and return value
// int getNumber() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     return num;
// }

// int main() {
//     // Call function with no arguments and no return value
//     sayHello();
    
//     // Call function with arguments and no return value
//     printSum(2, 3);
    
//     // Call function with arguments and return value
//     int result = multiply(4, 5);
//     printf("Product of 4 and 5 is %d\n", result);
    
//     // Call function with no arguments and return value
//     int num = getNumber();
//     printf("You entered: %d\n", num);
    
//     return 0;
// }

// n
// #include <stdio.h>

// // Function to demonstrate call by value
// void swapByValue(int x, int y) {
//     int temp = x;
//     x = y;
//     y = temp;
//     printf("Inside swapByValue function: x = %d, y = %d\n", x, y);
// }

// // Function to demonstrate call by reference
// void swapByReference(int *x, int *y) {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
//     printf("Inside swapByReference function: x = %d, y = %d\n", *x, *y);
// }

// int main() {
//     int a = 5, b = 10;
    
//     // Call swapByValue function
//     printf("Before swapByValue function: a = %d, b = %d\n", a, b);
//     swapByValue(a, b);
//     printf("After swapByValue function: a = %d, b = %d\n", a, b);
    
//     // Call swapByReference function
//     printf("Before swapByReference function: a = %d, b = %d\n", a, b);
//     swapByReference(&a, &b);
//     printf("After swapByReference function: a = %d, b = %d\n", a, b);
    
//     return 0;
// }



// 2
// int main(){
//     float num1,num2,num3;

//     printf("Enter number 1: ");
//     scanf("%f",&num1);

//     printf("Enter number 2: ");
//     scanf("%f",&num2);

//     printf("Enter number 3: ");
//     scanf("%f",&num3);

//     if ((num1 > num2) && (num1 > num3)){
//         printf("%f",num1);
//     } else if ((num2 > num1) && (num2 > num3)){
//         printf("%f", num2);
//     } else if ((num3 > num1) && (num3 > num2)){
//         printf("%f",num3);
//     }
// }

// 3
// int main(){
//     float num;
//     printf("Enter a Number: ");
//     scanf("%f",&num);

//     if (num == 0){
//         printf("Its Zero");
//     }else if (num > 0){
//         printf("Its Positive");
//     }else {
//         printf("Its Negative");
//     }
// }

// 4
// int main(){
//     char ch;

//    printf("Enter a character: ");
//    scanf("%c", &ch);

//    // Using logical OR operator to check for vowel
//    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//       printf("%c is a vowel.", ch);
//    } 
//    else {
//       printf("%c is a consonant.", ch);
//    }

//    return 0;

// }

//5
// int main() {
//    char ch;

//    printf("Enter a character: ");
//    scanf("%c", &ch);

//    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
//       printf("%c is an alphabet.", ch);
//    } 
//    else {
//       printf("%c is not an alphabet.", ch);
//    }

//    return 0;
// }

//6
// int main() {
//    char ch;

//    printf("Enter a character: ");
//    scanf("%c", &ch);

//    if(ch >= 'a' && ch <= 'z') {
//       printf("%c is in lowercase.", ch);
//    } 
//    else if(ch >= 'A' && ch <= 'Z') {
//       printf("%c is in uppercase.", ch);
//    } 
//    else if(ch >= '0' && ch <= '9') {
//       printf("%c is a digit.", ch);
//    }
//    else {
//       printf("%c is a special character.", ch);
//    }

//    return 0;
// }

//7
// int main(){
//     int num;

//     printf("Enter Number: ");
//     scanf("%i",&num);

//     if (num % 2 == 0){
//         printf("Its Even number");
//     } else {
//         printf("Its Odd number.");
//     }

//     return 0;
// }


//8
// int main() {
//    int year;

//    printf("Enter a year: ");
//    scanf("%d", &year);

//    if (year % 4 == 0) {
//       printf("%d is a leap year.", year);
//    }
//    else
//       printf("%d is not a leap year.", year);

//    return 0;
// }

//9
// int main(){
//     int num1, num2;

//     printf("Enter num1: ");
//     scanf("%d",&num1);

//     printf("Enter num2: ");
//     scanf("%d",&num2);

//     if (num1 > num2){
//         printf("Maximum number is: %d", num1);
//     }else{
//         printf("Maximum number is: %d", num2);
//     }

//     return 0;
// }

// 10
// int main(){
//     int num1,num2,num3;

//     printf("Enter First Number: ");
//     scanf("%d",&num1);

//     printf("Enter Secound Number: ");
//     scanf("%d",&num2);

//     printf("Enter Third Number: ");
//     scanf("%d",&num3);

//     if (num1 > num2 && num1 > num3){
//         printf("%d is the maxinum number",num1);
//     } else if (num2 > num1 && num2 > num3){
//         printf("%d is the maxinum number",num2);
//     } else{
//         printf("%d is the maxinum number",num3);
//     }

//     return 0;
// }


// 11
// int main() {
//    int num;

//    printf("Enter a number: ");
//    scanf("%d", &num);

//    if (num % 55 == 0) {
//       printf("%d is divisible by 5 and 11.", num);
//    }
//    else {
//       printf("%d is not divisible by 5 and 11.", num);
//    }

//    return 0;
// }

// 12
// int main(){
//     int day;

//     printf("Enter week day: ");
//     scanf("%d",&day);

//     switch (day){
//         case 1:
//         printf("Monday");
//         break;

//         case 2:
//         printf("Tuesday");
//         break;

//         case 3:
//         printf("Wednesday");
//         break;

//         case 4:
//         printf("Thursday");
//         break;

//         case 5:
//         printf("Friday");
//         break;

//         case 6:
//         printf("Saturday");
//         break;

//         case 7:
//         printf("Sunday");
//         break;

//         default:
//         printf("Invalid day! Please enter week number between 1-7.");
//     }
// }

//13
// int main() {
//    int month, days;

//    printf("Enter month number (1-12): ");
//    scanf("%d", &month);

//    switch (month) {
//       case 1:
//          days = 31;
//          break;
//       case 2:
//          days = 28;
//          break;
//       case 3:
//          days = 31;
//          break;
//       case 4:
//          days = 30;
//          break;
//       case 5:
//          days = 31;
//          break;
//       case 6:
//          days = 30;
//          break;
//       case 7:
//          days = 31;
//          break;
//       case 8:
//          days = 31;
//          break;
//       case 9:
//          days = 30;
//          break;
//       case 10:
//          days = 31;
//          break;
//       case 11:
//          days = 30;
//          break;
//       case 12:
//          days = 31;
//          break;
//       default:
//          printf("Invalid input! Enter Months between 1-12.");
//          return 0;
//    }

//    printf("Number of days in month %d is %d.", month, days);

//    return 0;
// }


// 14
// int main() {
//    int amount, notes,total;

//    printf("Enter the amount: ");
//    scanf("%d", &amount);

//    notes = amount / 2000;
//    total += notes;
//    printf("Number of 2000 notes: %d\n", notes);
//    amount %= 1000;

//    notes = amount / 500;
//    total += notes;
//    printf("Number of 500 notes: %d\n", notes);
//    amount %= 500;

//    notes = amount / 200;
//    total += notes;
//    printf("Number of 200 notes: %d\n", notes);
//    amount %= 200;

//    notes = amount / 100;
//    total += notes;
//    printf("Number of 100 notes: %d\n", notes);
//    amount %= 100;

//    notes = amount / 50;
//    total += notes;
//    printf("Number of 50 notes: %d\n", notes);
//    amount %= 50;

//    notes = amount / 20;
//    total += notes;
//    printf("Number of 20 notes: %d\n", notes);
//    amount %= 20;

//    notes = amount / 10;
//    total += notes;
//    printf("Number of 10 notes: %d\n", notes);
//    amount %= 10;

//    notes = amount / 5;
//    total += notes;
//    printf("Number of 5 notes: %d\n", notes);
//    amount %= 5;

//    notes = amount / 1;
//    total += notes;
//    printf("Number of 1 notes: %d\n\n", notes);

//    printf("Total number of notes is: %d",total);

//    return 0;
// }

// 15
// int main(){
//     int angle1, angle2,angle3;

//     printf("Enter Angle 1: ");
//     scanf("%d",&angle1);

//     printf("Enter Angle 2: ");
//     scanf("%d",&angle2);

//     printf("Enter Angle 3: ");
//     scanf("%d",&angle3);

//     if ((angle1 + angle2 + angle3 == 180) && angle1 > 0 && angle2 > 0 && angle3 > 0){
//         printf("Its a Valid Triangle");
//     }else {
//         printf("Its a not Valid Triangle");
//     }
// }

// 16
// int main(){
//     int side1, side2,side3;

//     printf("Enter Side 1: ");
//     scanf("%d",&side1);

//     printf("Enter Side 2: ");
//     scanf("%d",&side2);

//     printf("Enter Side 3: ");
//     scanf("%d",&side3);

//     if ((side1 + side2 > side3) && side1 > 0 && side2 > 0 && side3 > 0){
//         printf("Its a Valid Triangle");
//     }else {
//         printf("Its a not Valid Triangle");
//     }

//     return 0;
// }

//17
// int main(){
//     int side1, side2,side3;

//     printf("Enter Side 1: ");
//     scanf("%d",&side1);

//     printf("Enter Side 2: ");
//     scanf("%d",&side2);

//     printf("Enter Side 3: ");
//     scanf("%d",&side3);

//     if (side1 == side2 && side1 == side3){
//         printf("Its Equillateral Triangle");
//     }else if (side1 == side2 || side2 == side3 || side1 == side3){
//         printf("Its Isosceles Triangle");
//     }else {
//         printf("Its Scalene Triangle");
//     }

//     return 0;
// }

//18
// #include <stdio.h>
// #include <math.h>
// int main() {
//     float a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

//     printf("Enter coefficients a, b, and c: ");
//     scanf("%f %f %f", &a, &b, &c);

//     discriminant = b * b - 4 * a * c;

//     if (discriminant > 0) {
//         root1 = (-b + sqrt(discriminant)) / (2 * a);
//         root2 = (-b - sqrt(discriminant)) / (2 * a);
//         printf("Roots are real and different.\n");
//         printf("Root1 = %.2f and Root2 = %.2f\n", root1, root2);
//     } 
//     else if (discriminant == 0) {
//         root1 = root2 = -b / (2 * a);
//         printf("Roots are real and same.\n");
//         printf("Root1 = Root2 = %.2f\n", root1);
//     } 
//     else {
//         realPart = -b / (2 * a);
//         imaginaryPart = sqrt(-discriminant) / (2 * a);
//         printf("Roots are complex and different.\n");
//         printf("Root1 = %.2f + %.2fi and Root2 = %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
//     }

//     return 0;
// }
//input sample
// Enter coefficients a, b, and c: 2 5 2
// Roots are real and different.
// Root1 = -0.50 and Root2 = -2.00



//19
// int main() {
//     int num, reversed = 0, remainder;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     while (num != 0) {
//         remainder = num % 10;
//         reversed = reversed * 10 + remainder;
//         num /= 10;
//     }

//     printf("The reversed number is: %d\n", reversed);

//     return 0;
// }

//20
//import math
// int main() {
//     int num, originalNum, remainder, n = 0, result = 0;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     originalNum = num;

//     while (originalNum != 0) {
//         originalNum /= 10;
//         ++n;
//     }

//     originalNum = num;

//     while (originalNum != 0) {
//         remainder = originalNum % 10;
//         result += pow(remainder, n);
//         originalNum /= 10;
//     }

//     if (result == num) {
//         printf("%d is an Armstrong number.\n", num);
//     }
//     else {
//         printf("%d is not an Armstrong number.\n", num);
//     }

//     return 0;
// }
//sample input is:- 153


//21
// int main() {
//     int n, sum = 0;

//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; ++i) {
//         sum += i;
//     }

//     printf("The sum of first %d natural numbers is %d.\n", n, sum);

//     return 0;
// }

//22
// int main() {
//     int n, t1 = 0, t2 = 1, nextTerm;

//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series: ");

//     for (int i = 1; i <= n; ++i) {
//         printf("%d, ", t1);
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//     }

//     return 0;
// }

//23
// int main() {
//     int num, reversedNum = 0, remainder, originalNum;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     originalNum = num;

//     while (num != 0) {
//         remainder = num % 10;
//         reversedNum = reversedNum * 10 + remainder;
//         num /= 10;
//     }

//     if (originalNum == reversedNum) {
//         printf("%d is a palindrome number.\n", originalNum);
//     }
//     else {
//         printf("%d is not a palindrome number.\n", originalNum);
//     }

//     return 0;
// }


//24
// int main() {
//     int num, count = 0;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     while (num != 0) {
//         num /= 10;
//         ++count;
//     }

//     printf("Number of digits: %d\n", count);

//     return 0;
// }

//25
// int main() {
//     int num;

//     printf("Enter an Number: ");
//     scanf("%d", &num);

//     printf("Table of %d:\n", num);

//     for (int i = 1; i <= 10; ++i) {
//         printf("%d x %d = %d\n", num, i, num * i);
//     }

//     return 0;
// }

//26
// a
// int main() {
//     int choice;
//     float temp, convertedTemp;

//     printf("Temperature Converter:\n");
//     printf("1. Celsius to Fahrenheit\n");
//     printf("2. Fahrenheit to Celsius\n");
//     printf("Enter your choice: ");
//     scanf("%d", &choice);

//     switch (choice) {
//         case 1:
//             printf("Enter temperature in Celsius: ");
//             scanf("%f", &temp);
//             convertedTemp = (temp * 9 / 5) + 32;
//             printf("%.2f Celsius = %.2f Fahrenheit\n", temp, convertedTemp);
//             break;
//         case 2:
//             printf("Enter temperature in Fahrenheit: ");
//             scanf("%f", &temp);
//             convertedTemp = (temp - 32) * 5 / 9;
//             printf("%.2f Fahrenheit = %.2f Celsius\n", temp, convertedTemp);
//             break;
//         default:
//             printf("Invalid choice\n");
//     }

//     return 0;
// }

//

// b
// int main(){
//     int day;

//     printf("Enter week day: ");
//     scanf("%d",&day);

//     switch (day){
//         case 1:
//         printf("Monday");
//         break;

//         case 2:
//         printf("Tuesday");
//         break;

//         case 3:
//         printf("Wednesday");
//         break;

//         case 4:
//         printf("Thursday");
//         break;

//         case 5:
//         printf("Friday");
//         break;

//         case 6:
//         printf("Saturday");
//         break;

//         case 7:
//         printf("Sunday");
//         break;

//         default:
//         printf("Invalid day! Please enter week number between 1-7.");
//     }
// }

// c
// int main(){
//     char operator;
//     float num1,num2,result;

//     printf("What you want to do (+,-,*,/): ");
//     scanf("%c",&operator);

//     printf("Enter number1: ");
//     scanf("%f",&num1);

//     printf("Enter number2: ");
//     scanf("%f",&num2);

//     switch (operator)
//     {
//     case '+':
//         printf("sum of %.2f and %.2f is: %.2f",num1,num2,num1+num2);
//         break;
//     case '-':
//         printf("Minus of %.2f and %.2f is: %.2f", num1,num2,num1-num2);
//         break;
//     case '*':
//         printf("Multipication of %.2f and %.2f is: %.2f", num1,num2,num1*num2);
//         break;
//     case '/':
//         printf("Divide of %.2f and %.2f is: %.2f", num1,num2,num1/num2);
//         break;
//     default:
//         printf("Invalid Oprator! Try Again");
//         break;
//     }
// }

// d
// int main() {
//     int marks;

//     printf("Enter your marks (out of 100): ");
//     scanf("%d", &marks);

//     if (marks < 0 || marks > 100) {
//         printf("Invalid marks\n");
//         return 0;
//     }

//     switch (marks / 10) {
//         case 10:
//         case 9:
//             printf("Grade: A\n");
//             break;
//         case 8:
//             printf("Grade: B\n");
//             break;
//         case 7:
//             printf("Grade: C\n");
//             break;
//         case 6:
//             printf("Grade: D\n");
//             break;
//         default:
//             printf("Grade: F\n");
//             break;
//     }

//     return 0;
// }

// e
// int main() {
//     char option;
//     float radius, height, volume, circumference;

//     printf("Enter the option:\n");
//     printf("r. to Calculate radius\n");
//     printf("c. to Calculate circumference\n");
//     printf("v. to Calculate volume\n");
//     scanf("%c", &option);

//     switch (option) {
//         case 'r':
//             printf("Enter the circumference of the cylinder: ");
//             scanf("%f", &circumference);
//             radius = circumference / (2 * 3.14);
//             printf("Radius: %.2f\n", radius);
//             break;
//         case 'c':
//             printf("Enter the radius of the cylinder: ");
//             scanf("%f", &radius);
//             circumference = 2 * 3.14 * radius;
//             printf("Circumference: %.2f\n", circumference);
//             break;
//         case 'v':
//             printf("Enter the radius and height of the cylinder: ");
//             scanf("%f %f", &radius, &height);
//             volume = 3.14 * radius * radius * height;
//             printf("Volume: %.2f\n", volume);
//             break;
//         default:
//             printf("Invalid option\n");
//             break;
//     }

//     return 0;
// }


// f
// int main(){
//     char alpha;

//     printf("Enter Alphabet: ");
//     scanf("%c",&alpha);

//     switch (alpha)
//     {
//     case 'a':
//         printf("Its a Vowel");
//         break;
//     case 'e':
//         printf("Its a Vowel");
//         break;
//     case 'i':
//         printf("Its a Vowel");
//         break;
//     case 'o':
//         printf("Its a Vowel");
//         break;
//     case 'u':
//         printf("Its a Vowel");
//         break;
//     default:
//         printf("Ite a Consonant");
//         break;
//     }
// }


// g
// int main(){
//     int num1,num2;
//     bool result;

//     printf("Enter number1: ");
//     scanf("%d",&num1);

//     printf("Enter number2: ");
//     scanf("%d",&num2);

//     result = num1 > num2;

//     switch (result)
//     {
//     case true:
//         printf("%d is Greater than %d",num1,num2);
//         break;
//     default:
//         printf("%d is Greater than %d",num2,num1);
//         break;
//     }
// }

// h
// int main() {
//     int number;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     switch (number % 2) {
//         case 0:
//             printf("%d is even.\n", number);
//             break;
//         case 1:
//             printf("%d is odd.\n", number);
//             break;
//     }

//     return 0;
// }

// // i
// int main() {
//     int number;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     switch (number > 0 ? 1 : (number < 0 ? -1 : 0)) {
//         case 1:
//             printf("%d is positive.\n", number);
//             break;
//         case -1:
//             printf("%d is negative.\n", number);
//             break;
//         case 0:
//             printf("%d is zero.\n", number);
//             break;
//     }

//     return 0;
// }

// j
// int main() {
//     float a, b, c, delta, root1, root2;

//     printf("Enter the coefficients a, b and c: ");
//     scanf("%f %f %f", &a, &b, &c);

//     delta = b * b - 4 * a * c;

//     switch(delta > 0 ? 1 : (delta == 0 ? 0 : -1)) {
//         case 1:
//             root1 = (-b + sqrt(delta)) / (2 * a);
//             root2 = (-b - sqrt(delta)) / (2 * a);
//             printf("The roots are real and distinct.\n");
//             printf("Root 1 = %f\n", root1);
//             printf("Root 2 = %f\n", root2);
//             break;
//         case 0:
//             root1 = root2 = -b / (2 * a);
//             printf("The roots are real and equal.\n");
//             printf("Root 1 = %f\n", root1);
//             printf("Root 2 = %f\n", root2);
//             break;
//         case -1:
//             printf("The roots are complex.\n");
//             printf("Root 1 = %.2f + %.2fi\n", -b / (2 * a), sqrt(-delta) / (2 * a));
//             printf("Root 2 = %.2f - %.2fi\n", -b / (2 * a), sqrt(-delta) / (2 * a));
//             break;
//     }

//     return 0;
// }

// 27
//import String
// int main() {
//     char str[100], new_str[100];
//     int i, j = 0;

//     printf("Enter a string: ");
//     fgets(str, 100, stdin);

//     for(i = 0; i < strlen(str); i++) {
//         if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
//            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
//             new_str[j++] = str[i];
//         }
//     }
//     new_str[j] = '\0';

//     printf("String without vowels: %s", new_str);

//     return 0;
// }

//28
// int main() {
//     int arr[100], size, pos, value, i;

//     // get size of the array
//     printf("Enter size of the array: ");
//     scanf("%d", &size);

//     // get elements of the array
//     printf("Enter elements of the array: ");
//     for(i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // get position and value to insert
//     printf("Enter position to insert: ");
//     scanf("%d", &pos);

//     if(pos > size+1 || pos <= 0) {
//         printf("Invalid position!");
//     } else {
//         printf("Enter value to insert: ");
//         scanf("%d", &value);

//         // shift elements to the right from pos to size
//         for(i = size; i >= pos; i--) {
//             arr[i] = arr[i-1];
//         }

//         // insert value at pos
//         arr[pos-1] = value;

//         // increase size of the array
//         size++;

//         // print the updated array
//         printf("Array after insertion: ");
//         for(i = 0; i < size; i++) {
//             printf("%d ", arr[i]);
//         }
//     }

//     return 0;
// }


// 29
// import String
// int main() {
//     char str[100];
//     int i, j, len;
//     int isPalindrome = 1;

//     // get the string from the user
//     printf("Enter a string: ");
//     fgets(str, MAX_SIZE, stdin);

//     // remove newline character from fgets
//     len = strlen(str);
//     if(str[len-1] == '\n') {
//         str[len-1] = '\0';
//     }

//     // check if the string is palindrome or not
//     len = strlen(str);
//     for(i = 0, j = len-1; i < len/2; i++, j--) {
//         if(str[i] != str[j]) {
//             isPalindrome = 0;
//             break;
//         }
//     }

//     // print the result
//     if(isPalindrome) {
//         printf("%s is a palindrome.", str);
//     } else {
//         printf("%s is not a palindrome.", str);
//     }

//     return 0;
// }

//30
// int main() {
//     int arr[100], size, i, max, second_max;

//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     printf("Enter the elements of the array: ");
//     for(i=0; i<size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Find the maximum element in the array
//     max = arr[0];
//     for(i=1; i<size; i++) {
//         if(arr[i] > max) {
//             max = arr[i];
//         }
//     }

//     // Find the second largest element in the array
//     second_max = arr[0];
//     for(i=1; i<size; i++) {
//         if(arr[i] > second_max && arr[i] < max) {
//             second_max = arr[i];
//         }
//     }

//     printf("The second largest element in the array is %d", second_max);

//     return 0;
// }

// 31
// int main() {
//     int arr[100], size, i, even_count=0, odd_count=0;

//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     printf("Enter the elements of the array: ");
//     for(i=0; i<size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Count the number of even and odd elements in the array
//     for(i=0; i<size; i++) {
//         if(arr[i] % 2 == 0) {
//             even_count++;
//         }
//         else {
//             odd_count++;
//         }
//     }

//     printf("The total number of even elements in the array is %d\n", even_count);
//     printf("The total number of odd elements in the array is %d\n", odd_count);

//     return 0;
// }

// 32
// int main() {
//     int arr[100], size, i, j, temp;

//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     printf("Enter the elements of the array: ");
//     for(i=0; i<size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Reverse the elements of the array
//     for(i=0, j=size-1; i<j; i++, j--) {
//         temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }

//     printf("The reverse of the array is: ");
//     for(i=0; i<size; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

//33
// int main() {
//     int arr[100], size, i, search;

//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     printf("Enter the elements of the array: ");
//     for(i=0; i<size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter the element to search: ");
//     scanf("%d", &search);

//     // Search for the element in the array
//     for(i=0; i<size; i++) {
//         if(arr[i] == search) {
//             printf("%d found at position %d\n", search, i+1);
//             break;
//         }
//     }

//     if(i == size) {
//         printf("%d not found in the array\n", search);
//     }

//     return 0;
// }

// 34
// a
// int main() {
//     int matrix1[10][10], matrix2[10][10], result[10][10];
//     int rows, columns, i, j;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     printf("Enter the number of columns: ");
//     scanf("%d", &columns);

//     printf("Enter the elements of first matrix:\n");
//     for(i=0; i<rows; i++) {
//         for(j=0; j<columns; j++) {
//             scanf("%d", &matrix1[i][j]);
//         }
//     }

//     printf("Enter the elements of second matrix:\n");
//     for(i=0; i<rows; i++) {
//         for(j=0; j<columns; j++) {
//             scanf("%d", &matrix2[i][j]);
//         }
//     }

//     // Add the two matrices
//     for(i=0; i<rows; i++) {
//         for(j=0; j<columns; j++) {
//             result[i][j] = matrix1[i][j] + matrix2[i][j];
//         }
//     }

//     // Print the result matrix
//     printf("The sum of the two matrices is:\n");
//     for(i=0; i<rows; i++) {
//         for(j=0; j<columns; j++) {
//             printf("%d\t", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// b
// int main() {
//     int matrix1[10][10], matrix2[10][10], result[10][10];
//     int rows, columns, i, j;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     printf("Enter the number of columns: ");
//     scanf("%d", &columns);

//     printf("Enter the elements of first matrix:\n");
//     for(i=0; i<rows; i++) {
//         for(j=0; j<columns; j++) {
//             scanf("%d", &matrix1[i][j]);
//         }
//     }

//     printf("Enter the elements of second matrix:\n");
//     for(i=0; i<rows; i++) {
//         for(j=0; j<columns; j++) {
//             scanf("%d", &matrix2[i][j]);
//         }
//     }

//     // Subtract the two matrices
//     for(i=0; i<rows; i++) {
//         for(j=0; j<columns; j++) {
//             result[i][j] = matrix1[i][j] - matrix2[i][j];
//         }
//     }

//     // Print the result matrix
//     printf("The difference of the two matrices is:\n");
//     for(i=0; i<rows; i++) {
//         for(j=0; j<columns; j++) {
//             printf("%d\t", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// c
// int main() {
//     int m, n, p, q, i, j, k;
//     printf("Enter the number of rows and columns of first matrix: ");
//     scanf("%d%d", &m, &n);
//     printf("Enter the elements of first matrix: \n");
//     int a[m][n];
//     for (i = 0; i < m; i++) {
//         for (j = 0; j < n; j++) {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Enter the number of rows and columns of second matrix: ");
//     scanf("%d%d", &p, &q);
//     if (n != p) {
//         printf("Matrix multiplication is not possible.");
//         return 0;
//     }
//     printf("Enter the elements of second matrix: \n");
//     int b[p][q];
//     for (i = 0; i < p; i++) {
//         for (j = 0; j < q; j++) {
//             scanf("%d", &b[i][j]);
//         }
//     }
//     int product[m][q];
//     for (i = 0; i < m; i++) {
//         for (j = 0; j < q; j++) {
//             product[i][j] = 0;
//             for (k = 0; k < n; k++) {
//                 product[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }
//     printf("Product of the matrices:\n");
//     for (i = 0; i < m; i++) {
//         for (j = 0; j < q; j++) {
//             printf("%d ", product[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// d
// #define ROWS 3
// #define COLS 3
// void transpose(int matrix[][COLS]) {
//     int temp;

//     for(int i = 0; i < ROWS; i++) {
//         for(int j = i + 1; j < COLS; j++) {
//             temp = matrix[i][j];
//             matrix[i][j] = matrix[j][i];
//             matrix[j][i] = temp;
//         }
//     }
// }

// int main() {
//     int matrix[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     printf("Original matrix:\n");

//     for(int i = 0; i < ROWS; i++) {
//         for(int j = 0; j < COLS; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }

//     transpose(matrix);

//     printf("\nTransposed matrix:\n");

//     for(int i = 0; i < COLS; i++) {
//         for(int j = 0; j < ROWS; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


// 35
// #define ROWS 3
// #define COLS 3

// void inputMatrix(int matrix[][COLS], int rows, int cols) {
//     printf("Enter matrix elements:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }
// }

// void displayMatrix(int matrix[][COLS], int rows, int cols) {
//     printf("Matrix:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d\t", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// int areMatricesEqual(int matrix1[][COLS], int matrix2[][COLS], int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             if (matrix1[i][j] != matrix2[i][j]) {
//                 return 0;
//             }
//         }
//     }
//     return 1;
// }

// int main() {
//     int matrix1[ROWS][COLS], matrix2[ROWS][COLS];
    
//     printf("Enter elements of first matrix:\n");
//     inputMatrix(matrix1, ROWS, COLS);
//     printf("\n");
    
//     printf("Enter elements of second matrix:\n");
//     inputMatrix(matrix2, ROWS, COLS);
//     printf("\n");
    
//     displayMatrix(matrix1, ROWS, COLS);
//     printf("\n");
    
//     displayMatrix(matrix2, ROWS, COLS);
//     printf("\n");
    
//     if (areMatricesEqual(matrix1, matrix2, ROWS, COLS)) {
//         printf("Matrices are equal.\n");
//     } else {
//         printf("Matrices are not equal.\n");
//     }
    
//     return 0;
// }

// 36
// #include <string.h>
// int main()
// {
//     char str1[100], str2[100];
//     int len;

//     printf("Enter a string: ");
//     fgets(str1, 100, stdin);

//     // String Length Function
//     len = strlen(str1);
//     printf("Length of the string is: %d\n", len);

//     // String Copy Function
//     strcpy(str2, str1);
//     printf("Copied string is: %s", str2);

//     // String Concatenation Function
//     printf("Enter another string to concatenate: ");
//     fgets(str2, 100, stdin);
//     strcat(str1, str2);
//     printf("Concatenated string is: %s", str1);

//     // String Comparison Function
//     printf("Enter a string to compare: ");
//     fgets(str2, 100, stdin);
//     if (strcmp(str1, str2) == 0)
//         printf("Strings are equal\n");
//     else
//         printf("Strings are not equal\n");

//     return 0;
// }

// 37
// int main() {
//    int a = 5;
   
//    printf("Value of a: %d\n", a);  // Output: Value of a: 5
   
//    a++;  // Increment operator
   
//    printf("Value of a after increment: %d\n", a);  // Output: Value of a after increment: 6
   
//    a--;  // Decrement operator
   
//    printf("Value of a after decrement: %d\n", a);  // Output: Value of a after decrement: 5
   
//    return 0;
// }

//38
// #include <stdio.h>
// int main() {
//     int i;

//     printf("Starting loop...\n");
//     for (i = 1; i <= 10; i++) {
//         if (i == 5) {
//             printf("Jumping to end of loop...\n");
//             continue;
//         }
//         if (i == 8) {
//             printf("Breaking out of loop...\n");
//             break;
//         }
//         printf("Iteration %d\n", i);
//     }
//     printf("Loop finished.\n");

//     return 0;
// }


//39
// 1
// int main(){
//     printf("*");
//     printf("**");
//     printf("***");
//     printf("****");
// }

//2
// int main(){
//     printf("1");
//     printf("1 2");
//     printf("1 2 3");
//     printf("1 2 3 4");
// }

//3
// int main(){
//     printf("A");
//     printf("B C");
//     printf("D E F");
//     printf("G H I J");
// }


// 40
// #include <stdio.h>

// int main() {
//     int num1, num2, sum;
//     int *ptr1, *ptr2;
    
//     printf("Enter two integers: ");
//     scanf("%d %d", &num1, &num2);
    
//     ptr1 = &num1; // using pointer
//     ptr2 = &num2; 
    
//     sum = *ptr1 + *ptr2;
    
//     printf("Sum = %d", sum);
    
//     return 0;
// }


//41
// #include <stdio.h>

// void swap_arrays(int *arr1, int *arr2, int size) {
//     for (int i = 0; i < size; i++) {
//         int temp = *(arr1 + i);
//         *(arr1 + i) = *(arr2 + i);
//         *(arr2 + i) = temp;
//     }
// }

// int main() {
//     int arr1[] = {1, 2, 3, 4, 5};
//     int arr2[] = {6, 7, 8, 9, 10};
//     int size = sizeof(arr1) / sizeof(int);
    
//     printf("Before swapping:\n");
//     printf("Array 1: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", *(arr1 + i));
//     }
//     printf("\nArray 2: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", *(arr2 + i));
//     }
    
//     swap_arrays(arr1, arr2, size);
    
//     printf("\n\nAfter swapping:\n");
//     printf("Array 1: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", *(arr1 + i));
//     }
//     printf("\nArray 2: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", *(arr2 + i));
//     }
    
//     return 0;
// }


// 42
// #include <stdio.h>

// int main() {
//     int arr[100], n, *ptr;
    
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
    
//     printf("Enter the array elements:\n");
//     for(int i=0; i<n; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     printf("The array elements are: ");
//     ptr = arr;
//     for(int i=0; i<n; i++) {
//         printf("%d ", *(ptr+i));
//     }
    
//     return 0;
// }


//43
// #include <stdio.h>

// // Global variables
// int global_var = 10;
// static int static_var = 20;

// // Function with automatic variables
// void func_auto(void)
// {
//     auto int auto_var = 30;
//     printf("Automatic variable: %d\n", auto_var);
// }

// // Function with register variables
// void func_register(void)
// {
//     register int reg_var = 40;
//     printf("Register variable: %d\n", reg_var);
// }

// int main()
// {
//     // Local variable
//     int local_var = 50;
    
//     printf("Global variable: %d\n", global_var);
//     printf("Static variable: %d\n", static_var);
//     func_auto();
//     func_register();
//     printf("Local variable: %d\n", local_var);
    
//     return 0;
// }


// 44
// #include <stdio.h>

// int main() {
//     int numbers[10];
//     int sum = 0;
    
//     printf("Enter 10 natural numbers:\n");
    
//     // Read 10 numbers from user input
//     for(int i=0; i<10; i++) {
//         scanf("%d", &numbers[i]);
//     }
    
//     // Calculate sum of the numbers
//     for(int i=0; i<10; i++) {
//         sum += numbers[i];
//     }
    
//     // Display the sum
//     printf("Sum of 10 natural numbers is %d\n", sum);
    
//     return 0;
// }


// 45
// #include <stdio.h>

// int main() {
//     int number = 5;
//     int *p1 = &number;
//     int **p2 = &p1;
    
//     // Display the value of number using the pointer to pointer
//     printf("Value of number: %d\n", **p2);
    
//     // Change the value of number using the pointer to pointer
//     **p2 = 10;
//     printf("New value of number: %d\n", number);
    
//     return 0;
// }
