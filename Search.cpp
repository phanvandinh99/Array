#include <string.h>
#include <stdio.h>

int main(void)
{
	// Khoi tao gia tri
	int W, H;
	FILE * fp = NULL;
	char arr[128];
	char arr2[128];
	char * p;
	int index = 0;
	
	// Nhap thong tin
	printf("Nhap chieu dai W va chieu cao H: ");
    scanf("%d %d", &W, &H);
    
	printf("Ban vua nhap la: (%d, %d)\n", W, H);
	printf("------------------------\n");
	
	// khoi tao mang 2 chieu
	int arr3[W][H];
		
	// Mo file input
    fp= fopen("Input.txt", "r");

    // In ra man hinh danh sach theo chieu cao va chieu rong da nhap
    for(int i = 0; i < H; i++)
    {
    	fgets(arr, 128, fp);
    	strncpy( arr2, arr+0, W*2-1 );
    	// printf("%s\n", arr2);
    	
    	p = strtok(arr2, " ");
    	printf("%s ", p);
    	
    	// Nhap mang
    	scanf("%d %s", &arr3[i][index], &p);
    	
	   while(p != NULL) {  
	   		index++;
	        p = strtok(NULL, " ");
	        
	        if(p != NULL) {
	            printf("%s ", p);
	            // Nhap mang
    			scanf("%d %s", &arr3[i][index], &p);
	        }
   		}
   		
   		 printf("\n");
	}
}
