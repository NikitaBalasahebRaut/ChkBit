/*
    Problem statement :
 Accept number from user and check whether fourth bit is on or off.
 
 Input :   43                     Binary :    1   0   1   0   1   1       (1+2+8+32)
 Output : TRUE
 
 Input :   35                     Binary :    1   0   0   0   1   1       (1+2+32)
 Output : FALSE
 
 */
 
 #include<stdio.h>
 #define TRUE 1
 #define FALSE 0
 
 typedef int BOOL;
 
 
 BOOL ChkBit(int iValue)
 {
     int iRem = 0;
	 int iPos = 0;
	 
    if(iValue < 0)
	{
      iValue = -iValue;
	}
  
    while(iValue != 0)
	{
      iRem = iValue % 2;
	  iPos++;
	  
	  if(iPos == 4)
	  {
		  break;
	  }
	  iValue = iValue / 2;
	}

    if((iPos == 4) && (iRem == 1))
	{
       return TRUE;
	}
    else
	{
      return FALSE;
	}	  
 }
 
 int main()
 {
   int iNo = 0;
   BOOL bRet = FALSE;
   
   printf("Enter The No \n");
   scanf("%d",&iNo);
   
   bRet = ChkBit(iNo);
   
   if(bRet == TRUE)
   {
	   printf("Fourth bit is on \n");
   }
   else
   {
	   printf("Fourth bit is off \n");
   }
 
 return 0;
 }