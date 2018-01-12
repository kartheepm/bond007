    #include<stdio.h>
    void printarray(int p[], int n)
    {
    int i;
for ( i = 0; i < n; i++)
printf("%d ", p[i]);
printf("\n");
}
void partition(int n)
{
int p[n]; 
        int k = 0;  

        p[k] = n; 

        int rem_val;

        

        while (1)

        {

           
            printarray(p, k+1);

            rem_val = 0;

            while (k >= 0 && p[k] == 1)

            {

                rem_val += p[k];

                k--;

            }

     

            

            if (k < 0)  return;

     

           

            p[k]--;

            rem_val++;

     

     

            
            while (rem_val > p[k])

            {

                p[k+1] = p[k];

                rem_val = rem_val - p[k];

                k++;

            }

     

          
            p[k+1] = rem_val;

            k++;

        }

    }

    int main()

    {

        int num;

        printf("\nEnter a number to perform integer partition: ");

        scanf("%d", &num);

        partition(num);

        return 0;

    }
