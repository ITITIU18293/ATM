#include <iostream>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
#include <string.H>
#include <windows.h> 

using namespace std;

int main()
{
	string ten ;
	
	string mat_khau ;
	string TEN, MAT_KHAU;
	int so_lan_nhap_sai = 0;
	int tuy_chon;
	int so_du;
	int tien_rut;
	int tien_nap;
	string mat_khau_moi, mat_khau_moi1;
	int tai_khoan_can_chuyen;
    int customer[30];
	int x;
	printf("enter amount of cutomers in list:");
	scanf("%d",&x);
	printf("enter ID of each cutomers in list:");
	
	
	
	for(int i=0;i<=x-1;i++)
	{
		scanf("%d",&customer[i]);
		
	}
	FILE *fptr;
	fptr=fopen("D:/C,C++/ATM Machine/cus.txt","w+");
	if(fptr==NULL)
	{
		printf("can not open");
		exit(1);
	}
	for(int i=0;i<=x-1;i++)
	{
		fprintf(fptr,"%d\n",customer[i]);
	}
	fclose(fptr);
	printf("so tien ban dau trong tai khoan:");
	scanf("%d",&so_du);
	fflush(stdin);
	cout<<"DANG KI TAI KHOAN NGAN HANG\n";
	cout<<"NHAP TEN DANG NHAP\n";
	getline(cin, ten);
	fflush(stdin);
	cout<<"NHAP MAT KHAU\n";
	getline(cin, mat_khau);
	 ofstream myfile;
    myfile.open ("D:/C,C++/ATM Machine/customer.txt");
    myfile <<ten<<endl;
    myfile<<mat_khau<<endl;
    myfile.close();
//	fflush(stdin);

int option;
printf("do you want continue,enter 0 to stop,another to continue\n");
scanf("%d",&option);
	
	
while(option!=0)
{
	
fflush(stdin);
if(option==0)
return 0;


    int k=0;
	cout << "\t\t\tDANG NHAP TAI KHOAN CUA BAN\n";
	cout << "\nTen nguoi dung: "; getline(cin, TEN);
	cout << "Mat khau: "; getline(cin, MAT_KHAU);;

	if (TEN == ten && MAT_KHAU == mat_khau)
	{
		system("cls");
		cout << "\t\t\tDANG NHAP TAI KHOAN CUA BAN\n\n";
		cout << "Dang kiem tra thong tin...\n";
		Sleep(1000);
		cout << "\nDANG NHAP THANH CONG!\a\a\n\n";
		Sleep(2000);
		system("cls");
		cout << "\t\t\tMOI BAN CHON YEU CAU CAN THUC HIEN\n\n";
		cout << "1: TRA CUU SO DU TAI KHOAN\n";
		cout << "2: RUT TIEN\n";
		cout << "3: CHUYEN TIEN\n";
		cout<<  "4.NAP TIEN\n\n";
		cin >> tuy_chon;
		switch (tuy_chon)
		{
		case 1:
			Sleep(1000);
			system("cls");
			cout << "\t\t\t\tTRA CUU SO DU\n";
			cout << "\nSo du tai khoan hien tai la: " << so_du << " VND\n\n";
			break;
		case 2:
			Sleep(1000);
			system("cls");
			cout << "\t\t\t\tRUT TIEN\n\n";
			cout << "Nhap so tien ban muon rut: ";
			cin >> tien_rut;
			if (tien_rut <= so_du)
			{
				Sleep(1000);
				so_du=so_du-tien_rut;
				cout << "\nBAN DA RUT TIEN THANH CONG, SO DU CON LAI LA: " << so_du << " VND\n\n";
				int a[40];
    a[0]=tien_rut/500;
	a[1]=tien_rut%500;
	a[2]=a[1]/200;
	a[3]=a[1]%200;
	a[4]=a[3]/100;
	a[5]=a[3]%100;
	a[6]=a[5]/50;
	a[7]=a[5]%50;
	a[8]=a[7]/20;
	a[9]=a[7]%20;
	a[10]=a[9]/10;
	a[11]=a[9]%10;
	a[12]=a[11]/5;
	a[13]=a[11]%5;
	a[14]=a[13]/2;
	a[15]=a[13]%2;
	a[16]=a[15]/1;
	a[17]=a[15]%1;
	printf("best combination is: %d unit of 500\n%d unit of 200\n%d unit of 100\n%d unit of 50\n%d unit of 20\n%d unit of 10\n%d unit of 5\n%d unit of 2\n%d unit of 1",a[0],a[2],a[4],a[6],a[8],a[10],a[12],a[14],a[16]);
				Sleep(1000);
			}
			while (tien_rut > so_du)
			{
				cout << "\nSo tien rut phai nho hon hoac bang so du con lai!\n";
				cin >> tien_rut;
				if (tien_rut <= so_du)
				{
					Sleep(1000);
					cout << "\nBAN DA RUT TIEN THANH CONG, SO DU CON LAI LA: " << so_du - tien_rut << " VND\n\n";
					int a[40];
             a[0]=tien_rut/500;
	         a[1]=tien_rut%500;
	         a[2]=a[1]/200;
	         a[3]=a[1]%200;
	         a[4]=a[3]/100;
	         a[5]=a[3]%100;
	         a[6]=a[5]/50;
	         a[7]=a[5]%50;
	         a[8]=a[7]/20;
	         a[9]=a[7]%20;
	         a[10]=a[9]/10;
	         a[11]=a[9]%10;
	         a[12]=a[11]/5;
	         a[13]=a[11]%5;
	         a[14]=a[13]/2;
	         a[15]=a[13]%2;
	         a[16]=a[15]/1;
	         a[17]=a[15]%1;
	printf("best combination is: %d unit of 500\n%d unit of 200\n%d unit of 100\n%d unit of 50\n%d unit of 20\n%d unit of 10\n%d unit of 5\n%d unit of 2\n%d unit of 1",a[0],a[2],a[4],a[6],a[8],a[10],a[12],a[14],a[16]);
					Sleep(1000);
				}
			}
			break;
	
		case 3:
			Sleep(1000);
			system("cls");
			cout << "\t\t\t\tCHUYEN TIEN\n\n";
			cout << "Moi ban nhap 	ID nguoi dung can chuyen tien: ";
			cin >> tai_khoan_can_chuyen;
			
			for(int i=0;i<=x-1;i++){
			
			if(tai_khoan_can_chuyen==customer[i])
			{
			k++;}
			}
			if(k>0)
			{
			
			
			cout << "Moi ban nhap so tien can chuyen: ";
			cin >> tien_rut;
			if (tien_rut <= so_du)
			{
				Sleep(1000);
				so_du=so_du-tien_rut;
				cout << "\nBAN DA CHUYEN THANH CONG "<<tien_rut<<" VND CHO TAI KHOAN "<<tai_khoan_can_chuyen<<" SO DU CON LAI LA: " << so_du << " VND\n\n";
				Sleep(1000);
			}
			else while (tien_rut > so_du)
			{
				cout << "\nSo tien chuyen phai nho hon hoac bang so du con lai!\n";
				cin >> tien_rut;
				if (tien_rut <= so_du)
				{
					Sleep(1000);
					cout << "\nBAN DA CHUYEN THANH CONG " << tien_rut << " VND CHO TAI KHOAN " << tai_khoan_can_chuyen << " SO DU CON LAI LA: " << so_du - tien_rut << " VND\n\n";
					Sleep(1000);
				}
			}
	}
		else while(k==0)
		{
			cout << "\nID khong ton tai , yeu cau nhap ID hop le\n";
						cin >>tai_khoan_can_chuyen ;
						for(int i=0;i<=x-1;i++){
			
			if(tai_khoan_can_chuyen==customer[i])
			{
			k=k+1;}}
			if(k>0)
				{
					Sleep(1000);
					cout << "Moi ban nhap so tien can chuyen: ";
			cin >> tien_rut;
			if (tien_rut <= so_du)
			{
				Sleep(1000);
				so_du=so_du-tien_rut;
				cout << "\nBAN DA CHUYEN THANH CONG "<<tien_rut<<" VND CHO TAI KHOAN "<<tai_khoan_can_chuyen<<" SO DU CON LAI LA: " << so_du << " VND\n\n";
				Sleep(1000);
			}
			else while (tien_rut > so_du)
			{
				cout << "\nSo tien chuyen phai nho hon hoac bang so du con lai!\n";
				cin >> tien_rut;
				if (tien_rut <= so_du)
				{
					Sleep(1000);
					cout << "\nBAN DA CHUYEN THANH CONG " << tien_rut << " VND CHO TAI KHOAN " << tai_khoan_can_chuyen << " SO DU CON LAI LA: " << so_du - tien_rut << " VND\n\n";
					Sleep(1000);
				}
		}
	}
	}
	Sleep(1000);
			break;
		case 4:
			Sleep(1000);
			system("cls");
			cout << "\t\t\t\NAP TIEN\n\n";
			cout << "Nhap so tien ban muon nap: ";
			cin >> tien_nap;
			so_du=so_du+tien_nap;
				Sleep(1000);
				cout << "\nBAN DA NAP TIEN THANH CONG, SO DU MOI LAI LA: " << so_du << " VND\n\n";
				Sleep(1000);
			
			
			
			break;
			
			
	
			
		default:
			Sleep(1000);
			system("cls");
			Sleep(1000);
			cout << "Hien chua co chuc nang nay!\n\n";
			break;
			
			
		}
	} else while (TEN != ten || MAT_KHAU != mat_khau)
		{
			so_lan_nhap_sai++;
			system("cls"); //xoa man hinh console
			cout << "\t\t\tDANG NHAP TAI KHOAN CUA BAN\n\n";
			cout << "Dang kiem tra thong tin...\n";
			Sleep(1000); //dung chuong trinh 1000 mili giay
			cout << "\nBAN DA NHAP SAI TEN NGUOI DUNG HOAC MAT KHAU "<<so_lan_nhap_sai<<" LAN, MOI NHAP LAI!\n\a";
			cout << "\nTen nguoi dung: "; getline(cin,TEN);
			cout << "Mat khau: "; getline(cin,MAT_KHAU);
			if (TEN == ten && MAT_KHAU == mat_khau)
			{
				system("cls");
				cout << "\t\t\tDANG NHAP TAI KHOAN CUA BAN\n\n";
				cout << "Dang kiem tra thong tin...\n";
				Sleep(1000);
				cout << "\nDANG NHAP THANH CONG!\a\a\n\n";
				Sleep(2000);
				system("cls");
				cout << "\t\t\tMOI BAN CHON YEU CAU CAN THUC HIEN\n\n";
				cout << "1: TRA CUU SO DU TAI KHOAN\n";
				cout << "2: RUT TIEN\n";
				cout << "3: DOI MAT KHAU\n";
				cout << "4: CHUYEN TIEN\n\n";
				cin >> tuy_chon;
				switch (tuy_chon)
				{
				case 1:
					Sleep(1000);
					system("cls");
					cout << "\t\t\t\tTRA CUU SO DU\n";
					cout << "\nSo du tai khoan hien tai la: " << so_du << " VND\n\n";
					break;
				case 2:
					Sleep(1000);
					system("cls");
					cout << "\t\t\t\tRUT TIEN\n\n";
					cout << "Nhap so tien ban muon rut: ";
					cin >> tien_rut;
					if (tien_rut <= so_du)
					{
						Sleep(1000);
						cout << "\nBAN DA RUT TIEN THANH CONG, SO DU CON LAI LA: " << so_du - tien_rut << " VND\n\n";
						int a[40];
	a[0]=tien_rut/500;
	a[1]=tien_rut%500;
	a[2]=a[1]/200;
	a[3]=a[1]%200;
	a[4]=a[3]/100;
	a[5]=a[3]%100;
	a[6]=a[5]/50;
	a[7]=a[5]%50;
	a[8]=a[7]/20;
	a[9]=a[7]%20;
	a[10]=a[9]/10;
	a[11]=a[9]%10;
	a[12]=a[11]/5;
	a[13]=a[11]%5;
	a[14]=a[13]/2;
	a[15]=a[13]%2;
	a[16]=a[15]/1;
	a[17]=a[15]%1;
	printf("best combination is: %d unit of 500\n%d unit of 200\n%d unit of 100\n%d unit of 50\n%d unit of 20\n%d unit of 10\n%d unit of 5\n%d unit of 2\n%d unit of 1",a[0],a[2],a[4],a[6],a[8],a[10],a[12],a[14],a[16]);
						Sleep(1000);
					}
					while (tien_rut > so_du)
					{
						cout << "\nSo tien rut phai nho hon hoac bang so du con lai!\n";
						cin >> tien_rut;
						if (tien_rut <= so_du)
						{
							Sleep(1000);
							cout << "\nBAN DA RUT TIEN THANH CONG, SO DU CON LAI LA: " << so_du - tien_rut << " VND\n\n";
							int a[40];
   a[0]=tien_rut/500;
	a[1]=tien_rut%500;
	a[2]=a[1]/200;
	a[3]=a[1]%200;
	a[4]=a[3]/100;
	a[5]=a[3]%100;
	a[6]=a[5]/50;
	a[7]=a[5]%50;
	a[8]=a[7]/20;
	a[9]=a[7]%20;
	a[10]=a[9]/10;
	a[11]=a[9]%10;
	a[12]=a[11]/5;
	a[13]=a[11]%5;
	a[14]=a[13]/2;
	a[15]=a[13]%2;
	a[16]=a[15]/1;
	a[17]=a[15]%1;
	printf("best combination is: %d unit of 500\n%d unit of 200\n%d unit of 100\n%d unit of 50\n%d unit of 20\n%d unit of 10\n%d unit of 5\n%d unit of 2\n%d unit of 1",a[0],a[2],a[4],a[6],a[8],a[10],a[12],a[14],a[16]);
							Sleep(1000);
						}
					}
					break;
				
				case 3:
					Sleep(1000);
					system("cls");
					cout << "\t\t\t\tCHUYEN TIEN\n\n";
					cout << "Moi ban nhap ten nguoi dung can chuyen tien: ";
					cin >> tai_khoan_can_chuyen;
					cout << "Moi ban nhap so tien can chuyen: ";
					cin >> tien_rut;
					if (tien_rut <= so_du)
					{
						Sleep(1000);
						cout << "\nBAN DA CHUYEN THANH CONG " << tien_rut << " VND CHO TAI KHOAN " << tai_khoan_can_chuyen << " SO DU CON LAI LA: " << so_du - tien_rut << " VND\n\n";
						int a[40];
  
						Sleep(1000);
					}
					else while (tien_rut > so_du)
					{
						cout << "\nSo tien chuyen phai nho hon hoac bang so du con lai!\n";
						cin >> tien_rut;
						if (tien_rut <= so_du)
						{
							Sleep(1000);
							cout << "\nBAN DA CHUYEN THANH CONG " << tien_rut << " VND CHO TAI KHOAN " << tai_khoan_can_chuyen << " SO DU CON LAI LA: " << so_du - tien_rut << " VND\n\n";
							int a[40];
    a[0]=tien_rut/500;
	a[1]=tien_rut%500;
	a[2]=a[1]/200;
	a[3]=a[1]%200;
	a[4]=a[3]/100;
	a[5]=a[3]%100;
	a[6]=a[5]/50;
	a[7]=a[5]%50;
	a[8]=a[7]/20;
	a[9]=a[7]%20;
	a[10]=a[9]/10;
	a[11]=a[9]%10;
	
	printf("best combination is: %d unit of 100\n%d unit of 50\n%d unit of 25\n%d unit of 10\n%d unit of 5\n%d unit of 1",a[0],a[2],a[4],a[6],a[8],a[10]);
							Sleep(1000);
						}
					}
					break;
					case 4:
			Sleep(1000);
			system("cls");
			cout << "\t\t\t\NAP TIEN\n\n";
			cout << "Nhap so tien ban muon nap: ";
			cin >> tien_nap;
			so_du=so_du+tien_nap;
				Sleep(1000);
				cout << "\nBAN DA NAP TIEN THANH CONG, SO DU MOI LAI LA: " << so_du << " VND\n\n";
				Sleep(1000);
			
			
			
			break;
				default:
					Sleep(1000);
					system("cls");
					Sleep(1000);
					cout << "Hien chua co chuc nang nay!\n\n";
					break;
				}
			}
		} 

	system("pause");
	fflush(stdin);
		printf("do you want continue,enter 0 to stop\n");
scanf("%d",&option);
fflush(stdin);
	
}
}
