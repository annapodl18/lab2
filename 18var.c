#include <stdio.h>

int main (){
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int sum = 0;

  for (int i=0; i<10; i++){
        if(i % 2 == 0) /* если индекс элемента четный */
        {
                arr[i] <<= 1; /* сдвигаем логически влево */
        }
        else
        {
                arr[i] = arr[i] >> 1; /* сдвигаем арифметически вправо */
        }
        sum+= arr[i];
        }
  for (int i=0; i<10; i++){
        printf("%d ", arr[i]);
  }
  printf("\n%d ", sum);
  return 0;
}
