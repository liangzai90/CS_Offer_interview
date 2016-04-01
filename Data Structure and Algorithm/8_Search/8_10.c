Boolean  srch_mbtree (Mbtree  mbt,  KeyType  k,  Mbtree  *np,  int *pos)
/*�ڸ�Ϊmbt��B_���в��ҹؼ���k��������ҳɹ��������ڽ���ַ����np���������λ����ŷ���pos��������true�����򣬽�kӦ������Ľ���ַ����np���������Ӧ��λ����ŷ���pos��������false*/
{
	Mbtree p,fp;
	Boolean found;
	int i;
	p = mbt;
	fp = NULL; 
	found = false; 
	i = 0;
	while (p != NULL && !found)
	{ 
		i = search (p, k);
		if (i>0 && p->key[i] == k) 
			found = true;
		else 
		{ 
			fp = p; 
			p = p->ptr[i]; 
		}
	}
	if (found) 
	{ 
		*np = p; 
		*pos = i; 
		return true;
	}
	else 
	{
		*np = fp; 
		*pos = i; 
		return false;
	}
}