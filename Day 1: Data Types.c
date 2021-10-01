 int j;
 // Declare second integer, double, and String variables.
    double e;
    char t[200];
    
    // Read and save an integer, double, and String to your variables.
    scanf("%d",&j);
    scanf("%lf",&e);
    scanf(" %[^\n]",t);

    // Print the sum of both integer variables on a new line.
    printf("%d\n",(i+j));

    // Print the sum of the double variables on a new line.
    //strcat(s,t);
    printf("%.1f\n",(d+e));

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    printf("%s%s",s,t);


    
