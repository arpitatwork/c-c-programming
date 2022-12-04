#include <stdio.h>
main()
{

    int type;
    printf("what do you wanna watch \n 1 for Movies \n 2 for news \n 3 for anime \n 4 for series \n");
    scanf("%d", &type);
    printf("you've chosen %d ", type);
    for ( int i = 0; i < 20; i++)
    {
        switch (type)
    {
    case 1:
        printf("\nhere are the suggestion you can watch right away: \n\n \nmobious\nShazam\nTHOR: Love and Thunder\nHarry poter");

        break;

    case 2: printf("\nhere are the suggestion you can try to watch right away: \n\n \naajTak\nIndia news\nNews24\nkalTak");

        break;
    
    case 3: printf("\nhere are the suggestion you can try to watch right away:\n\n\nNaruto\nDeathNote\nAttack on titan\nBleach\nDoremon");

        break;


    case 4: printf("\nhere are the suggestion for you can watch right away: \n\n \nStranger things\nVampire diaries\nThe 100\nGame of thrones\nlords of the rings");

        break;

    default:

            printf("\nTHAT MEANS YOU ARE IN DEPRESSION \n\n\n");
        break;
    }
    

    }
    
    
}