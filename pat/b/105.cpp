#include <stdio.h>

void f (int flag[],int num);
int main ()
{
    int k;
    scanf ("%d",&k);
    int num[101] = {0};
    int flag[5000] = {0};
    int ans[101] = {0};
    for (int i=0; i<k; i++)  //遍历，构造标记数组 
    {
        scanf ("%d",&num[i]);
        int temp = num[i];
        if (flag[temp] == 1) 
        {
            continue;
        }
        f (flag,num[i]);        
    }
    for (int i=0; i<101; i++)//
    {
        int temp = num[i];
        if (flag[temp] == 0)
        {
            ans [temp] = 1;
        }
    }
    int end = 0;
    for (int i=100; i>0; i--)//输出 
    {
        if (ans[i] == 1 )
        {
            if (end == 0)
            {
                printf ("%d",i);
                end =1;
            }
            else 
            {
                printf (" %d",i);
            }
            
        }
        
    }

    return 0;
}
void f (int flag[],int num)
{
    while (num != 1)
    {
        if (num%2 == 0)
        {
            num /= 2;
            flag[num] = 1;
        }
        else
        {
            num = (num * 3 + 1) / 2;
            flag[num] = 1;
        }
    }
}