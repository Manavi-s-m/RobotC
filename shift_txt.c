task main()
{
  int i=0;
  while(true)                          // Infinite loop:
{
  nxtDisplayStringAt(i, 25, "SIMS");
  wait1Msec(50);
  eraseDisplay();
  i+=2;
}
}

