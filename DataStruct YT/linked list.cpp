#include <stdlib.h>
#include <stdio.h>
struct node{
  int data;
  struct node* next;
};
node* Insert(node* head, int x){
  struct node* temp = (node*)malloc(sizeof(struct node));
  temp->data = x;
  temp->next = NULL;
  if (head != NULL) temp->next = head;
    head = temp;
    return head;
}
void Print(node* head){
  printf("List is: " );
  while (head != NULL) {
    printf("%d ", head->data);
    head=head->next;
  }
  printf("\n");
}

int main(int argc, char const *argv[]) {
  node* head = NULL;
  printf("How many numbers?\n");
  int n, i, x;
  scanf("%d", &n);
  for(i = 0; i < n; i++) {
    printf("Enter the number \n");
    scanf("%d", &x);
    head = Insert(head, x);
    Print(head);
  }
  return 0;
}
