#include <stdio.h>

// Number pattern 1
// int main() {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             printf("1");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// ----------------------------------
// Number pattern 2
// int main() {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i%2==0) printf("0");
//             else printf("1");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// -----------------------------------
// Number pattern 3
// int main() {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j%2==0) printf("1");
//             else printf("0");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// -----------------------------------
// NUmber pattern 4
// int main() {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1 || i==n || j==1 || j==n) printf("1");
//             else printf("0");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// --------------------------------
// Number Pattern 5
// int main() {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==n/2+1 && j==n/2+1) printf("0");
//             else printf("1");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// ---------------------------------
// Number pattern 6
// int main() {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i%2==0) 
//                 if(j%2==0)printf("1");
//                 else printf("0");
//             else 
//                 if(j%2==0)printf("0");
//                 else printf("1");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// -------------------------------
// Number pattern 7
// int main() {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==n/2+1 || j==n/2+1) printf("0");
//             else printf("1");
//             }
//         printf("\n");
//     }
//     return 0;
// }
// ---------------------------------
// Number pattern 8
// int main() {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==j || j==n+1-i) printf("1");
//             else printf("0");
//             }
//         printf("\n");
//     }
//     return 0;
// }
// ---------------------------------
// Number pattern 9
// int main() {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1 || i==n ){
//                 if(j==1 || j==n) printf("0");
//                 else printf("1");
//             }
//             else {
//                 if(j==1 || j==n)printf("1");
//                 else printf("0");
//             }
            
//         }
//         printf("\n");
//     }
//     return 0;
// }
// ---------------------------------
// Number pattern 10
// int main() {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             printf("%d",i);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// ---------------------------------
// Number pattern 11
// int main() {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// --------------------------------
// Number pattern 12
// int main() {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         int a=i;
//         for(int j=1;j<=n;j++){
//             printf("%d",a++);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// -------------------------------
// Number pattern 13
// int main() {
//     int n=5;
//     int count=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             printf("%d\t",count++);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// -------------------------------
// Number pattern 14
// int main() {
//     int n=5;
//     for(int i=n;i>=1;i--){
//         for(int j=n;j>=1;j--){
//             if(i>j) printf("%d",i);
//             else printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// ----------------------------
// Number pattern 15
// int main() {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++)
//         {
//             printf("%d",j);
//         }
//         for(int j=i;j>1;j--){
//             printf("%d",n);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// -------------------------------
// Number pattern 16
// int main() {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++) printf("%d",j);
//         for(int j=i-1;j>=1;j--) printf("%d",j);
//         printf("\n");
//     }
//     return 0;
// }
// -------------------------------
// Number pattern 17
// int main() {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j>1;j--) printf("%d",j);
//         for(int j=1;j<=n-i+1;j++) printf("%d",j);
//         printf("\n");
//     }
//     return 0;
// }
// --------------------------------
// Number pattern 18
// int main() {
//     int n=5;
//     for(int i=n;i>=1;i--){
//         for(int j=n;j>i;j--) printf("%d ",j);
//         for(int j=1;j<=i*2-1;j++) printf("%d ",i);
//         for(int j=i;j<n;j++) printf("%d ",j+1);
//         printf("\n");
//     }
//     for(int i=1+1;i<=n;i++){
//         for(int j=n;j>i;j--) printf("%d ",j);
//         for(int j=1;j<=i*2-1;j++) printf("%d ",i);
//         for(int j=i;j<n;j++) printf("%d ",j+1);
//         printf("\n");
//     }
//     return 0;
// }
// ---------------------------------
// Number pattern 39
// int main() {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i*2-1;j++) printf("%d",j);
//         printf("\n");
//     }
//     return 0;
// }
// -----------------------------------
// Number pattern 40
// int main() {
//     int n=5,k;
//     for(int i=1;i<=n;i++){
//         if(i%2==0){
//             k=2;
//             for(int j=1;j<=i;j++,k+=2) printf("%d",k);
//         }
//         else{
//             k=1;
//             for(int j=1;j<=i;j++,k+=2) printf("%d",k);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// ------------------------------------
// Number pattern 41
// int main() {
//     int n=5,k;
//     for(int i=1;i<=n;i++){
//         k=1;
//         for(int j=1;j<=i;j++,k+=2) printf("%d",k);
//         k-=4;
//         for(int j=1;j<i;j++,k-=2) printf("%d",k);
//         printf("\n");
//     }
//     return 0;
// }
// ------------------------------------
// Number pattern 42
// int main() {
//     int n=5,k;
//     for(int i=1;i<=n;i++){
//         k=2;
//         for(int j=1;j<=i;j++,k+=2) printf("%d",k);
//         k-=4;
//         for(int j=1;j<i;j++,k-=2) printf("%d",k);
//         printf("\n");
//     }
//     return 0;
// }
// ------------------------------------
// Number pattern 43
// int main() {
//     int n=5,k;
//     for(int i=1;i<=n;i++){
//         k=1;
//         for(int j=1;j<=i;j++,k++) printf("%d",k);
//         k-=2;
//         for(int j=1;j<i;j++,k--) printf("%d",k);
//         printf("\n");
//     }
//     return 0;
// }
// -------------------------------------
// Number pattern 44
// int main() {
//     int n=5,k=1;
//     for(int i=1;i<=n;i++){
//         int value=i+1;
//         for(int j=3;j<=i;j++) printf("%d",value++);
//         int temp=k;
//         for(int j=1;j<=i;j++) {
//             printf("%d",temp);
//             temp--;
//         }
//             k+=2;
//         printf("\n");
//     }
//     return 0;
// }
// -------------------------------------
// Number pattern 45
// int main() {
//     int n=5,k=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++) printf("%d ",k++);
//         printf("\n");
//     }
//     return 0;
// }
// ---------------------------------------
// Number pattern 47
// int main() {
//     int n=5,k=1,col=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=col;j++){ 
//             printf("%d",k);
//             k++;
//             if(k==10) k=1;
//         }
//         printf("\n");
//         col*=2;
//     }
//     return 0;
// }
// -------------------------------------
// Number pattern 50
// int main()
// {
//     int n=5,count=1,diff=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){ printf("%d ",count);
//             count+=diff;
//             diff++;
//         }
//         printf("\n");
//     }
//     return 0;
// }
// -------------------------------------
// Number pattern 53
// int main() {
//     int n=12345,num;
//     while(n!=0){
//         num=n;
//         printf("%d\n",num);
//         n/=10;
//     }
//     return 0;
// }
// ------------------------------------
// Number pattern 54
// #include <math.h>

// int main()
// {
//     int num, firstDigit, digits, placeValue;
//     printf("Enter any number: ");
//     scanf("%d", &num);
//     while(num > 0)
//     {
//         printf("%d\n", num);
//         digits = (int) log10(num);  // Get total number of digits
//         printf("digit=%d\n",digits);
//         placeValue = (int) ceil(pow(10, digits)); // Get the place value of first digit
//         printf("placevalue=%d\n",placeValue);
//         firstDigit = (int)(num / placeValue);   // Get the first digit
//         printf("firstDigit=%d\n",firstDigit);
//         num = num - (placeValue * firstDigit); // Remove first digit from number
//     }
//     return 0;
// }
// --------------------------------------
// number pattern 55
// nt main()
// {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     for(int i=n-1;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// ------------------------------------
// number pattern 56
// int main()
// {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i*2-1;j++) printf("%d",j);
//         printf("\n");
//     }
//     for(int i=n-1;i>=1;i--){
//         for(int j=1;j<=i*2-1;j++) printf("%d",j);
//         printf("\n");
//     }
//     return 0;
// }
// ----------------------------------
// Number pattern 57
// int main()
// {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++) printf("%d",j);
//         for(int j=i-1;j>=1;j--) printf("%d",j);
//         printf("\n");
//     }
//     for(int i=n-1;i>=1;i--){
//         for(int j=1;j<=i;j++) printf("%d",j);
//         for(int j=i-1;j>=1;j--) printf("%d",j);
//         printf("\n");
//     }
//     return 0;
// }
// --------------------------------
// Number pattern 58
// int main()
// {
//     int n=5;
//     printf("*\n");
//     for(int i=1;i<=n;i++){
//         printf("*");
//         for(int j=1;j<=i;j++) printf("%d",j);
//         for(int j=i-1;j>=1;j--) printf("%d",j);
//         printf("*");
//         printf("\n");
//     }
//     for(int i=n-1;i>=1;i--){
//         printf("*");
//         for(int j=1;j<=i;j++) printf("%d",j);
//         for(int j=i-1;j>=1;j--) printf("%d",j);
//         printf("*");
//         printf("\n");
//     }
//     printf("*");
//     return 0;
// }
// --------------------------------
// number pattern 59
// int main()
// {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=i;j>1;j--) printf(" ");
//         for(int j=i;j<=n*2-1;j++) {
//             if(j==i || j==n*2-i )printf("%d",i);
//             else printf(" ");
//         }
//         printf("\n");
//     }
//     for(int i=n-1;i>=1;i--){
//         for(int j=i;j>1;j--) printf(" ");
//         for(int j=i;j<=n*2-1;j++) {
//             if(j==i || j==n*2-i )printf("%d",i);
//             else printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// -------------------------------













