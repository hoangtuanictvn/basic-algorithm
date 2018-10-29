#include <eval.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{
    Object obj;
    obj = new_i(10);
    printf("Integer:%d\n",get_i(obj));
    return 0;
}
