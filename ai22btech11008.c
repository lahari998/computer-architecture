#include<stdio.h>
#include<string.h>

int calculating_binary(char a){ int k;
     if(a == '0'){k = 0;}
     if(a == '1'){k = 1;}
     if(a == '2'){k = 2;}
     if(a == '3'){k = 3;}
     if(a == '4'){k = 4;}
     if(a == '5'){k = 5;}
     if(a == '6'){k = 6;}
     if(a == '7'){k = 7;}
     if(a == '8'){k = 8;}
     if(a == '9'){k = 9;}
     if(a == 'a'){k = 10;}
     if(a == 'b'){k = 11;}
     if(a == 'c'){k = 12;}
     if(a == 'd'){k = 13;}
     if(a == 'e'){k = 14;}
     if(a == 'f'){k = 15;}
     return k;
     }

int main(){
   char C[][9]={"4079df93","01d6c46f","451fdc63","003e80b7","003e80b7"
    };
   char B[17]={"0123456789abcdef"};
   int p = sizeof(C) / sizeof(C[0]);
for(int i=0;i<p;i++){
char A[9];
strcpy(A,C[i]);
if(A[7]==B[7]){
int x,y,z,m,n,o;
for(int i = 0;i < 16;i++){
if(A[5]==B[i]){
x = calculating_binary(B[i]);
   if(A[6]=='3'){
   x=2*x;
   }
   if(A[6]=='b'){
   x=2*x+1;
   }}
   if(A[4] == B[i]){
           y = calculating_binary(B[i]);}
   if(A[3] == B[i]){
           z = calculating_binary(B[i]);
           z=16*z;}
   if(A[2] == B[i]){
           m = calculating_binary(B[i]);
           m=256*m;}
   if(A[1] == B[i]){
           n = calculating_binary(B[i]);
           n=256*16*n;}
   if(A[0] == B[i]){
           o = calculating_binary(B[i]);
           o=256*256*o;}
           }
           printf("lui x%d, %d \n",x,y+z+m+n+o);}
else if(A[6] == B[3] || A[6] == B[11]){
   int x;int y;
   int z;
   
     if(A[1]=='1' || A[1] =='0'){
       for(int i = 0;i < 16;i++){
         if(A[2] == B[i]){ 
           x = calculating_binary(B[i]);
           if(A[1] == B[1])
           {x=x+16;
           }
           else if(A[1] == B[0]){x=x;}
         }
         if(A[3] == B[i]){
           y = calculating_binary(B[i]);
           for(int j = 0;j < 16;j++){
           if( A[4] == B[j] && j > 7){
           y=2*y+1;}
           else if(A[4] == B[j] && j < 8){
          y=2*y;}}}
         if(A[5] == B[i]){
           z = calculating_binary(B[i]);
           if(A[6] == B[11])
           {z = 2*z+1; 
           }
           else if(A[6] == B[3]){z = 2*z;}
         }
    }
   }
   if(A[4] == B[8] || A[4] == B[0]){
   if(A[0]=='4'){
   printf("sub x%d, x%d, x%d \n", z, y, x);}
   else if(A[0]=='0'){
    printf("add x%d, x%d, x%d \n", z, y, x );}
}
   else if(A[4] == B[12] || A[4] == B[4]){
    printf("xor x%d, x%d, x%d \n", z, y, x );
   }
   else if(A[4] == B[14] || A[4] == B[6]){
   printf("or x%d, x%d, x%d \n", z, y, x );
   } 
   else if(A[4] == B[15] || A[4] == B[7]){
   printf("and x%d, x%d, x%d \n", z, y, x );} 
   else if(A[4] == B[9] || A[4] == B[1]){
    printf("sll x%d, x%d, x%d \n", z, y, x );}
    else if(A[4] == B[13] || A[4] == B[5]){
    if(A[0]=='4'){
   printf("sra x%d, x%d, x%d \n", z, y, x );}
   else if(A[0]=='0')
    printf("srl x%d, x%d, x%d \n", z, y, x );}}
    
    else if(A[6] == B[2] || A[6] == B[10]){
               int x;int y;
               int z,m,n,o;
    for(int i = 0;i < 16;i++){
         if(A[0] == B[i] && i < 8){
           z = calculating_binary(B[i]);
           z=256*z;
         }
         if(A[0] == B[i] && i > 7){
           z = calculating_binary(B[i]);
           z=256*z-4096;
         }
         if(A[1] == B[i] && i%2 == 1){
         y = calculating_binary(B[i]);
         o=(y-1)*16;
         }
         else if(A[1] == B[i] && i%2 == 0){
         y = calculating_binary(B[i]);
         o=(y)*16;
         }
         if(A[2] == B[i]){ 
           x = calculating_binary(B[i]);
           if(y%2==1){
           x=x+16;
           }
           else if(y%2 == 0){
           x=x;
           }
           }
           if(A[3] == B[i]){ 
           m = calculating_binary(B[i]);
           if(A[4] == B[11] || A[4] == B[10] || A[4] == B[9] || A[4] == B[8]){
           m=2*m+1;}
           else if(A[4] == B[3] || A[4] == B[2] || A[4] == B[1] || A[4] == B[0]){
           m=2*m;}
           }
           if(A[5] == B[i]){ 
           n = calculating_binary(B[i]);
           if(A[6] == B[10]){
           n=2*n+1;}
           else if(A[6] == B[2]){
           n=2*n;}
           }
 }      

if(A[4] == B[3] || A[4] == B[11]) {
      printf("sd x%d, %d(x%d) \n", x, n+o+z,m );
      }
      if(A[4] == B[2] || A[4] == B[10]) {
      printf("sw x%d, %d(x%d) \n", x, n+o+z,m );
      }
      if(A[4] == B[1] || A[4] == B[9]) {
      printf("sh x%d, %d(x%d) \n", x, n+o+z,m );
      }  
      if(A[4] == B[8] || A[4] == B[0]) {
      printf("sb x%d, %d(x%d) \n", x, n+o+z,m );
      }     
}
    
    
    else if(A[6] == B[9] || A[6] == B[1] || A[6] == B[8] || A[6] == B[0] ){
     int x;int y;
   int z,m,n;
    for(int i = 0;i < 16;i++){
         if(A[0] == B[i] && i<8){ 
           z = calculating_binary(B[i]);
           z=256*z;
         }
         else if(A[0] == B[0] || A[0] == B[4]){for(int j = 0;j < 4;j++){
         if(A[1] == B[j]){ if(A[2] == B[i]){ 
           x = calculating_binary(B[i]);
           x=x+16*j;
           }}
         }}
         if(A[0] == B[i] && i>7){ 
           z = calculating_binary(B[i]);
           z=256*z-4096;}
         if(A[1] == B[i]){ 
           y = calculating_binary(B[i]);
           y=16*y;
         }
         if(A[2] == B[i]){ 
           x = calculating_binary(B[i]);
           x=x;
           }
           if(A[3] == B[i]){ 
           m = calculating_binary(B[i]);
           for(int j = 0;j < 16;j++){
           if( A[4] == B[j] && j > 7){
           m=2*m+1;}
           else if(A[4] == B[j] && j < 8){
          m=2*m;}}}
         if(A[5] == B[i]){ 
           n = calculating_binary(B[i]);
           if(A[6] == B[9] || A[6] == B[8])
           {n=2*n+1;
           }
           else if(A[6] == B[1] || A[6] == B[0]){n=2*n;}
         }        
} 
 
if(A[6] == B[9] || A[6] == B[1]){
if(A[4] == B[8] || A[4] == B[0]){
printf("addi x%d, x%d, %d \n", n, m, x+y+z );}
else if(A[4] == B[12] || A[4] == B[4]){
printf("xori x%d, x%d, %d \n", n, m, x+y+z );}
else if(A[4] == B[14] || A[4] == B[6]){
printf("ori x%d, x%d, %d \n", n, m, x+y+z );}
else if(A[4] == B[15] || A[4] == B[7]){
printf("andi x%d, x%d, %d \n", n, m, x+y+z );}
else if(A[4] == B[9] || A[4] == B[1]){
printf("slli x%d, x%d, %d \n", n, m, x+y+z );}
else if(A[4] == B[13] || A[4] == B[5]){if(A[0] == B[0]){
printf("srli x%d, x%d, %d \n", n, m, x+y+z );}
else if(A[0] == B[4]){
printf("srai x%d, x%d, %d \n", n, m, x+y );}}
}
else if(A[6] == B[8] || A[6] == B[0]){
if(A[4] == B[11] || A[4] == B[3]){
printf("ld x%d, %d(x%d) \n", n, x+y+z,m );}
else if(A[4] == B[10] || A[4] == B[2]){
printf("lw x%d, %d(x%d) \n", n, x+y+z,m );}
else if(A[4] == B[9] || A[4] == B[1]){
printf("lh x%d, %d(x%d) \n", n, x+y+z,m );}
else if(A[4] == B[8] || A[4] == B[0]){
printf("lb x%d, %d(x%d) \n", n, x+y+z,m );}
else if(A[4] == B[14] || A[4] == B[6]){
printf("lwu x%d, %d(x%d)\n", n, x+y+z,m );}
else if(A[4] == B[13] || A[4] == B[5]){
printf("lhu x%d, %d(x%d) \n", n, x+y+z,m );}
else if(A[4] == B[12] || A[4] == B[4]){
printf("lbu x%d, %d(x%d) \n", n, x+y+z,m );}}
 }
 
 else if((A[6] == B[14] || A[6] == B[6] ) && A[7] == B[3]){
 int x,y,z,l,k,m,imm;
  for(int i = 0;i < 16;i++){
         if(A[0] == B[i]){ 
           x = calculating_binary(B[i]);
           if(i > 7){
           x = (x-8)*128 - 2048;}
           else if(i < 8){
           x=x*128;}}}
           for(int i = 0;i < 16;i++){
         if(A[1] == B[i]){ 
           y = calculating_binary(B[i]);
           if(i%2==1) {
           m=(y-1)*8;} 
           else if(i%2==0){
           m=y*8;}}}
           for(int i = 0;i < 16;i++){
           if(A[2] == B[i]){ 
           z = calculating_binary(B[i]);
           if(y%2==1) {
           z=z+16;} 
           else if(y%2==0){
           z=z;}}}
           for(int i = 0;i < 16;i++){
           if(A[3] == B[i]){ 
           l = calculating_binary(B[i]);
           for(int j = 0;j < 16;j++){
           if( A[4] == B[j] && j > 7){
           l=2*l+1;}
           else if(A[4] == B[j] && j < 8){
           l=2*l;}}}
           if(A[5] == B[i]){ 
           k = calculating_binary(B[i]);
           }           
 }
 if(A[6] == B[14]){
 imm=2*(x+m+k)+2048;}
 else if(A[6] == B[6]){
 imm=2*(x+m+k);}
 if(A[4] == B[8] || A[4] == B[0]){
 printf("beq x%d, x%d, %d \n", l,z,imm );}
 else if(A[4] == B[9] || A[4] == B[1] ){
 printf("bne x%d, x%d, %d \n", l,z,imm );}
  else if(A[4] == B[4] || A[4] == B[12]){
 printf("blt x%d, x%d, %d \n", l,z,imm );}
 else if(A[4] == B[5] || A[4] == B[13]){
 printf("bge x%d, x%d, %d \n", l,z,imm );}
 else if(A[4] == B[6] || A[4] == B[14]){
 printf("bltu x%d, x%d, %d \n", l,z,imm );}
 else if(A[4] == B[7] || A[4] == B[15]){
 printf("bgeu x%d, x%d, %d \n", l,z,imm);}
 }

else if(A[7]==B[7]){
if(A[6] == B[14] || A[6] == B[6]){
     int x;int y;
   int z,m,n;
    for(int i = 0;i < 16;i++){
         if(A[0] == B[i]){ 
           z = calculating_binary(B[i]);
           z=256*z;
         }
         else if(A[0] == B[0] || A[0] == B[4]){for(int j = 0;j < 4;j++){
         if(A[1] == B[j]){ if(A[2] == B[i]){ 
           x = calculating_binary(B[i]);
           x=x+16*j;
           }}
         }}
         if(A[1] == B[i]){ 
           y = calculating_binary(B[i]);
           y=16*y;
         }
         if(A[2] == B[i]){ 
           x = calculating_binary(B[i]);
           x=x;
           }
           if(A[3] == B[i]){ 
           m = calculating_binary(B[i]);
           if(A[4] == B[8])
           {m=2*m+1;
           }
           else if(A[4] == B[0]){m=2*m;}
         }
         if(A[5] == B[i]){ 
           n = calculating_binary(B[i]);
           if(A[6] == B[14])
           {n=2*n+1;
           }
           else if(A[6] == B[6]){n=2*n;}
         }        
}
printf("jalr x%d, x%d, %d \n", n, m, x+y+z);
}}
else if(A[7]==B[15]){
   int x,y,z,k,m,n;
   if(A[6] == B[14] || A[6] == B[6]){
        for(int i = 0;i < 16;i++){
         if(A[0] == B[i]){ 
           x = calculating_binary(B[i]);
           if(i > 7){
           x=(x-8)*256;}
           else if(i < 8){
           x=256*x;}
         }
         if(A[1] == B[i]){ 
           y = calculating_binary(B[i]);
           y = y*16;}
           if(A[2] == B[i]){ 
           z = calculating_binary(B[i]);
           if(i%2 == 1){
            z= z-1+2048;}
            else if(i%2 == 0){
            z=z;}}
            if(A[3] == B[i]){ 
           m = calculating_binary(B[i]);
           m = m*65536;}
           if(A[4] == B[i]){ 
           n = calculating_binary(B[i]);
           n = n*4096;}
           if(A[5] == B[i]){ 
           k = calculating_binary(B[i]);
           if(A[6] == B[14]){
           k = 2*k+1;}
           else if(A[6] == B[6]){
           k = 2*k;}}}
 }
 printf("jal x%d, %d \n", k,x+y+z+m+n );         
}
}
}









