#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<string>


using namespace std;

int main()
{
	char name[30],file[30],*blank=".html";
	char temp[200],ch;
	int num=0,len,i,line=1;
	string str;

	cout<<"Enter Name Of The Database : ";
	gets(name);

	strcpy(file,name);
	strcat(file,blank);
	ofstream fout(file);

	if(!fout)
	{
		cout<<"Error In Making Of A File :";
		exit(1);
	}

	fout<<"<html>";
	fout<<"<blockqoute>";
	fout<<"<center>";

	fout<<"<b><h1><u>"<<"CURRICULAM VITAE"<<"</h1></b></u>";
	fout<<"</center>";

	cout<<"Enter Your Name : ";
	gets(temp);
	strcpy(name,temp);
	fout<<"<br><h2>"<<temp<<"<br>";

	cout<<"Enter Your Address : ";
	gets(temp);

	len=strlen(temp);
	for(i=0;i<len;i++)
	{
		ch=temp[i];
		if(ch==' ')
		{
			num++;
			if(num==3)
			{
				fout<<"<br>";
				num=0;
			}
			fout<<ch;
		}
		fout<<ch;
	}
	
	line=1;
	num=0;
	cout<<"Enter Your Hobbies : ";
	gets(temp);
	fout<<"<br><br><u>Hobbies : </u>"<<temp;

	cout<<"Languages Known : ";
	gets(temp);
	fout<<"<br><br><u>Languages Known : </u>"<<temp;

	cout<<"Enter Your Experience :";
	gets(temp);
	fout<<"<br><br><u>Experience" <<temp<<"  </u>";

	cout<<"Enter Your Contact Number : ";
	gets(temp);
	fout<<"<br>Contact No : "<<temp<<"<br><br><br>";

	cout<<"Enter Your Objective(in one line separated through comma) : ";
	gets(temp);
	fout<<"<u>Objective : </u>";

	len=strlen(temp);
	for(i=0;i<len;i++)
	{
		ch=temp[i];
		if(ch==' ')
		{
			num++;
			if(num==12)
			{
				fout<<"<br>";
				num=0;
			}
			fout<<ch;
		}
		fout<<ch;
	}

	num=0;
	fout<<"<br><br>";
	cout<<"Enter Your Academic Record :";
	fout<<"<u>Academic Record  </u><br>";
	
	gets(temp);
	len=strlen(temp);
		fout<<"<li>";
			for(i=0;i<len;i++)
			{
				ch=temp[i];

				if(ch==' ')
				{
					num++;
					if(num==8)
					{
						fout<<"<br>  ";
						num=0;
					}
					fout<<ch;
				}
				fout<<ch;
			}

	line=1;
	num=0;
	cout<<"Technical Skills  :";
	fout<<"<br><br><u>Technical Skills </u><br>";
	cout<<""<<line<<". ";
	gets(temp);
	len=strlen(temp);
	fout<<"<li>";
	for(i=0;i<len;i++)
	{
		ch=temp[i];

		if(ch==' ')
		{
			num++;
			if(num==8)
			{
				fout<<"<br>  ";
				num=0;
			}
			fout<<ch;
		}
		fout<<ch;
	}
    b:cout<<"In The End Enter Your Personal Details :";

	fout<<"<br><br><u>Personal Details </u><br><br>";

	cout<<"Fathers Name : ";
	gets(temp);
	fout<<"Fathers Name :   "<<temp;

	cout<<"Enter Date Of Birth : ";
	gets(temp);
	fout<<"<br>Date Of Birth :    "<<temp;

	cout<<"Enter Martial Status :";
	gets(temp);
	fout<<"<br>Martial Status :   "<<temp;

	cout<<"Sex :";
	gets(temp);
	fout<<"<br>Sex :&nbsp;        "<<temp;

	cout<<"Permanent Address : ";
	fout<<"<br>Permanent Address : ";
	fout<<"<blockqoute><dl><dd>";
	gets(temp);

	len=strlen(temp);
	for(i=0;i<len;i++)
	{
		ch=temp[i];
		if(ch==' ')
		{
			num++;
			if(num==3)
			{
				fout<<"<dd>";
				num=0;
			}
			fout<<ch;
		}
		fout<<ch;
	}


	fout<<"</dl></blockqoute>";
	fout<<"<hr>";

	fout<<"Date : ";

	fout<<"<br>Place : ";
	fout<<"<h2 align=right>("<<name<<")</h2>";
	fout<<"</blockqoute>";
	fout<<"</html>";
	cout<<"End Of Your CV Press Any Key To Continue : ";
	getch();
	fout.close();
	system(file);
	return 0;


}
