void PostOrder(BiTree root)
{
	BiTNode *p,*q;
	BiTNode **s;
	int top=0;
	q=NULL;
	p=root;
	s=(BiTNode**)malloc(sizeof(BiTNode*)*NUM);
	/* NUMΪԤ����ĳ��� */
	while(p!=NULL || top!=0)
	{
		while(p!=NULL)
		{
			top++; 
			s[top]=p; 
			p=p->LChild; 
		}  /*����������*/
		if(top>0) 
		{	
			p=s[top];
			if((p->RChild==NULL) ||(p->RChild==q))	/* ���Һ��ӣ����Һ����ѱ����� */
			{
			    visit(p->data);        /* ���ʸ����*/
				q=p;            	/* ���浽q��Ϊ��һ���Ѵ������ǰ�� */
				top--;
				p=NULL;
			} 
			else	
				p=p->RChild;
		}
	}
	free(s);
}