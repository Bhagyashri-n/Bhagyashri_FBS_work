#include <stdio.h>
#include <string.h>

struct Task
{
    int id;
    char description[50];
    char status[20];
};

struct Task t[100];
int count = 0;

void addTask()
{
    printf("Enter Task ID: ");
    scanf("%d", &t[count].id);

    printf("Enter Description: ");
    scanf("%s", t[count].description);

    printf("Enter Status: ");
    scanf("%s", t[count].status);

    count++;
}

void updateTask()
{
    int id, i;

    printf("Enter Task ID to update: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(t[i].id == id)
        {
            printf("Enter new Status: ");
            scanf("%s", t[i].status);
            return;
        }
    }

    printf("Task not found\n");
}

void displayTask()
{
    int i;

    for(i = 0; i < count; i++)
    {
        printf("\nID: %d", t[i].id);
        printf("\nDescription: %s", t[i].description);
        printf("\nStatus: %s\n", t[i].status);
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n1. Add Task");
        printf("\n2. Update Task");
        printf("\n3. Display Tasks");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addTask();
                break;

            case 2:
                updateTask();
                break;

            case 3:
                displayTask();
                break;

            case 4:
                printf("Exiting...");
                break;

            default:
                printf("Invalid choice");
        }

    } while(choice != 4);

    return 0;
}