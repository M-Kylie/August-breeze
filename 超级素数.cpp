#include<iostream>
int main()
{
	int a,b,c;
	int k=0,sum=0,max=2;
	for(int i=100;i<1000;i++)
	{
		int f=1;
		for(int j=2;j<i;j++)
		{
			if(i%j!=0)
			continue;
			else
			{
				f=-1;
				break;
			}
		}
		a=i/100;
	    b=(i/10)%10;
     	c=i%10;
     	for(int j=2;j<a+b+c;j++)
     	{
     		if((a+b+c)%j!=0)
     		continue;
     		else
     		{
     			f=-1;
     			break;
		    }
		}
		if(a*b*c!=0)
		{
		   for(int j=2;j<a*b*c;j++)
	     	{
			if((a*b*c)%j!=0)
			continue;
			else
			{
				f=-1;
				break;
			}
	     	}
	     }
	     if(a*b*c==0)
	     f=-1;
		for(int j=2;j<a*a+b*b+c*c;j++)
		{
			if((a*a+b*b+c*c)%j!=0)
			continue;
			else
			{
				f=-1;
				break;
			}
		}
		if(f==1)
		{
			k++;
			sum+=i;
			max=i>max?i:max;
		} 
	}
	std::cout<<"���������ĸ���Ϊ"<<k<<std::endl;
	std::cout<<"���г�������֮��Ϊ" <<sum<<std::endl;
	std::cout<<"���ĳ�������Ϊ"<<max<<std::endl;
	return 0;
}
