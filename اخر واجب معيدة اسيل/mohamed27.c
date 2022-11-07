#include <stdio.h>
//void main()
//{
//   int dayno;
//   printf("Input Day No : ");
//   scanf("%d",&dayno);
//   switch(dayno)
//   {
//	case 1:
//	       printf("Monday \n");
//	       break;
//	case 2:
//	       printf("Tuesday \n");
//	       break;
//	case 3:
//	       printf("Wednesday \n");
//	       break;
//	case 4:
//	       printf("Thursday \n");
//	       break;
//	case 5:
//	       printf("Friday \n");
//	       break;
//	case 6:
//	       printf("Saturday \n");
//	       break;
//	case 7:
//	       printf("Sunday  \n");
//	       break;
//	default:
//	       printf("Invalid day number. \nPlease try again ....\n");
//	       break;
//      }
//}



//Write a C program to accept a grade and display the equivalent description:


void main(){
	
	char grd;
 
    printf("Input the grade :");
    scanf("%c", &grd);
    
    switch(grd)
    {
    case 'E':
        printf(" Excellent");
        break;
    case 'V':
        printf(" Very Good");
        break;
    case 'G':
        printf(" Good ");
        break;
    case 'A':
        printf(" Average");
        break;
    case 'F':
        printf(" Fails");
        break;
    default :
        printf("Invalid Grade Found. \n");
        break;
    }
} 

















