
//mahrab Hossain Shifat//
#include<stdio.h>

float converted_marks(float total_mark , float gained_mark , float assigned_percentise);
void grades(float total_marks)
{
    float p;

     printf("Total marks : %.2f\n",  total_marks);
      if(total_marks >= 93)
      {
          printf("\nStudent's Gained Grade Letter:  'A' ");
           p =4.0;
      }
      else if(total_marks < 60)
      {
          printf("\nStudent's Gained Grade Letter: 'F* Failure' ");

          p =0.0;
      }

      else if(total_marks >= 60  && total_marks <= 66 )
    {
        printf("\nStudent's Gained Grade Letter: 'D Poor' ");
        p =1.0;
    }
    else if(total_marks >= 67  && total_marks <= 69 )
    {
        printf("\nStudent's Gained Grade Letter: 'D+'  ");
        p =1.3;
    }
    else if(total_marks >= 70  && total_marks <= 72 )
    {
        printf("\nStudent's Gained Grade Letter: 'C-'  ");

        p =1.7;
    }

    else if(total_marks >= 73  && total_marks <= 76 )
    {
        printf("\nStudent's Gained Grade Letter:  'C Average' ");

        p =2.0;
    }

    else if(total_marks >= 77  && total_marks <= 79 )
    {
        printf("\nStudent's Gained Grade Letter: 'C+' ");
        p =2.3;
    }
    else if(total_marks >= 80  && total_marks <= 82 )
    {
        printf("\nStudent's Gained Grade Letter:  'B-'");

        p =2.7;
    }

    else if(total_marks >= 83  && total_marks <= 86 )
    {
        printf("\nStudent's Gained Grade Letter: 'B Good'  ");
        p =3.0;
    }

    else if(total_marks >= 87  && total_marks <= 89 )
    {
        printf("\nStudent's Gained Grade Letter: 'B+' ");

        p =3.3;
    }
    else if(total_marks >= 90  && total_marks <= 92 )
    {
        printf("\nStudent's Gained Grade Letter:  'A-'");
        p =3.7;
    }

    printf("\nGrade Points                 : %.2f\n\n",   p);
}

void execute_gradding_process(){


    float quizz,assignment , midterms , final;
    float quizz_p,assignment_p , midterms_p , final_p;
    float total;
    printf("Please enter current Students individual marks on below subjects\n : \n" );
    printf("Quizz (20 percent  from total marks of 50):"); scanf("%f", &quizz);
    printf("Assignments (get 20 percent from total marks of 30):"); scanf("%f", &assignment);
    printf("Midterms (get 20 percent from total marks of 100):"); scanf("%f", &midterms);
    printf("Final (get 40 percent from total marks of 100):"); scanf("%f", &final);

    printf("\n\n------------Students Marks are processing to percentise-----------\n\n" );

    quizz_p         = converted_marks(50, quizz , 20);
    assignment_p    = converted_marks(30, assignment , 20);
    midterms_p      = converted_marks(100, midterms , 20);
    final_p         = converted_marks(100, final , 40);


    printf("this is your Quizzes(20 percent) : %.2f", quizz_p);
    printf("\nthis is your Assignments(20 percent) : %.2f", assignment_p);
    printf("\nthis is your Midterms(20 percent) : %.2f", midterms_p);
    printf("\nthis is your Final(20 percent) : %.2f", final_p);

    printf("\n\n------------Students Marks are processing to grades-----------\n\n" );
    total = quizz_p + assignment_p + midterms_p + final_p;
    grades(total);

}

void main(){
    int start = 0 , limit = 5;
    printf("Please input number for 5 students : \n");
    for (start = 1; start <= limit; start++ ){
    	execute_gradding_process();
    }


}

float converted_marks(float total_mark , float gained_mark , float assigned_percentise){
    float return_mark;

    return_mark = (gained_mark / total_mark ) * assigned_percentise;
    return return_mark;
}

