#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct cricket
{
    char playername[20];
    char teamname[20];
    int average;
};

int main()
{
    struct cricket player[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the name of the player\n");
        scanf("%s", player[i].playername);
        printf("Enter the name of the team\n");
        scanf("%s", player[i].teamname);
        printf("Enter the average\n");
        scanf("%d", &player[i].average);
    }

    int pos;
    
    for (int i = 0; i < 4; i++)
    {
        pos = i;
        for (int j = i; j < 4; j++)
        {
            if (strncmp(player[i].teamname, player[j].teamname, strlen(player[i].teamname)) == 0)
            {
                struct cricket temp;
                temp = player[pos + 1];
                player[pos + 1] = player[j];
                player[j] = temp;
                pos = pos + 1;
            }
        }
    }
    
    for (int i = 0; i < 4; i++)
    {

        printf("%s\t%s\t%d\n", player[i].playername, player[i].teamname, player[i].average);
    }

}