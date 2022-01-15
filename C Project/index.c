#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define sf scanf
#define pf printf



int main()
{

    char uname[100];
    char upass[11];
    char name[100];
    char address[100];
    char number[100];
    char productname[100];
    int quantity;
    int price;
    int servicecharge;
    int discount;
    int tamount;

    int i,n;

    FILE *file;

    pf("===================================================================\n");
    pf("\t\t\tWelcome to ZeRo tO inFiNiTy\n");
    pf("===================================================================\n");

    pf("\n");
    pf("\n");
    pf("\t\t\tUSER:: ");
    gets(uname);
    pf("\n\t\t\tPASS:: ");
    gets(upass);
// using login condition
    if(strcmp(uname,"maruf")==0){
        if(strcmp(upass,"222")==0)
        {
            pf("\t====================================================\n");
            pf("\t====================================================\n");
            pf("\n");
            pf("\t\t\tZero to InFiNiTy");
            pf("\n\t====================================================\n");
            pf("\t\t\n\n#Customer Details:\n");
            pf("##########################\n");

            pf("\nNo. of Product: ");
            sf("%d",&n);

            
            file = fopen("calculation.txt","a");


                if(file==NULL)
                {
                    pf("File doesn't exist");
                }

                else{
                      pf("\n#Name     : ");
                      fflush(stdin);
                        gets(name);
            
                       
                        pf("\n#Address: ");
                        gets(address);
                        pf("\n#Number : +880 ");
                        gets(number);

                        for(i=0;i<n;i++){
                      
                       pf("\n\n#P.Name:");
                        fflush(stdin);
                        gets(productname);
                        pf("\n#P.Qty  :");
                        sf("%d",&quantity);
                        pf("\n#P.Price:");
                        sf("%d",&price);
                       pf("\n#S.Charge:");
                        sf("%d",&servicecharge);
                        pf("\n#Discount:");
                        sf("%d",&discount);
                    
                        pf("\n#T.Amount:");
                        sf("%d",&tamount);
                        
                  
                        fprintf(file,"\n\n\t%s\t\t\t%s\t\t\t%s\t\t\t%s\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d",name,address,number,productname,quantity,price,servicecharge,discount,tamount);

                        }


                    fclose(file);
                }
                







        }


            else{
                pf("\t===============================================\n\n");
                pf("\t\t\t##Fuck off!!\n");
                pf("\n\t-----------------------------------------------\n");
            }

    }
    else{
        pf("\n\n\t  ########-User Doesn't Exist - ##########");


    }


    getch();


}