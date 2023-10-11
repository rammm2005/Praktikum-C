#include <stdio.h>
#include <math.h>

void groupName() {
    printf("\n");
    printf(" Group 15 programming practicum : \n");
    printf(" I Putu Rama Dita (2305551017) \n");
    printf("\n");
}

void inputCheck(double *input) {
    while (scanf("%lf", input) != 1) {
        printf("Invalid input. Please input a valid input (Required Number): ");
        while (getchar() != '\n'){
            // The loop back code
        }
    }
}

int anyTriangle() {

    double a, b, c, s, perimeter, area;

    printf(" ================ Calculating the Area and Perimeter of Any Triangle ================  \n");
    printf(" ====================================================================================  \n");

    printf("     /\\    \n");
    printf("    /  \\  \n");
    printf("   /    \\  \n");
    printf("  /______\\  \n");

    printf(" Enter the Value of a : ");
    inputCheck(&a);
    printf(" Enter the Value of b : ");
    inputCheck(&b);
    printf(" Enter the Value of c : ");
    inputCheck(&c);

    s = (a + b + c) / 2;

    area = sqrt(s * (s - a) * (s - b) * (s - c));

    perimeter = a + b + c;

    printf(" ====== Result ===== \n");
    printf(" area = A = √(s * (s - a) * (s - b) * (s - c) : \n");
    printf(" area = %.2lf\n\n", area);
    printf(" ====== Result ===== \n");
    printf(" perimeter = a + b + c : \n");
    printf(" perimeter = %.2lf\n", perimeter);

    return 0;
}

int cutTheRiceCake() {

    double side , perimeter , area , d1 ,d2;

    printf(" ================ Calculating the Area and Perimeter of cut The Rice Cake ================  \n");
    printf(" =========================================================================================  \n");

    printf("     //\\    \n");
    printf("    //  \\  \n");
    printf("   //    \\  \n");
    printf("  //      \\  \n");
    printf("  \\      //  \n");
    printf("   \\    //  \n");
    printf("    \\  //  \n");
    printf("     \\//  \n");


    printf(" Enter D1 value : ");
    inputCheck(&d1);
    printf(" Enter D2 value : ");
    inputCheck(&d2);
    printf(" Enter side value : ");
    inputCheck(&side);

    area = 0.5 * (d1 * d2);
    perimeter = side + side + side + side;

    printf(" ====== Result ===== \n");
    printf(" area = 1/2 * (d1 * d2) : \n");
    printf(" area = %.2lf\n\n", area);
    printf(" ====== Result ===== \n");
    printf(" perimeter = 4*(side): \n");
    printf(" perimeter = %.2lf\n", perimeter);

    return 0;

}



int paralleLogram(){
    double base , height , area , perimeter;

    printf(" ================ Calculating the Area and Perimeter of Parallelogram ===================  \n");
    printf(" =========================================================================================  \n");
    printf("        ******************\n");
    printf("      *                 *\n");
    printf("    *                *\n");
    printf("  *                *\n");
    printf(" ******************\n");

    printf(" Enter base value : ");
    inputCheck(&base);
    printf(" Enter height value : ");
    inputCheck(&height);

    area = base * height;
    perimeter = 2 * (base + height);
    

    printf(" ====== Result ===== \n");
    printf(" area = base * height : \n");
    printf(" area = %.2lf\n\n", area);
    printf(" ====== Result ===== \n");
    printf(" perimeter = 2 * (base * height) : \n");
    printf(" perimeter = %.2lf\n", perimeter);

    return 0;
}

int trapezium(){
    double a , b , c , d , h, area , perimeter;

    printf(" ================== Calculating the Area and Perimeter of Trapezium ======================  \n");
    printf(" =========================================================================================  \n");
    printf("        ****************\n");
    printf("      *                  *\n");
    printf("    *                     *\n");
    printf("  *                         *\n");
    printf(" *****************************\n");

    printf(" Enter the length of the longer base (a): ");
    inputCheck(&a);
    printf(" Enter the length of the longer base (b): ");
    inputCheck(&b);
    printf(" Enter the length of not the longer base (c): ");
    inputCheck(&c);
    printf(" Enter the length of the other not longer base (d): ");
    inputCheck(&d);
    printf(" Enter the height base (h): ");
    inputCheck(&h);


    area = 0.5 * (a + b) * h;
    perimeter = a + b + c + d ;
    

    printf(" ====== Result ===== \n");
    printf(" area = 1/2 * (a + b) * h : \n");
    printf(" area = %.2lf\n\n", area);
    printf(" ====== Result ===== \n");
    printf(" perimeter = a + b + c + d : \n");
    printf(" perimeter = %.2lf\n", perimeter);

    return 0;
}



int circle(){
    double r , area , perimeter;

    printf(" ==================== Calculating the Area and Perimeter of Circle =======================  \n");
    printf(" =========================================================================================  \n");
   

    printf(" Enter the radius of Circle : ");
    inputCheck(&r);


    area = 3.14159 * r * r;
    perimeter = 2 * 3.14159 * r;
    

    printf(" ====== Result ===== \n");
    printf(" area = π * r^2) : \n");
    printf(" area = %.2lf\n\n", area);
    printf(" ====== Result ===== \n");
    printf(" perimeter = 2 * π * r : \n");
    printf(" perimeter = %.2lf\n", perimeter);

    return 0;
}

int main() {
    char choose;


    groupName();
    printf(" Program to calculate the area and perimeter of flat shapes:\n");
    printf(" Choose one of the shapes:\n");
    printf(" 1. Triangle\n");
    printf(" 2. Cut the Rice Cake\n");
    printf(" 3. Parallelogram\n");
    printf(" 4. Trapezium\n");
    printf(" 5. Circle\n");

    do{
        int invalidChoose = 0;
        printf(" Enter your choice (1-5) or q to exit: ");
        scanf(" %c" , &choose);

         while (getchar() != '\n'){
                
        }
        switch (choose){
        case '1':
            anyTriangle();
            break;

        case '2':
            cutTheRiceCake();
            break;

        case '3':
            paralleLogram();
            break;

        case '4':
            trapezium();
            break;

        case '5':
            circle();
        break;

        case 'q':
            return 0;
        break;

        default:
          printf(" Input invalid. Please input the true statement (1-5 or q to exit). \n ");
          int invalidChoose = 1;
        }

    } while(choose != 'q');

    return 0;
}