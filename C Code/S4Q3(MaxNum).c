 # include<stdio.h>

 void main()
 {
     int n,i;
     printf("How many element you want to enter: ");
     scanf("%d",&n);
     int arr[n],max = 0;

     for (i=0;i<n;i++){
        printf("Enter %d element: ", i+1);
        scanf("%d",&arr[i]);
     }
     for (i=0;i<n;i++){
        if (arr[i]>max)
            max = arr[i];
     }
     printf ("Maximum number is %d", max);
 }
