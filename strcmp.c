task main()
{
  string s1="Robot",s2="robot",s3="Robot";
  if(strcmp(s1,s2))
  {
    nxtDisplayTextLine(3,"%s and %s",s1,s2);
    nxtDisplayTextLine(4,"are not equal");
    wait1Msec(3000);
    eraseDisplay();
 }
 else
 {
    nxtDisplayTextLine(3,"%s and %s",s1,s2);
    nxtDisplayTextLine(4,"are equal");
    wait1Msec(3000);
    eraseDisplay();
 }
 if(strcmp(s1,s3))
 {
       nxtDisplayTextLine(3,"%s and %s",s1,s3);
       nxtDisplayTextLine(4,"are not equal");
       wait1Msec(3000);
       eraseDisplay();
 }
 else
 {
    nxtDisplayTextLine(3,"%s and %s",s1,s3);
    nxtDisplayTextLine(4,"are equal");
    wait1Msec(3000);
    eraseDisplay();
 }
}


