Node *Locate( LinkList L,ElemType key)
/*�ڴ�ͷ���ĵ�����L�в�������ֵ����key�Ľ�㣬���ҵ��򷵻ظý���λ��p�����򷵻�NULL*/ 
{ 
	Node *p;
	p=L->next;    /*�ӱ��е�һ����㿪ʼ */
	while (p!=NULL)
	{
		if (p->data!=key)
			p=p->next; 
		else  
			break;      /*�ҵ����ֵ=keyʱ�˳�ѭ�� */
	}
	return p;
} 