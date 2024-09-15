// Online C compiler to run C program online
// #include <stdio.h>

// TO print the number from 1 to n
// int main(){
//     int i=1,n;
//     printf("Enter the number to print: ");
//     scanf("%d",&n);
//     while(i<=n){
//     printf("%d\n",i);
//     i++;
//     }
// }
// ------------------------------------------------
// to print number in reverse
// int main(){
//     int i=1,n;
//     printf("Enter the value to start printing till 1: ");
//     scanf("%d",&n);
//     while(n>=i){
//     printf("%d\n",n);
//     n--;
//     }
// }
// --------------------------------------------
// print a to z small
// int main(){
//     int i='a';
//     while(i<='z'){
//         printf("%c\n",i);
//         i++;
//     }

// OR

//     int a=97;
//     while(a<=122){
//         printf("%c\n",a);
//         a++;
//     }
// }
// --------------------------------------------
// print alphabets A to Z capital
// int main(){
//     int i='A';
//     while(i<='Z'){
//         printf("%c\n",i);
//         i++;
//     }
// }

// OR
// int main(){
//     int i=65;
//     while(i<=90){
//         printf("%c\n",i);
//         i++;
//     }
// }
// ----------------------------------------------
// print even from 1 to n
// int main(){
//     int i=1,n;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     while(i<=n){
//         if(i%2==0){
//             printf("%d\n",i);
//         }
//         i++;
//     }
// }
// ------------------------------------
// print odd numbers from 1 to n
// int main(){
//     int i=1,n;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     while(i<=n){
//         if(i%2!=0){
//             printf("%d\n",i);
//         }
//         i++;
//     }
// }
// ------------------------------------
// sum of natural number from 1 to n
// int main(){
//     int i=1,n,sum=0;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     while(i<=n){
//         sum=sum+i;
//         i++;
//     }
//     printf("sum of numbers from 1 to %d is %d",n,sum);
// }
// ------------------------------------------
// sum of even natural numbers from 1 to n
// int main(){
//     int i=1,n,sum=0;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     while(i<=n){
//         if(i%2==0){
//             sum+=i;
//         }
//         i++;
//     }
//     printf("Sum of natural numbers from 1 to %d is %d",n,sum);
// }
// -------------------------------------------
// sum of odd natural numbers from 1 to n
// int main(){
//     int i=1,n,sum=0;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     while(i<=n){
//         if(i%2!=0){
//             sum+=i;
//         }
//         i++;
//     }
//     printf("Sum of odd natural numbers from 1 to %d is %d",n,sum);
// }
// ---------------------------------------
// print the multiplication table for any number
// int main(){
//     int i=1,n;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     while(i<=10){
//         printf("%d*%d= %d\n",n,i,i*n);
//         i++;
//     }
// }
// --------------------------------------
// count the number of digits in a number (Exception is start with 0)
// int main(){
//     long long n;
//     int count;
//     printf("Enter the number: ");
//     scanf("%lld",&n);

//     int temp=n;
//     if(n>0){
//     while(temp!=0){
//         temp/=10;
//         count++;
//     }printf("Count of digits in %lld is %d",n,count);
//     }
//     else{
//         printf("Enter the valid value of n");
//     }
// }
// ------------------------------------------
// print the first and the last digit of the number (exception is start with 0)
// int main(){
//     int n,first,last;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     last=n%10;
//     while(n>=10){
//         n/=10;
//     }
//     first=n;
//     printf("First and last digits are %d and %d",first,last);
// }
// ------------------------------------------
// sum of first and last digit of the number
// int main(){
//     int n,first,last;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     last=n%10;
//     while(n>=10){
//         n/=10;
//     }
//     first=n;
//     printf("Sum of first digit %d and last digit %d is %d",first,last,first+last);
// }

// ------------------------------------------
// swap first and last digit of a number
// #include<math.h>
// int main(){
//     int n,length=1,first,last;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     last=n%10;
//     int temp=n;
//     while(temp>=10){
//         temp/=10;
//         length*=10;
//     }
//     first=temp;
//     printf("%d",(n-(first*length)-last) + (last*length)+first);
// }
// -----------------------------------------
// print sum of digits of number
// int main(){
//     int n,sum;
//     printf("Enter the value of number: ");
//     scanf("%d",&n);
//     int num=n;
//     while(n!=0){
//         sum+=n%10;
//         n/=10;
//     }
//     printf("Sum of digits of %d number is %d",num,sum);
// }
// -----------------------------------------
// product of digits of number
// int main(){
//     int n,pro=1;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     int num=n;
//     while(n!=0){
//         pro*=n%10;
//         n/=10;
//     }
//     printf("Product of digits of %d is %d",num,pro);
// }
// ------------------------------------------
// print number in reverse
// int main(){
//     int n=123452;
//     while(n!=0){
//         printf("%d",n%10);
//         n/=10;
//     }
// }
// ---------------------------------------
// check palindrome
// int main(){
//     int n= 1234554321;
//     int sum=0;
//     int temp=n;
//     while(temp!=0){
//         sum*=10;
//         sum+=temp%10;
//         temp/=10;
//     }
//     if(n==sum){
//         printf("Palindrome");
//     }
//     else{
//         printf("Not palindrome");
//     }
// }
// -------------------------------------------
// count frequency of digits
// int main(){
//     int n=25564512;
//     int lastdigit;
//     int freq[10];
//     for(int i=0; i<10; i++)
//     {
//         freq[i] = 0;
//     }
//     while(n!=0){
//         lastdigit=n%10;
//         freq[lastdigit]++;
//         n/=10;
//     }
//     for(int i=0;i<10;i++){
//     printf("Frequency of %d is=%d\n",i,freq[i]);
//     }
// }
// -------------------------------------------
// digits of a number to words
// int main(){
//     int n=864253;
//     int num=0;
//     char a[][10]={"zero","One","Two","Three","Four","five","six","seven","eight","nine","ten"};
//     // first store reverse of n in num
//     while(n!=0){
//         num*=10;
//         num+=n%10;
//         n/=10;
//     }
//     while(num!=0){
//         printf("%s ",a[num%10]);
//         num/=10;
//     }
// }
// -----------------------------------------
// print ascii character with values
// int main(){
//     int i=0;
//     while(i<=255){
//         printf("Ascii character for value %d is %c\n",i,i);
//         i++;
//     }
// }
// -----------------------------------------
// print power of number
// int main(){
//     int base,exponent,result=1;
//     printf("Input base: ");
//     scanf("%d",&base);
//     printf("Input exponent: ");
//     scanf("%d",&exponent);
//     for(int i=1;i<=exponent;i++){
//         result*=base;
//     }
//     printf("%d power %d is %d",base,exponent,result);
//     return 0;
// }
// ----------------------------------------
// factors of given number
// int main(){
//     int i=1,n=660;
//     printf("Factors of %d are ",n);
//     while(i<=n){
//         if(n%i==0){
//         printf("%d ",i);
//         }
//         i++;
//     }
//     return 0;
// }
// ---------------------------------------
// Find the HCF (GCD)
// int main(){
//     int a=10,b=5,num,rem;
//     int num1=a,num2=b;
//     do{
//         num=a/b;
//         rem=a%b;
//         if(rem==0){
//             printf("HCF of %d and %d is %d",num1,num2,b);
//         }
//         else{
//         a=b;
//         b=rem;
//         }
//     }while(rem!=0);
//     return 0;
// }
// -------------------------------------------
// Write a C program to find LCM of two numbers.
// #include <stdio.h>
// #include <math.h>
// void lcm(int a,int b){
//     int value=0;
//     int max=0;
//     if(a>b)
//     {
//         max=a;
//     }
//     else {
//         max=b;
//     }
//     while(1){
//         value+=max;
//         if(value%a==0 && value%b==0) {
//             printf("lcm is %d ",value);
//             return;
//         }
//     }
// }
// int main() {
//     int a=3;
//     int b=8;
//     lcm(a,b);
//     return 0;
// }
// --------------------------------------------
// Write a C program to check whether a number is Prime number or not.
// #include <stdio.h>
// int main() {
//     int n=17;
//     for(int i=2;i<=n;i++){
//         if(i==n){
//             printf("prime");
//         }
//         else if(n%i==0){
//             printf("Not prime");
//             break;}
//     }
//     return 0;
// }
// ------------------------------------------------
// Write a C program to print all Prime numbers between 1 to n.
// #include <stdio.h>
// int main() {
//     int n=20;
//     for(int i=2;i<=n;i++){
//     for(int j=2;j<=i;j++){
//         if(j==i){
//             printf("%d \n",i);
//         }
//         else if(i%j==0){
//             break;}
//     }
//     }
//     return 0;
// }
// -------------------------------------------------
// Write a C program to find sum of all prime numbers between 1 to n.
// #include <stdio.h>
// int main() {
//     int n=5;
//     int sum=0;
//     for(int i=2;i<=n;i++){
//     for(int j=2;j<=i;j++){
//         if(j==i){
//             sum+=i;
//             printf("%d \n",i);
//         }
//         else if(i%j==0){
//             break;}
//     }
//     }
//     printf("sum =%d",sum);
//     return 0;
// }
// ------------------------------------------------
// Write a C program to find all prime factors of a number.
// #include <stdio.h>
// int main() {
//     int n=25;
//     printf("Prime factors for %d \n",n);
//     for(int i=1;i<=n/2;i++){
//         if(n%i==0){
//             for(int j=2;j<=i;j++){
//                 if(i==j) printf("%d \n",i);
//                 else if(i%j==0) break;
//             }
//         }
//     }
//     return 0;
// }
// -----------------------------------------------
// Write a C program to print Fibonacci series up to n terms.
// #include <stdio.h>
// int main() {
//     int num=8;
//     int n1=1,n2=1,n3;
//     for(int n=1;n<=num;n++){
//     if(n==1)
//     printf("%d ",n1);
//     else if(n==2)
//     printf("%d ",n2);
//     else{
//         n3=n1+n2;
//         printf("%d ",n3);
//         n1=n2;
//         n2=n3;
//         }
//     }
//     return 0;
// }
// ---------------------------------------------
// Write a C program to find one’s complement of a binary number.
