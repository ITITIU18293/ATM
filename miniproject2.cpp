#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
bool ktr_tk(char tk[], char mk[], int &ID)
{
	FILE* f;
	f = fopen("tkID.txt", "r");
	if (f == NULL)
	{
		printf("File does not exist\n");
		fclose(f);
		return false;
	}
	char tkx[255];
	char mkx[255];
	char d[255];
	int x;
	while (fgets(tkx, 255, (FILE*)f)!= NULL)
	{
		fgets(mkx, 255, (FILE*)f);
		x = strcmp(tk, tkx) + strcmp(mk,mkx);
		if (x==0)
		{
			fscanf(f, "%d", &ID);
			return true;
		}
		else{
			fgets(d, 255, (FILE*)f);
		}
	}
	fclose(f);
	return false;
}

void Enter_acc(int &ID)
{
	char tk[255];
	char mk[255];
	gets(tk);
	gets(mk);
	strcat(tk, "\n");
	strcat(mk, "\n");
	if (ktr_tk(tk, mk, ID) == true)
	{
		printf("Here your ID: %d\n", ID);
	}
	else{
		printf("You enter wrong account\n");
	}
}

void ruttien()
{
	FILE *f;
	f=fopen("IDtien.txt","r");
	int tienrut;
	int sd;
	int Id;
	if(f==NULL)
	{
		printf("Erro cant find the find");
		exit(0);
	}
	while(fscanf(f,"%d",Id)){
		if(Id==ID){
			fscanf(f, "%d", sd);
	        printf("nhap so tien ban muon rut \n ");
	        scanf("%d",&tienrut);
	        while(tienrut>sd)
	      {
		    printf("so du tai khoan ko du \n Nhap lai");
		    scanf("%d",&tienrut);
	      }
	      sd=sd-tienrut;
		  printf("so du tai khoan la : %D", sd);
		  return;
	}else{
		fscanf(f, "%d", sd);
	}
}
fclose(f);
}
void guitien()
{
	FILE *f;
	f=fopen("IDtien.txt","r");
	char tkgui[50];
	int sd,id,tiengui;
	if(f==NULL)
	{
		printf("Erro cant find the find");
		exit(0);
	}
	printf("Ban muon gui cho tai khoan nao");
	gets(tkgui);
	/*tim tai khoan co hay khong*/
	/*	    while()
	   {
		printf("Tai khoan ko ton tai \n Nhap lai");
		gets(tkgui);

	}
	printf("Nhap ID cua tai khoan ban muon gui de xac nhan");
	scanf("%d",&id);*/
	/*xet tk ID co hay ko*/
	while(fscanf(f,"%d",Id)){
		if(Id==ID&&id==Id){
           fscanf(f,"%d",sd);
	       printf("so tien ban muon gui ?");
	        scanf("%d",&tiengui);
	       /*so sanh tien gui vs so du tai khoan ban dau*/
	      while (tiengui>sd)
	       {
		         printf("So du tai khoan ko du \n Nhap lai");
		          scanf("%d",&tiengui);
	       }
	       /*so du cua tai khoan bi tru di*/
	       sd=sd+tiengui;
	       printf("giao dich thanh cong ! ");
	       return ;}else{
	       	fscanf(f, "%d", sd);
		   }
		   }

	       /*so du cua tai khoan duoc gui duoc cong len*/
	       fclose(f);
}


int main()
{
	FILE *f;
	int a;
	
	printf("1. Rut tien an 1 \n 2. Gui tien an 2");
	scanf("%d",&a);
	if(a==1)
	{
		int ID=-1;
		Enter_acc(ID);
		ruttien();
	}else{
		int ID=-1;
		Enter_acc(ID);
		guitien();
	}
	fclose(f);
return 0;
}
