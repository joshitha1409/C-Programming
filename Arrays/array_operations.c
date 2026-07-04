#include <stdio.h>

int arr[100];
int size;

void insert (int num,int loc)
{
	int i;
	if(size==100)
	{
		printf("Array is full\n");
		return;
	}
	if(loc<1||loc>size+1)
	{
		printf("invalid position\n");
		return;
	}
	for(int i=size;i>=loc;i--)
		{
			arr[i]=arr[i-1];
		}
	arr[loc]=num;
	size++;
}
void removeElement(int loc)
{
	int i;
	if(size==0)
	{
		printf("Array is empty\n");
		return;
	}
	if (loc<0||loc>size)
	{
		printf("Invalid position entered\n");
		return;
	}
	for(int i=loc;i<size-1;i++){
		arr[i]=arr[i+1];
	}
	size--;
}
void display()
{
int i;
if(size==0){
	printf("The array is empty\n");
	return;
}
else{
	printf("Array elements: ");
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return;
}
}


int main() {
    int i, num, loc, choice;
    printf("Enter size: ");
    scanf("%d", &size);
    printf("Enter elements: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    display();
    printf("1. Insert a number\n2. Delete a number\n3. Display the array\n4. Exit\n");
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter number: ");
                scanf("%d", &num);
                printf("Enter location: ");
                scanf("%d", &loc);
                insert(num, loc);
                break;
            case 2:
                printf("Enter location: ");
                scanf("%d", &loc);
                if (loc <= size) {
                    removeElement(loc); // Updated to call 
removeElement
                } else {
                    printf("Location not found\n");
                }
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
