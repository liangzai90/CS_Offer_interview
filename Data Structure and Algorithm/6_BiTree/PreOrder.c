void  PreOrder(BiTree root) 
/*�������������, rootΪָ�������(��ĳһ����)������ָ��*/
{
	if (root!=NULL)
	{
		Visit(root ->data);  /*���ʸ����*/
		PreOrder(root ->LChild);  /*�������������*/
		PreOrder(root ->RChild);  /*�������������*/
	}
}