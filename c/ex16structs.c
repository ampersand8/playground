#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};


struct Person *Person_create(char *name, int age, int height, int weight) {
    struct Person *who = malloc(sizeof(struct Person));
    assert(who != NULL);

    who->name = strdup(name);
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who;
}

void Person_destroy(struct Person *who) {
    assert(who != NULL);

    free(who->name);
    free(who);
}

void Person_print(struct Person *who) {
    printf("Name: %s\n", who->name);
    printf("\tAge: %d\n", who->age);
    printf("\tHeight: %d\n", who->height);
    printf("\tWeight: %d\n", who->weight);
}

// struct on stack memory
typedef struct {
    int fieldone;
    int fieldtwo;
} my_stack;

void test_my_stack() {
    my_stack testme;
    testme.fieldone = 12;
    testme.fieldtwo = 69;

    printf("fieldone: %d\n", testme.fieldone);
    printf("fieldtwo: %d\n", testme.fieldtwo);
}


// just my own little struct
struct Zombie {
    char *name;
    int speed;
    int hunger;
    int intelligence;
};
    
struct Zombie *Zombie_create(char *name, int speed, int hunger, int intelligence) {
    struct Zombie *brains = malloc(sizeof(struct Zombie));
    assert(brains != NULL);

    brains->name = strdup(name);
    brains->speed = speed;
    brains->hunger = hunger;
    brains->intelligence = intelligence;

    return brains;
};

void Zombie_fight(struct Zombie *zombieone, struct Zombie *zombietwo);

void Zombie_destroy (struct Zombie *brains) {
    assert(brains != NULL);

    free(brains->name);
    free(brains);
}

void Zombie_print(struct Zombie *brains) {
    printf("Name: %s\n", brains->name);
    printf("\tSpeed: %d\n", brains->speed);
    printf("\tHunger: %d\n", brains->hunger);
    printf("\tIntelligence: %d\n", brains->intelligence);
}

void Zombie_fight(struct Zombie *zombieone, struct Zombie *zombietwo) {
    if (zombieone->speed > zombietwo->speed) {
        printf("Zombie %s won the fight, and eats %s as a price.\n",zombieone->name,zombietwo->name);
    } else {
        printf("Zombie %s won the fight, and eats %s as a price.\n",zombietwo->name,zombieone->name);
    }
}

int main(int argc, char *argv[]) {
    // make two people structures
    struct Person *joe = Person_create("Joe Alex", 32, 189, 80);

    struct Person *frank = Person_create("Frank Blank", 20, 194, 87);

    // print them out and where they are in memory
    printf("Joe is at memory location %p: \n", joe);
    Person_print(joe);

    printf("Frank is at memory location %p: \n", frank);
    Person_print(frank);

    // make everyone age 20 years and print them again
    joe->age += 20;
    joe->height -= 2;
    joe->weight += 40;
    Person_print(joe);

    frank->age += 20;
    frank->weight += 20;
    Person_print(frank);

    // destroy them both so we clean up
    Person_destroy(joe);
    Person_destroy(frank);


    // a struct on the stack
    test_my_stack();

    // my own structure (with zombies :-))
    struct Zombie *simon = Zombie_create("Simon Peter", 140, 10, 250);
    struct Zombie *muster = Zombie_create("Muster Felix", 160, 64, 238);


    Zombie_print(simon);
    Zombie_print(muster);
    Zombie_fight(simon, muster);    
    return 0;
}
