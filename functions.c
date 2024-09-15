// write function find cube
// #include <stdio.h>
// #include <math.h>
// int cube(int num){
//     return pow(num,3);
// }

// int main() {
//     printf("cube is %d",cube(5));
//     return 0;
// }
// --------------------------------------
// Write a C program to find diameter, circumference and area of circle using functions.
// #include <stdio.h>
// #include <math.h>
// float diameter(float radius){
//     return radius*2;
// }
// float circleArea(float radius){
//     float pi=3.14;
//     return pi*radius*radius;
// }
// float circumferenceCircle(float radius){
//     float pi=3.14;
//     return 2*pi*radius;
// }
// int main() {
//     float radius=5;
//     printf("Diameter is %.2f\n",diameter(radius));
//     printf("Area of circle is %.2f\n",circleArea(radius));
//     printf("Circumference of circle is %.2f\n",circumferenceCircle(radius));
//     return 0;
// }
// -----------------------------------
// Write a C program to find maximum and minimum between two numbers using functions.
// #include <stdio.h>
// #include <math.h>
// void maxMin(int num1,int num2){
//     if(num1>num2){
//         printf("Max is %d",num1);
//         printf("Min is %d",num2);
//     }
//     else{
//         printf("Max is %d\n",num2);
//         printf("Min is %d\n",num1);
//     }
//         return;
// }

// int main() {
//     int num1=20,num2=32;
//     maxMin(num1,num2);
//     return 0;
// }
// -----------------------------------
// Write a C program to check whether a number is even or odd using functions.
// #include <stdio.h>
// #include <math.h>
// void evenodd(int num1){
//     if(num1%2==0){
//         printf("even");
//     }
//     else{
//         printf("odd");
//     }
//         return;
// }

// int main() {
//     int num=20;
//     evenodd(num);
//     return 0;
// }
// ------------------------------------
// Write a C program to check whether a number is prime, Armstrong or perfect number using functions.
// #include <stdio.h>
// #include <math.h>
// void check(int n){
//     for(int i=2;i<=n;i++){
//         if(i==n){
//             printf("prime\n");
//         }
//         else if(n%2==0) {
//             printf("not prime\n");
//             break;
//         }
//     }
//     int temp=n;
//     int num=0;
//     while(temp!=0){
//         num=num+pow(temp%10,3);
//         temp/=10;
//     }
//     if(num==n) printf("Armstrong \n");
//     else printf("Not Armstrong \n");
//     int perfect=0;
//     for(int i=1;i<=n/2;i++)
//         if(n%i==0)
//             perfect+=i;
//     if(perfect==n) printf("perfect\n");
//     else printf("Not perfect\n");
//     return;
// }

// int main() {
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     check(n);
//     return 0;
// }
// --------------------------------------
// Write a C program to find all prime numbers between given interval using functions.
// #include <stdio.h>
// #include <math.h>
// void check(int n){
//     for(int j=2;j<=n;j++)
//      {
//          for(int i=2;i<=j;i++){
//             if(i==j){
//                 printf("%d\n",i);
//             }
//             else if(j%i==0) {
//                 break;
//             }
//         }
//      }
//     return;
// }

// int main() {
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     check(n);
//     return 0;
// }
// -----------------------------------------
// Write a C program to print all strong numbers between given interval using functions.
// #include <stdio.h>
// #include <math.h>

// int fact(int n){
//     int f=1;
//     for(int i=1;i<=n;i++){
//         f*=i;
//     }
//     return f;
// }

// void check(int n){
//     for(int i=1;i<=n;i++){
//         int temp=i;
//         int sum=0;
//         while(temp!=0){
//             sum+=fact(temp%10);
//             temp/=10;
//         }
//         if(sum==i) printf("%d Strong number\n",i);
//     }
//     return;
// }

// int main() {
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     check(n);
//     return 0;
// }
// ---------------------------------------
// Write a C program to print all Armstrong numbers between given interval using functions.
// #include <stdio.h>
// #include <math.h>

// void check(int n){
//     for(int i=1;i<=n;i++){
//     int temp=i;
//     int num=0;
//     while(temp!=0){
//         num=num+pow(temp%10,3);
//         temp/=10;
//     }
//     if(num==i) printf("%d armstrong\n",i);
//     }
//     return;
// }

// int main() {
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     check(n);
//     return 0;
// }
// ---------------------------------------
// Write a C program to print all perfect numbers between given interval using functions.
// #include <stdio.h>
// #include <math.h>

// void check(int n){
//     for(int i=1;i<=n;i++){
//     int perfect=0;
//     for(int j=1;j<=i/2;j++)
//         if(i%j==0)
//             perfect+=j;
//     if(perfect==i) printf("%d perfect\n",i);
//     }
//     return;
// }

// int main() {
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     check(n);
//     return 0;
// }
// ------------------------------------------
// Write a C program to find power of any number using recursion.
// #include <stdio.h>
// #include <math.h>

// int power(int base,int exponent){
//     if(exponent==0)
//     return 1;
//     else
//     return base * power(base,exponent-1);
// }

// int main() {
//     int base,exponent;
//     printf("Enter base number: ");
//     scanf("%d",&base);
//     printf("Enter exponent: ");
//     scanf("%d",&exponent);
//     printf("%d",power(base,exponent));
//     return 0;
// }
// ------------------------------------------
// Write a C program to print all natural numbers between 1 to n using recursion.
// #include <stdio.h>
// #include <math.h>

// int natural(int n){
//     if(n==0)
//     return 1;
//     else{
//         natural(n-1);
//         printf("%d\n",n);
//     }
// }

// int main() {
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     natural(n);
//     return 0;
// }
// --------------------------------
// Write a C program to print all even or odd numbers in given range using recursion.
// #include <stdio.h>
// #include <math.h>

// int even(int n){
//     if(n==0)
//     return 1;
//     else {
//         even(n-1);
//         if(n%2==0) printf("%d\n",n);
//     }
// }
// int odd(int n){
//     if(n==0)
//     return 1;
//     else {
//         odd(n-1);
//         if(n%2!=0) printf("%d\n",n);
//     }
// }

// int main() {
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     even(n);
//     printf("\n");
//     odd(n);
//     return 0;
// }
// ---------------------------------
// Write a C program to find sum of all natural numbers between 1 to n using recursion.
// #include <stdio.h>
// #include <math.h>

// int sum(int n){
//     if(n==0)
//     return 0;
//     else return n+sum(n-1);
// }
// int main() {
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     printf("%d",sum(n));
//     return 0;
// }
// ---------------------------------
// Write a C program to find sum of all even or odd numbers in given range using recursion.
// #include <stdio.h>
// #include <math.h>

// int evensum(int n,int sum){
//     if(n==0){
//         return sum;
//     }
//     if(n%2==0){
//         sum=n+evensum(n-1,sum);
//     }
//     else evensum(n-1,sum);
// }
// int oddsum(int n,int sum){
//     if(n==0){
//         return sum;
//     }
//     if(n%2!=0){
//         sum=n+oddsum(n-1,sum);
//     }
//     else oddsum(n-1,sum);
// }

// int main() {
//     int n,sum=0;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     printf("Even sum %d  \n",evensum(n,sum));
//     printf("odd sum %d  ",oddsum(n,sum));
//     return 0;
// }
// ----------------------------------
// Write a C program to find reverse of any number using recursion.
// #include <stdio.h>
// #include <math.h>

// void reverse(int n){
//     if(n==0) return ;
//     printf("%d",n%10);
//     reverse(n/10);
// }

// int main() {
//     int n,sum=0;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     reverse(n);

//     return 0;
// }
// ------------------------------------
// Write a C program to check whether a number is palindrome or not using recursion.
// #include <stdio.h>
// #include <math.h>

// int reverse(int num)
// {   int digit =(int) log10(num);
//     if(num==0) return 0;
//     else return ((num%10)*pow(10,digit)) + reverse(num/10);
// }

// void ispalindrome(int  n,int reversed){
//     if(n==reversed) printf("Palindrome");
//     else printf("Not palindrome");
// }

// int main() {
//     int n,sum=0;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     ispalindrome(n,reverse(n));
//     return 0;
// }
// -------------------------------------
// Write a C program to find sum of digits of a given number using recursion.
// #include <stdio.h>
// #include <math.h>

// int sum(int num)
// {
//     if(num==0) return 0;
//     else return num%10 + sum(num/10);
// }

// int main() {
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     printf("%d",sum(n));
//     return 0;
// }
// ------------------------------------
// Write a C program to find factorial of any number using recursion.
// #include <stdio.h>
// #include <math.h>

// int fact(int num)
// {
//     if(num==0) return 1;
//     else return num * fact(num-1);
// }

// int main() {
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     printf("%d",fact(n));
//     return 0;
// }
// -----------------------------------------
// Write a C program to generate nth Fibonacci term using recursion.
// #include <stdio.h>
// #include <math.h>

// int fib(int num)
// {
//     if(num==1 || num ==2) return 1;
//     else return fib(num-1) + fib(num-2);
// }

// int main() {
//     int n;
//     printf("Enter number: ");
//     scanf("%d",&n);
//     printf("%d",fib(n));
//     return 0;
// }
// ------------------------------------------
// Write a C program to find GCD (HCF) of two numbers using recursion.
// #include <stdio.h>
// #include <math.h>

// int hcf(int a,int b)
// {
//     if(a%b==0) return b;
//     else return hcf(b,a%b);
// }

// int main() {
//     int a,b;
//     printf("Enter number: ");
//     scanf("%d",&a);
//     printf("Enter number: ");
//     scanf("%d",&b);
//     printf("%d",hcf(a,b));
//     return 0;
// }

// ----------------------------------------------
// Write a C program to find LCM of two numbers using recursion.
// #include <stdio.h>
// #include <math.h>
// int value=0;
// int lcm(int a,int b)
// {   value+=b;
//     if(value%a==0 && value%b==0) return value;
//     else lcm(a,b);
// }

// int main() {
//     int a,b;
//     printf("Enter number: ");
//     scanf("%d",&a);
//     printf("Enter number: ");
//     scanf("%d",&b);
//     printf("%d",lcm(a,b));
//     return 0;
// }
// -------------------------------------------
// Write a C program to display all array elements using recursion.
// #include <stdio.h>
// #include <math.h>

// void display(int a[],int start,int len)
// {  if(start>=len) return;
//    else{
//     printf("%d ",a[start]);
//     display(a,start+1,len);
//    }
// }

// int main() {
//     int a[]={12,45,23,45,1,2,3,6,45,1};
//     int len=sizeof(a)/sizeof(a[0]);
//     display(a,0,len);
//     return 0;
// }
// --------------------------------------------
// Write a C program to find sum of elements of array using recursion.
// #include <stdio.h>
// #include <math.h>

// int display(int a[],int start,int len)
// {  if(start>=len) return 0 ;
//    else{
//     return a[start] + display(a,start+1,len);
//    }
// }

// int main() {
//     int a[]={1,1,2,3,8};
//     int len=sizeof(a)/sizeof(a[0]);
//     printf("%d",display(a,0,len));
//     return 0;
// }
// ------------------------------------------------
// Write a C program to find maximum and minimum elements in array using recursion.
// #include <stdio.h>
// #include <math.h>
// #include <limits.h>
// void minMax(int a[],int len,int start,int max,int min){
//     if(start>=len)
//     {   printf("Max is %d\n",max);
//         printf("Min is %d",min);
//         return;
//     }
//     if(a[start]>max){
//         max=a[start];
//     }
//     if(a[start]<min){
//         min=a[start];
//     }
//     minMax(a,len,start+1,max,min);
// }
// int main() {
//     int a[]={2,21,45,5,3,6,1,9};
//     int len=sizeof(a)/sizeof(a[0]);
//     int max=INT_MIN;
//     int min=INT_MAX;
//     minMax(a,len,0,max,min);
//     return 0;
// }
