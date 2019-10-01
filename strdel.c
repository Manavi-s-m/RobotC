task main()
{
  string str = "silicon micros";
  nxtDisplayCenteredTextLine(3, "Actual string is:");
   nxtDisplayCenteredTextLine(4, "%s", str);

   wait1Msec(3000);
     eraseDisplay();
  StringDelete(str, 2, 6);
 StringDelete(str,3,4);
  nxtDisplayCenteredTextLine(3, "Edited string is:");
   nxtDisplayCenteredTextLine(4, "%s", str);
   wait1Msec(3000);
   eraseDisplay();
}
