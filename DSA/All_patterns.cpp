Pattern : nested loops
1>for the outer loop count the number of loops
2>

# ****
  ****
  ****
  ****
=> 
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
cout<<"* ";
}
cout<<endl;
}


# *
  **
  ***
  ****
  *****
=> 
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
{
cout<<"* ";
}
cout<<endl;
}


# 1
  12
  123
  1234
  12345
=> 
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<j;
}
cout<<endl;
}

# 1
  22
  333
  4444
  55555
=> 
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<i;
}
cout<<endl;
}

# *****
  ****
  ***
  **
  *
=> 
for(i=1;i<=n;i++)
{
for(j=0;j<n-i+1;j++)
{
cout<<"* ";
}
cout<<endl;
}

# 12345
  1234
  123
  12
  1
=> 
for(i=1;i<=n;i++)
{
for(j=1;j<=n-i+1;j++)
{
cout<<j;
}
cout<<endl;
}

# 	*
       ***
      *****
     *******
    *********
=> 
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
cout<<" ";
}
for(int k=0;k<2*i+1;k++)
{
cout<<"*";
}
for(j=0;j<n-i-1;j++)
{
cout<<" ";
}
cout<<endl;
}

# 	*********
	 *******
	  *****       
	   ***
	    *    
=> 
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
{
cout<<" ";
}
for(int k=0;k<2*n-(2*i+1);k++)
{
cout<<"*";
}
for(j=0;j<i;j++)
{
cout<<" ";
}
cout<<endl;
}

# 	    *
           ***
          *****
         *******
        *********
 	*********
	 *******
	  *****       
	   ***
	    *

=> 
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
cout<<" ";
}
for(int k=0;k<2*i+1;k++)
{
cout<<"*";
}
for(j=0;j<n-i-1;j++)
{
cout<<" ";
}
cout<<endl;
}
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
{
cout<<" ";
}
for(int k=0;k<2*n-(2*i+1);k++)
{
cout<<"*";
}
for(j=0;j<i;j++)
{
cout<<" ";
}
cout<<endl;
}


# 	    
*
***
*****
*******
*********
*******
*****       
***
*

=> 

for(i=0;i<2*n-1;i++)
{
stars=i;
if(i>n) stars=2*n-i;
for(j=0;j<stars;j++)
{
cout<<"* ";
}
cout<<endl;
}


# 1
  01
  101
  0101
  10101
=> 
for(i=0;i<n;i++)
{
start=1;
if(i%2!=0) start=0;
for(j=0;j<=i;j++)
{
cout<<start;
start=1-start;
}
cout<<endl;
}

#
1      1
12    21
123  321
12344321

=>
space=2*(n-1)
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<j;
}
for(k=1;k<=space;k++)
{
cout<<" ";
}
for(j=i;j>0;j--)
{
cout<<j;
}
cout<<endl;
space-=2;
}

#
1
23
456
78910
1112131415
=>
count=1;
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
cout<<count;
count++;
}
cout<<endl;
}

# A
  AB
  ABC
  ABCD
  ABCDE
=> 
for(i=1;i<=n;i++)
{
for(char j='A';j<='A'+i;j++)
{
cout<<j;
}
cout<<endl;
}
