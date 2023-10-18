#include <iostream>
#include <conio.h>
#define M_V 1
#define V_M -1
#define TAB 9
#define ESC 27
using namespace std;
// Ham chieu dai
void chieuDai()
{
	int chon1;
	int mode = 1;
	do
	{
		system("cls"); // Lam moi giao dien
		 if(mode == M_V)
		 {
		 	cout <<"1.Inch -> cm. " << endl;
		 	cout <<"2.Feet -> dm. " << endl;
		 	cout <<"3.Yard -> m. "  << endl;
		 	cout <<"4.Mile -> km. " << endl;
		 }
		 else
		 {
		 	cout <<"1.Cm -> inch." << endl;
		 	cout <<"2.Dm -> feet." << endl;
		 	cout <<"3.M  -> yard. " << endl;
		 	cout <<"4.Km -> mile. " << endl;
		 }
		 const double cm_per_inch = 2.54;
		 const double dm_per_feet = 3.048;
		 const double m_per_yard  = 0.9144;
		 const double km_per_mile = 1.609343;
		 
		 cout <<"Bam ESC thoat chuong trinh." << endl;
		 chon1 =_getch();
		 switch(chon1)
		 {
		 	case '1' : double inch, cm;
		 		if(mode==M_V)
		 		{
		 			cout <<"Nhap don vi inch :";
		 			cin >> inch;
		 			cm = inch*cm_per_inch; // da khai bao truoc do.
		 			cout <<"Don vi cm:" << cm << endl;
				 }
				 else
				 {
				 	cout <<"Nhap don vi cm :";
				 	cin >> cm;
				 	inch = cm/cm_per_inch;
				 	cout <<"Don vi inch:" << inch << endl;
				 }
				 system("pause");
				 break;
				 
			case TAB: mode = - mode;
			break;
			case '2':	double dm, feet;
				if(mode == M_V)
				{
					cout <<"Nhap don vi feet:";
					cin >> feet;
					dm = feet*dm_per_feet;
					cout <<"Don vi dm: "<< dm << endl;
				}
				else
				{
					cout <<"Nhap don vi dm:";
					cin >> dm;
					feet = dm/dm_per_feet;
					cout <<"Don vi feet :" << feet << endl;
				}
				system("pause");
				break;
			case '3': double m, yard;
				if(mode == M_V)
				{
					cout <<"Nhap don vi Yard:";
					cin >> yard;
					m = yard*m_per_yard;
					cout <<"Don vi m: " << m << endl;
				}
				else
				{
					cout<<"Nhap don vi m:";
					cin >> m;
					yard = m/m_per_yard;
					cout <<"Don vi yard :" << yard << endl;
				}
				system("pause");
				break;
			case '4': double km, mile;
				if(mode == M_V)
				{
					cout <<"Nhap don vi mile:";
					cin >> mile;
					km = mile*km_per_mile;
					cout <<"Don vi km :" << km << endl;
		
				}
				else
				{
					cout <<"Nhap don vi km: ";
					cin >> km;
					mile = km/km_per_mile;
					cout <<"Don vi mile :" << mile << endl;
				}
				system("pause");
				break;
				
		  } 
	} while(chon1 != ESC);

}
// Ham khoi luong
void khoiLuong()
{
	int chon2;
	int mode = 1;
	do
	{
		system("cls");
		if(mode == M_V)
		{
			cout <<"Ounce -> gr.			" << endl;
			cout <<"Pound -> kg.			" << endl;
			cout <<"Ton   -> tan.			"<< endl;
		}
		else
		{
			cout <<"Gr -> ounce.			" << endl;
			cout <<"Kg -> pound.			" << endl;
			cout <<"Tan -> ton.				"<< endl;
		}
		const double ou_per_gr = 28.34952;
		const double po_per_kg = 0.45359237;
		const double ton_per_tan = 0.907185;
		
		cout <<"				Bam ESC thoat chuong trinh.			" << endl;
		 chon2 =_getch();
		 switch(chon2)
		 {
		 	case '1' : double ounce, gr;
		 		if(mode==M_V)
		 		{
		 			cout <<"Nhap don vi ounce :";
		 			cin >> ounce;
		 			gr = ounce*ou_per_gr; // da khai bao truoc do.
		 			cout <<"Don vi gr:" << gr << endl;
				 }
				 else
				 {
				 	cout <<"Nhap don vi gr :";
				 	cin >> gr;
				 	ounce = gr/ou_per_gr;
				 	cout <<"Don vi ounce:" << ounce << endl;
				 }
				 system("pause");
				 break;
			case '2': double pound, kg;
				if(mode == M_V)	 
				{
					cout <<"Nhap don vi pound: ";
					cin >> pound;
					kg = pound*po_per_kg;
					cout <<"Don vi kg :" << kg << endl;
				}
				else
				{
					cout <<"Nhap don vi kg :";
					cin >> kg;
					pound = kg/po_per_kg;
					cout <<"Don vi pound :" << pound << endl;
				}
				system("pause");
				break;
			case '3': double ton, tan;
				if(mode == M_V)
				{
					cout <<"Nhap don vi Tan :";
					cin >> tan;
					ton = tan*ton_per_tan;
					cout <<"Don vi Ton :" << ton << endl;
				}
				else
				{
					cout <<"Nhap don vi Ton:";
					cin >> ton;
					tan = ton/ton_per_tan;
					cout <<"Don vi Tan: " << tan << endl;
					
				}
				system("pause");
				break;
			case TAB: mode = - mode;
			break;
		 }
	 } while(chon2 != ESC);
}
// Ham nhiet do
void nhietDo()
{
	int chon3;
	int mode = 1;
	do
	{
		system("cls");
		if(mode == M_V)
		{
			cout <<"1.Fahrenheit (F) -> Celsius (C)" << endl ;
			cout <<"2.Kenvin (K) -> Celsius (C)" << endl;
		 } 
		 else
		 {
		 	cout <<"1.Celsius (C) -> Fahrenheit (F)" << endl;
			cout <<"2.Celsius (C) -> Kenvin (K)" << endl;
		 }
		 cout <<"Bam ESC thoat chuong trinh." << endl;
		 chon3 =_getch();
		 switch(chon3)
		 {
		 	case '1': double f, c;
		 		if(mode == M_V)
		 		{
		 			cout <<"Nhap Fahrenheit (F):" << endl;
		 			cin >> f;
		 			c = (f-32)*5/9;
		 			cout <<"Don vi Celsius (C): " << c << endl;
				 }
				 else
				 {
				 	cout <<"Nhap Celsius (C): " << endl;
				 	cin >> c;
				 	f = (-160/9 - c)/ 5/9;
				 	cout <<"Don vi Fahrenheit (F) :" << f << endl;
				 	
				 }
				 system("pause");
				 break;
			case '2': double k, C;
				if(mode == M_V)
				{
					cout <<"Nhap Kenvin (K):" << endl;
					cin >> k;
					C = k - 273.15;
					cout <<"Don vi Celsius (C):" << C << endl;
				}
				else
				{
					cout <<"Nhap Celsius (C): ";
					cin >> C;
					k = - 273.15 - C;
					cout <<"Don vi Kenvin (K):" << k << endl;
				}
				system("pause");
				break;
			case TAB: mode = - mode;
			break;
		 }
	 } while (chon3 != ESC);
}


int main()
{
	int chon;
	while(true)
	{	
		cout <<"      ---------------------------------------------------------------------------------" << endl; 
		cout <<"                                         MENU CHINH                                    " << endl;
		cout <<"      ---------------------------------------------------------------------------------" << endl; 
		cout <<"                                  1.Doi don vi do chieu dai."   << endl;
		cout <<"                                  2.Doi don vi do khoi luong."  << endl;
		cout <<"                                  3.Doi don vi do nhiet do."    << endl;
		cout <<"                                  4.Out" << endl;
		cout <<"                                   Nhap lua chon cua ban :";
		cin >> chon;
		
		switch(chon)
		{
			case 1:
				chieuDai();
				break;
			case 2:
				khoiLuong();
				break;
			case 3:
				nhietDo();
				break;
			case 4:
				cout <<"Tam biet.";
				return 0;
			default:
				cout <<"Lua chon khong dung." << endl;
				break; 
		}
	}
 } 
