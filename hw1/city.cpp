// city.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <stdio.h>
#include  "city.h"

int main()
{
    std::cout << "Hello World!\n";
    FILE* fp = fopen("city.csv", "r");
    char buf[1024];
    int count = 0;
    city_t c[1024];

    while (!feof(fp))
    {
        if (fgets(buf, 1024, fp))
        {
            char *ids = strtok(buf, ",");
            char* names = strtok(NULL, ",");
            char* code = strtok(NULL, ",");
            char* dist = strtok(NULL, ",");
            char* pops = strtok(NULL, ",");
            c[count].id = atoi(ids);
            strcpy(c[count].name, names);
            strcpy(c[count].countryCode, code);
            strcpy(c[count].district, dist);
            c[count].population = atoi(pops);
            count++;
        }

    }
    fclose(fp);
    fp = fopen("city.bin", "wb");
    for (int i=1; i < count; ++i)
    {
        fwrite(&c[i], sizeof(city_t), 1, fp);
    }
    fclose(fp);
}

 
