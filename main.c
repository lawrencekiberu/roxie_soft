#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *z[3][3];
    printf("Enter the domestic animals:\n");
    for(int x=0;x<3;x++){
        scanf("%s",z[x]);
    }
    char *p[3][3];
    printf("Enter the wild animals:\n");
    for(int s=0;s<3;s++){
        scanf("%s",p[s]);
    }

    printf("All animals are here:\n");
    for(int i=0;i<3;i++){
        printf("%s\n",z[i]);
        printf("%s\n",p[i]);
    }


    return 0;
}
