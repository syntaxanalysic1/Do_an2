#include<stdio.h>
#include<iostream>
#include <fstream>
#define n 1000000
#include <iomanip>
using namespace std;
char x[n];
char khkt;
int i=-1;
char dockh();void baoloi();
void START();void START_PHAY();void KB_MAIN();void KB();void X();void KH_PHAY();void TV();void TV_PHAY();void TENTV();void TEN_PHAY();void TEN();void TEN_PHAY();void KH();
void BIEN();void KIEU();void SO();void SN();void D();void S();void S_PHAY(); void LK();void LK_PHAY();void MANG(); void GAN();void LOIGOIHAM();
void B();void HANG(); void MAIN(); void TRA_VE();void CT();void CT_PHAY();void IN();void OUT();void SO_PHAY();void PT();
void STRING();void STR();void LOOP();void HAM();void NMH();void HANG();void DF();void BIEN_();void BIEN__PHAY();void TENTV_PHAY();
void PT_PHAY();void PT_PP();void STRING_PHAY();void BIENKT();void HAM_();void HAM_PHAY();void baoloithieu(char c);void Return();

void BT(); void OP();void OP_PHAY(); 
void TTTG(); void TTTG_PHAY();
void TTG();
void TTTH(); void A(); void GT(); void P_TOAN(); void P_TG(); void P_G();
void TTQH();
void P_SO();
void IF(); void I(); void SW();
void C(); void D(); void Br();

char string_[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','.','0','1','2','3','4','5','6','7','8','9',',','_','&'};
char so[]={'0','1','2','3','4','5','6','7','8','9'};
char tenbien[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','_'};
char tenbien_[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','_'};
string a="";
string b="";
string c="";
string d="";
void checkstring(string y)
{
	for(int j=0;j<y.length();j++)
	{
		if(khkt!=y[j]) baoloi();
		khkt=dockh();
	}
	
}
int e=0;
int main() {
	ifstream file("CT.txt");
	string str;
	string file_contents;
	while (getline(file, str))
	{
	  file_contents += str;
	  file_contents.push_back('\n');
	}  
	file_contents.copy(x,file_contents.size()+1);
	x[file_contents.size()]='\0';
	cout<<x<<endl;
	for(int i=0;i<file_contents.size()+1;i++)
	{
		cout<<i<<":"<<x[i]<<endl;
	}
	cout<<"-------------------------TEST---------------------------------"<<endl;
	khkt=dockh();
	if(khkt!='\0')
	{
	START();
//	//cout<<"KH"<<khkt;
//	if((khkt=='\0'|| khkt=='\n'|| isspace(khkt))) 
	if(e==0)cout<<"ACCEPT"; 
	}
    else baoloi();
	return 0;
	
}
int numlines=1;
char dockh()
{
	if(x[i]=='\n') numlines=numlines+1;
	i++;
	return x[i];
	
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
	cout<<"Error '"<<x[i]<<"' in line :" <<numlines<<endl;
	e++;
	
}
void baoloithieu(char c)
{
	cout<<"Expected '"<<c<<"' in line: "<<numlines-1<<endl;
	e++;
}
void START()
{
	KB_MAIN();	
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
	if(isspace(khkt)) khkt=dockh();
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
			checkstring("float");
			if(isspace(khkt));else baoloi();
		} else if(khkt=='d')
		{
			checkstring("double");
			if(isspace(khkt)); else baoloi();
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
				checkstring("igned");
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
			}else if(khkt=='w')
			{
					SW(); //toan tu
			}else	IN();//scanf	
	
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
			}
		} else if(khkt=='c')
		{
			checkstring("char");
			if(isspace(khkt));else baoloi();
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
		if(khkt=='}') khkt=dockh();else baoloi();
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
		if(isspace(khkt)) khkt=dockh();
		STRING();
		if(isspace(khkt)) SO();
		checkc();
		TV_PHAY();
	}
	
}
void TV_PHAY()
{

	if(khkt=='#'||khkt=='c')
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
//TRA_VE();
a="main";
b="MAIN";
while(isspace(khkt)) khkt=dockh();
if(khkt=='m')
{ 	
	checkstring(a);
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
				Return();
				if(isspace(khkt)) khkt=dockh();
				if(khkt=='}')khkt=dockh();else baoloi();				
				
			}else baoloi();		
		}else  baoloi();
	}else baoloi();
}else baoloi();

}
void TRA_VE()
{
	KIEU();
}
void Return()
{
	if(khkt=='r')
	{
		checkstring("return");
		if(isspace(khkt)){
			khkt=dockh();
			SO();
			if(isspace(khkt))khkt=dockh();
			if(khkt==';')khkt=dockh();else baoloithieu(';');
		}else baoloi();
	}
}
void CT()
{   

if(khkt=='i'||khkt=='f'||khkt=='d'||khkt=='l'||khkt=='s'||khkt=='b'||khkt=='c'||khkt=='u'||khkt=='v')
{
	KH();
}
else if(khkt=='p')
{
	OUT();	
}
	CT_PHAY();
}
void CT_PHAY()
{
	if(isspace(khkt)) khkt=dockh();
if(khkt=='i'||khkt=='p'||khkt=='f'||khkt=='d'||khkt=='l'||khkt=='s'||khkt=='b'||khkt=='c'||khkt=='u'||khkt=='v')
{
	CT();
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
		khkt= dockh(); 
		//checkc();
		if(khkt=='h')
		{
			khkt= dockh();
//			checkc();
			if(khkt=='i')
			{
//				checkc();
				khkt= dockh();
				if(khkt=='l')
				{
//					checkc();
					khkt= dockh();
					if(khkt=='e')
					{
//						khkt=dockh();
						checkc();
						if(khkt=='(')
						{
							checkc();
//							khkt=dockh();
						//	BT();
							if(khkt==')')
							{
								checkc();
//								khkt=dockh();
								if (khkt=='{')
								{
//									CT();
									checkc();
									if(khkt=='}')
									{
//										checkc();
										khkt=dockh();
										if(khkt==';')
										{
											checkc();
//											khkt=dockh();
										}
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
		else baoloi();
	}
	else if(khkt=='d')
	{
		//do while
//		checkc();
		khkt=dockh();
		if(khkt=='o')
		{
			checkc();
//			khkt=dockh();
			if(khkt=='{')
			{
				checkc();
//				khkt=dockh();
				CT();
				if(khkt=='}')
				{
					checkc();
//					khkt=dockh();
					if(khkt=='w')
					{
						khkt= dockh(); 
//						checkc();
						if(khkt=='h')
						{
							khkt= dockh();
//							checkc();
							if(khkt=='i')
							{
//								checkc();
								khkt= dockh();
								if(khkt=='l')
								{
//									checkc();
									khkt= dockh();
									if(khkt=='e')
									{
										khkt=dockh();
//										checkc();
										if(khkt=='(')
										{
//											checkc();
											khkt=dockh();
											BT();
											if(khkt==')')
											{
//												checkc();
												khkt=dockh();
												if(khkt==';')
												{
													checkc();
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
					else baoloi();
				}
				else baoloi();
			}
			else baoloi();
		}
		else baoloi();
	}
	else if(khkt=='f')
	{
		//for: da xong
		khkt=dockh();
		if(khkt=='o')
		{
			khkt=dockh();
			if(khkt=='r')
			{
				khkt=dockh();
				if(khkt=='(')
				{
					khkt=dockh();
//					BIEN();
					if(khkt==';')
					{
						khkt=dockh();
						BT();
						if(khkt==';')
						{
							khkt=dockh();
							OP();
							if(khkt==')')
							{
								khkt=dockh();
								if(khkt==';')
								{
									checkc();
								}
								else if(khkt=='{')
								{
									checkc();
									CT();
									if(khkt=='}')
									{
										checkc();
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
		else baoloi();
	}
}

void BT()
{
	TEN();
	P_SO();
}

void P_SO()
{
	if(khkt=='!'||khkt=='=')
	{
		khkt=dockh();
		if(khkt=='=')
		{
			khkt=dockh();
			TEN();
		}	
	}
	else if(khkt=='<'||khkt=='>')
	{
		khkt=dockh();
		if(khkt=='=')
		{
			khkt=dockh();
			TEN();
		}
		else TEN();
	}
//	else khkt=dockh();
}

void STEP()
{
	if(khkt=='c')
	{
		khkt=dockh();
		if(khkt=='o')
		{
			khkt=dockh();
			if(khkt=='n')
			{
				khkt=dockh();
				if(khkt=='t')
				{
					khkt=dockh();
					if(khkt=='i')
					{
						khkt=dockh();
						if(khkt=='n')
						{
							khkt=dockh();
							if(khkt=='u')
							{
								khkt=dockh();
									if(khkt=='e')
									{
										khkt=dockh();
										if(khkt==';')
										{
											checkc();
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
		else baoloi();
	}
	else if(khkt=='b')
	{
		khkt=dockh();
		if(khkt=='r')
		{
			khkt=dockh();
			if(khkt=='e')
			{
				khkt=dockh();
				if(khkt=='a')
				{
					khkt=dockh();
					if(khkt=='k')
					{
						khkt=dockh();
						if(khkt==';')
						{
							checkc();
						}
						else baoloithieu(';');
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

void OP()
{
	OP_PHAY();
	if(khkt==';')
	{
	//	cout<<"Correct";
		khkt=dockh();
	}
	else baoloithieu(';');
}

void OP_PHAY()
{
	//TOAN TU SIZE
	if(khkt=='s')
	{
		khkt=dockh();
		if(khkt=='i')
		{
			khkt=dockh();
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
							//goi den ham ttkt
							
							} else TEN();
						}else TEN();
					}else TEN();
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
			khkt=dockh();
			if(khkt=='=')
			{
				khkt=dockh();
				TEN();
			}
			else TTTH();
		}
		else if(khkt=='<'||khkt=='>'||khkt=='!')
		{
			TTQH();
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
	}
}

//TOAN TU TANG GIAM 1: FORM ++ | -- TEN;
void TTTG()
{
	TEN();
}

//TOAN TU TANG GIAM 2: FORM TEN ++|--
void TTTG_PHAY()
{
	khkt=dockh();
}


//TOAN TU GAN form TEN +=|-=|*=|/=|%= A
void TTG()
{
	if(khkt=='=')
	{
		khkt=dockh();
		TEN();
	} 
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
			checkc();
		}
		else baoloi();
	}
	else
	{
		TEN(); //STRING
		P_TOAN();	
	}	
}

void P_TOAN()
{
	if(khkt=='+'||khkt=='-'||khkt=='/'||khkt=='%'||khkt=='*')
	{
		khkt=dockh();
		A();	
	}
//	else checkc();			
}


//XEM LAI DOAN NAY
void GT()
{
	TEN();
	//SO();
}

//TOAN TU QUAN HE: VIET LAI
void TTQH()
{
	P_SO();
}

//TOAN TU LL

//CONDITION
void IF()
{
	khkt=dockh();
	if (khkt=='(')
	{
		I();
	}
}

//IF
void I()
{
	
}

//SWITCH
void SW()
{
	checkstring("witch");
	if(isspace(khkt))khkt=dockh();
	if(khkt=='(')
	{
		BT();
	if(khkt==')')
	{
		khkt=dockh();
		C();
		if(khkt=='d') D();
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
					if(khkt=='(')
					{
						khkt=dockh();
						TEN();
						if(khkt==')')
						{
							
						}
					}
				}	
			}
		}
	}	
}

void D()
{
	if(khkt=='d')
	{
		khkt=dockh();
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
						if(khkt=='f')
						{
							khkt=dockh();
							if(khkt=='t')
							{
								checkc();
								if(khkt==':')
								{
									CT();
								}
							}
						}
					}
				}
			}	
		}
	}
}

//Break cua if
void Br()
{
	if(khkt=='b')
	{
		khkt=dockh();
		if(khkt=='r')
		{
			khkt=dockh();
			if(khkt=='e')
			{
				khkt=dockh();
				if(khkt=='a')
				{
					khkt=dockh();
					if(khkt=='k')
					{
						khkt=dockh();
						if(khkt==';')
						{
							checkc();
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
}



