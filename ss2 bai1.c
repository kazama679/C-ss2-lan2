#include<stdio.h>
#include<math.h> 
float main(){
	float square_edge, the_length, width, PI, circle_radius;
	printf("vui long nhap lan luot canh hinh vuong, chieu dai, chieu rong hinh chu nhat, ban kinh hinh tron\n");
	scanf("%f %f %f %f", &square_edge, &the_length, &width, &circle_radius);
	float square_perimeter, area_square;
	 square_perimeter= square_edge*4;
	 area_square= square_edge*square_edge;
	float perimeter_of_a_rectangle, rectangular_area;
	 perimeter_of_a_rectangle= (the_length +width)*2;
	 rectangular_area= the_length *width;
	float circumference_of_a_circle, circle_area;
	PI=3.14; 
	 circumference_of_a_circle= circle_radius*2*PI;
	 circle_area= circle_radius*circle_radius*PI;
	 printf("chu vinh hinh vuong la %2.f\n",square_perimeter);
	 printf("dien tich hinh vuong la %2.f\n",area_square);
	 printf("chu vinh hinh chu nhat la %2.f\n",perimeter_of_a_rectangle);
	 printf("dien tich hinh chu nhat la %2.f\n",rectangular_area);
	 printf("chu vinh hinh tron la %f\n", circumference_of_a_circle);
	 printf("dien tich hinh tron la %f\n",circle_area);
}
