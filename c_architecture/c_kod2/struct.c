#include <stdio.h>
#include <stdlib.h>

struct Test
{
    int x;
    struct Test* ptr;
};
struct ListNode
{
    int data;
    struct ListNode* next;
};


int main(int argc, char** argv){
    struct Test ob;
    ob.x = 44;

    struct Test ob2;
    ob2.x = 55;

    ob.ptr = &ob2;

    printf("%d\n", ob.ptr->x);
    
    struct ListNode first;
    first.data = 44;
    
}
