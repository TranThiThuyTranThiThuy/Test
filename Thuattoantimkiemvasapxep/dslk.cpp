#include<iostream> 
#include<stdlib.h> 
using namespace std;
struct LinkedList {
    int data;
    struct LinkedList* next;
};
typedef struct LinkedList* node; 
node CreateNode(int value) {
    node temp; 
    temp = new LinkedList; 
    temp->next = NULL;
    temp->data = value; 
    return temp;
}
node AddTail(node head, int value) {
    node temp, p;
    temp = CreateNode(value);
    if (head == NULL) {
        head = temp;     
    }
    else {
        p = head;
        while (p->next!= NULL) {
            p = p->next ;
        }
        p->next = temp;
    }
    return head;
}
void Traverser(node head)
{
    cout << endl;
    for (node p = head; p != NULL; p = p->next)
        cout << p->data << "\t";
}
node InitHead() {
    node head;
    head = NULL;
    return head;
}
node Input() {
    node head = InitHead();
    int n, value;
    do {
        printf("\nNhap so luong phan tu n = ");
        cin >> n;
    } while (n <= 0);

    for (int i = 0; i < n; ++i) {
        printf("\nNhap gia tri can them: ");
        cin >> value;
        head = AddTail(head, value);
    }
    return head;
}
void SortList(node head)
{
    for(node i=head;i->next!=NULL;i=i->next)
        for (node j =i->next; j != NULL; j = j->next)
            if (i->data > j->data)
            {
                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
}
int delete_node(node& head, int x)
{
    node i = head;
    node j = NULL;
    while (i != NULL)
    {
        if (i->data == x) break;
        j = i;
        i = i->next;
    }
    if (i == NULL) return -1;
    if (j == NULL)
        head = head->next;
    else
        j->next = i->next;
    i->next = NULL;
    delete i;
    return 1;
}
struct list
{
    node* head;
    node* tail;
};
typedef struct list list;
int main() 
{
    int a[50], m;
    printf("\n==Tao 1 danh sach lien ket==");
    node head = Input();
    Traverser(head);
    SortList(head);
    cout << endl << "danh sach sau khi sap xep: ";
   Traverser(head);
   return 0; 
}
