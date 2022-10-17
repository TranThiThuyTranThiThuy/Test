#include<iostream>
using namespace std;
struct LinkedList {
    int data;
    struct LinkedList* next;
};
typedef struct LinkedList* node; //Từ giờ dùng kiểu dữ liệu LinkedList có thể thay bằng node cho ngắn gọn

node CreateNode(int value) {
    node temp; // declare a node
    temp = new LinkedList; // Cấp phát vùng nhớ dùng malloc()
    temp->next = NULL;// Cho next trỏ tới NULL
    temp->data = value; // Gán giá trị cho Node
    return temp;//Trả về node mới đã có giá trị
}

node AddTail(node head, int value) {
    node temp, p;// Khai báo 2 node tạm temp và p
    temp = CreateNode(value);//Gọi hàm createNode để khởi tạo node temp có next trỏ tới NULL và giá trị là value
    if (head == NULL) {
        head = temp;     //Nếu linked list đang trống thì Node temp là head luôn
    }
    else {
        p = head;// Khởi tạo p trỏ tới head
        while (p->next != NULL) {
            p = p->next;//Duyệt danh sách liên kết đến cuối. Node cuối là node có next = NULL
        }
        p->next = temp;//Gán next của thằng cuối = temp. Khi đó temp sẽ là thằng cuối(temp->next = NULL mà)
    }
    return head;
}
void Traverser(node head)
{
    cout << endl;
    for (node p = head; p != NULL; p = p->next)
        cout << p->data << "\t";
}
int dem_sobehon1(node head)
{
    int dem = 0;
    for (node i = head; i != NULL; i = i->next)
    {
        if (i->data<1)
            dem++;
    }
    return dem;
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
void xoa_pt_behon5(node head)
{
    int  a[100], m = 0;
    for (node i = head; i != NULL; i = i->next)
        if (i->data < 5)
            a[m++] = i->data;
    for (int i = 0; i < m; i++)
        delete_node(head, a[i]);
}
int main() 
{
    int a[50], m;
    printf("\n==Tao 1 danh sach lien ket==");
    node head = Input();
    Traverser(head);
    cout << endl << "so nut nho hon 1 la: " << dem_sobehon1(head);
    SortList(head);
    cout << endl << "danh sach sau khi sap xep: ";
    Traverser(head);
    xoa_pt_behon5(head);
    cout << endl << "danh sach sau khi xoa phantu be hon 5: ";
   Traverser(head);
}