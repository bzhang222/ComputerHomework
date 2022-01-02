#include <stdio.h>
#include <string.h>
typedef  int my_general_type;


typedef struct node_struct
{
    int population;
    char cityName[100];

    struct node_struct* pNext;
} node_t;

node_t* addNode(node_t* r, int population, const char* name)
{
    node_t* node1 = new node_t;
    node1->population = population;
    strcpy(node1->cityName, name);

    node1->pNext = r;
    r = node1;
    
    return r;
}

 
void printList(node_t* root)
{
    node_t* p = root;
    while (p != NULL)
    {
        printf("name: %s,  population: %d K \n", p->cityName, p->population);
        p = p->pNext;
    }
    printf("================\n");
}

int main()
{
    node_t* cityList1=NULL;
    cityList1 = addNode(cityList1, 80,  "Folsom");
    cityList1 = addNode(cityList1, 2000, "Sacramento");
    cityList1 = addNode(cityList1, 5000,  "LA");
    cityList1 = addNode(cityList1, 6000,  "Chicago");

    printList(cityList1);

    node_t* cityList2 = NULL;
    cityList2 = addNode(cityList2, 100, "San Matae");
    cityList2 = addNode(cityList2, 4000, "San Luise");
    cityList2 = addNode(cityList2, 5500, "Seattle");
    cityList2 = addNode(cityList2, 7000, "New York");

    printList(cityList2);

    node_t* combinedList = MergeList(cityList1, cityList2);

    printList(combinedList);


    return 0;
}

/*
implement a MergeList function which takes in two sorted linked-list,  they 
are sorted in ascending order of population,  the new function merge them into 
a sorted list 

*/
