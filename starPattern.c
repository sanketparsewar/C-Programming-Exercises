#include <stdio.h>

// Square * pattern
// int main() {
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// -------------------------------------
// Hollow square * pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1 || i==n || j==1 || j==n)
//                 printf("*");
            
//             else
//             printf(" ");
//         }
//             printf("\n");
//     }
// }
// --------------------------------------
//  Hollow square * pattern with diagonal
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(i==1 || i==n || j==1 || j==n || i==j || j==n-i+1)
//             printf("* ");
//             else printf("  ");
//         }
//         printf("\n");
//     }
// }
// -------------------------------------
// Rhombus * pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>i;j--){
//             printf(" ");
//         }
//         for(int j=1;j<=n;j++){
//             printf("*");
//         }
//         printf("\n");
        
//     }
//     return 0;
// }
// -------------------------------------
// Hollow rhombus * pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>i;j--){
//             printf(" ");
//         }
//         for(int j=1;j<=n;j++){
//             if(i==1 || i==n || j==1 || j==n) printf("*");
//             else printf(" ");
//         }
//         printf("\n");
//         }
// }
// ------------------------------------
// Mirrored Rhombus * pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<i;j++){
//             printf(" ");
//         }
//         for(int j=1;j<=n;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// -------------------------------------
// Hollo mirrored rhombus * pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<i;j++){
//             printf(" ");
//         }
//         for(int j=1;j<=n;j++){
//             if(i==1 || i==n || j==1 || j==n)printf("*");
//             else printf(" ");
//         }
//         printf("\n");
//     }
// }
// -------------------------------------
// Right angle triangle * pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// --------------------------------------
// Hollow Right angle triangle * pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if(i==1 || i==n || j==1|| i==j)printf("*");
//             else printf(" ");
//         }
//         printf("\n");
//     }
// }
// ------------------------------------------
// mirrored right angl triangle * pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>i;j--){
//             printf(" ");
//         }
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// --------------------------------------------
// hollow mirrored right angl triangle * pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>i;j--){
//             printf(" ");
//         }
//         for(int j=1;j<=i;j++){
//             if(i==1 || i==n || j==1|| i==j)printf("*");
//             else printf(" ");
//         }
//         printf("\n");
//     }
// }
// -------------------------------------------
// inverted right angl triangle * pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<i;j++){
//             printf(" ");
//         }
//         for(int j=i;j<=n;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// ----------------------------------------------
// hollow inverted right angl triangle * pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<i;j++){
//             printf(" ");
//         }
//         for(int j=i;j<=n;j++){
//             if(i==1 || j==n || j==1|| i==j)printf("*");
//             else printf(" ");
//         }
//         printf("\n");
//     }
// }
// ---------------------------------------------
// * pyramid
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>i;j--){
//             printf(" ");
//         }
//         for(int j=1;j<=i*2-1;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// -----------------------------------------------
// hollow * pyramid
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=n;j>i;j--){
//             printf(" ");
//         }
//         for(int j=1;j<=i*2-1;j++){
//             if(i==n || j==1 || j==i*2-1)printf("*");
//             else printf(" ");
//         }
//         printf("\n");
//     }
// }
// ----------------------------------------------
// inverted pyramid * pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=n;j>i;j--){
//             printf(" ");
//         }
//         for(int j=i*2-1;j>=1;j--){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// --------------------------------------------
// hollow inverted pyramid * pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=n;j>i;j--){
//             printf(" ");
//         }
//         for(int j=i*2-1;j>=1;j--){
//             if(i==n || j==1 || j==i*2-1)printf("*");
//             else printf(" ");
//         }
//         printf("\n");
//     }
// }
// ------------------------------------------
// Half diamond * pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=i;j>=1;j--){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i=n-1;i>=1;i--){
//         for(int j=i;j>=1;j--){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// ------------------------------------------
// mirrored half diamond * pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<n;j++)
//         printf(" ");
//         for(int j=i;j>=1;j--){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i=n-1;i>=1;i--){
//         for(int j=i;j<n;j++)
//         printf(" ");
//         for(int j=i;j>=1;j--){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// -----------------------------------------
// Diamonds pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<n;j++)
//         printf(" ");
//         for(int j=1;j<=i*2-1;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i=n-1;i>=1;i--){
//         for(int j=i;j<n;j++)
//         printf(" ");
//         for(int j=1;j<=i*2-1;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// ---------------------------------------
// Hollow diamonds * pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<=n;j++){
//             printf("*");
//         }
//         for(int j=i;j>1;j--)
//         printf("  ");
//         for(int j=i;j<=n;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i=n;i>=1;i--){
//         for(int j=i;j<=n;j++){
//             printf("*");
//         }
//         for(int j=i;j>1;j--)
//         printf("  ");
//         for(int j=i;j<=n;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// -------------------------------------------
// Right arrow * pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=i;j>1;j--){
//             printf("  ");
//         }
//         for(int j=i;j<=n;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i=n-1;i>=1;i--){
//         for(int j=i;j>1;j--){
//             printf("  ");
//         }
//         for(int j=i;j<=n;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// -------------------------------------------
// Left arrow star pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=i;j<n;j++){
//             printf(" ");
//         }
//         for(int j=i;j<=n;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     for(int i=n-1;i>=1;i--){
//         for(int j=i;j<n;j++){
//             printf(" ");
//         }
//         for(int j=i;j<=n;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }
// ----------------------------------------
// plus + pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n*2-1;i++){
//         for(int j=1;j<=n*2-1;j++)
//         if(i==n || j==n) printf("+");
//         else printf(" ");
//         printf("\n");
//     }
// }
// --------------------------------------
// X star pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n*2-1;i++){
//         for(int j=1;j<=n*2;j++)
//         if(i==j || j==n*2-i) printf("*");
//         else printf(" ");
//         printf("\n");
//     }
// }
// --------------------------------------
// 8 * pattern
// int main(){
//     int n;
//     printf("Enter value of number of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n*2-1;i++){
//         if(i==1 || i==n || i==n*2-1){
//             for(int j=1;j<=n;j++){
//             if(j==1 || j==n) printf(" ");
//             else printf("*");
//             }
//         }
//         else{
//             for(int j=1;j<=n;j++){
//                 if(j==1 || j==n ) printf("*");
//                 else printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }
// --------------------------------------
// Heart * pattern








