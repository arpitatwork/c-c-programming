#include<stdio.h>
main(){
	int n, a;
	printf("Enter a Number to print- ");
	scanf("%d",&a);
	
	switch (a){
		
		case 0: {
			
					int n;
					printf("Enter a Size- ");
					scanf("%d",&n);
					if(n%2==0 && n<=4){
						printf("This is invalid");
					}
					else{
						for(int l=1; l<=n/4; l++){
							for(int l1=1; l1<=n; l1++){
								printf(" &");
							}
							printf("\n");
						}
						for(int k=0; k<=(n/2); k++){
							for(int k1=1; k1<=n; k1++){
								if(k1>n/3 && k1<(n*3)/4){
									printf("  ");
								}
								else{
									printf(" &");
								}
							}
							printf("\n");
						}
						for(int l=1; l<=n/4; l++){
							for(int l1=1; l1<=n; l1++){
								printf(" &");
							}
							printf("\n");
						}
					}
				break;
				
				}
		case 1:{
					int n;
			printf("Enter a Size-  ");
			scanf("%d",&n);
			if(n%2==0 && n<=4){
				printf("This is invalid");
			}
			else{
				for(int i=1; i<=n; i++){
					for(int j=1; j<=n; j++){
						if(j>=1 && j<=(n/2)+1){
							printf(" ");
						}
						else{
							printf("&");
						}
					}
						printf("\n");
				}
			}
			break;
		}
		case 2:{
				int n;
			printf("Enter a Size-  ");
			scanf("%d",&n);
			if(n%2==0 || n<=4){
				printf("This is invalid");
			}
			else{
				for(int i=1; i<=n/4; i++){
					for(int j=1; j<=n; j++){
						
						printf(" &");
					}
					printf("\n");
				}
				for(int k=1; k<=n/4; k++){
					for(int k2=1; k2<=n; k2++){
						if(k2<=(n*2)/3){
							printf("  ");
						}
						else{
							printf(" &");
						}
					}
					printf("\n");
					
				}
				for(int i=1; i<=n/4; i++){
					for(int j=1; j<=n; j++){
						
						printf(" &");
					}
					printf("\n");
				}
				for(int k=1; k<=n/4; k++){
					for(int k2=1; k2<=n; k2++){
						if(k2>=(n*2)/4 && k2<=n){
							printf("  ");
						}
						else{
							printf(" &");
						}
					}
					printf("\n");
					
				}
				for(int i=1; i<=n/4; i++){
					for(int j=1; j<=n; j++){
						
						printf(" &");
					}
					printf("\n");
				}
			
			}
					break;
				}
		case 3:{
				int n;
	printf("Enter a Size-  ");
	scanf("%d",&n);
	if(n%2==0 && n<=4){
		printf("This is invalid");
	}
	else{
		for(int i=1; i<=n/4; i++){
			for(int j=1; j<=n; j++){
				
				printf(" &");
			}
			printf("\n");
		}
		for(int k=1; k<=n/4; k++){
			for(int k2=1; k2<=n; k2++){
				if(k2<=(n*2)/3){
					printf("  ");
				}
				else{
					printf(" &");
				}
			}
			printf("\n");
			
		}
		for(int i=1; i<=n/4; i++){
			for(int j=1; j<=n; j++){
				
				printf(" &");
			}
			printf("\n");
		}
		for(int k=1; k<=n/4; k++){
			for(int k2=1; k2<=n; k2++){
				if(k2<=(n*2)/3){
					printf("  ");
				}
				else{
					printf(" &");
				}
			}
			printf("\n");
			
		}
		for(int i=1; i<=n/4; i++){
			for(int j=1; j<=n; j++){
				
				printf(" &");
			}
			printf("\n");
		}
	
	}
			break;
		}
		case 4:{
						int n;
			printf("Enter a Size-  ");
			scanf("%d",&n);
			if(n%2==0 && n<=4){
				printf("This is invalid");
			}
			else{
				for(int i=1; i<=n/3; i++){
					for(int j=1; j<=n; j++){
						
						if(j>=(n*3)/7 && j<=(n*3)/4){
							printf("  ");
						}
						else{
							printf(" &");
						}
					}
					printf("\n");
				}
				for(int k=1; k<=n/4; k++){
					for(int k1=1; k1<=n; k1++){
						printf(" &");
					}
					printf("\n");
				}
				for(int i=1; i<=n/3; i++){
					for(int j=1; j<=n; j++){
						
						if(j<=(n*3)/4){
							printf("  ");
						}
						else{
							printf(" &");
						}
					}
					printf("\n");
				}
			}
					break;
				}
		case 5:{
						int n;
			printf("Enter a Size-  ");
			scanf("%d",&n);
			if(n%2==0 && n<=4){
				printf("This is invalid");
			}
			else{
				for(int l=1; l<=n/4; l++){
					for(int l1=1; l1<=n; l1++){
						printf(" &");
					}
					printf("\n");
				}
				for(int i=1; i<=n/4; i++){
					for(int j=1; j<=n; j++){
						
						if(j>(n/3)){
							printf("  ");
						}
						else{
							printf(" &");
						}
					}
					printf("\n");
				}
				for(int l=1; l<=n/5; l++){
					for(int l1=1; l1<=n; l1++){
						printf(" &");
					}
					printf("\n");
				}
				for(int i=1; i<=n/4; i++){
						for(int j=1; j<=n; j++){
							
							if(j<=(n*3)/4){
								printf("  ");
							}
							else{
								printf(" &");
							}
						}
						printf("\n");
					}
				}
				for(int l=1; l<=n/4; l++){
					for(int l1=1; l1<=n; l1++){
						printf(" &");
					}
					printf("\n");
				}
					break;
				}
		case 6:{
						int n;
			printf("Enter a Size-  ");
			scanf("%d",&n);
			if(n%2==0 && n<=4){
				printf("This is invalid");
			}
			else{
				for(int l=1; l<=n/4; l++){
					for(int l1=1; l1<=n; l1++){
						printf(" &");
					}
					printf("\n");
				}
				for(int i=1; i<=(n*2)/10; i++){
					for(int j=1; j<=n; j++){
						
						if(j>(n/3)){
							printf("  ");
						}
						else{
							printf(" &");
						}
					}
					printf("\n");
				}
				for(int l=1; l<=n/5; l++){
					for(int l1=1; l1<=n; l1++){
						printf(" &");
					}
					printf("\n");
				}
				for(int i=1; i<=(n*2)/10; i++){
					for(int j=1; j<=n; j++){
						
						if(j>(n/3) && j<=n*2/3){
							printf("  ");
						}
						else{
							printf(" &");
						}
					}
					printf("\n");
				}
				for(int l=1; l<=n/4; l++){
					for(int l1=1; l1<=n; l1++){
						printf(" &");
					}
					printf("\n");
				}
			}
					break;
				}
		case 7:{
						int n;
			printf("Enter a Size-  ");
			scanf("%d",&n);
			if(n%2==0 && n<=4){
				printf("This is invalid");
			}
			else{
				for(int l=1; l<=n/4; l++){
					for(int l1=1; l1<=n; l1++){
						printf(" &");
					}
					printf("\n");
				}
				for(int l2=1; l2<=n*3/4; l2++){
					for(int l3=n; l3>=(l2*3/6)+(n*2/5); l3--){
						
							printf("  ");
					}
					for(int l4=1; l4<=n*2/6; l4++){
						
						printf(" &");
					}
					
					printf("\n");
				}
			}	
					break;
				}	
		case 8:{
						int n;
			printf("Enter a Size-  ");
			scanf("%d",&n);
			if(n%2==0 && n<=4){
				printf("This is invalid");
			}
			else{
				for(int l=1; l<=n/4; l++){
					for(int l1=1; l1<=n; l1++){
						printf(" &");
					}
					printf("\n");
				}
				for(int k=1; k<=(n/4); k++){
					for(int k1=1; k1<=n; k1++){
						if(k1>n/3 && k1<(n*3)/4){
							printf("  ");
						}
						else{
							printf(" &");
						}
					}
					printf("\n");
				}
				for(int l=1; l<=n/4; l++){
					for(int l1=1; l1<=n; l1++){
						printf(" &");
					}
					printf("\n");
				}
				for(int k=1; k<=n/4; k++){
					for(int k1=1; k1<=n; k1++){
						if(k1>n/3 && k1<(n*3)/4){
							printf("  ");
						}
						else{
							printf(" &");
						}
					}
					printf("\n");
				}
				for(int l=1; l<=n/4; l++){
					for(int l1=1; l1<=n; l1++){
						printf(" &");
					}
					printf("\n");
				}
			}
					break;
				}
		case 9:{
						int n;
			printf("Enter a Size-  ");
			scanf("%d",&n);
			if(n%2==0 && n<=4){
				printf("This is invalid");
			}
			else{
				for(int l=1; l<=n/4; l++){
					for(int l1=1; l1<=n; l1++){
						printf(" &");
					}
					printf("\n");
				}
				for(int k=1; k<=(n/4); k++){
					for(int k1=1; k1<=n; k1++){
						if(k1>n/3 && k1<(n*3)/4){
							printf("  ");
						}
						else{
							printf(" &");
						}
					}
					printf("\n");
				}
				for(int l=1; l<=n/4; l++){
					for(int l1=1; l1<=n; l1++){
						printf(" &");
					}
					printf("\n");
				}
				for(int i=1; i<=n/3; i++){
					for(int j=1; j<=n; j++){
						
						if(j<(n*3)/4){
							printf("  ");
						}
						else{
							printf(" &");
						}
					}
					printf("\n");
				}
			}
					break;
				}
			
			
			}
		}
		
	
	
	
