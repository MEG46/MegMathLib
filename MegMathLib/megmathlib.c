#include <stdio.h>
void invalid(){
    printf("Invalid Process!\n");
}
void digit(){
    int i,prcs;
    printf("Show One-Digit Numbers (Enter 1)\n");
    printf("Is The Entered Number A One-Digit? (Enter 2)\n");
    printf("How many digits does the entered number have? (Enter 3)\n");
    printf("Show Just N-th digits of Number (Enter 4)\n");
    printf("Please enter a process : ");
    scanf("%d",&prcs);
    if(prcs==1){
        for(i=0;i<10;i++){
            printf("%d\t",i);
        }
        printf("\n");
    }else if(prcs==2){
        int num,flag=0;
        printf("Please enter a number : ");
        scanf("%d",&num);
        if(num<10&&num>=0){
            printf("%d is a one-digit number!\n",num);
        }else{
            printf("%d is not one-digit number!\n",num);
        }
        printf("\n");
    }else if(prcs==3){
      int num,count=0,dgt=1,c;
        printf("Please enter a number : ");
        scanf("%d",&num);
        printf("The Number : %d\n",num);
        printf("Reverse Number : ");
        c=num; 
        if(c<0){
            c=0-c;
            printf("-");
        }
        while(c!=0){
            printf("%d",(c%10));
            c/=10;
        }
        printf("\n");
        if(num<0){
            num=0-num;
        }
        while(num!=0){
            printf("%ds-digits : %d\n",dgt,(num%10));
            num/=10;
            dgt=dgt*10;
            count++;
        }
        printf("The Number Of Digit : %d\n",count);
    }else if(prcs==4){
      int num,count=0,dgt=1,c;
        printf("Please enter a number : ");
        scanf("%d",&num);
        printf("The Number : %d\n",num);
         printf("Please enter which n-th digit do you want to print : ");
        scanf("%d",&c);
        if(num==0){
          printf("%ds-digits : %d\n",dgt,num);  
        }
         if(num<0){
            num=0-num;
        }
        while(num!=0){
            if(dgt==c)
            printf("%ds-digits : %d\n",dgt,(num%10));
            num/=10;
            dgt=dgt*10;
        }
       } else{
        invalid();
    }
    
}
void natural(){
  int i,prcs;
    printf("Show Natural Numbers Until The Entered Number (Enter 1)\n");
    printf("Is The Entered Number A Natural Number? (Enter 2)\n");
    printf("Show Sum Of Natural Numbers Until The Entered Number (Enter 3)\n");
    printf("Show Average Of Natural Numbers Until The Entered Number (Enter 4)\n");
    printf("Show Odd And Even Numbers Until The Entered Number (Enter 5)\n");
    printf("Show Numbers Between Two Natural Numbers (Enter 6)\n");
    printf("Show Sum of The Numbers Of Between Two Natural Numbers (Enter 7)\n");
    printf("Show Average of The Numbers Of Between Two Natural Numbers (Enter 8)\n");
    printf("Please enter a process : ");
    scanf("%d",&prcs);
    if(prcs==1){
        int num;
        printf("Please enter a number :");
        scanf("%d",&num);
        if(num<0){
            invalid();
        }else{
        int ch;
        printf("Is %d included? (1=Yes 0=No) : ",num);
        scanf("%d",&ch);
        if(ch==1){
        for(i=0;i<=num;i++){
            printf("%d\t",i);
        }
        }else if(ch==0){
        for(i=0;i<num;i++){
            printf("%d\t",i);
        }
        }else{
            invalid();
        }
        printf("\n");
        }
    }else if(prcs==2){
        float num;
        printf("Please enter a number :");
        scanf("%f",&num);
        if(num<0||(num-(int)(num)!=0)){
            printf("%f is not a natural number!\n",num);
        }else{
            printf("%.0f is a natural number!\n",num);
        }
    }else if(prcs==3){
        int num;
        printf("Please enter a number :");
        scanf("%d",&num);
        if(num<0||(num-(int)(num)!=0)){
            printf("%d is not a natural number!\n",num);
        }else{
            int result=0;
            int ch;
            printf("Is %d included? (1=Yes 0=No) : ",num);
            scanf("%d",&ch);
        if(ch==1){
           for(i=0;i<=num;i++){
            result+=i;
            }
            printf("Sum Of The Natural Numbers Included %d : %d\n",num,result);
        }else if(ch==0){
            for(i=0;i<num;i++){
            result+=i;
            }
            printf("Sum Of The Natural Numbers Until %d : %d\n",num,result);
        }else{
            invalid();
        }
        }    
    }else if(prcs==4){
        int num;
        printf("Please enter a number :");
        scanf("%d",&num);
        if(num<0||(num-(int)(num)!=0)){
            printf("%d is not a natural number!\n",num);
        }else if(num==0){
            printf("Average Of The Natural Numbers %d : %d\n",num,num);
        }else{
            float result=0;
            int ch;
            printf("Is %d included? (1=Yes 0=No) : ",num);
            scanf("%d",&ch);
        if(ch==1){
            result=num/2;
            printf("Average Of The Natural Numbers Included %d : %.2f\n",num,result);
        }else if(ch==0){
            
            result=(num-1)/2;
            printf("Average Of The Natural Numbers Until %d : %.2f\n",num,result);
        }else{
            invalid();
        }
        }    
        
    }else if(prcs==5){
        int num;
        printf("Please enter a number :");
        scanf("%d",&num);
        if(num<0){
            invalid();
        }else if(num==0){
            printf("Odd Numbers:\n\nEven Numbers :\n0\n");    
        }
        else{
        int ch;
        printf("Is %d included? (1=Yes 0=No) : ",num);
        scanf("%d",&ch);
        if(ch==1){
        printf("Odd Numbers:\n");
        for(i=0;i<=num;i++){
            if(i%2!=0){
            printf("%d\t",i);
            }
        }
        printf("\nEven Numbers:\n");
        for(i=0;i<=num;i++){
            if(i%2==0){
            printf("%d\t",i);
            }
        }
        printf("\n");
        }else if(ch==0){
        printf("Odd Numbers:\n");
        for(i=0;i<num;i++){
            if(i%2!=0){
            printf("%d\t",i);
            }
        }
        printf("\nEven Numbers:\n");
        for(i=0;i<num;i++){
            if(i%2==0){
            printf("%d\t",i);
            }
        }
        printf("\n");
        }else{
            invalid();
        }
        printf("\n");
        }
    }else if(prcs==6){
        int num1,num2,gec;
        printf("Please enter a number :");
        scanf("%d",&num1);
         printf("Please enter a number :");
        scanf("%d",&num2);
        if(num1<0||num2<0){
            invalid();
        }else if(num1==num2){
            printf("Sum : %d\t",num1);
        }else{
        int ch1,ch2;
        if(num1<num2){
            gec=num1;
            num1=num2;
            num2=gec;
        printf("Is %d included? (1=Yes 0=No) : ",num2);
        scanf("%d",&ch2);
        printf("Is %d included? (1=Yes 0=No) : ",num1);
        scanf("%d",&ch1);
        }else{
        printf("Is %d included? (1=Yes 0=No) : ",num2);
        scanf("%d",&ch2);   
        printf("Is %d included? (1=Yes 0=No) : ",num1);
        scanf("%d",&ch1);
        }
        if(ch1==1&&ch2==0){
        printf("The Natural Numbers Between %d and %d (%d included)\n",num2,num1,num1);
        
        for(i=num2+1;i<=num1;i++){
            printf("%d\t",i);
        }
        printf("\n");
        }else if(ch1==0&&ch2==1){
        printf("The Natural Numbers Between %d and %d (%d included)\n",num2,num1,num2);
        for(i=num2;i<num1;i++){
            printf("%d\t",i);
        }
        }else if(ch1==0&&ch2==0){
        printf("The Natural Numbers Between %d and %d (Both are not included)\n",num2,num1);
        for(i=num2+1;i<num1;i++){
            printf("%d\t",i);
        }
        printf("\n");
        }else if(ch1==1&&ch2==1){
        printf("The Natural Numbers Between %d and %d (Both are included)\n",num2,num1);
        for(i=num2;i<=num1;i++){
            printf("%d\t",i);
        }
        printf("\n");
        }
        }
        }else if(prcs==7||prcs==8){
        int num1,num2,gec,sum=0,count=0;
        printf("Please enter a number :");
        scanf("%d",&num1);
         printf("Please enter a number :");
        scanf("%d",&num2);
        if(num1<0||num2<0){
            invalid();
        }else if(num1==num2){
            printf("%d\t",num1);
        }else{
        int ch1,ch2;
        if(num1<num2){
            gec=num1;
            num1=num2;
            num2=gec;
        printf("Is %d included? (1=Yes 0=No) : ",num2);
        scanf("%d",&ch2);
        printf("Is %d included? (1=Yes 0=No) : ",num1);
        scanf("%d",&ch1);
        }else{
        printf("Is %d included? (1=Yes 0=No) : ",num2);
        scanf("%d",&ch2);   
        printf("Is %d included? (1=Yes 0=No) : ",num1);
        scanf("%d",&ch1);
        }
        if(ch1==1&&ch2==0){
        for(i=num2+1;i<=num1;i++){
            sum+=i;
            count++;
        }
        if(prcs==7){
        printf("The Sum of The Numbers Of Between %d and %d (%d included) : ",num2,num1,num1);
        printf("%d\n",sum);
        printf("\n");
        }else{
        if(count==0){
        printf("The Average of The Numbers Of Between %d and %d (%d included) : 0\n",num2,num1,num1);   
        }else{
        float avg=(float)sum/count;
        printf("The Average of The Numbers Of Between %d and %d (%d included) : ",num2,num1,num1);
        printf("%f\n",avg);
        printf("\n"); 
        }
        }
        }else if(ch1==0&&ch2==1){
        for(i=num2;i<num1;i++){
            sum+=i;
            count++;
        }
        if(prcs==7){
        printf("The Sum of The Numbers Of Between %d and %d (%d included) : ",num2,num1,num2);
        printf("%d\n",sum);
        printf("\n");
        }else{
        if(count==0){
        printf("The Average of The Numbers Of Between %d and %d (%d included) : 0\n",num2,num1,num2);   
        }else{
        float avg=(float)sum/count;
        printf("The Average of The Numbers Of Between %d and %d (%d included) : ",num2,num1,num1);
        printf("%f\n",avg);
        printf("\n"); 
        }
        }
        }else if(ch1==0&&ch2==0){
        for(i=num2+1;i<num1;i++){
            sum+=i;
            count++;
        }
        if(prcs==7){
        printf("The Sum of The Numbers Of Between %d and %d (Both are not included) : ",num2,num1);
        printf("%d\n",sum);
        printf("\n");
        }else{
        if(count==0){
        printf("The Average of The Numbers Of Between %d and %d (Both are not included) : 0\n",num2,num1);   
        }else{
        float avg=(float)sum/count;
        printf("The Average of The Numbers Of Between %d and %d (Both are not included) : ",num2,num1);   
        printf("%f\n",avg);
        printf("\n"); 
        }
        }
        }else if(ch1==1&&ch2==1){
        for(i=num2;i<=num1;i++){
            sum+=i;
            count++;
        }
        if(prcs==7){
         printf("The Sum of The Numbers Of Between %d and %d (Both are included) : ",num2,num1);
        printf("%d\n",sum);
        printf("\n");
        }else{
        if(count==0){
        printf("The Average of The Numbers Of Between %d and %d (Both are included) : 0\n",num2,num1);   
        }else{
        float avg=(float)sum/count;
        printf("The Average of The Numbers Of Between %d and %d (Both are included) : ",num2,num1);   
        printf("%f\n",avg);
        printf("\n"); 
        }
        }
        }else{
            invalid();
        }
        printf("\n");
        }
    }else{
        invalid();
    }
    
}
void integer(){
  int i,prcs;
    printf("Show Integer Numbers Until Zero (Enter 1)\n");
    printf("Is The Entered Number A Integer Number? (Enter 2)\n");
    printf("Show Sum Of Integer Numbers Until The Entered Number (Enter 3)\n");
    printf("Show Average Of Natural Numbers Until The Entered Number (Enter 4)\n");
    printf("Show Odd And Even Numbers Until The Entered Number (Enter 5)\n");
    printf("Show Numbers Between Two Natural Numbers (Enter 6)\n");
    printf("Show Sum of The Numbers Of Between Two Natural Numbers (Enter 7)\n");
    printf("Show Average of The Numbers Of Between Two Natural Numbers (Enter 8)\n");
    printf("Please enter a process : ");
    scanf("%d",&prcs);
    if(prcs==1){
        int num;
        printf("Please enter a number :");
        scanf("%d",&num);
        if(num<0){
            num=0-num;
            int ch;
        printf("Is -%d included? (1=Yes 0=No) : ",num);
        scanf("%d",&ch);
        if(ch==1){
        for(i=num;0<=i;i--){
            printf("-%d\t",i);
        }
        printf("0\t");
        }else if(ch==0){
        for(i=num-1;0<i;i--){
            printf("-%d\t",i);
        }
        printf("0\t");
        }else{
            invalid();
        }
        }else{
        int ch;
        printf("Is %d included? (1=Yes 0=No) : ",num);
        scanf("%d",&ch);
        if(ch==1){
        for(i=0;i<=num;i++){
            printf("%d\t",i);
        }
        }else if(ch==0){
        for(i=0;i<num;i++){
            printf("%d\t",i);
        }
        }else{
            invalid();
        }
        printf("\n");
        }
    }else if(prcs==2){
        float num;
        printf("Please enter a number :");
        scanf("%f",&num);
       if((num-(int)(num)!=0)){
            printf("%f is not a integer number!\n",num);
        }else{
            printf("%.0f is a integer number!\n",num);
        }
    }else if(prcs==3){
        int num,flag=0;
        printf("Please enter a number :");
        scanf("%d",&num);
        if((num-(int)(num)!=0)){
            printf("%d is not a natural number!\n",num);
        }else{
            int result=0;
            int ch;
            printf("Is %d included? (1=Yes 0=No) : ",num);
            scanf("%d",&ch);
            if(num<0){
                num=0-num;
                flag=1;
            }
        if(ch==1){
           for(i=0;i<=num;i++){
            result+=i;
            }
            printf("Sum Of The Natural Numbers Included ");
            if(flag==1){
                printf("-%d : -%d\n",num,result);
            }else{
                printf("%d : %d\n",num,result); 
            }
        }else if(ch==0){
            for(i=0;i<num;i++){
            result+=i;
            }
            printf("Sum Of The Natural Numbers Until ");
            if(flag==1){
                printf("-%d : -%d\n",num,result);
            }else{
                printf("%d : %d\n",num,result); 
            }
        }else{
            invalid();
        }
        }    
    }else if(prcs==4){
        int num,flag=0;
        printf("Please enter a number :");
        scanf("%d",&num);
        if((num-(int)(num)!=0)){
            printf("%d is not a integer number!\n",num);
        }else if(num==0){
            printf("Average : 0\n");
            
        }else{
            float result=0;
            int ch;
            printf("Is %d included? (1=Yes 0=No) : ",num);
            scanf("%d",&ch);
            if(num<0){
                num=0-num;
                flag=1;
            }
        if(ch==1){
            result=num/2;
            printf("Average Of The Integer Numbers Included ");
            if(flag==1){
                printf("-%d : -%.2f\n",num,result);
            }else{
                printf("%d : %.2f\n",num,result); 
            }
        }else if(ch==0){
            result=(num-1)/2;
            printf("Average Of The Natural Numbers Until ");
            if(flag==1){
                printf("-%d : -%.2f\n",num,result);
            }else{
                printf("%d : %.2f\n",num,result); 
            }
        }else{
            invalid();
        }
        }    
        
    }else if(prcs==5){
        int num,flag=0;
        printf("Please enter a number :");
        scanf("%d",&num);
        if(num==0){
            printf("Odd Numbers:\n\nEven Numbers :\n0\n");    
        }
        else{
        int ch;
        printf("Is %d included? (1=Yes 0=No) : ",num);
        scanf("%d",&ch);
        if(num<0){
            num=0-num;
            flag=1;
        }
        if(ch==1){
        printf("Odd Numbers:\n");
        for(i=0;i<=num;i++){
            if(i%2!=0){
                if(flag==1){
                printf("-");
            }
            printf("%d\t",i);
            }
        }
        printf("\nEven Numbers:\n");
        for(i=0;i<=num;i++){
            if(i%2==0){
                if(flag==1&&i!=0){
                printf("-");
            }
            printf("%d\t",i);
            }
        }
        printf("\n");
        }else if(ch==0){
        printf("Odd Numbers:\n");
        for(i=0;i<num;i++){
            if(i%2!=0){
                if(flag==1){
                printf("-");
            }
            printf("%d\t",i);
            }
        }
        printf("\nEven Numbers:\n");
        for(i=0;i<num;i++){
            if(i%2==0){
                if(flag==1&&i!=0){
                printf("-");
            }
            printf("%d\t",i);
            }
        }
        printf("\n");
        }else{
            invalid();
        }
        printf("\n");
        }
    }else if(prcs==6){
        int num1,num2,gec;
        printf("Please enter a number :");
        scanf("%d",&num1);
         printf("Please enter a number :");
        scanf("%d",&num2);
        if(num1==num2){
            printf("Sum : %d\t",num1);
        }else{
        int ch1,ch2;
        if(num1<num2){
            gec=num1;
            num1=num2;
            num2=gec;
        printf("Is %d included? (1=Yes 0=No) : ",num2);
        scanf("%d",&ch2);
        printf("Is %d included? (1=Yes 0=No) : ",num1);
        scanf("%d",&ch1);
        }else{
        printf("Is %d included? (1=Yes 0=No) : ",num2);
        scanf("%d",&ch2);   
        printf("Is %d included? (1=Yes 0=No) : ",num1);
        scanf("%d",&ch1);
        }
        if(ch1==1&&ch2==0){
        printf("The Natural Numbers Between %d and %d (%d included)\n",num2,num1,num1);
        
        for(i=num2+1;i<=num1;i++){
            printf("%d\t",i);
        }
        printf("\n");
        }else if(ch1==0&&ch2==1){
        printf("The Natural Numbers Between %d and %d (%d included)\n",num2,num1,num2);
        for(i=num2;i<num1;i++){
            printf("%d\t",i);
        }
        }else if(ch1==0&&ch2==0){
        printf("The Natural Numbers Between %d and %d (Both are not included)\n",num2,num1);
        for(i=num2+1;i<num1;i++){
            printf("%d\t",i);
        }
        printf("\n");
        }else if(ch1==1&&ch2==1){
        printf("The Natural Numbers Between %d and %d (Both are included)\n",num2,num1);
        for(i=num2;i<=num1;i++){
            printf("%d\t",i);
        }
        printf("\n");
        }
        }
        }else if(prcs==7||prcs==8){
        int num1,num2,gec,sum=0,count=0;
        printf("Please enter a number :");
        scanf("%d",&num1);
         printf("Please enter a number :");
        scanf("%d",&num2);
        if(num1==num2){
            printf("%d\t",num1);
        }else{
        int ch1,ch2;
        if(num1<num2){
            gec=num1;
            num1=num2;
            num2=gec;
        printf("Is %d included? (1=Yes 0=No) : ",num2);
        scanf("%d",&ch2);
        printf("Is %d included? (1=Yes 0=No) : ",num1);
        scanf("%d",&ch1);
        }else{
        printf("Is %d included? (1=Yes 0=No) : ",num2);
        scanf("%d",&ch2);   
        printf("Is %d included? (1=Yes 0=No) : ",num1);
        scanf("%d",&ch1);
        }
        if(ch1==1&&ch2==0){
        for(i=num2+1;i<=num1;i++){
            sum+=i;
            count++;
        }
        if(prcs==7){
        printf("The Sum of The Numbers Of Between %d and %d (%d included) : ",num2,num1,num1);
        printf("%d\n",sum);
        printf("\n");
        }else{
        if(count==0){
        printf("The Average of The Numbers Of Between %d and %d (%d included) : 0\n",num2,num1,num1);   
        }else{
        float avg=(float)sum/count;
        printf("The Average of The Numbers Of Between %d and %d (%d included) : ",num2,num1,num1);
        printf("%f\n",avg);
        printf("\n"); 
        }
        }
        }else if(ch1==0&&ch2==1){
        for(i=num2;i<num1;i++){
            sum+=i;
            count++;
        }
        if(prcs==7){
        printf("The Sum of The Numbers Of Between %d and %d (%d included) : ",num2,num1,num2);
        printf("%d\n",sum);
        printf("\n");
        }else{
        if(count==0){
        printf("The Average of The Numbers Of Between %d and %d (%d included) : 0\n",num2,num1,num2);   
        }else{
        float avg=(float)(sum)/count;
        printf("The Average of The Numbers Of Between %d and %d (%d included) : ",num2,num1,num1);
        printf("%f\n",avg);
        printf("\n"); 
        }
        }
        }else if(ch1==0&&ch2==0){
        for(i=num2+1;i<num1;i++){
            sum+=i;
            count++;
        }
        if(prcs==7){
        printf("The Sum of The Numbers Of Between %d and %d (Both are not included) : ",num2,num1);
        printf("%d\n",sum);
        printf("\n");
        }else{
        if(count==0){
        printf("The Average of The Numbers Of Between %d and %d (Both are not included) : 0\n",num2,num1);   
        }else{
        float avg=(float)sum/count;
        printf("The Average of The Numbers Of Between %d and %d (Both are not included) : ",num2,num1);   
        printf("%f\n",avg);
        printf("\n"); 
        }
        }
        }else if(ch1==1&&ch2==1){
        for(i=num2;i<=num1;i++){
            sum+=i;
            count++;
        }
        if(prcs==7){
         printf("The Sum of The Numbers Of Between %d and %d (Both are included) : ",num2,num1);
        printf("%d\n",sum);
        printf("\n");
        }else{
        if(count==0){
        printf("The Average of The Numbers Of Between %d and %d (Both are included) : 0\n",num2,num1);   
        }else{
        float avg=(float)sum/count;
        printf("The Average of The Numbers Of Between %d and %d (Both are included) : ",num2,num1);   
        printf("%f\n",avg);
        printf("\n"); 
        }
        }
        }else{
            invalid();
        }
        printf("\n");
        }
    }else{
        invalid();
    }
    
}
void prime(){
  int i,prcs;
    printf("Show Prime Numbers Until The Entered Number (Enter 1)\n");
    printf("Is The Entered Number A Prime Number? (Enter 2)\n");
    printf("Show Sum Of Prime Numbers Until The Entered Number (Enter 3)\n");
    printf("Show Average Of Natural Numbers Until The Entered Number (Enter 4)\n");
    printf("Show Numbers Between Two Natural Numbers (Enter 5)\n");
    printf("Show Sum of The Prime Numbers Of Between Two Natural Numbers (Enter 6)\n");
    printf("Show Average of The Prime Numbers Of Between Two Natural Numbers (Enter 7)\n");
    printf("Please enter a process : ");
    scanf("%d",&prcs);
    if(prcs==1){
        int num,l,count=2;
        printf("Please enter a number :");
        scanf("%d",&num);
        if(num<2){
            invalid();
        }else{
        int ch,flag;
        printf("Is %d included? (1=Yes 0=No) : ",num);
        scanf("%d",&ch);
        if(ch==1){
        while(count<=num){
        flag=0;
        l=count/2;
        for(i=2;i<=l;i++){
            if(count%i==0){
            flag=1;
            break;
            }
        }
            if(flag==0){
                printf("%d\t",count);
            }
        count++;
        }
        }else if(ch==0){
         while(count<num){
        flag=0;
        l=count/2;
        for(i=2;i<=l;i++){
            if(count%i==0){
            flag=1;
            break;
            }
        }
            if(flag==0){
                printf("%d\t",count);
            }
        count++;
        }
        }else{
            invalid();
        }
        printf("\n");
        }
    }else if(prcs==2){
        float num;
        printf("Please enter a number :");
        scanf("%f",&num);
        if(num<0||(num-(int)(num)!=0)){
            printf("%f is not a prime number!\n",num);
        }else{
            int c,flag=0,l,i;
            c=(int)(num);
            l=num/2;
            for(i=2;i<=l;i++){
                if(c%i==0){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
            printf("%d is a prime number!\n",c);
            }else{
            printf("%d is not a prime number!\n",c);
        }
        }
    }else if(prcs==3||prcs==4){
        int num,count=2,flag,result=0,l;
        printf("Please enter a number :");
        scanf("%d",&num);
        if(num<2||(num-(int)(num)!=0)){
            printf("Sum : 0\n");
        }else{
        int ch,flag,c=0;
        float avg=0;
        printf("Is %d included? (1=Yes 0=No) : ",num);
        scanf("%d",&ch);
        if(ch==1){
        while(count<=num){
        flag=0;
        l=count/2;
        for(i=2;i<=l;i++){
            if(count%i==0){
            flag=1;
            break;
            }
        }
            if(flag==0){
                result+=count;
                c++;
            }
        count++;
        }
        if(prcs==3){
        printf("Sum Of The Prime Numbers Until %d = %d\n",num,result);
        }else{
            avg=(float)(result)/c;
            printf("Sum Of The Prime Numbers Until %d = %.2f\n",num,avg);
        }
        }else if(ch==0){
            while(count<num){
        flag=0;
        l=count/2;
        for(i=2;i<=l;i++){
            if(count%i==0){
            flag=1;
            break;
            }
        }
            if(flag==0){
                result+=count;
                c++;
            }
        count++;
        }
        if(prcs==3){
        printf("Sum Of The Prime Numbers Until %d = %d\n",num,result);
        }else{
            avg=(float)(result)/c;
            printf("Sum Of The Prime Numbers Until %d = %.2f\n",num,avg);
        }
        }else{
            invalid();
        }
        }    
    }else if(prcs==5){
        int num1,num2,gec;
        printf("Please enter a number :");
        scanf("%d",&num1);
         printf("Please enter a number :");
        scanf("%d",&num2);
        if(num1<0||num2<0){
            invalid();
        }else if(num1==num2){
            printf("Sum : %d\t",num1);
        }else{
        int ch1,ch2;
        if(num1<num2){
            gec=num1;
            num1=num2;
            num2=gec;
        printf("Is %d included? (1=Yes 0=No) : ",num2);
        scanf("%d",&ch2);
        printf("Is %d included? (1=Yes 0=No) : ",num1);
        scanf("%d",&ch1);
        }else{
        printf("Is %d included? (1=Yes 0=No) : ",num2);
        scanf("%d",&ch2);   
        printf("Is %d included? (1=Yes 0=No) : ",num1);
        scanf("%d",&ch1);
        }
        if(ch1==1&&ch2==0){
        printf("The Prime Numbers Between %d and %d (%d included)\n",num2,num1,num1);
        
        for(i=num2+1;i<=num1;i++){
            printf("%d\t",i);
        }
        printf("\n");
        }else if(ch1==0&&ch2==1){
        printf("The Prime Numbers Between %d and %d (%d included)\n",num2,num1,num2);
        for(i=num2;i<num1;i++){
            printf("%d\t",i);
        }
        }else if(ch1==0&&ch2==0){
        printf("The Prime Numbers Between %d and %d (Both are not included)\n",num2,num1);
        for(i=num2+1;i<num1;i++){
            printf("%d\t",i);
        }
        printf("\n");
        }else if(ch1==1&&ch2==1){
        printf("The Prime Numbers Between %d and %d (Both are included)\n",num2,num1);
        for(i=num2;i<=num1;i++){
            printf("%d\t",i);
        }
        printf("\n");
        }
        }
        }else if(prcs==6||prcs==7){
        int num1,num2,gec,sum=0,count=0;
        printf("Please enter a number :");
        scanf("%d",&num1);
         printf("Please enter a number :");
        scanf("%d",&num2);
        if(num1<0||num2<0){
            invalid();
        }else if(num1==num2){
            printf("%d\t",num1);
        }else{
        int ch1,ch2;
        if(num1<num2){
            gec=num1;
            num1=num2;
            num2=gec;
        printf("Is %d included? (1=Yes 0=No) : ",num2);
        scanf("%d",&ch2);
        printf("Is %d included? (1=Yes 0=No) : ",num1);
        scanf("%d",&ch1);
        }else{
        printf("Is %d included? (1=Yes 0=No) : ",num2);
        scanf("%d",&ch2);   
        printf("Is %d included? (1=Yes 0=No) : ",num1);
        scanf("%d",&ch1);
        }
        if(ch1==1&&ch2==0){
        for(i=num2+1;i<=num1;i++){
            sum+=i;
            count++;
        }
        if(prcs==6){
        printf("The Sum of The PrimeNumbers Of Between %d and %d (%d included) : ",num2,num1,num1);
        printf("%d\n",sum);
        printf("\n");
        }else{
        if(count==0){
        printf("The Average of The Prime Numbers Of Between %d and %d (%d included) : 0\n",num2,num1,num1);   
        }else{
        float avg=(float)sum/count;
        printf("The Average of The Prime Numbers Of Between %d and %d (%d included) : ",num2,num1,num1);
        printf("%f\n",avg);
        printf("\n"); 
        }
        }
        }else if(ch1==0&&ch2==1){
        for(i=num2;i<num1;i++){
            sum+=i;
            count++;
        }
        if(prcs==6){
        printf("The Sum of The Prime Numbers Of Between %d and %d (%d included) : ",num2,num1,num2);
        printf("%d\n",sum);
        printf("\n");
        }else{
        if(count==0){
        printf("The Average of The Numbers Of Between %d and %d (%d included) : 0\n",num2,num1,num2);   
        }else{
        float avg=(float)sum/count;
        printf("The Average of The Numbers Of Between %d and %d (%d included) : ",num2,num1,num1);
        printf("%f\n",avg);
        printf("\n"); 
        }
        }
        }else if(ch1==0&&ch2==0){
        for(i=num2+1;i<num1;i++){
            sum+=i;
            count++;
        }
        if(prcs==6){
        printf("The Sum of The Numbers Of Between %d and %d (Both are not included) : ",num2,num1);
        printf("%d\n",sum);
        printf("\n");
        }else{
        if(count==0){
        printf("The Average of The Numbers Of Between %d and %d (Both are not included) : 0\n",num2,num1);   
        }else{
        float avg=(float)sum/count;
        printf("The Average of The Numbers Of Between %d and %d (Both are not included) : ",num2,num1);   
        printf("%f\n",avg);
        printf("\n"); 
        }
        }
        }else if(ch1==1&&ch2==1){
        for(i=num2;i<=num1;i++){
            sum+=i;
            count++;
        }
        if(prcs==6){
         printf("The Sum of The Numbers Of Between %d and %d (Both are included) : ",num2,num1);
        printf("%d\n",sum);
        printf("\n");
        }else{
        if(count==0){
        printf("The Average of The Numbers Of Between %d and %d (Both are included) : 0\n",num2,num1);   
        }else{
        float avg=(float)sum/count;
        printf("The Average of The Numbers Of Between %d and %d (Both are included) : ",num2,num1);   
        printf("%f\n",avg);
        printf("\n"); 
        }
        }
        }else{
            invalid();
        }
        printf("\n");
        }
    }else{
        invalid();
    }
    
}
int main() {
    while(1){
    int topic;
    printf("Choose your topic:\n");
    printf("Digits (Enter 1)\n");
    printf("Natural Numbers (Enter 2)\n");
    printf("Integer Numbers (Enter 3)\n");
    printf("Prime Numbers (Enter 4)\n");
    printf("Please enter a topic : ");
    scanf("%d",&topic);
    switch(topic){
        case 1:
              digit();
              break;
        case 2:
              natural();
              break;
        case 3:
              integer();
              break;
        case 4:
              prime();
              break;
        default:
               invalid();
               break;
    }
    }
    return 0;
}