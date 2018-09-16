#include<stdio.h>
int main()
{
    char vartex[26],j;
    int i,k,l,no_of_vertex, graph[100][100];

    j= 'A';
    for(i=0;i<26;i++)
    {
        vartex[i] = j;
        j++;
    }
    printf("how many vertex:");
    scanf("%d",&no_of_vertex);

    for(k=0; k<no_of_vertex;k++){
        for(l=k+1; l<no_of_vertex;l++){
                printf("%c-%c ",vartex[k],vartex[l]);
            scanf("%d",&graph[k][l]);

        if(graph[k][l] ==1){
            graph[l][k] =1;
        }
    }

    }

    for(k=0; k<no_of_vertex;k++){
        for(l=0; l<no_of_vertex;l++){
            printf("%d ",graph[k][l]);
        }
        printf("\n");
    }

     for(k=0; k<no_of_vertex;k++){
        for(l=0; l<no_of_vertex;l++){

        if(graph[k][l]==1){
            printf("%c",vartex[l]);
        }
    }
        printf("\n");
    }

}
