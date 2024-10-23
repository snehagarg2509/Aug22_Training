#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct {
    char name[MAX_NAME];
    int age;
    //add other stuff
} person;
//chaining
typedef struct node {
    person data;
    struct node *next;
} node;

//person hashtablep[TABLE_SIZE];
node *hash_table[TABLE_SIZE];

unsigned int hash(char *name) {
    int length = strnlen(name, MAX_NAME);
    unsigned int hash_value = 0;
    for (int i = 0; i < length; i++) {
        hash_value += name[i];
        hash_value = (hash_value * name[i]) % TABLE_SIZE;
    }
    return hash_value;
}

void init_hash_table() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        hash_table[i] = NULL;
    }
}

int insert(person p) {
    unsigned int index = hash(p.name);
    node *new_node = (node *)malloc(sizeof(node));
    if (new_node==NULL) {
        return 0; // Memory allocation failed
    }
  //  hash_table[index] = p; //collision
    new_node->data = p;
    new_node->next = hash_table[index];
    hash_table[index] = new_node;
    return 1;
}

person *search(char *name) {
    unsigned int index = hash(name);
    node *temp = hash_table[index];  //one step we would have searched
    
    while (temp) {
        if (strcmp(temp->data.name, name) == 0) {
            return &temp->data;
        }
        temp = temp->next;
    }
    return NULL;
}

int delete(char *name) {
    unsigned int index = hash(name);
    node *temp = hash_table[index];
    node *prev = NULL;

    while (temp) {
        if (strcmp(temp->data.name, name) == 0) {
            if (prev!=NULL) {
                prev->next = temp->next;  //other than first node
            } else {
                hash_table[index] = temp->next; //first node
            }
            free(temp);
            return 1; // Successful deletion
        }
        prev = temp;
        temp = temp->next;
    }
    return 0; // Name not found
}

void print_table() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (hash_table[i] == NULL) {
            printf("Slot %d: (empty)\n", i);
        } else {
            printf("Slot %d: ", i);
            node *temp = hash_table[i];
            while (temp) {
                printf("%s (%d) -> ", temp->data.name, temp->data.age);
                temp = temp->next;
            }
            printf("NULL\n");
        }
    }
}

int main() {
    init_hash_table();

    person jacob = {.name = "Jacob", .age = 25};
    person natalie = {.name = "Natalie", .age = 30};
    person sara = {.name = "Sara", .age = 22};
    person mpho = {.name = "Mpho", .age = 35};
    person teboqo = {.name = "Teboqo", .age = 28};
    person ron = {.name = "Ron", .age = 40};
    person jane = {.name = "Jane", .age = 27};
    person maren = {.name = "Maren", .age = 33};
    person bill = {.name = "Bill", .age = 29};

    insert(jacob);
    insert(natalie);
    insert(sara);
    insert(mpho);
    insert(teboqo);
    insert(ron);
    insert(jane);
    insert(maren);
    insert(bill);

    print_table();

    char name[MAX_NAME];
    printf("\nEnter a name to search: ");
    fgets(name, MAX_NAME, stdin);
    name[strcspn(name, "\n")] = 0; // Remove newline character

    person *p = search(name);
    if (p) {
        printf("Found: %s (%d)\n", p->name, p->age);
    } else {
        printf("Not found.\n");
    }

    printf("\nEnter a name to delete: ");
    fgets(name, MAX_NAME, stdin);
    name[strcspn(name, "\n")] = 0; // Remove newline character

    if (delete(name)) {
        printf("Deleted successfully.\n");
    } else {
        printf("Delete failed. Name not found.\n");
    }

    print_table();

    return EXIT_SUCCESS;
}

