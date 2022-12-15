//[C_AR05-易] 最少派車數

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int number_of_orders, start_time[24], end_time[24];
  int book[24] = {0}, max = 0;
  scanf("%d", &number_of_orders);
  // cin >> number_of_orders;
  //讀入所有時間
  for (int i = 0; i < number_of_orders; i++)
  {
    scanf("%d", &start_time[i]);
    scanf("%d", &end_time[i]);
  }

  //該時段有order  book[時間]+1
  for (int i = 0; i < number_of_orders; i++)
  {
    for (int j = start_time[i]; j < end_time[i]; j++)
    {
      book[j]++;
    }
  }

  //找最大的book[j](每小時的定單數目)
  for (int i = 0; i < number_of_orders; i++)
  {
    for (int j = start_time[i]; j < end_time[i]; j++)
    {
      if (max < book[j])
      {
        max = book[j];
      }
    }
  }
  printf("%d\n", max);

  return 0;
}
