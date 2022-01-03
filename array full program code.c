
#include <stdio.h>
int icount=0;
int size =10;
int search(int * arr,int size, int toSearch);
void addelement(int*p);
void delete_element(int*,int);
 void sort(int *q);
  void swap(int *firstNumber, int *secondNumber);
int main()
{
    int array[10];

    int choice,toSearch,searchIndex,ele;
 do{  printf("\n1. Add an element to the Array the application");
    printf("\n2. Search if an element exists in the array");
    printf("\n3. Remove an element from the array");
    printf("\n4. Sort the array");
    printf("\n5. Print all elements in the array");
    printf("\n6. Exit\n");
  scanf("%d", &choice);
  if(choice==1){
      addelement(array);
      
printf("Element added sucessfully");
  }
  else if(choice==2){
  printf("\nEnter element to search: \n");
    scanf("%d",&toSearch);
    searchIndex = search(array, size, toSearch);

    if(searchIndex == -1)
        printf("%d does not exists in array.", toSearch);
    else
        printf("%d is found at %d position.", array[searchIndex], searchIndex + 1);

  }
 else if(choice==3){
     int del_value=0;
     printf("Enter the value you want to delete\n");
    scanf("%d",&del_value);
    int del_index = search(array,size,del_value);
     if(del_index == -1)
        printf("%d not removed.", del_value);
        else{
     delete_element(array,del_index);
     printf("Element Removed");
        }
 }
 else if(choice==4){
     sort(array);
 }
else if(choice==5){
    printf("The Elements are: ");
     for(int i=0;i<icount;i++){
        printf("%d\n",array[i]);
      }
}
 else if(choice>6||choice<1){
     printf("Invalid option. Please try again");
 }

 }while(choice != 6);

    return 0;

    
}
void delete_element(int *p,int del_index){
    
     int i,j;

   if(del_index<=size){
      for(i=del_index;i<size;i++){
         j=i+1;
         *(p+i)=*(p+j);
      }
      icount--;
     // printf("after deletion the array elements is:\n");
    //   for(i=0;i<icount;i++){
    //      printf("%d\n",(*(p+i)));
    //   }
    
}
}
void addelement(int *p)
 {
    int no=0;
    printf("\nEnter the element to be added :");
    scanf("%d",&no);
    *(p+icount)=no;
    icount++;
   // printf("i am icount %d\n",icount);

 }

int search(int * arr,int size, int toSearch)
{
    int index=0;
    int * arrEnd = (arr + size - 1);
   

    while(arr <= arrEnd && *arr != toSearch) {
        arr++;
        index++;
    }

   if(arr <= arrEnd)
        return index;

    return -1;
}
 void swap(int *firstNumber, int *secondNumber)
{
    int temp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = temp;
}
 void sort(int *q){
    int type=0,i=0,j=0;
    printf("1.> Asending\n2.> Descending ");
    scanf("%d", &type);
    for (i = 0; i < icount; i++)
    {
        for (j = i + 1; j < icount; j++)
        {
            if (type == 1)
            {
                //increasing order sorting
                if (*(q + j) < *(q + i))
                {
                    swap((q + i), (q + j));
                }
            }
            else if (type == 2)
            {
                //decreasing order sorting
                if (*(q + j) > *(q + i))
                {
                    swap((q + i), (q + j));
                }
            }
            else{
    printf("Wrong option entered");
}
        }
    }

    // for (i = 0; i < icount; i++)
    // {
    //     printf("%d ", *(q + i));
    // }
 }



