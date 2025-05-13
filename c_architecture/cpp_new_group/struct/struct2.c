#include <stdio.h>
/* 2. Ստեղծեք ստրուկտուրա՝ ներկայացնելու համար բանկային հաշիվ՝ հաշվի համարը, հաշվի տիրոջ անունը և մնացորդը: 
Իրականացնել ֆունկցիաներ՝ մուտքագրելու, փոխանցելու և հաշվի տվյալները ցուցադրելու համար:
Օրինակ:
struct BankAccount {
    int accountNumber;
    char holderName[50];
    float balance;
};

// Ֆունկցիաներ՝ բանկային հաշվի մուտքագրման, դուրսբերման և տվյալները ցուցադրելու համար
void deposit(struct BankAccount *account, float amount);
void withdraw(struct BankAccount *account, float amount);
void displayAccount(struct BankAccount account);
 */

typedef struct {
    int accountNumber;
    char holderName[50];
    float balance;
} BankAccount;

void deposit(BankAccount *account, float amount) {

}

void withdraw(BankAccount *account, float amount) {

}

void displayAccount(BankAccount account) {
    
}

int main() {
    const int size = 3;
    BankAccount client[size];
    
    printf("Enter Client data(3) \n");
    for(int i = 0; i < size; ++i) {
        printf("Enter client Account Number: ");
        scanf("%d",&client[i].accountNumber);
        printf("Enter client Holder Name(witouth space): ");
        scanf("%s",client[i].holderName);
        printf("Enter client balance: ");
    }
}
