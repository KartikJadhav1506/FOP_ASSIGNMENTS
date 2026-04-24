#include <stdio.h>

void addM(int r,int c,int A[r][c],int B[r][c]){
int sum[r][c];
printf("\nSum is:\n");
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
sum[i][j]=A[i][j] + B[i][j];
printf("%d",sum[i][j]);
printf(" ");
}
printf("\n");
}}





void magicSquare(int n, int A[n][n]) {
    int sum = 0;
    
for(int j = 0; j < n; j++)
sum += A[0][j];

   
for(int i = 0; i < n; i++) {
int rowSum = 0;
for(int j = 0; j < n; j++)
    rowSum += A[i][j];

if(rowSum != sum) {
printf("Not a Magic Square\n");
return;
        }
    }

    
for(int j = 0; j < n; j++) {
int colSum = 0;
for(int i = 0; i < n; i++)
colSum += A[i][j];

if(colSum != sum) {
printf("Not a Magic Square\n");
return;
   }
    }


int diag1 = 0;
for(int i = 0; i < n; i++)
diag1 += A[i][i];

    
int diag2 = 0;
for(int i = 0; i < n; i++)
diag2 += A[i][n-i-1];

if(diag1 != sum || diag2 != sum) {
printf("Not a Magic Square\n");
return;
    }

    printf("It is a Magic Square\n");
}























int main(){
int n;

printf("1.Addition\n2.Saddle Point\n3.Magic Square\n4.Invrse\n");
printf("Enter Choice :");
scanf("%d",&n);

if (n==1){
int r,c;
printf("Enter Rows And Columns :");
scanf("%d%d",&r,&c);

int A[r][c], B[r][c];
 
printf("Enter Matrix A:\n");
for(int i=0;i<r;i++)
for(int j=0;j<c;j++)
scanf("%d",&A[i][j]);

printf("Enter Matrix B:\n");
for(int i=0;i<r;i++)
for(int j=0;j<c;j++)
scanf("%d",&B[i][j]);

addM(r,c,A,B);
}

else if(n==2){
int r,c;
printf("Enter Rows And Columns :");
scanf("%d%d",&r,&c);

int A[r][c];

for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
scanf("%d",&A[i][j]);
}}

}

else if(n==3){
int size;
printf("Enter size of square matrix: ");
scanf("%d",&size);

int A[size][size];

printf("Enter Matrix:\n");
for(int i=0;i<size;i++)
for(int j=0;j<size;j++)
scanf("%d",&A[i][j]);

magicSquare(size, A);
}

else if(n==4){
int size;
printf("Enter size of Magic Square");
scanf("%d",&size);

int A[n][n];
for(int i=0;i<size;i++){
for(int j=0;j<size;j++){
scanf("%d",&A[i][j]);
}}
}

else{
printf("Invalid Choice");
}
return 0;
} 































