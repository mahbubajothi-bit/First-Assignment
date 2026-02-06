#include <stdio.h>

int main(void)
{
    int age, student;
    int price;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter student status (1 = student, 0 = not student): ");
    scanf("%d", &student);

    if (age < 12)
    {
        price = 50;
    }
    else
    {
        if (age <= 60)
        {
            if (student == 1)
                price = 80;
            else
                price = 100;
        }
        else
        {
            price = 60;
        }
    }

    printf("Ticket price = %d\n", price);

    return 0;
}
