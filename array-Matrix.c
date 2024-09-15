// Write a C program to read and print elements of array. – using recursion.
// #include <stdio.h>
// #include <math.h>

// void printArray(int a[],int start,int len){
//     if(start>=len)
//     return;
//     printf("%d ",a[start]);
//     printArray(a,start+1,len);
// }

// int main()
// {
//     int a[]={12,20,30,40,50};
//     int start=0;
//     int len=5;
//     printArray(a,start,len);
//     return 0;
// }

// ---------------------------------------------------
// Write a C program to print all negative elements in an array.
// #include <stdio.h>
// #include <math.h>

// void printArray(int a[],int start,int len){
//     if(start>=len)
//     return;
//     if(a[start]<0) printf("%d ",a[start]);
//     printArray(a,start+1,len);
// }

// int main()
// {
//     int a[]={12,-20,30,40,-50};
//     int start=0;
//     int len=5;
//     printArray(a,start,len);
//     return 0;
// }
// -------------------------------------------------
// Write a C program to find sum of all array elements. – using recursion.
// #include <stdio.h>
// #include <math.h>

// void printArray(int a[],int start,int len){
//     if(start>=len)
//     return;
//     if(a[start]<0) printf("%d ",a[start]);
//     printArray(a,start+1,len);
// }

// int main()
// {
//     int a[]={12,-20,30,40,-50};
//     int start=0;
//     int len=5;
//     printArray(a,start,len);
//     return 0;
// }
// ---------------------------------------------
// Write a C program to find maximum and minimum element in an array. – using recursion.
// #include <stdio.h>
// #include <math.h>
// #include <limits.h>
// void printArray(int a[],int start,int len,int max,int min){
//     if(start>=len){
//         printf("max=%d ",max);
//         printf("min=%d",min);
//     return ;
//     }
//     if(a[start]>max ) max=a[start];
//     if(a[start]<min ) min=a[start];
//     printArray(a,start+1,len,max,min);
// }

// int main()
// {
//     int a[]={1,25,23,14,6};
//     int start=0;
//     int len=5;
//     int max=INT_MIN,min=INT_MAX;
//     printArray(a,start,len,max,min);
//     return 0;
// }
// -------------------------------------------------------
// Write a C program to find second largest element in an array.
// #include <stdio.h>
// #include <math.h>
// #include <limits.h>
// void printArray(int a[],int start,int len,int max1,int max2){
//     if(start>=len){
//         printf("second maximum=%d",max2);
//     return ;
//     }
//     if(a[start]>max1 ) { 
//         max2=max1; 
//         max1=a[start];
//     }
//     else if(a[start]<max1 && a[start]>max2) max2=a[start];
    
//     printArray(a,start+1,len,max1,max2);
// }

// int main()
// {
//     int a[]={21,25,23,14,6};
//     int start=0;
//     int len=5;
//     int max1=INT_MIN,max2=INT_MIN;
//     printArray(a,start,len,max1,max2);
//     return 0;
// }
// ----------------------------------------------
// Write a C program to count total number of even and odd elements in an array.
// #include <stdio.h>
// #include <math.h>
// #include <limits.h>
// void printArray(int a[],int start,int len,int evenCount,int oddCount){
//     if(start>=len){
//         printf("even count=%d\n",evenCount);
//         printf("odd count=%d",oddCount);
//     return ;
//     }
//     if(a[start]%2==0) evenCount++;
//     else oddCount++;
//     printArray(a,start+1,len,evenCount,oddCount);
// }

// int main()
// {
//     int a[]={21,25,23,14,6};
//     int start=0;
//     int len=5;
//     int evenCount=0,oddCount=0;
//     printArray(a,start,len,evenCount,oddCount);
//     return 0;
// }
// ---------------------------------------------
// Write a C program to count total number of negative elements in an array.
// #include <stdio.h>
// #include <math.h>
// #include <limits.h>
// int printArray(int a[],int start,int len,int count){
//     if(start>=len) return count;
    
//     if(a[start]<0) count++;
//     printArray(a,start+1,len,count);
// }

// int main()
// {
//     int a[]={21,25,-23,14,-6};
//     int start=0;
//     int len=5;
//     int count=0;
//     printf("%d",printArray(a,start,len,count));
//     return 0;
// }
// -------------------------------------------
// Write a C program to copy all elements from an array to another array.
// #include <stdio.h>
// #include <math.h>
// #include <limits.h>
// void printArray(int a[],int b[],int start,int len){
//     if(start>=len){
//         for(int i=0;i<len;i++){
//             printf("%d ",b[i]);
//         }
//         return;
//     }
//     b[start]=a[start];
//     printArray(a,b,start+1,len);
// }

// int main()
// {
//     int a[]={21,25,-23,14,-6};
//     int start=0;
//     int len=5;
//     int b[len];
//     printArray(a,b,start,len);
//     return 0;
// }
// --------------------------------------
// Write a C program to insert an element in an array.
// #include <stdio.h>
// #include <math.h>
// #include <limits.h>
// void printArray(int a[],int size){
//     for(int i=0;i<size;i++){
//         printf("%d ",a[i]);
//     }
//     return;
// }

// int main()
// {
//     int size;
//     int num,pos;
//     printf("Enter length of array: ");
//     scanf("%d",&size);
//     int a[size];
//     for(int i=0;i<size;i++){
//         printf("Enter value for index %d :",i);
//         scanf("%d",&a[i]);
//     }
//     printArray(a,size);
//     printf("\nEnter the the new element to insert in array:");
//     scanf("%d",&num);
//     printf("Enter the position to insert the new element: ");
//     scanf("%d",&pos);
//     if(pos>size+1 || pos<=0){
//         printf("Invalid input of the position");
//     }
//     else{
//         for(int i=size;i>=pos;i--){
//             a[i]=a[i-1];
//         }
//         a[pos-1]=num;
//         size++;
//     }
//     printArray(a,size);
//     return 0;
// }
// ------------------------------------------
// Write a C program to delete an element from an array at specified position.
// #include <stdio.h>
// #include <math.h>
// #include <limits.h>
// void printArray(int a[],int size){
//     for(int i=0;i<size;i++){
//         printf("%d ",a[i]);
//     }
//     return;
// }

// int main()
// {
//     int size;
//     int num,pos;
//     printf("Enter length of array: ");
//     scanf("%d",&size);
//     int a[size];
//     for(int i=0;i<size;i++){
//         printf("Enter value for index %d :",i);
//         scanf("%d",&a[i]);
//     }
//     printArray(a,size);
//     printf("\nEnter the position of element to delete from array:");
//     scanf("%d",&pos);
//     if(pos>size || pos<0 )
//         printf("Enter the valid input");
//     else{
//         for(int i=pos-1;i<size-1;i++){
//             a[i]=a[i+1];
//         }
//         size--;
//     }
//     printArray(a,size);    
//     return 0;
// }
// ---------------------------------------------
// Write a C program to count frequency of each element in an array.
// #include <stdio.h>

// int main()
// {
//     int arr[100], freq[100];
//     int size, i, j, count;

//     /* Input size of array */
//     printf("Enter size of array: ");
//     scanf("%d", &size);

//     /* Input elements in array */
//     printf("Enter elements in array: ");
//     for(i=0; i<size; i++)
//     {
//         scanf("%d", &arr[i]);
//         /* Initially initialize frequencies to -1 */
//         freq[i] = -1;
//     }


//     for(i=0; i<size; i++)
//     {
//         count = 1;
//         for(j=i+1; j<size; j++)
//         {
//             /* If duplicate element is found */
//             if(arr[i]==arr[j])
//             {
//                 count++;
//                 /* Make sure not to count frequency of same element again */
//                 freq[j] = 0;
//             }
//         }
//         /* If frequency of current element is not counted */
//         if(freq[i] != 0)
//         {
//             freq[i] = count;
//         }
//     }

//     /*
//      * Print frequency of each element
//      */
//     printf("\nFrequency of all elements of array : \n");
//     for(i=0; i<size; i++)
//     {
//         if(freq[i] != 0)
//         {
//             printf("%d occurs %d times\n", arr[i], freq[i]);
//         }
//     }

//     return 0;
// }
// ------------------------------------------------
// Write a C program to print all unique elements in the array.
// #include <stdio.h>

// int main()
// {
//     int arr[100], freq[100];
//     int size, i, j, count;

//     /* Input size of array */
//     printf("Enter size of array: ");
//     scanf("%d", &size);

//     /* Input elements in array */
//     printf("Enter elements in array: ");
//     for(i=0; i<size; i++)
//     {
//         scanf("%d", &arr[i]);
//         /* Initially initialize frequencies to -1 */
//         freq[i] = -1;
//     }


//     for(i=0; i<size; i++)
//     {
//         count = 1;
//         for(j=i+1; j<size; j++)
//         {
//             /* If duplicate element is found */
//             if(arr[i]==arr[j])
//             {
//                 count++;
//                 /* Make sure not to count frequency of same element again */
//                 freq[j] = 0;
//             }
//         }
//         /* If frequency of current element is not counted */
//         if(freq[i] != 0)
//         {
//             freq[i] = count;
//         }
//     }

//     /*
//      * Print frequency of each element
//      */
//     printf("\nFrequency of all elements of array : \n");
//     for(i=0; i<size; i++)
//     {
//         if(freq[i] ==1 )
//         {
//             printf("%d occurs %d times so this is unique\n", arr[i], freq[i]);
//         }
//     }

//     return 0;
// }







