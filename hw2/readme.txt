base on hw1

Read all city record in memory

Do an indirect bubble sort on the population 
first init the index as follows
long indirect[COUNT];
for (long i = 0; i < COUNT; ++i)
{
  indirect[i]= i;
}
access the array with

array[indirect[i]].population rather than array[i], 
if array[indirect[i]].population > array[indirect[i+1]]
{
   // do not swap the array[index[i]] and array[indirect[i+1]],
   // but swap the indirect[i] and indirect[i+1]
   
}

Create an index file
