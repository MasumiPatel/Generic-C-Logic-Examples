//#include "stdafx.h"
//#include "iostream.h"
//#include "stdlib.h"
//#include "stdio.h"

//******************************************
struct Huffman_Node
{
    char left_ch;
    Huffman_Node * next_left;
    char right_ch;
    Huffman_Node * next_right;
};
//******************************************
struct Node
{
    char ch;
    int length;
    Huffman_Node * huff;
    Node *next ;
};
//*******************************************
struct stack  //��ջ���
{
    Huffman_Node * Huffman;
    int m;
};
//*******************************************
 Node *insert(Node *head,Node *p)
{
    Node *q =head;
    Node *point=head;
    if(head == NULL)
    {
        head = p;
    }
    else{

        while(q!=NULL && q->length <= p->length)
        {
            point = q;
            q=q->next;
        }
        if(q==head)
        {
        head=p;
        }
    else if(q == head)
    {
        p->next = head;
        head = p;
    }
    else{
        p->next =point ->next;
        point->next =p;
        }
    }
    return head;
}
//*******************************************
Node *creat_linklist()
{
    FILE *pfile=fopen("in.txt","r");
    Node * p,*head=NULL;
    char ch;
    int weight;
    while(!feof(pfile))
    {
        fscanf(pfile,"%c %d ",&ch,&weight);
        p=(Node*)malloc (sizeof(Node));
        p->huff=NULL;
        p->ch=ch;
        p->length =weight;
        p->next=NULL;
        head=insert(head,p);
    }

    fclose(pfile);
    return head;
}
//*******************************************
Huffman_Node *creat_huffman(Node * head)
{
    Huffman_Node *root=NULL;
    Huffman_Node *p;
    Node *q;
    int num;
    while(head->next->next != NULL)
    {
        num=0;
        p=(Huffman_Node*)malloc(sizeof(Huffman_Node));
        p->left_ch=head->ch;
        num+=head->length;
        p->next_left=head->huff;
        head=head->next;
        p->right_ch=head->ch;
        p->next_right=head->huff;
        num+=head->length;
        q=(Node*)malloc (sizeof(Node));
        q->ch=NULL;
        q->length=num;
        q->huff=p;
        head=head->next;
        head=insert(head,q);
    }
    root=(Huffman_Node*)malloc(sizeof(Huffman_Node));
    root->left_ch=head->ch;
    root->next_left=head->huff;
    head=head->next;
    root->right_ch=head->ch;
    root->next_right=head->huff;
    return root;
}
//******************************************
void coding (Huffman_Node * root)
{
    FILE *pfile=fopen("out.txt","w");
    Huffman_Node * p= root;
    int i=0;
    int top=-1;
    char code[10];
    stack q[10];
    while(p->next_left != NULL || top !=-2)
    {
        if(p->next_right ==NULL)
        {
            code[i]='1';
            fprintf(pfile,"�ַ�Ϊ%c ����Ϊ��",p->right_ch);
            printf("�ַ�Ϊ%c ����Ϊ��",p->right_ch);
        //  cout<<" �ַ�Ϊ"<<p->right_ch<<"����Ϊ�� ";
            for(int j=0;j<=i;j++)
            {
                fprintf(pfile,"%c",code[j]);
                printf("%c",code[j]);    //

            }
            fprintf(pfile,"\n");
            printf("\n");

        }
        else
        {
            q[++top].Huffman = p->next_right;
            q[top].m =i;
        }
        if(p->next_left != NULL)
        {
            code[i++] ='0';
            p=p->next_left;
        }
        else
        {
            code[i]='0';
            fprintf(pfile,"�ַ�Ϊ%c ����Ϊ��",p->left_ch);
            printf("�ַ�Ϊ%c ����Ϊ��",p->left_ch);
            for(int j=0;j<=i;j++)
            {
                fprintf(pfile,"%c",code[j]);
                printf("%c",code[j]);
            }
            fprintf(pfile,"\n");
            printf("\n");
        if(top >-1)
        {
            p=q[top].Huffman;
            i=q[top--].m;
            code[i++]='1';
        }
        else top--;
        }
    }
    fclose(pfile);
}
//*******************************************
int main(int argc, char* argv[])
{
    Node * head = NULL;
    head = creat_linklist();
    Huffman_Node * root = creat_huffman(head);
    coding (root);
    return 0;
}
