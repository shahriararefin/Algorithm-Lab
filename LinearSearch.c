/**
#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int key;
    scanf("%d",&key);


    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            printf("%d is in %d th pos\n", key,i+1);
            found=1;
            break;
        }
        
    
       
    }

    if (!found)
    {
        printf("%d is not available\n",key);
    }

  
    return 0;
}
*/



#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        /* code */

        scanf("%d", &arr[i]);
    }

    int key;
    scanf("%d", &key);

    int found =0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (key== arr[i])
        {
            /* code */
            printf("%d is in no %d position\n", key, i+1);
            found=1;
            break;
        }
        
    }

    if (!found)
    {
        /* code */
        printf("%d is not available\n", key);
    }
    
    
    return 0;


}