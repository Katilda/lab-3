#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <map>
#include <bitset>         // std::bitset

//int A - массив А
//N - число элементов в массиве А

int findDifferentArray(int *A, int N)
{
   int i,R,P,value; //счётчик массива; кол-во уникальных элементов; индекс последнего уникального элемента
   P=0; //сохраняем индекс первого уникального
   R=0;
   bitset<20> array; //or 100 000

   for (i=0;i<N;i++)
   {
      if (array[A[i]]==0)//элемент не встречался ранее
      {
	 array.set(A[i]); //отмечаем элемент в массиве уникальных элементов
         R++; //увеличиваем кол-во уникальных элементов
         P=i;//сохраняем новое значение индекса
      }
   }
   cout<<"array: "<<array<<endl;


 return P+1;
}

