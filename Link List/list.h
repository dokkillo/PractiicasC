#ifndef _cplusplus
typedef char bool;
#define true 1;
#define false 0;
#endif

struct list_element
{
    struct list_element *next;
};

typedef struct list_element list_element;

typedef struct
{
    list_element *first;
    list_element *last;
}list;