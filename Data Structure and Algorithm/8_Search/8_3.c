int BinSrch(RecordList  l,  KeyType  k)
/*�������l���۰������ؼ��ֵ���k��Ԫ�أ����ҵ�������ֵΪ��Ԫ���ڱ��е�
λ��*/
{
	int low,high,mid;
	low=1;  
	high=l.length;/*�������ֵ*/
	while( low <= high)
	{
		mid=(low+high) / 2;
		if  (k==l.r[mid]. key)  
			return (mid);/*�ҵ�����Ԫ��*/
		else  
			if (k<l.r[mid]. key) 
				high=mid-1;/*δ�ҵ����������ǰ��������в���*/
			else  
				low=mid+1;/*�����ں��������в���*/
	}
	return (0);
}