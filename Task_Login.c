#include <stdio.h>
#include <string.h>

struct Users
{
   char username[50];
   char password[50];
};

 struct Users users[200];
 int num_user=0;

 //Registration
void Register_Users()
    {
        if (num_user >= 200) {
          printf("Maximum  users reached. Cannot register more users.\n");
          return;
    }
    
 struct Users insertuser;

    printf("Registration:\n");

    printf("\nEnter UserName:  ");
    scanf("%s",insertuser.username);

     for (int i = 0 ; i < num_user ; i++) {
         if (strcmp(insertuser.username, users[i].username) == 0) {
            printf("Username already exists. Choose Other UserName.\n");
            return;
        }
    }


    printf("\nEnter password: ");
    scanf("%s",insertuser.password);

    users[num_user] = insertuser;
    num_user++;
    
    printf("Registration Successfully \n");

    }

 void Login(){
     char user_name[50];
     char pass[50]; 

     printf("\nEnter UserName:  ");
     scanf("%s",user_name);
    
    printf("\nEnter password: ");
    scanf("%s",pass);

    for(int i=0 ; i<num_user ; i++){
        if ( !strcmp(user_name,users[i].username) && !strcmp(pass,users[i].password) ) 
        {
               printf("Login Successfully \n");
               return ;
               
        }}
        
            
             printf("Login not Successfully username or password is wrong. try again \n");
     
    
    } 
    
void main(){

    char choose;

   while (1)
  
   {
  
        printf("R. Register\n");
        printf("L. Login\n");
    
        printf("Enter your choose: ");
        scanf("%s", &choose);

        switch (choose) {
             case 'R' :
                Register_Users();
                break;
             case 'L' :
                 Login();
                 break;
            
             default:
                printf("Invalid choose. Please try again.\n");
                break;
        }
    } 

}



