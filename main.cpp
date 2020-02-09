# include <iostream>
# include <iomanip>
# include <conio.h>
using namespace std;
//void quickSort(int[],int);
void q_sort(int[],int,int);

int main ()
{
    cout<<"*======================================Tugas Praktikum Sorting======================================*"<<endl;
    cout<<" Struktur Data & Pemrograman"<<endl;
    cout<<" Latihan 4 - Quick Sorting"<<endl;
    cout<<" Created By Abdul Latif Munjiat (1610631170004)"<<endl;
    cout<<" Kelas 3'A Fasilkom Unsika\n"<<endl;
     int NumList [10]={12,29,56,4,31,9,17,19,48,3};
         // int temp;
         cout<<" Data Sebelum diurutkanc : \n";
         for(int d=0;d<10;d++)
             {
                cout<<setw(3)<<NumList[d];
             }
         cout<<"\n\n";
         q_sort(NumList,0,10);
         cout<<" Data setelah diurutkan : \n";
         for(int iii=0;iii<8;iii++)
            cout<<setw(3)<<NumList[iii]<<endl<<endl;
            // quickSort(NumList,8);
         getch();
}
/*
void quickSort(int numbers[],int array_size)
{
 q_sort(numbers,0,array_size-1);
}
 */
void q_sort(int numbers[],int left,int right)
{
     int pivot,l_hold,r_hold;
     l_hold=left;
     r_hold=right;
     pivot=numbers[left];
     while(left<right)
     {
         while((numbers[right]>=pivot)&&(left<right))
         right--;
         if(left!= right)
         {
             numbers[left]=numbers[right];
             left++;
         }
         while((numbers[left]<=pivot)&&(left<right))
         {
            left++;
         }
         if (left!=right)
         {
             numbers[right]=numbers[left];
             right--;
         }
     }
     numbers[left]=pivot;
     pivot=left;
     left=l_hold;
     right=r_hold;
     if(left<pivot)
        q_sort(numbers,left,pivot-1);
     if(right>pivot)
        q_sort(numbers,pivot+1,right);
 }
