#include<stdio.h>
#include<string.h>

typedef struct
{
    int id;
    char Name[100];
    char artist[100];
    char duration[100];

} song;

void addAccount(song account[], int *i)
{
    song new ;
    printf("Enter Account Number : ");
    scanf("%d",&new.id);
    int j;
    for ( j = 0; j < *i; j++)
    {
        if (account[j].id == new.id)
        {
            printf("The Account number already exists. Please choose a unique Account number.\n");
            return;
        }
    }
    printf("Enter new Song  name: ");
    scanf("%s", new.Name);
    printf("Enter Artists name: ");
    scanf("%s",&new.artist);
    printf("Duration : ");
    scanf("%s", &new.duration);

    account[*i] = new;
    (*i)++;
    printf("Account Added Successfully. \n");


}
void display(song account[], int Count)
{
    printf("\nSong List:\n");
    int i;
    for (i= 0; i < Count; i++)
    {
        printf("song Id: %d\n", account[i].id);
        printf("Song Name: %s\n", account[i].Name);
        printf(" Artist name  %s\n", account[i].artist);
        printf("Duration : %s", account[i].duration);

        printf("\n\n");
    }
}
void update( song accounts[], int Count)
{
    int Number;
    printf("Enter the Song ID to update: ");
    scanf("%d", &Number);
int i;
    for ( i = 0; i < Count; i++)
    {
        if (accounts[i].id == Number)
        {
            printf("Enter new song  name: ");
            scanf("%s", &accounts[i].Name);
            printf("Enter new Artist Name: ");
            scanf("%lf", &accounts[i].artist);
            printf("Duration : ");
            scanf("%s", &accounts[i].duration);

            printf("Song updated successfully!\n");
            return;
        }
    }

    printf("Song not found!\n");
}



int main()
{
    song account[100];
    int count = 0;
    while(1)
    {
        printf("\nWelcome to Music Player System Menu:\n");
        printf("---------------------------------------\n");
        printf("1. Add song\n");
        printf("2. Display All song\n");
        printf("3. Update Song\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
        {
            addAccount(account,&count);
            break;
        }
        case 2:
        {
            display(account,count);
            break;
        }
        case 3:
        {
            update(account,count);
            break;
        }
        case 0:
        {
            printf("Exiting the program.\n");
            return 0;
            printf("\n\n");
        }
        default:
        {
            printf("\n\n");
            printf("Invalid choice. Please try again.\n");
            printf("\n\n");
        }
        }

    }

}
