#include<stdio.h>
#include<iostream>
#include <fstream>
#define n 1000000
#include <iomanip>
#include<string>
using namespace std;
char x[n];
char y[n];
char khkt;
int i=-1;
char dockh();void baoloi();void reset();void XoaCMT();void TEST();
void START();void START_PHAY();void KB_MAIN();void KB();void X();void KH_PHAY();void TV();void TV_PHAY();void TENTV();void TEN_PHAY();void TEN();void TEN_PHAY();void KH();
void BIEN();void KIEU();void SO();void SN();void D();void S();void S_PHAY(); void LK();void LK_PHAY();void MANG(); void GAN();void LOIGOIHAM();
void B();void HANG(); void MAIN(); void TRA_VE();void CT();void CT_PHAY();void IN();void OUT();void SO_PHAY();void PT();
void STRING();void STR();void LOOP();void HAM();void NMH();void HANG();void DF();void BIEN_();void BIEN__PHAY();void TENTV_PHAY();
void PT_PHAY();void PT_PP();void STRING_PHAY();void BIENKT();void HAM_();void HAM_PHAY();void baoloithieu(char c);void Return();
void CheckCMT();
void CMT_PHAY();
void BT(); void OP();void OP_PHAY(); void STEP();
void TTTG(); void TTTG_PHAY();
void TTG();
void TTTH(); void A(); void GT(); void P_TOAN(); void P_TG(); void P_G();
void TTLL(); void K();
void P_SO();
void IF(); void I(); void SW();
void C();void C_PHAY(); void D(); void CTC();
bool checkchuthich();
char string_[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','.','0','1','2','3','4','5','6','7','8','9',',','_','&'};
char so[]={'0','1','2','3','4','5','6','7','8','9'};
char tenbien[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','_'};
char tenbien_[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','_'};
string a="";
string b="";
string c="";
string d="";
string strcmt;
void checkstring(string y)
{
	for(int j=0;j<y.length();j++)
	{
		if(khkt!=y[j]) baoloi();
		khkt=dockh();
	}
	
}
int g=0;
int checkstring2(string y)
{
	for(int j=0;j<y.length();j++)
	{
		if(khkt!=y[j]) g=1;
		khkt=dockh();
	}
	
}
int numlines=1;
int e=0;
int cs=0;
int cocmt=0;
int sumlines=1;
int main() {
	int chon;
	do
	{
	
	string str;
	string file_contents;
	int s=1;
	string topicName;
		
		cout<<"\t\t\t=============================MENU============================="<<endl;
		cout<<"\t\t\t|1.Doc chuong trinh C tu file					|"<<endl;
		cout<<"\t\t\t|2.Tu tao chuong trinh C bang tay 				|"<<endl;
		cout<<"\t\t\t|3.Thoat							|"<<endl;
		cout<<"Moi ban chon "<<endl;
		cin>>chon;
		switch(chon)
		{
			case 1:	
			break;
			case 2:
 				getline(cin,topicName);
 				topicName = "notepad \"" + topicName + "\"";
 				system(topicName.c_str());s=2;		
			break;
			case 3: s=0;	break;
			default: cout<<"Ban chon sai. Moi chon lai"<<endl;break;
		}	
		//tao code = tay
	if(s==2)
	{		
			ifstream file("new.txt");
			while (getline(file, str))
	{
	  file_contents += str;
	  file_contents.push_back('\n');
	}  
	file_contents.copy(x,file_contents.size()+1);
	x[file_contents.size()]='\0';
	int nl=0;
	for(int i=0;i<file_contents.size()+1;i++)
	{
		if(x[i]=='\n')nl++;
	}
	
	cout<<"Line\t|\t\tCode";
	for(int k=1;k<nl+1;k++)
	{
		cout<<endl<<k<<"\t|\t\t";
		int s;
		if(k==1)s=0;
		for(int i=s;i<file_contents.size()+1;i++)
		{	
			if(x[i]!='\n') cout<<x[i];
			if(x[i]=='\n'){
				s=i+1;		
				break;
			}
		}
	}
		cout<<endl;
		khkt=dockh();
		cout<<"===============================FIND NOTE========================"<<endl;
		CheckCMT();
		if(cocmt==1)
		{
			cs=1;
			ofstream fout;
			fout.open("Copy.txt");
			cs=1;
		//xoa cmt
		XoaCMT();

		 for(int i=0;i<strcmt.size()+1;i++)
		{	
			fout<<strcmt[i];
			y[i]=strcmt[i];
		}
		//
		cout<<"=====================================FILE DELETED NOTE=============================="<<endl;
		int nl2=0;
		for(int i=0;i<sizeof(y)/sizeof(char);i++)
		{
		if(y[i]=='\n')nl2++;
		}
		cout<<"Line\t|\t\tCode";
		for(int k=1;k<nl2+1;k++)
		{
		cout<<endl<<k<<"\t|\t\t";
		int s;
		if(k==1)s=0;
		for(int i=s;i<sizeof(y)/sizeof(char);i++)
		{	
			if(y[i]!='\n') cout<<y[i];
			if(y[i]=='\n'){
				s=i+1;		
				break;
			}
		}
		}
		cout<<endl;
    // TEST
   		numlines=1;
		i=-1;
	    	TEST();   	     	 
		}
		else
		{
			TEST();
		}
	}
	// doc tu file
	else if(s==1) 
	{		
	ifstream file;
	file.open("CT.txt");
	while (getline(file, str))
	{
	  file_contents += str;
	  file_contents.push_back('\n');
	}  
	file_contents.copy(x,file_contents.size()+1);
	x[file_contents.size()]='\0';
	int nl=0;
	for(int i=0;i<file_contents.size()+1;i++)
	{
		if(x[i]=='\n')nl++;
	}
	
	cout<<"Line\t|\t\tCode";
	for(int k=1;k<nl+1;k++)
	{
		cout<<endl<<k<<"\t|\t\t";
		int s;
		if(k==1)s=0;
		for(int i=s;i<file_contents.size()+1;i++)
		{	
			if(x[i]!='\n') cout<<x[i];
			if(x[i]=='\n'){
				s=i+1;		
				break;
			}
		}
	}
	cout<<endl;
		khkt=dockh();
		cout<<"===============================FIND NOTE========================"<<endl;
		CheckCMT();
		if(cocmt==1)
		{
			ofstream fout;
			fout.open("Copy.txt");
			cs=1;
		//xoa cmt
		XoaCMT();

		 for(int i=0;i<strcmt.size()+1;i++)
		{	
			fout<<strcmt[i];
			y[i]=strcmt[i];
		}
		int sy=strcmt.size()+1;
		//
		cout<<"=====================================FILE DELETED NOTE=============================="<<endl;
		int nl2=0;
		for(int i=0;i<sizeof(y)/sizeof(char);i++)
		{
		if(y[i]=='\n')nl2++;
		}
		cout<<"Line\t|\t\tCode";
		for(int k=1;k<nl2+1;k++)
		{
		cout<<endl<<k<<"\t|\t\t";
		int s;
		if(k==1)s=0;
		for(int i=s;i<sizeof(y)/sizeof(char);i++)
		{	
			if(y[i]!='\n') cout<<y[i];
			if(y[i]=='\n'){
				s=i+1;		
				break;
			}
		}
		}
		cout<<endl;
    // TEST
   		numlines=1;
		i=-1;
	    	TEST();   	     	 
		}
		else
		{
			TEST();
		}
	}
	reset();
	}while(chon!=3);
	return 0;
	
}
void TEST()
{
		
	cout<<"-------------------------TEST---------------------------------"<<endl;
	khkt=dockh();
	if(khkt!='\0')
	{
	START();	
	if(e==0)cout<<"ACCEPT"; 
	}
    else baoloi();
}
void reset()
{
	 e=0;
	cs=0;
	cocmt=0;
	numlines=1;
	i=-1;
}
char dockh()
{
	// if file copy thi y[i] else x[i] ; file copy :case 2.
	if(cs==0)
	{
		if(x[i]=='\n') numlines=numlines+1;
		i++;
		return x[i];
	}else if(cs==1)
	{
		if(y[i]=='\n') numlines=numlines+1;
		i++;
		return y[i];
	}
	
	 
			
	
}
void skipblank()
{
	while(isspace(khkt)!=0){
		khkt=dockh();
	}

}
void checkc()
{
	khkt=dockh();skipblank();
}
void baoloi()
{
	if(cs==0)
	{
	cout<<"Error '"<<x[i]<<"' in line :" <<numlines<<endl;
	e++;	
	}else if(cs==1)
	{
		cout<<"Error '"<<y[i]<<"' in line :" <<numlines<<endl;
	e++;
	}
		
}
void baoloithieu(char c)
{
	cout<<"Expected '"<<c<<"' in line: "<<numlines<<endl;
	e++;
}
// tim va thay the

void XoaCMT()
{
	string k=string(x);
	strcmt=k;
	int vt2=0;
	int vt3=0;
	if(strcmt.find("/*")!=-1)
	{
		while(vt2!=-1)
		{
			vt2= strcmt.find("/*");
			vt3=strcmt.find("*/");
			string tt="";
			if(vt2==-1&&vt3==-1)break;
			else if(vt2!=-1&&vt3!=-1)
				for(int f=vt2;f<vt3+2;f++)
				{
					tt+=strcmt[f];
				}
			else if(vt2!=-1&&vt3==-1)
			{
				for(int f=vt2;f<sumlines;f++)
				{
					tt+=strcmt[f];
				}
			}
			strcmt.replace(vt2,tt.length(),"\n");		
		}
	}
		
	int vt=0;
	while(vt!=-1){
		
	vt=strcmt.find("//");
	string tt="";
	if(vt==-1)break;
	for(int f=vt;f<strcmt.length();f++)
	{
		if(strcmt[f]=='\n')
		{
			break;
		 } 
		tt+=strcmt[f];
		
	}
	strcmt.erase(vt,tt.length());
	}
	
}
void CheckCMT()
{

	while(khkt!='\0')
	{
		if(khkt=='/')
		{
			khkt=dockh();
			if(khkt=='/') 
			{
				cocmt=1;
				cout<<"Note in line: "<<numlines<<endl;
			}
			else if (khkt=='*') //
			{
				cocmt=1;
				CMT_PHAY();	
			}	
		}	
			
		checkc();
	}
	sumlines=i;
	cout<<sumlines;
}

void CMT_PHAY()
{
	khkt=dockh();//thay lai bang ham doc qua cmt :>>
	if(khkt=='*')
	{
		khkt=dockh();
		if(khkt=='/') 
		{
			
			cout<<"Note in line: "<<numlines<<endl;
			checkc();
		}
		else 
		{			
			if(khkt=='\n') 
			{
				
				cout<<"Note in line: "<<numlines<<endl;
			}
			CMT_PHAY();
		}
		
	}
	else if(khkt!='\0')
		{
			if(khkt=='\n') 
			{
				//cocmt=1;
				cout<<"Note in line: "<<numlines<<endl;	
			}
			CMT_PHAY();
		}
}

void START()
{
	while(isspace(khkt))khkt=dockh();
	KB_MAIN();
	while(isspace(khkt))khkt=dockh();	
	START_PHAY();	
}
//HAM
void START_PHAY()
{
	HAM_();
	HAM_PHAY();
}
void HAM_()
{
	while(isspace(khkt))khkt=dockh();
	KIEU();
	if(isspace(khkt)){
		khkt=dockh();
		TEN();
		if(khkt=='(')
		{ 	
			STRING();
			if(khkt==')')khkt=dockh();else baoloi();
			if(isspace(khkt))khkt=dockh();
			if(khkt=='{')khkt=dockh();
			while(isspace(khkt))khkt=dockh();
			CT(); 
			while(isspace(khkt))khkt=dockh();
	   		if(khkt=='}') khkt=dockh(); else baoloithieu('}');
	   		HAM_PHAY();
	}else baoloi();
	}
	
	
}
//lap ham
void HAM_PHAY()
{
	if(isspace(khkt)) khkt=dockh();
	if(khkt=='i'||khkt=='f'||khkt=='d'||khkt=='l'||khkt=='s'||khkt=='b'||khkt=='c'||khkt=='u'||khkt=='v')
	{
		START_PHAY();
	}
}
void KB_MAIN()
{
	KB();
	MAIN();
}
void KB()
{
	TV();
	while(isspace(khkt))khkt=dockh();
	KH();
}
void KH()
{
	X();
	KH_PHAY(); //lap bien
}
void X()
{	
	BIEN();
}
void KH_PHAY()
{
	while(isspace(khkt)) khkt=dockh();
	if(khkt=='i'||khkt=='f'||khkt=='d'||khkt=='l'||khkt=='s'||khkt=='b'||khkt=='c'||khkt=='u'||khkt=='v')
	{
		KH();
	}
}
void BIEN(){
	BIEN_();	
}
void BIEN_()
{	
	KIEU();	 //kieu 
	BIEN__PHAY(); // dang khai bao: bien,mang,...

}
//kieu bien
void KIEU()
{	
		while(isspace(khkt))khkt=dockh();
		if(khkt=='i')
		{
			khkt=dockh();
			if(khkt=='n')
			{
				checkstring("nt");
				if(isspace(khkt));else baoloi();
			}else if(khkt=='f')
			{
				IF();//if
			}
			
		}else if(khkt=='f')
		{
			khkt=dockh();
			if(khkt=='l')
			{
				checkstring("loat");
			if(isspace(khkt));else baoloi();	
			}else if(khkt=='o')
			{
				LOOP();//for
			}
			
		} else if(khkt=='d')
		{
			khkt=dockh();
			if(khkt=='o')
			{
				khkt=dockh();
				if(khkt=='u')
				{
					checkstring("uble");//double
				if(isspace(khkt)); else baoloi();
				}else {
					
					if(isspace(khkt))khkt=dockh();
					if(khkt=='{')
					{
						LOOP();//do while
					}
				}
			}else if(khkt=='e')
			{
				
			}
			
		}
		else if(khkt=='l')
		{
			checkstring("long");
			if(isspace(khkt));else baoloi();
			khkt=dockh();
			if(khkt=='l')
			{
				checkstring("long");
				if(isspace(khkt));else baoloi();
			}
		}
		else if(khkt=='s')
		{
			khkt=dockh();
			if(khkt=='h')
			{
			checkstring("hort");
			if(isspace(khkt));else baoloi();
			}else if(khkt=='i')
			{	
				khkt=dockh();
				if(khkt=='z')//sizeof
				{
					OP_PHAY();
				}else if(khkt=='g')//signed
				{
					checkstring("gned");
					if(isspace(khkt));else baoloi();
					khkt=dockh();
					if(khkt=='c')
				{
					checkstring("char");
					if(isspace(khkt));else baoloi();
				}else if(khkt=='i')
				{
					checkstring("int");
				if(isspace(khkt));else baoloi();
				}
				}
				
			}else if(khkt=='w')
			{
					SW(); //switch case
			}else if(khkt=='c')	IN();//scanf	
	
		}else if(khkt=='b')
		{
			khkt=dockh();
			if(khkt=='y')
			{
				checkstring("yte");
			if(isspace(khkt));else baoloi();
			}else if(khkt=='o')
			{
				checkstring("ool");
				if(isspace(khkt));else baoloi();
			}else if(khkt=='r')
			{
				//break
				STEP();
			}
		} else if(khkt=='c')
		{
			khkt=dockh();
			if(khkt=='h')
			{
				checkstring("har");
			if(isspace(khkt));else baoloi();
			}else if(khkt=='o')
			{
				//continue;
				STEP();
			}
			
		}else if(khkt=='u')
		{	
			checkstring("unsigned");
			if(isspace(khkt));else baoloi();
			khkt=dockh();
			if(khkt=='c')
			{
				checkstring("char");
				if(isspace(khkt));else baoloi();
			}else if(khkt=='i')
			{
				checkstring("int");
			if(isspace(khkt));else baoloi();
			}
		}else if(khkt=='v')
		{
			checkstring("void");
			if(isspace(khkt));else baoloi();
		}

}
void BIEN__PHAY()
{
	MANG();
}
void MANG(){

	if(khkt==' ')
	{		
	    khkt=dockh();	
		TEN();
		if(isspace(khkt))khkt=dockh();//neu blank thi nhay tiep				
		if(khkt=='[')
		{
		
			khkt=dockh();
			SO();
			
			if(khkt==']')
			{
				khkt=dockh();
				if(khkt==';') ;		
				GAN();// sau do nhay toi ;
				
			}else baoloi();
		}else if(khkt!='['){							
			if(khkt==';')khkt=dockh();			
			else if(khkt==',')
			{
				LK();// sau khi doc xong liet ke, khkt=;
				if(khkt==';') khkt = dockh();else baoloithieu(';');
	
			}else if (khkt=='(')// nguyen mau ham
			{				
				NMH();
				
			}else if(khkt=='=') // gan bien = loi goi ham
			{		
				STRING();// sau khi test STRING la nhay toi ;
				if(khkt=='(') STRING();
				if(khkt==')') khkt=dockh();
				if(khkt==';') khkt = dockh();else baoloithieu(';');
			
			}else baoloithieu(';');
		}
	} 
}
void NMH()
{
	STRING();
	while(isspace(khkt))khkt=dockh();
	if(khkt==')') khkt=dockh();
	while(isspace(khkt))khkt=dockh();
	if(khkt==';') khkt = dockh();
	else if(khkt=='{')
	{
		HAM();
	}else baoloithieu(';');	
}
void HAM()
{
		STRING();
		while(isspace(khkt))khkt=dockh();
		CT();
		while(isspace(khkt))khkt=dockh();
		if(khkt=='}') khkt=dockh();else baoloithieu('}');
}
void LK()
{
	TEN();	
	// sau khi doc xong ten thi da khkt=dockh();
	B();
}
void B()
{
	
	if(khkt==',')
	{		
		khkt=dockh();	
		LK();
	}
}
void GAN()
{
	if(khkt=='=')
	{
		khkt=dockh();
		if(khkt=='{')
		{
			khkt=dockh();
		
			PT();	
			//chay toi }							
			if(khkt=='}')
			khkt=dockh();else baoloi();			
			if(khkt==';') khkt = dockh();else baoloithieu(';');// thieu ;
		}
	}
}
void PT()
{
	PT_PHAY();
	PT_PP();
	
}
void PT_PHAY()
{	
	STRING();
	//sau khi doc ten xong la toi khi hieu ,
}
void PT_PP()
{
	if(khkt==',')
	{
		khkt=dockh();
		PT();
	}

}
void TEN()
{ 
	
	bool check=false;
	for(int k=0;k<sizeof(tenbien)/sizeof(char);k++)
	{	
		if(khkt==tenbien[k])
		{
			check=true;
			break;
		}	
	}
	if(check){
	khkt=dockh();
	TEN_PHAY();		
	}
	

}

void TEN_PHAY()
{
	bool check=false;
	for(int k=0;k<sizeof(tenbien_)/sizeof(char);k++)
	{
		if(khkt==tenbien_[k]){	
			check=true;
			break;
		}
	}
	if(check)
	{
		khkt=dockh();
		TEN_PHAY();
	}
	
}

void STRING()
{
	khkt=dockh();
	bool r=false;
	for(int h=0;h<sizeof(string_)/sizeof(char);h++)
	{
		if(khkt==string_[h]) r=true;
		
	}	
	if(r) STRING_PHAY();
}
void STRING_PHAY()
{
	STRING();
}
void SO()
{
	khkt=dockh();
	bool r=false;
	for(int h=0;h<sizeof(so)/sizeof(char);h++)
	{
		if(khkt==so[h]) r=true;
	}
	
	if(r) SO_PHAY();
}
void SO_PHAY(){
	SO();
}
void TV()
{	
	if(khkt=='#')
	{
	
		khkt=dockh();
		a="include";
		c="define";
		if(khkt=='i')
		{
			checkstring(a);
			if(isspace(khkt)) khkt=dockh(); // gap ki tu trang thi doc tiep
			if(khkt=='<'|| khkt=='"')
			{
				TENTV();								
				if(khkt=='"'|| khkt=='>')
				{					
					checkc();
					TV_PHAY();	
				// sau TV_PHAY la nhay qua ki tu trang, toi main						
				} else baoloi();
			} else baoloi();
		}
		else if(khkt=='d')
		{			
			checkstring(c);
			if(isspace(khkt)) 
			{
				khkt=dockh();// define n 10000
				TEN();								
				if(isspace(khkt)) SO();	else baoloi();
				checkc();
				TV_PHAY();
			
				
			}else baoloi();
		}
	} else if(khkt=='c')
	{
		checkstring("const");
		if(isspace(khkt)) khkt=dockh();else baoloi();
		STRING();
		if(isspace(khkt)) SO();else baoloi();
		checkc();
		TV_PHAY();
	}
	else if(khkt=='t')
	{
		
		checkstring("typedef");
		if(isspace(khkt)) khkt=dockh();else baoloi();
		STRING();
		if(isspace(khkt)) khkt=dockh();else baoloi();
		STRING();
		if(khkt==';')khkt=dockh();else baoloithieu(';');
		checkc();
		TV_PHAY();
	}
}
void TV_PHAY()
{

	if(khkt=='#'||khkt=='c'||khkt=='t')
	{
		TV();
	}
}
void TENTV()
{
	khkt=dockh();
	bool r=false;
	for(int h=0;h<sizeof(string_)/sizeof(char);h++)
	{
		if(string_[h]==khkt) r=true;
	}
	if(r) TENTV_PHAY();

}
void TENTV_PHAY()
{
	TENTV();
}
//loi goi ham
void LOIGOIHAM()
{
	STRING();
	if(khkt=='(')
	{
		STRING();
		while(isspace(khkt))khkt=dockh();
		if(khkt==')') khkt=dockh();else baoloithieu(')');
		while(isspace(khkt))khkt=dockh();
		if(khkt==';') khkt = dockh();else baoloithieu(';');
	}else baoloithieu('(');

}
void MAIN()
{

while(isspace(khkt)) khkt=dockh();
if(khkt=='m')
{ 	
	checkstring("main");while(isspace(khkt)) khkt=dockh();
	if(khkt=='(')
	{
		khkt=dockh();
		
		if(khkt==')')
		{
			khkt=dockh();			
			skipblank();
			
			if(khkt=='{')
			{
				checkc();
				CT();
				if(isspace(khkt)) khkt=dockh();
				if(khkt=='}')khkt=dockh();else baoloithieu('}');				
				
			}else baoloithieu('{');		
		}else  baoloithieu(')');
	}else baoloithieu('(');
}else {
	cout<<"Expect main in line  "<<numlines<<endl;
	e++;
}


}
void TRA_VE()
{
	KIEU();
}
void Return()
{

		if(isspace(khkt)){
			khkt=dockh();
			SO();
			if(isspace(khkt))khkt=dockh();
		
			if(khkt==';')khkt=dockh();else baoloithieu(';');
		}else baoloi();
	
}
void CT()
{   

if(khkt=='i'||khkt=='f'||khkt=='d'||khkt=='l'||khkt=='s'||khkt=='b'||khkt=='c'||khkt=='u'||khkt=='v')
{
	KH();
	CT_PHAY();
}
else if(khkt=='p')
{
	OUT();	
	CT_PHAY();
}else if(khkt=='w')
{
	LOOP();//while
	CT_PHAY();
}
else if(khkt=='r')
{
	if(checkstring2("return")==0) Return();
}
else 
{
	OP();
	CT_PHAY();	
}
	
}
void CT_PHAY()
{
	if(isspace(khkt)==0)
{
	CT();
}	else 
{
	checkc();
}
}

//Part 2


void IN()
{
	//scanf
	checkstring("canf");
	if(isspace(khkt)) khkt=dockh();
	if(khkt=='(')
	{
		khkt=dockh();
		if(khkt=='"')
		{
			STRING();
			if(khkt=='"')khkt=dockh();
			if(khkt==')')khkt=dockh();else baoloithieu(')');
			if(khkt==';')khkt=dockh();else baoloithieu(';');
		}
	}else baoloithieu(')');
}

void OUT()
{
	if(khkt=='p')
	{
		khkt= dockh();
		if(khkt=='r')
		{
			khkt= dockh();
			if(khkt=='i')
			{
				khkt= dockh();
				if(khkt=='n')
				{
					khkt=dockh();
					if(khkt=='t')
					{
						khkt=dockh();
						if(khkt=='f')
						{
							checkc();
							if(khkt=='(')
							{
								khkt=dockh();
								if (khkt=='"')
								{
									STRING();
									if(khkt=='"')
									{
										khkt=dockh();
										if(khkt==')') 
										{
											khkt=dockh();
											if(khkt==';') khkt=dockh();
											else baoloithieu(';');
										}
										else baoloithieu(')');
									}
									else baoloithieu('"');
								}
								else baoloithieu('"');
							}
							else baoloi();
						}
						else baoloi();
					}
					else baoloi();
				}
				else baoloi();
			}
			else baoloi();
		}
		else baoloi();
	}
	else baoloi();
	
}

//vong lap
//kiem tra lai toan bo tu
void LOOP()
{
	//while
	if(khkt=='w')
	{
		checkstring("while");
		if(khkt=='(')
		{
			khkt=dockh();
			BT();// qua BT khkt=)
			if(khkt==')')khkt=dockh();else baoloithieu(')');
			if(isspace(khkt))khkt=dockh();
			if(khkt=='{'){
				khkt=dockh();
				while(isspace(khkt))khkt=dockh();		
				CT();
				if(isspace(khkt))khkt=dockh();
				if(khkt=='}')khkt=dockh();else baoloithieu('}');
			}else baoloithieu('{');
		}else baoloithieu('(');
	}
	else if(khkt=='{')
	{
		//do while
		khkt=dockh();
		while(isspace(khkt))khkt=dockh();
		CT();
		while(isspace(khkt))khkt=dockh();
			if(khkt=='}')
			{
				khkt=dockh();
				if(isspace(khkt))khkt=dockh();
				if(khkt=='w')
				{
					checkstring("while");
					if(isspace(khkt))khkt=dockh();
					if(khkt=='(')
					{
						khkt=dockh();
						BT();
						if(khkt==')')khkt=dockh();else baoloithieu(')');
						if(khkt==';')khkt=dockh();else baoloithieu(';');
						
					}else baoloithieu('(');
				}else baoloi();
			}else baoloithieu('}');
	}
	else if(khkt=='o')
	{
		
		khkt=dockh();
			if(khkt=='r')
			{
				khkt=dockh();
				if(khkt=='(')
				{
					khkt=dockh();
					BIEN();
						BT();
						if(khkt==';')
						{
							khkt=dockh();
							OP_PHAY();
							if(isspace(khkt))khkt=dockh();
							if(khkt==')')
							{
								khkt=dockh();
								if(isspace(khkt))khkt=dockh();
								if(khkt=='{')
								{
									checkc();
									CT();
									if(khkt=='}')
									{
										checkc();
									}
									else baoloi();
								}
								else if(khkt==';')khkt=dockh();else if(isspace(khkt))khkt=dockh();
								else baoloi();
							}
							else baoloi();
						}
						else baoloi();
					}
					else baoloi();
				}
				else baoloi();
	}
}
void BT()
{
	if(khkt=='(')
	{
		STRING();
		P_SO();
		if(khkt==')') khkt=dockh();
	}
	else
	{
		STRING();
		P_SO();	
	}
}

void P_SO()
{
	if(khkt=='!'||khkt=='=')
	{
		khkt=dockh();
		if(khkt=='=')
		{
			khkt=dockh();
			STRING();
		}	
	}
	else if(khkt=='<'||khkt=='>')
	{
		khkt=dockh();
		if(khkt=='=')
		{
			khkt=dockh();
			STRING();
		}
		else STRING(); 
	}
//	else khkt=dockh();
}

void STEP()
{
	
	//continue
	if(khkt=='o')
	{
		checkstring("ontinue");
		if(isspace(khkt))khkt=dockh();
		if(khkt==';')khkt=dockh();else baoloithieu(';');
	}
	else if(khkt=='r')
	{
		//break
		checkstring("reak");
		if(isspace(khkt))khkt=dockh();
		if(khkt==';')checkc();else baoloithieu(';');
	}
}

void OP()
{
	OP_PHAY();
//	if(khkt==';')
//	{
//		cout<<"Correct";
//		khkt=dockh();
//	}
//	else baoloithieu(';');
}

void OP_PHAY()
{	
	//TOAN TU SIZEof
			if(khkt=='z')
			{
				khkt=dockh();
				if(khkt=='e')
				{
					khkt=dockh();
					if(khkt=='o')
					{
						khkt=dockh();
						if(khkt=='f')
						{
							khkt=dockh();
							if(khkt=='(')
							{
							STRING();
							if(khkt==')')khkt=dockh();else baoloi();
							if(khkt==';')
							{
								checkc();
							}else baoloithieu(';');
							} else TEN();
						}else TEN();
					}else TEN();
				}else TEN();

	} 	
	//toan tu tang giam voi mau ++TEN va --TEN
	else if(khkt=='+')
	{
		khkt=dockh();
		if(khkt=='+')
		{
			khkt=dockh();
			TTTG();
		} 
		else baoloithieu('+');	
	}	
	else if(khkt=='-')
	{
		khkt=dockh();
		if(khkt=='-')
		{
			khkt=dockh();
			TTTG();
		}
		else baoloithieu('-');
	}
	
	else
	{
		TEN();
		//TOAN TU TOAN HOC: form : TEN=A
		if(khkt=='=')
		{
			//TTLL
			khkt=dockh();
			if(khkt=='=')
			{
				TTLL();
			}
			else TTTH();
		}		
		else if(khkt=='+')
		{
			khkt=dockh();
			if(khkt=='+')//TOAN TU TANG GIAM form TEN++|--
			{
				TTTG_PHAY();
			}
			else if(khkt=='=')//TOAN TU GAN form TEN +=|-=|*=|/=|%= A
			{
				TTG();
			}
			else baoloi();
		}
		else if(khkt=='-')
		{
			khkt=dockh();
			if(khkt=='-')//TOAN TU TANG GIAM form TEN++|--
			{
				TTTG_PHAY();
			}
			else if(khkt=='=')//TOAN TU GAN form TEN +=|-=|*=|/=|%= A
			{
				TTG();
			}
			else baoloi();
		}
		
		else if(khkt=='*'||khkt=='%'||khkt=='/')//TOAN TU GAN form TEN +=|-=|*=|/=|%= A
		{
			khkt=dockh();
			TTG();
		}
		else if(khkt=='!')
		{
			//TTLL
			khkt=dockh();
			if(khkt=='=')
			{
				TTLL();
			}
			//TTLL
			else
			{
				GT();
			}
		}	
		else if(khkt=='<'||khkt=='>')
		{
			TTLL();
		}
		else if(khkt=='(')
		{
			STRING();
			while(isspace(khkt))khkt=dockh();
			if(khkt==')') khkt=dockh();else baoloithieu(')');
			while(isspace(khkt))khkt=dockh();
			if(khkt==';') khkt = dockh();else baoloithieu(';');
		}
	}
}

//TOAN TU TANG GIAM 1: FORM ++ | -- TEN;
void TTTG()
{
	TEN();
	if(khkt==';') checkc();
	else baoloithieu(';');
}

//TOAN TU TANG GIAM 2: FORM TEN ++|--
void TTTG_PHAY()
{
	khkt=dockh();
	if(khkt==';') checkc();
	else baoloithieu(';');
}


//TOAN TU GAN form TEN +=|-=|*=|/=|%= A
void TTG()
{
	A();
}

//TOAN TU TOAN HOC
void TTTH()
{
	A();
}

void A()
{
	if(khkt=='(')
	{
		GT();
		P_TOAN();
		if(khkt==')')
		{
			P_TOAN();
			if(khkt==';') checkc();else baoloithieu(';');
			
		}
		else baoloithieu(')');
	}
	else
	{
		STRING();//TEN(); //S
		P_TOAN();
		if(khkt==';') 
		{
			checkc();
		}
		else baoloithieu(';');	
	}	
}

void P_TOAN()
{
	if(khkt=='+'||khkt=='-'||khkt=='/'||khkt=='%'||khkt=='*')
	{
		A();	
	}		
}


//XEM LAI DOAN NAY
void GT()
{
	STRING();
}

//TOAN TU LL
void TTLL()
{
	if(khkt=='<'||khkt=='>')
	{
		P_SO();
	}
	else if(khkt=='=')
	{
		TEN();
	}
	else if(khkt=='(')
	{
		khkt=dockh();
		BT();
		if(khkt==')')
		{
			checkc();
		}	
	}
	else
	{
		BT();
	}
	K();
}

void K()
{
	if(khkt=='&')
	{
		khkt=dockh();
		if(khkt=='&')
		{
			khkt=dockh();
			TTLL();
		}else baoloi();
	}
	else if(khkt=='|')
	{
		khkt=dockh();
		if(khkt=='|')
		{
			khkt=dockh();
			TTLL();
		}else baoloi();
	}
	
}

//CONDITION
void IF()
{
			khkt=dockh();
			if(khkt=='(')
			{
				khkt=dockh();
				I();
			}
			else baoloithieu('(');
}

//IF
void I()
{
	TTLL();
	if(khkt==')')
	{
		checkc();
		if(khkt=='{')
		{
			checkc();
			CT();
			if(khkt=='}')
			{
				if(khkt=='e')
				{
					khkt=dockh();
					if(khkt=='l')
					{
						khkt=dockh();
						if(khkt=='s')
						{
							khkt=dockh();
							if(khkt=='e')
							{
								checkc();
								if(khkt=='{')
								{
									checkc();
									CT();
									if(khkt=='}')
									{
										
									}else baoloi();//thieu ngoac
								}
								else 
								{
									CT();
								}
							} 
						}
					}
				}
			}else baoloi();
		}else CT();	
	}else baoloi();//thieu )
}

//SWITCH
void SW()
{
	checkstring("witch");
	if(isspace(khkt))khkt=dockh();
	if(khkt=='(')
	{
		khkt=dockh();
		BT();
		if(khkt==')')
		{
			checkc();
			if(khkt=='{')
			{
				checkc();
				C();
				if(khkt=='e')
				{
					D();
					
				} 
				//checkc();
				if(khkt=='}')
				{
					checkc();
				}else baoloithieu('}');			
			}else baoloithieu('{');
		
		}
	}
}

//Case
void C()
{
	if(khkt=='c')
	{
		khkt=dockh();
		if(khkt=='a')
		{
			khkt=dockh();
			if(khkt=='s')
			{
				khkt=dockh();
				if(khkt=='e')
				{
					khkt=dockh();
					C_PHAY();
				}
			}
		}	
	}
}

void C_PHAY()
{
	if(khkt=='(')
	{
		STRING();
		if(khkt==')')
		{
			khkt=dockh();
			if(khkt==':')
			{
				checkc();
				if(khkt=='c')
				{
					khkt=dockh();
					if(khkt=='a')
					{
						khkt=dockh();
						if(khkt=='s')
						{
							khkt=dockh();
							if(khkt=='e')
							{
								khkt=dockh();
								C_PHAY();
							}else CTC();
						}else CTC();
					}else CTC();
				}else CTC();
			}else baoloithieu(':');
		}else baoloithieu(')');//thieu )
	}
	else
	{
		STRING();
		if(khkt==':')
		{
			
			checkc();
			if(khkt=='c')
			{
				khkt=dockh();
				if(khkt=='a')
				{
					khkt=dockh();
					if(khkt=='s')
					{
						khkt=dockh();
						if(khkt=='e')
						{
							khkt=dockh();
							C_PHAY();
						}else CTC();
					}else CTC();
				}else CTC();
			}else CTC();
		}else baoloithieu(':');
	}
}	

void CTC()
{
	CT();
	C();
}

//DEFAULT
void D()
{
	if(khkt=='e')
		{
			khkt=dockh();
			if(khkt=='f')
			{
				khkt=dockh();
				if(khkt=='a')
				{
					khkt=dockh();
					if(khkt=='u')
					{
						khkt=dockh();
						if(khkt=='l')
						{
							khkt=dockh();
							if(khkt=='t')
							{
								checkc();
								if(khkt==':')
								{
									khkt=dockh();
									STRING();
									if(khkt==';')
									{
										checkc();
									}else baoloithieu(';'); //thieu ;
								}else baoloi();
							}else baoloi();
						}else baoloi();
					}else baoloi();
				}else baoloi();
			}	else baoloi();
		}else baoloi();
	}

