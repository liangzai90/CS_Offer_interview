LinkList MergeLinkList(LinkList LA, LinkList LB)
/*����������ĵ�����LA��LB�ϲ���һ����������ĵ�����LC*/
{  
	Node *pa,*pb;
	Node *r;
	LinkList LC;
/*��LC��ʼ�ÿձ���pa��pb�ֱ�ָ������������LA��LB�еĵ�һ�����,r��ֵΪLC*/
	pa=LA->next;
	pb=LB->next;
	LC=LA;
	LC->next=NULL;
	r=LC;
/*���������о�δ������ʱ���Ƚ�ѡ�񽫽�Сֵ�����뵽�±�LC�С�*/
	while(pa!=NULL && pb!=NULL)
	{
		if(pa->data <= pb->data)
		{
			r->next=pa;
			r=pa;
			pa=pa->next;
		}
		else
		{
			r->next=pb;
			r=pb;
			pb=pb->next;
		}
	}
	if(pa) /*����LAδ�꣬����LA�к���Ԫ�������±�LC��β*/
		r->next=pa;
	else	 /*���򽫱�LB�к���Ԫ�������±�LC��β*/
		r->next=pb;
	free(LB);
	return(LC);
}