#include <iostream>

using namespace std;
void player2(char *a[8][8]);
void print(char *a[8][8])
{
	cout<<endl;
	cout<<"    Player 2"<<endl;
	for(int x=0;x<8;x++)
    {
    	
        for(int y=0;y<8;y++)
        {
				cout<<"|"<<a[x][y];
		}
		cout<<"|";
		
        cout<<endl;
    }
    cout<<"    Player 1"<<endl;
	
}

void player1(char *a[8][8])
{
	//first turn will be of *
	int count1=0,count2=0;
	
	for(int x=0;x<8;x++)
	{
		for(int y=0;y<8;y++)
		{
			if(a[x][y]=="O")
			{
				count1++;
			}
		}
	}
	if(count1==0)
	{
		cout<<"Player 1 Won!!"<<endl;
		exit(0);
	}
	for(int x=0;x<8;x++)
	{
		for(int y=0;y<8;y++)
		{
			
			if(a[x][y]=="*")
			{
				if(y==0)
				{
				
					if(a[x-1][y+1]=="O")
					{
						if(a[x-1-1][y+1+1]==" \0")
						{
							a[x-1][y+1]=" \0";
							a[x-1-1][y+1+1]="*";
							a[x][y]=" \0";
							count2++;
						}
						else
						{}
					}
					else if(a[x+1][y]=="O")
					{
					if(a[x+1+1][y]==" \0")
					{
						a[x+1][y]=" \0";
						a[x+1+1][y]="*";
						a[x][y]=" \0";
						count2++;
					}
					else
					{}
				}
				else if(a[x+1][y+1]=="O")
				{
					if(a[x+1+1][y+1+1]==" \0")
					{
						a[x+1][y+1]=" \0";
						a[x+1+1][y+1+1]="*";
						a[x][y]=" \0";
						count2++;
					}
					else
					{}
				}
				else
				{}
				
			}
			else if(y==7)
			{
					if(a[x-1][y-1]=="O")
					{
						if(a[x-1-1][y-1-1]==" \0")
						{
						
							a[x-1-1][y-1-1]="*";
							a[x-1][y-1]=" \0";
							a[x][y]=" \0";
							count2++;
						}
						else
						{}
					
					}
				
				else if(a[x+1][y-1]=="O")
				{
					if(a[x+1+1][y-1-1]==" \0")
					{
						a[x+1][y-1]=" \0";
						a[x+1+1][y-1-1]="*";
						a[x][y]=" \0";
						count2++;
					}
					else
					{}
				}
				else
				{}
				
				
				
			}
			
				else if(a[x-1][y-1]=="O"&&y!=0&&y!=7&&y!=1)
				{
					if(a[x-1-1][y-1-1]==" \0")
					{
						
						a[x-1-1][y-1-1]="*";
						a[x-1][y-1]=" \0";
						a[x][y]=" \0";
						count2++;
					}
					else
					{}
					
				}
			
				
				else if(a[x-1][y+1]=="O"&&y!=0&&y!=7&&y!=6)
				{
					if(a[x-1-1][y+1+1]==" \0")
					{
						a[x-1][y+1]=" \0";
						a[x-1-1][y+1+1]="*";
						a[x][y]=" \0";
						count2++;
					}
					else
					{}
				}
				
				else if(a[x+1][y-1]=="O"&&y!=0&&y!=7&&y!=1)
				{
					if(a[x+1+1][y-1-1]==" \0")
					{
						a[x+1][y-1]=" \0";
						a[x+1+1][y-1-1]="*";
						a[x][y]=" \0";
						count2++;
					}
					else
					{}
				}
				else if(a[x+1][y+1]=="O"&&y!=0&&y!=7&&y!=6)
				{
					if(a[x+1+1][y+1+1]==" \0")
					{
						a[x+1][y+1]=" \0";
						a[x+1+1][y+1+1]="*";
						a[x][y]=" \0";
						count2++;
					}
					else
					{}
				}
				else
				{}
				
			}
		}
			
			
	}
     
	if(count2==0)
	{
		int c=0;
		for(int x=0;x<8;x++)
		{
			for(int y=0;y<8;y++)
			{
				if(y==0)
				{
					if(a[x][y]=="*")
					{
						
						if(a[x-1][y+1]==" \0")
						{
							a[x-1][y+1]="*";
							a[x][y]=" \0";
							c++;
						}
					}
				}
				if(y==7)
				{
					if(a[x][y]=="*")
					{

						if(a[x-1][y-1]==" \0")
						{
							a[x-1][y-1]="*";
							a[x][y]=" \0";
							c++;
						}
					}
				}
				if(a[x][y]=="*"&&y!=0&&y!=7)
				{
					if(a[x-1][y-1]==" \0")
					{
						a[x-1][y-1]="*";
						a[x][y]=" \0";
						c++;
						
					}
					
					else if(a[x-1][y+1]==" \0")
					{
						a[x-1][y+1]="*";
						a[x][y]=" \0";
						c++;
					}
				}
				if(c==1)
				{
					break;
				}
				
			}
			if(c==1)
				{
					break;
				}
		}
					
		
	}
	cin.get();
	print(a);
	player2(a);
}
void player2(char *a[8][8])
{
	//first turn will be of *
	int count1=0,count2=0;

	for(int x=0;x<8;x++)
	{
		for(int y=0;y<8;y++)
		{
			if(a[x][y]=="*")
			{
				count1++;
			}
		}
	}
	if(count1==0)
	{
		cout<<"Player 2 Won!!"<<endl;
		exit(0);
	}
	
	for(int x=0;x<8;x++)
	{
		for(int y=0;y<8;y++)
		{
			if(a[x][y]=="O")
			{
				if(y==0)
				{
					if(a[x+1][y+1]=="*")
					{
						if(a[x+1+1][y+1+1]==" \0")
						{
							a[x+1][y+1]=" \0";
					    	a[x+1+1][y+1+1]="O";
					    	a[x][y]=" \0";
					    	count2++;
						}
					}
					else if(a[x-1][y+1]=="*")
					{
						if(a[x-1-1][y+1+1]==" \0")
						{
							a[x-1][y+1]=" \0";
					    	a[x-1-1][y+1+1]="O";
					    	a[x][y]=" \0";
					    	count2++;
						}
					}
					
				}
				else if(y==7)
				{
			
		
				if(a[x+1][y-1]=="*")
				{
					if(a[x+1+1][y-1-1]==" \0")
					{
						a[x+1][y-1]=" \0";
					    a[x+1+1][y-1-1]="O";
					    a[x][y]=" \0";
					    count2++;
					}
				}
				else if(a[x-1][y-1]=="*")
				{
					if(a[x-1-1][y-1-1]==" \0")
					{
						a[x-1][y-1]=" \0";
					    a[x-1-1][y-1-1]="O";
					    a[x][y]=" \0";
					    count2++;
					}
				}
				}
				
				
				
				
				
				
	
				if(a[x+1][y-1]=="*"&&y!=0&&y!=7&&y!=1)
				{
					if(a[x+1+1][y-1-1]==" \0")
					{
						a[x+1][y-1]=" \0";
					    a[x+1+1][y-1-1]="O";
					    a[x][y]=" \0";
					    count2++;
					}
				}
				else if(a[x+1][y+1]=="*"&&y!=0&&y!=7&&y!=6)
				{
					if(a[x+1+1][y+1+1]==" \0")
					{
						a[x+1][y+1]=" \0";
					    a[x+1+1][y+1+1]="O";
					    a[x][y]=" \0";
					    count2++;
					}
				}
				else if(a[x-1][y+1]=="*"&&y!=0&&y!=7)
				{
					if(a[x-1-1][y+1+1]==" \0")
					{
						a[x-1][y+1]=" \0";
					    a[x-1-1][y+1+1]="O";
					    a[x][y]=" \0";
					    count2++;
					}
				}
				else if(a[x-1][y-1]=="*"&&y!=0&&y!=7)
				{
					if(a[x-1-1][y-1-1]==" \0")
					{
						a[x-1][y-1]=" \0";
					    a[x-1-1][y-1-1]="O";
					    a[x][y]=" \0";
					    count2++;
					}
				}
				else{}
			}
		}
	}
	if(count2==0)
	{
		int c=0;
		for(int x=0;x<8;x++)
		{
			for(int y=0;y<8;y++)
			{
				if(a[x][y]=="O")
				{
					if(y==0)
					{
					 	
						if(a[x+1][y+1]==" \0")
						{
							a[x+1][y+1]="O";
							a[x][y]=" \0";
							c++;
						}
					}
					else if(y==7)
					{
						if(a[x+1][y-1]==" \0"&&y!=0&&y!=7)
						{
							a[x+1][y-1]="O";
							a[x][y]=" \0";
							c++;
						}
					
					}
					else if(a[x+1][y-1]==" \0"&&y!=0&&y!=7)
					{
						a[x+1][y-1]="O";
						a[x][y]=" \0";
						c++;
					}
				
					else if(a[x+1][y+1]==" \0"&&y!=0&&y!=7)
					{
						a[x+1][y+1]="O";
						a[x][y]=" \0";
						c++;
					}
					
				}
				if(c==1)
				{
					break;
				}
			}
			if(c==1)
				{
					break;
				}
		}
					
		
	}
	cin.get();
	print(a);
	player1(a);

}

int main()
{
	char *matrix[8][8];
	matrix[0][0]="O";matrix[0][1]=" \0";matrix[0][2]="O";matrix[0][3]=" \0";matrix[0][4]="O";matrix[0][5]=" \0";matrix[0][6]="O";matrix[0][7]=" \0";
	matrix[1][0]=" \0";matrix[1][1]="O";matrix[1][2]=" \0";matrix[1][3]="O";matrix[1][4]=" \0";matrix[1][5]="O";matrix[1][6]=" \0";matrix[1][7]="O";
	matrix[2][0]="O";matrix[2][1]=" \0";matrix[2][2]="O";matrix[2][3]=" \0";matrix[2][4]="O";matrix[2][5]=" \0";matrix[2][6]="O";matrix[2][7]=" \0";
	matrix[3][0]=" \0";matrix[3][1]=" \0";matrix[3][2]=" \0";matrix[3][3]=" \0";matrix[3][4]=" \0";matrix[3][5]=" \0";matrix[3][6]=" \0";matrix[3][7]=" \0";
	matrix[4][0]=" \0";matrix[4][1]=" \0";matrix[4][2]=" \0";matrix[4][3]=" \0";matrix[4][4]=" \0";matrix[4][5]=" \0";matrix[4][6]=" \0";matrix[4][7]=" \0";
	matrix[5][0]=" \0";matrix[5][1]="*";matrix[5][2]=" \0";matrix[5][3]="*";matrix[5][4]=" \0";matrix[5][5]="*";matrix[5][6]=" \0";matrix[5][7]="*";
	matrix[6][0]="*";matrix[6][1]=" \0";matrix[6][2]="*";matrix[6][3]=" \0";matrix[6][4]="*";matrix[6][5]=" \0";matrix[6][6]="*";matrix[6][7]=" \0";
	matrix[7][0]=" \0";matrix[7][1]="*";matrix[7][2]=" \0";matrix[7][3]="*";matrix[7][4]=" \0";matrix[7][5]="*";matrix[7][6]=" \0";matrix[7][7]="*";
	
	print(matrix);
    player1(matrix);
    
    
   

}
