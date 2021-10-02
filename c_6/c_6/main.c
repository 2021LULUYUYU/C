#include <stdio.h>
//统计字符串里每个字符出现的次数
int main()
{
    int i=0;
    char str[11]={0};
    int count[26]={0};    //26个字母出现次数
   // scanf("%s",str);
    for(i=0;i<10;i++)
    {
         scanf("%c",&str[i]);
    }

    for(i=0;i<11;i++)
    {
        int index=str[i]-'a'; //字符在count数组中的下标，如a的ascll值为97，对应下标为0
        count[index]++;
    }

    for(i=0;i<26;i++)
    {
        if(count[i]!=0)
        {
            printf("%c字符出现的次数%d\n",i+'a',count[i]);
        }
    }
    return 0;
}
