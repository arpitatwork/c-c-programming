// Online C compiler to run C program online
#include<stdio.h>
struct empolyee {
        int ID;
        float salary;
        char name[10];
        
}e[3];
int main(){
    // struct employee e[5];
    for (int i=0 ; i<2 ; i++){
        scanf("%d", &e[i].ID);
        scanf("%f", &e[i].salary);
        scanf("%s", e[i].name);

    }
    for(int i=0 ; i<2 ; i++){
        printf("deatils %d \n",e[i].ID);
        printf("deatils %f \n", e[i].salary);
        printf("deatils  %s \n", e[i].name);
    }

    
    return 0;

}