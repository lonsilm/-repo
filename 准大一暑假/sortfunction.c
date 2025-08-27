#include <stdio.h>
#define MAXN 10

void sort( int a[], int n );

int main()
{
    int i, n;
    int a[MAXN];
    
    scanf("%d", &n);
    for( i=0; i<n; i++ )
        scanf("%d", &a[i]);

    sort(a, n);

    printf("After sorted the array is:");
    for( i = 0; i < n; i++ )
        printf(" %d", a[i]);
    printf("\n");
        
    return 0;
}

/* 你的代码将被嵌在这里 */
void sort( int a[], int n ){
    int b[n];

    for(int i=0;i<n;i++){
        b[i]=0;
    }
    
    for(int i=0;i<n;i++){
        int change=0;
        int save=0;
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(a[j]>=a[k])
                change=a[k];
                else
                change=a[j];
            }
            for(int k=0;k<n;k++){
                if(change>=a[k])
                change=a[k];
                else
                change=change;
            }
            for(int k=0;k<n;k++){
                if(change>=a[k])
                change=a[k];
                else
                change=change;
            }
            for(int k=0;k<n;k++){
                if(change>=a[k])
                change=a[k];
                else
                change=change;
            }
            for(int k=0;k<n;k++){
                if(change>=a[k])
                change=a[k];
                else
                change=change;
            }
            for(int k=0;k<n;k++){
                if(change>=a[k])
                change=a[k];
                else
                change=change;
            }
        }
        
        b[i]=change;
        save=change;

        for(int j=0;j<n;j++){ 
            for(int k=0;k<n;k++){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
                if(a[j]==a[k] && j<k && a[j]==save)
                    a[k]=999;
                else if(a[k]==save)
                   a[k]=999; 
                
            }
        }
    }
    for(int i;i<n;i++){
        a[i]=b[i];
    }
   
}