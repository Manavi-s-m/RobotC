task main()
{
  int count=0;
  loop1:
  int flag=0;
  int j=0,i=0;
  while(true)                          // Infinite loop:
{
  count++;
  nxtDisplayStringAt(i, j, "SIMS");
  wait1Msec(100);
  eraseDisplay();
  if(flag==0)
  {
    if(count%2==0)
    i+=1;
  j+=1;
}
  if(j==60 || flag==1)
  {
    flag=1;
  j-=1;
   if(count%2==0)
  i+=1;
  }
  if(j==5)
    flag=0;

   if(i==100)
    goto loop1;


}
}
