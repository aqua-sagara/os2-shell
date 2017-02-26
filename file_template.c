 /*  file_template.c */


     #include <fcntl.h>         /* defines options flags */
     #include <sys/types.h>     /* defines types used by sys/stat.h */
     #include <sys/stat.h>      /* defines S_IREAD & S_IWRITE  */
     #include <stdlib.h>
     #include <stdio.h>
     #include <unistd.h>

     static char message[] = "Hello, world";

     int main()
	 {
	   
	   
        int fd;
        char buffer[80];

        /* open datafile.dat for read/write access   (O_RDWR)
           create datafile.dat if it does not exist  (O_CREAT)
           return error if datafile already exists   (O_EXCL)
           permit read/write access to file  (S_IWRITE | S_IREAD)
        */
     fd = open("datafile.dat",O_RDWR | O_CREAT | O_EXCL, S_IREAD | S_IWRITE);
        if (fd != -1)
           {
           printf("datafile.dat opened for read/write access\n");
		   /* add your code here to write message to file */



           

		   /* add your code here to go back to the beginning of the file using lseek function */
           





           if (read(fd, buffer, sizeof(message)) == sizeof(message))
              printf("\"%s\" was written to datafile.dat\n", buffer);
           else
              printf("*** error reading datafile.dat ***\n");
           close (fd);
           }
        else
           printf("*** datafile.dat already exists ***\n");
        exit (0);
     }
