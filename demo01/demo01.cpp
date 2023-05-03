#include <stdio.h>
void bubble_sort(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz - 1; i++) //冒泡排序次数
    {    
        int j = 0;
        for (j = 0; j < sz - 1 - i; j++) {   //每一次冒泡排序
            if (arr[j] > arr[j + 1])
            {
                int tem = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tem;
            }
        }
    }
}

int main()
{
    int arr[] = {5, 4, 6, 8, 7, 9, 2, 3, 1, 0};
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, sz);    //对数组传参传过去的是arr首元素的地址
    for (i = 0; i < sz; i++)
    {
    printf("%d ",arr[i]);
    }
}