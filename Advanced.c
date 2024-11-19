// Advanced C prgms


/* 1. Matrix Multiplication ( 40 & 145 )
2. File Handling ( 219 & 291 )
3. Dynamic Memory Allocation ( 360 & 428 )
4. Linked List ( 490 & 582 )  */




// case a ( input from user )
// case b ( input provided )


























// 1. Matrix Multiplication ( case a )


#include <stdio.h>

int main() {
    int m, n, p, q;

    // Input dimensions for matrix A
    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &m, &n);

    // Input dimensions for matrix B
    printf("Enter the number of rows and columns for matrix B: ");
    scanf("%d %d", &p, &q);

    // Check if multiplication is possible
    if (n != p) {
        printf("Matrix multiplication is not possible.\n");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];
    int i, j, k;

    // Input matrix A
    printf("Enter elements of matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    printf("Enter elements of matrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix multiplication
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display the result
    printf("Matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("Resultant Matrix C (A * B):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}



























// 1. Matrix Multiplication ( case b )

#include <stdio.h>

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};  // First matrix
    int B[2][2] = {{5, 6}, {7, 8}};  // Second matrix
    int C[2][2];  // Resultant matrix
    int i, j, k;

    // Matrix multiplication
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            C[i][j] = 0;
            for (k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display the result
    printf("Matrix A:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("Matrix B:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("Resultant Matrix C (A * B):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}



























// 2. File Handling ( case a )


#include <stdio.h>

int main() {
    FILE *file;
    char data[100];

    // Get user input for the file
    printf("Enter the data you want to write to the file: ");
    fgets(data, sizeof(data), stdin);  // Read input from user

    // Open file for writing (create the file if it doesn't exist)
    file = fopen("userfile.txt", "w");
    if (file == NULL) {
        printf("Could not open the file for writing.\n");
        return 1;
    }

    // Write user input to the file
    fprintf(file, "%s", data);
    printf("Data written to the file successfully.\n");

    // Close the file after writing
    fclose(file);

    // Open the file for reading
    file = fopen("userfile.txt", "r");
    if (file == NULL) {
        printf("Could not open the file for reading.\n");
        return 1;
    }

    // Read and display the contents of the file
    printf("Data read from the file:\n");
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }

    // Close the file after reading
    fclose(file);

    return 0;
}



























// 2. File Handling ( case b )



#include <stdio.h>

int main() {
    FILE *file;
    char data[] = "Hello, this is a test file!\nWelcome to file handling in C.";

    // Open file for writing (create the file if it doesn't exist)
    file = fopen("testfile.txt", "w");
    if (file == NULL) {
        printf("Could not open the file for writing.\n");
        return 1;
    }

    // Write to the file
    fprintf(file, "%s", data);
    printf("Data written to the file successfully.\n");

    // Close the file after writing
    fclose(file);

    // Open the file for reading
    file = fopen("testfile.txt", "r");
    if (file == NULL) {
        printf("Could not open the file for reading.\n");
        return 1;
    }

    // Read and display the contents of the file
    char ch;
    printf("Data read from the file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Close the file after reading
    fclose(file);

    return 0;
}


























// 3. Dynamic Memory Allocation ( case a )


#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size;

    // Get the size of the array from the user
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Get input from the user for each element
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the entered array elements
    printf("Entered array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(arr);
    return 0;
}




























//3. Dynamic Memory Allocation ( case b )

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int size = 5;

    // Dynamically allocate memory for 5 integers
    arr = (int *)malloc(size * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize and display the array elements
    for (int i = 0; i < size; i++) {
        arr[i] = i * 10; // Assign values 0, 10, 20, 30, 40
    }

    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(arr);
    return 0;
}






























// 4. Linked List ( case a )





#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL, *tail = NULL;
    int n, data;

    // Get the number of elements in the linked list
    printf("Enter the number of elements in the linked list: ");
    scanf("%d", &n);

    // Create the linked list based on user input
    for (int i = 0; i < n; i++) {
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);

        struct Node* newNode = createNode(data);

        // If it's the first node, make it the head
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            // Link the new node at the end
            tail->next = newNode;
            tail = newNode;
        }
    }

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    return 0;
}



























// 4. Linked List ( case b )






#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Create nodes and link them manually
    struct Node* head = createNode(10);
    struct Node* second = createNode(20);
    struct Node* third = createNode(30);

    // Link the nodes
    head->next = second;
    second->next = third;

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    return 0;
}



























-----------XXXXXXXXXXX------------
