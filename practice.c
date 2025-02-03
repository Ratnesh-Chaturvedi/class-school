#include <stdio.h>
#include <stdlib.h>



//merge sort

// void merge(int arr[],int low,int high,int mid){
//     int n=high-low+1;
//     int ans[n];
//     int i=low,j=mid+1;
//     int k=0;
//     while(i<=mid && j<=high){
//         if(arr[i]<=arr[j]){
//             ans[k++]=arr[i++];
//         }
//         else {
//             ans[k++]=arr[j++];
//         }
//     }
//     while(i<=mid){
//         ans[k++]=arr[i++];
//     }
//     while(j<=high){
//         ans[k++]=arr[j++];
//     }
   
//     for(int idx=0;idx<n;idx++){
//         arr[idx+low]=ans[idx];
//     }
// }

// void mergeSort(int arr[],int low,int high){
//     if(low<high){
//         int mid=(low+high)/2;
//         mergeSort(arr,low,mid);
//         mergeSort(arr,mid+1,high);
//         merge(arr,low,high,mid);
//     }
// }

// void swap(int *a,int *b){
//     int c=*a;
//     *a=*b;
//     *b=c;
// }

// //quick sort
// int partion(int arr[],int low,int high){
//     int pivot=arr[low];
// int i=low;
// int j=high;
// while(i<j){
//     // check 1
//     while(arr[i]<=pivot && i<=high-1){
//         i++;
//     }
//     // check 2;
//     while(arr[j]>pivot && j>=low+1)
//     j--;
// if(i<j) swap(&arr[i],&arr[j]); 
// }
// swap(&arr[low],&arr[j]);
// return j;

// }
// void quickSort(int arr[],int low,int high){
//     if(low<high){
//         int pI=partion(arr,low,high);
//         quickSort(arr,low,pI-1);
//         quickSort(arr,pI+1,high);
//     }
// }

// int main(){
// int arr[10]={10,9,8,7,6,5,4,3,2,1};
// int n=sizeof(arr)/sizeof(arr[0]);
// //  mergeSort(arr,0,n-1);
// quickSort(arr,0,n-1);
// for(int i=0;i<n;i++){
//     printf("%d ",arr[i]);
// }
// }



// Queue
