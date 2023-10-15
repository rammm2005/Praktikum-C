#include <stdio.h>
#include <math.h>

void groupName() {
    printf("\n");
    printf(" Group 15 programming practicum : \n");
    printf(" I Putu Rama Dita (2305551017) \n");
    printf(" I Kadek Indriani Saputri (2305551062) \n");

    printf("\n");
}

void inputCheck(double *input) {
    while (scanf("%lf", input) != 1) {
        printf("Invalid input. Please input a valid input (Required Number): ");
        while (getchar() != '\n') {
            // The loop back code
        }
    }
}

int anyTriangle() {

    double side_a, side_b, side_c, semiperimeter, area, perimeter;

    printf(" ================ Calculating the Area and Perimeter of Any Triangle ================  \n");
    printf(" ====================================================================================  \n");

    printf("     /\\    \n");
    printf("    /  \\  \n");
    printf("   /    \\  \n");
    printf("  /______\\  \n");

    printf(" Enter the Value of side_a : ");
    inputCheck(&side_a);
    printf(" Enter the Value of side_b : ");
    inputCheck(&side_b);
    printf(" Enter the Value of side_c : ");
    inputCheck(&side_c);

    semiperimeter = (side_a + side_b + side_c) / 2;

    area = sqrt(semiperimeter * (semiperimeter - side_a) * (semiperimeter - side_b) * (semiperimeter - side_c));

    perimeter = side_a + side_b + side_c;

    printf(" ====== Result ===== \n");
    printf(" area = A = √(s * (s - a) * (s - b) * (s - c) : \n");
    printf(" area = %.2lf\n\n", area);
    printf(" ====== Result ===== \n");
    printf(" perimeter = side_a + side_b + side_c : \n");
    printf(" perimeter = %.2lf\n", perimeter);

    return 0;
}

int cutTheRiceCake() {

    double diagonal1, diagonal2, side_length, area, perimeter;

    printf(" ================ Calculating the Area and Perimeter of Cut The Rice Cake ================  \n");
    printf(" =========================================================================================  \n");

    printf("     //\\    \n");
    printf("    //  \\  \n");
    printf("   //    \\  \n");
    printf("  //      \\  \n");
    printf("  \\      //  \n");
    printf("   \\    //  \n");
    printf("    \\  //  \n");
    printf("     \\//  \n");

    printf(" Enter Diagonal 1 value : ");
    inputCheck(&diagonal1);
    printf(" Enter Diagonal 2 value : ");
    inputCheck(&diagonal2);
    printf(" Enter side length value : ");
    inputCheck(&side_length);

    area = 0.5 * (diagonal1 * diagonal2);
    perimeter = 4 * side_length;

    printf(" ====== Result ===== \n");
    printf(" area = 1/2 * (diagonal1 * diagonal2) : \n");
    printf(" area = %.2lf\n\n", area);
    printf(" ====== Result ===== \n");
    printf(" perimeter = 4 * (side_length): \n");
    printf(" perimeter = %.2lf\n", perimeter);

    return 0;
}

int paralleLogram() {
    double base, height, area, perimeter;

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
    printf(" perimeter = 2 * (base + height) : \n");
    printf(" perimeter = %.2lf\n", perimeter);

    return 0;
}

int trapezium() {
    double longer_base_a, longer_base_b, shorter_base_c, shorter_base_d, height, area, perimeter;

    printf(" ================== Calculating the Area and Perimeter of Trapezium ======================  \n");
    printf(" =========================================================================================  \n");
    printf("        ****************\n");
    printf("      *                  *\n");
    printf("    *                     *\n");
    printf("  *                         *\n");
    printf(" *****************************\n");

    printf(" Enter the length of the longer base (a): ");
    inputCheck(&longer_base_a);
    printf(" Enter the length of the longer base (b): ");
    inputCheck(&longer_base_b);
    printf(" Enter the length of not the longer base (c): ");
    inputCheck(&shorter_base_c);
    printf(" Enter the length of the other not longer base (d): ");
    inputCheck(&shorter_base_d);
    printf(" Enter the height base (h): ");
    inputCheck(&height);

    area = 0.5 * (longer_base_a + longer_base_b) * height;
    perimeter = longer_base_a + longer_base_b + shorter_base_c + shorter_base_d;

    printf(" ====== Result ===== \n");
    printf(" area = 1/2 * (a + b) * h : \n");
    printf(" area = %.2lf\n\n", area);
    printf(" ====== Result ===== \n");
    printf(" perimeter = a + b + c + d : \n");
    printf(" perimeter = %.2lf\n", perimeter);

    return 0;
}

int circle() {
    double radius, area, circumference;

    printf(" ==================== Calculating the Area and Perimeter of Circle =======================  \n");
    printf(" =========================================================================================  \n");

    printf(" Enter the radius of Circle : ");
    inputCheck(&radius);

    area = 3.14159 * radius * radius;
    circumference = 2 * 3.14159 * radius;

    printf(" ====== Result ===== \n");
    printf(" area = π * r^2 : \n");
    printf(" area = %.2lf\n\n", area);
    printf(" ====== Result ===== \n");
    printf(" circumference = 2 * π * r : \n");
    printf(" circumference = %.2lf\n", circumference);

    return 0;
}

int main() {
    char choice;

    groupName();
    printf(" Program to calculate the area and perimeter of flat shapes:\n");
    printf(" Choose one of the shapes:\n");
    printf(" 1. Triangle\n");
    printf(" 2. Cut the Rice Cake\n");
    printf(" 3. Parallelogram\n");
    printf(" 4. Trapezium\n");
    printf(" 5. Circle\n");

    do {
        int invalidChoice = 0;
        printf(" Enter your choice (1-5) or q to exit: ");
        scanf(" %c", &choice);

        while (getchar() != '\n') {
            // Clear the input buffer
        }
        switch (choice) {
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

        default:
            printf(" Input invalid. Please input the correct option (1-5 or q to exit). \n ");
            invalidChoice = 1;
        }
    } while (choice != 'q');

    return 0;
}
