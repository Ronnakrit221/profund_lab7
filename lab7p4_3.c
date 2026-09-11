#include <stdio.h>
#include <string.h>
int main(void)
{
    struct album_data
    {
        char name[100];
        int years;
        char hit_songs[3][50];
    };
    struct Artists
    {
        char name[100];
        struct album_data album[10];
        int num_album;
    };
    struct Artists artist[5] = {0}; 
    int i;
    strcpy(artist[0].name,"The Corrs");

    strcpy(artist[0].album[0].name,"Forgiven, Not Forgotten");
    artist[0].album[0].years = 1995;

    strcpy(artist[0].album[0].hit_songs[0], "Runaway");


    strcpy(artist[0].album[1].name,"Talk On Corners");
    artist[0].album[1].years = 1998;

    strcpy(artist[0].album[2].name,"The Corrs Unplugged");
    artist[0].album[2].years = 1999;

    strcpy(artist[0].album[3].name,"In Blue");
    artist[0].album[3].years = 2000;

    strcpy(artist[0].album[4].name,"Borrowed Heaven");
    artist[0].album[4].years = 2004;

    artist[0].num_album = 5;


    strcpy(artist[1].name,"The Porn");

    strcpy(artist[1].album[0].name,"Forgiven, Not Forgotten");
    artist[1].album[0].years = 1995;

    strcpy(artist[1].album[0].hit_songs[0], "Runawdasdasay");

    strcpy(artist[1].album[1].name,"Talk On Corners");
    artist[1].album[1].years = 1998;

    strcpy(artist[1].album[2].name,"The Corrs Unplugged");
    artist[1].album[2].years = 1999;

    strcpy(artist[1].album[3].name,"In Blue");
    artist[1].album[3].years = 2000;

    strcpy(artist[1].album[4].name,"Borrowed Heaven");
    artist[1].album[4].years = 2004;

    artist[1].num_album = 5;

    for(int j = 0; j < 2; j++) 
    {
        printf("\n -- Artist: %s --\n", artist[j].name);

        for(i = 0; i < artist[j].num_album; i++)
        {
            printf("\t album(%d): %s, %d\n", i+1, artist[j].album[i].name, artist[j].album[i].years);
            
            for(int k = 0; k < 3; k++) 
            {
                if(strlen(artist[j].album[i].hit_songs[k]) > 0) 
                {
                    printf("\t\t - Hit Song [%d]: %s\n", k+1, artist[j].album[i].hit_songs[k]);
                }
            }
        }
    }
    

    return 0;
}