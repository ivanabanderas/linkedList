#include <iostream> 
using namespace std;

struct Node{
    int data;
    Node* next;
};

void addNode(Node* &head, int value){
    Node* newNode = new Node();   //Crear un nuevo nodo en la memoria
    newNode -> data = value;    //Asignacion de value a la estructura a data
    newNode -> next = nullptr; //el siguiente nodo es nulptr

    if (head == nullptr){
        head = newNode;  //Si la lista esta vacía el nuevo nodo es el head
    }

    else{
        Node* temp = head; // crear una variente temporal qe alcance el current head
        //recorremos la lista hasta el último nodo
        while(temp -> next != nullptr){
            temp = temp -> next;
        }
        temp -> next = newNode; //enlazamos
    }
}

void showList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout << temp -> data << "->";
        temp = temp -> next;
    }
}

int main(){

    Node* list = nullptr;
    addNode(list, 40);
    addNode(list, 10);
    addNode(list, 890);

    cout << "Lista de valores " << endl;
    showList(list);

    return 0;
}