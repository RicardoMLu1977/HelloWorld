#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int n, m, k, sum = 0;
//	int arr[100000];
//	while ((scanf("%d%d", &n, &m)) != EOF)
//	{
//		if (0 == n && 0 == m)
//		{
//			break;
//		}
//		for (k = 0;k < n;k++)
//		{
//			scanf("%d",&arr[k]);
//		}
//		int max = 0;
//		int sum = 0;
//		for (int i = 0;i <= n-m;i++)
//		{
//			if (i > 0)
//			{
//				sum -= arr[i - 1];
//			}
//			if (0 == i)
//			{
//				for (int j = 0;j < m;j++)
//				{
//					sum += arr[i + j];
//				}
//			}
//			else
//			{
//				sum += arr[i + m-1]; 
//			}
//			if (sum >= max)
//			{
//				max = sum;
//			}
//		}
//		printf("%d\n",max);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n,count1 = 0,count2 = 0,count3 = 0;
//	int arr1[50], arr2[50];
//	while ((scanf("%d", &n) != EOF))
//	{
//		if (0 == n)
//		{
//			break;
//		}
//		int count1 = 0, count2 = 0, count3 = 0;
//		for (int i = 0;i < n;i++)
//		{
//			scanf("%d", &arr1[i]);
//		}
//		for (int j = 0;j < n;j++)
//		{
//			scanf("%d", &arr2[j]);
//		}
//		for (int m = 0;m < n;m++)
//		{
//			if (arr1[m] < arr2[m])
//			{
//				count1++;//成绩上升
//			}
//			if (arr1[m] == arr2[m])
//			{
//				count2++;//成绩持平
//			}
//			if(arr1[m]>arr2[m])
//			{
//				count3++;
//			}
//		}
//		printf("%d %d %d\n", count1, count2, count3);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[1000];
//	char a = 'a', A = 'A';
//	while ((scanf("%s",arr) != EOF))
//	{
//		a = 'a', A = 'A';//将字符转化为数字
//		int m = 0;//每次将m重新赋值
//		int len = strlen(arr);
//		for (int i = 0;i < 26;i++)//循环26遍，即从a到z，A到Z
//		{
//			for (int j = 0;j < len;j++)//遍历数组每个字符
//			{
//				if (a == arr[j] || A == arr[j])
//				{
//					m++;
//					break;
//				}
//			}
//			a++;
//			A++;
//		}
//		if (26 == m)
//		{
//			printf("Yes\n");
//		}
//		else
//			printf("No\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	int arr[1000];
//	while ((scanf("%d",&n) != EOF))
//	{
//		int count = 0;
//		if (0 == n)
//		{
//			break;
//		}
//		for (int a = 0;a < n;a++)
//		{
//			scanf("%d",&arr[a]);
//		}
//		for (int i = 0;i < n;i++)
//		{
//			for (int j =i+1;j < n;j++)
//			{
//				if (arr[i] > arr[j])
//				{
//					count++;
//				}
//			}
//		}
//		printf("%d\n", count);
// 
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	while ((scanf("%d", &n) != EOF))
//	{
//		if (n < 0)
//		{
//			break;
//		}
//		if (0 == n)
//		{
//			printf("2^0=1\n");
//		}
//		if (1 == n)
//		{
//			printf("2^1=1+1\n");
//		}
//		if (n > 1)
//		{
//
//			printf("2^%d=1", n);
//			for (int i = 1;i <= n - 1;i++)
//			{
//				float sum = 0, sum1 = 1, sum2 = 1;
//				for (int j = 1;j <= i;j++)
//				{
//					sum1 *= j;
//				}
//				for (int k = n;k > n - i;k--)
//				{
//					sum2 *= k;
//				}
//				sum = sum2 / sum1;
//				printf("+%.f", sum);
//			}
//			printf("+1\n");
//		}
//	}
//	return 0;
//}
//			/*int m, k, j;
//			for (int i = 1;i <= n - 1;i++)
//			{
//				long long sum = 1;
//				for (m = 1;m <= i;m++)
//				{
//					if (m < n - m)
//					{
//						m = n - m;
//					}
//					for (k = m + 1; k <= n; k++)
//					{
//						sum *= k;
//					}
//					for (j = 1; j <= n - m; j++)
//					{
//						sum /= j;
//					}
//					printf("+%I64d",sum);
//				}
//			}*/
//
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (scanf_s("%d", &n))
//	{
//		if (n < 0)
//		{
//			break;
//		}
//		printf("2^%d=", n);
//		int i,j, num = 0;
//		float k;
//		for (i = 0; i <= n; i++) 
//		{
//			k = 1;
//			for (j = 0; j < i; j++) 
//			{
//				if (i == j)
//				{
//					k = 1;
//				}
//				else
//				{
//					k = k * (n - j) / (i - j);
//				}
//			}
//			printf("%.f", k);
//			if (i != n)
//			{
//				printf("+");
//			}
//			else
//			{
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char ch = 'A';
//	int a[52][52];
//	while ((scanf("%c", &ch) != EOF))
//	{
//		int x = ch - 65+1;
//		if ('#' == ch)
//		{
//			break;
//		}
//		for (int i = 1;i <= x;i++)
//		{
//			for (int j = 1;j <= x;j++)
//			{
//				if (1 == i)
//				{
//					a[i][j] = j;
//					a[i][2*x - j] = j;
//				}
//				if (j <= i)
//				{
//					a[i][j] = i;
//					a[i][2 * x - j] = i;
//				}
//				if (j > i)
//				{
//					a[i][j] = j;
//					a[i][2 * x - j] = j;
//				}
//			}
//		}
//		for (int i = 1;i <= x;i++)
//		{
//			for (int j = 1;j <= 2 * x - 1;j++)
//			{
//				printf("%c", a[i][j] + 65 - 1);
//			}
//			printf("\n");
//		}
//		for (int i = x-1;i >= 1;i--)
//		{
//			for (int y = 2*x-1;y >=1;y--)
//			{
//				printf("%c", a[i][y] + 65 - 1);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int k, n, m, n1, m1;
//	int a[11][11], b[11][11], c[11][11];
//	scanf("%d", &k);
//	while (k--)
//	{
//		scanf("%d%d", &n, &m);
//		for (int i = 1;i <= n;i++)
//		{
//			for (int j = 1;j <= m;j++)
//			{
//				scanf("%d", &a[i][j]);
//			}
//		}
//		scanf("%d%d", &n1, &m1);
//		for (int i = 1;i <= n1;i++)
//		{
//			for (int j = 1;j <= m1;j++)
//			{
//				scanf("%d", &b[i][j]);
//			}
//		}
//		for (int i = 1;i <= n;i++)//行
//		{
//			for (int j = 1;j <= m1;j++)//列
//			{
//				int t = 0;
//				for (int d = 1;d <= m;d++)
//				{
//					t += (a[i][d] * b[d][j]);
//					c[i][j] = t;
//				}
//			}
//		}
//		for (int i = 1;i <= n;i++)
//		{
//			printf("%d", c[i][1]);
//			for (int j = 2;j <= m1;j++)
//			{
//				printf(" %d", c[i][j]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int mod = 1e9+7;
//int n, k;
//long long a[1001], b[1001][1001];
//void print()
//{
//	a[2] = 1;
//	for (int i = 3;i < 1001;i++)
//	{
//		a[i] = (i - 1) * (a[i - 1] + a[i - 2]) % mod;
//	}
//	for (int i = 0;i < 1001;i++)
//	{
//		b[i][0] = b[i][i] = 1;
//	}
//	for (int i = 2;i < 1001;i++)
//	{
//		for (int j = 1;j < i;j++)
//		{
//			b[i][j] = b[i - 1][j] + b[i - 1][j - 1];
//		}
//	}
//}
//int main()
//{
//	print();
//	while ((scanf("%d%d", &n, &k) != EOF))
//	{
//		if (0 == n && 0 == k)
//		{
//			break;
//		}
//		if (0 == k)
//		{
//			printf("1\n");
//		}
//		else
//		{
//			printf("%I64d\n", a[k] * b[n][k] % mod);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//const int mod = 1e9 + 7, N = 1001;
//int i, j, n, k;
//__int64 a[1001],b[1001][1001];
//int main()
//{
//	for (i = 0; i < N; i++)
//	{
//		b[i][0] = b[i][i] = 1;
//	}
//	for (i = 2; i < N; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			b[i][j] = (b[i - 1][j - 1] + b[i - 1][j]) % mod;
//		}
//	}
//	a[2] = 1;
//	for (i = 3; i < N; i++)
//	{
//		a[i] = (i - 1) * (a[i - 1] + a[i - 2]) % mod;
//	}
//	int n, k;
//    while (scanf("%d%d", &n, &k) != EOF && !(0 == n && 0 == k))
//    {
//		if (0 == k)
//		{
//			printf("1\n");
//		}
//		else
//		{
//			printf("%I64d\n", b[n][k] * a[k] % mod);
//		}
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	long long a[46],b[46][5];
//	int t, n;
//	while ((scanf("%d", &t) != EOF))
//	{
//		int i = 1;
//		while (i <= t)
//		{
//			scanf("%d", &n);
//			a[1] = 4;
//			b[1][1] = 1;
//			b[1][2] = 1;
//			b[1][3] = 1;
//			b[1][4] = 1;
//			for (int i = 2;i < 46;i++)
//			{
//				b[i][1] = b[i - 1][2] + b[i - 1][3];
//				b[i][2] = b[i - 1][1] + b[i - 1][3] + b[i - 1][4];
//				b[i][3] = b[i - 1][1] + b[i - 1][2] + b[i - 1][4];
//				b[i][4] = b[i - 1][2] + b[i - 1][3];
//				a[i] = b[i][1] + b[i][2] + b[i][3] + b[i][4];
//			}
//			printf("%I64d\n", a[n]);
//			i++;
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int k;
//	while ((scanf("%d", &k) != EOF))
//	{
//		for (int i = 1;i <= k;i++)
//		{
//			char a[200] = { 0 }, b[200] = { 0 };
//			scanf("%s%s", a,b);
//			int len1 = strlen(a);
//			int len2 = strlen(b);
//			int d = 0,x = 0,y = 0;;
//			for (x = 0;x < len1;x++)
//			{
//				if (b[y] == a[x])
//				{
//					y++;
//				}
//				if (y == len2)
//				{
//					break;
//				}
//			}
//			if (y == len2)
//			{
//				printf("Yes\n");
//			}
//			else
//				printf("No\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int k;
//	while ((scanf("%d",&k) != EOF))
//	{
//		while (k--)
//		{
//			char a[20] = { 0 };
//			int w[20] = { 0 };
//			int sum = 0;
//			for (int i = 0;i < 18;i++)
//			{
//				long long b = 1;
//				for (int j = 1;j <=i;j++)
//				{
//					b *=2;
//				}
//				w[i] = b % 11;
//			}
//			scanf("%s",a);
//			if (a[17] == 'X')
//			{
//				a[17] = ':';
//			}
//			for (int i = 0;i < 18;i++)
//			{
//				sum += w[17 - i] * (a[i] - '0');
//			}
//			if (1 == sum % 11)
//			{
//				printf("Yes\n");
//			}
//			else
//			{
//				printf("No\n");
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int t;
//	while ((scanf("%d", &t) != EOF))
//	{
//		while (t--)
//		{
//			char a[100], b[100];
//			scanf("%s%s",&a,&b);
//			int len1 = strlen(a);
//			int len2 = strlen(b);
//			int count = 0,i,j;
//			for (j = 0;j < len1;j++)
//			{
//				int i = 0;
//				if (b[i] == a[j])
//				{
//					count++;
//					i++;
//				}
//				for (;i < len2;i++)
//				{
//					if (b[i] == a[j - 1])
//					{
//						for (;;j--)
//						{
//							if (j < 0)
//							{
//								j = len1;
//							}
//							if (b[i] == a[j - 1])
//							{
//								count++;
//							}
//						}
//					}
//					if (b[i] == a[j + 1])
//					{
//						for (;;j++)
//						{
//							if (j = len1)
//							{
//								j = 0;
//							}
//							if (b[i] == a[j + 1])
//							{
//								count++;
//							}
//						}
//					}
//				}
//			}
//			if (count == len2)
//			{
//				puts("Yes");
//			}
//			else
//				puts("No");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    int t;
//    scanf("%d",&t);
//    while (t--)
//    {
//        int j = 0, i = 0,s = 0,k,d;
//        char a[101], b[101];
//        scanf("%s%s",&a,&b);
//        int len1 = strlen(a);
//        int len2 = strlen(b);
//        for (i = 0;i < len1;i++) 
//        {
//            d = 1;
//            k = i;
//            for (j = 0;j < len2;j++)//遍历b数组
//            {
//                if (b[j] != a[k])//如果字母不相同，则跳出进入下一个if（s==0）
//                {
//                    d = 0;
//                    break;
//                }
//                k++;//如果首字母相同则比较第二个字母
//                if (k == len1)//如果b长度大于a长度，则a先遍历完
//                {
//                    k = 0;//将k归零再次比较，例如a数组为ac，b数组为acaca
//                }
//            }
//            if (d == 1)//正向遍历比较，即从第一个字母依次从左往右比较
//            {
//                puts("Yes");
//                s = 1;//更改s的值防止再次进入循环
//                break;
//            }
//        }
//        if (s == 0)
//        {
//            for (i = 0;i < len1;i++)
//            {
//                d = 1;
//                k = i;
//                for (j = 0;j < len2;j++)
//                {
//                    if (b[j] != a[k])//先判断首字母是否相等
//                    {
//                        d = 0;
//                        break;
//                    }
//                    k--;//逆向遍历数组
//                    if (k < 0)
//                    {
//                        k = len1 - 1;
//                    }
//                }
//                if (d == 1)
//                {
//                    puts("Yes");
//                    break;
//                }
//            }
//            if (d == 0)
//            {
//                puts("No");
//            }
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[201];
//	while (gets(arr))
//	{
//		int len = strlen(arr);
//		int count = 0, count1 = 0;
//		for (int i = 0;i < len;i++)
//		{
//			if (arr[i] == ' ')
//			{
//				count++;
//			}
//		}
//		char a = 'a', A = 'A';
//		for (int i = 0;i < 26;i++)
//		{
//			for (int j = 0;j < len;j++)
//			{
//				if (a == arr[j] || A == arr[j])
//				{
//					count1++;
//					break;
//				}
//			}
//			a++;
//			A++;
//		}
//		if (count + 1 <= 10 && count1 <= 10)
//		{
//			puts("Yes");
//		}
//		else
//			puts("No");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (n--)
//	{
//		char arr[16];
//		char arr[20] = 0;
//		puts("START");
//		for (int i = 0;i < 20;i++)
//		{
//			scanf("%s", &arr[i]);
//		}
//		puts("END");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n,k;
//	scanf("%d",&k);
//	while (k--)
//	{
//		scanf("%d",&n);
//		int i,j,d,e;
//		for (i = 1;i < sqrt(n);i++)
//		{
//			d = 0,e = 1,j = 0;
//			if (0 == n % i)
//			{
//				j = n / i;
//				if (1 == i && i!=j)
//				{
//					for (int a = 2;a <= sqrt(j);a++)
//					{
//						if (j % a == 0)
//						{
//							e = 0;
//						}
//					}
//					if (1 == e)
//					{
//						puts("Yes");
//						break;
//					}
//					if (i != 1)
//					{
//						for (int a = 2, b = 2;a <= sqrt(i), b <= sqrt(j);a++, b++)
//						{
//							if (i % a == 0 || j % b == 0)
//							{
//								d = 1;
//							}
//						}
//					}
//				}
//			}
//		}
//		if (1 == d)
//		{
//			puts("Yes");
//		}
//		else
//			puts("No");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int k;
//	scanf("%d", &k);
//	while (k--)
//	{
//		int i, j, t, d, n;
//		scanf("%d", &n);
//		d = 0;
//		for (i = 2;i<sqrt(n);i++)
//		{
//			if (n % i == 0)
//			{
//				t = n / i;
//				d = 1;
//				for (j = 2;j <= sqrt(t);j++)
//				{
//					if (t % j == 0)
//					{
//						d = 0;
//						break;
//					}
//				}
//				break;
//			}
//		}
//		puts(d ? "Yes" : "No");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int k;
//	while ((scanf("%d", &k) != EOF))
//	{
//		while (k--)
//		{
//			int n = 0,d = 1,e = 1,count = 0,count1 = 0,a = 1,j = 0;//n为输入的数，d用来判断质数，count与count1分别计算n的位数与去掉最高位后的位数，j为余数
//			int m = n,k = j;
//			scanf("%d",&n);
//			count++;
//			m = m / 10;
//			while (m > 0)
//			{
//				count++;//count计算有几位
//				m = m / 10;
//			}
//			for (int a = 1;a < count;a++)
//			{
//				a *= 10;
//			}
//			for (int b = count;b >= 1;b--)
//				{
//					j = n % a;
//					if (1 == j || 0 == j)
//					{
//						puts("No");
//						break;
//					}
//					a /= 10;
//					count1++;
//					k /= 10;
//					while (k > 0)
//					{
//						count1++;
//						k /= 10;
//					}
//					if (count1 != count - 1)
//					{
//						puts("No");
//						break;
//					}
//					if(count1 == count)
//					{
//						for (int i = 2;i < sqrt(j);i++)
//						{
//							if (0 == j % i)
//							{
//								e = 0;
//							}
//						}
//					}
//					if (1 == e)
//					{
//						puts("Yes");
//						break;
//					}
//					else
//						puts("No");
//					break;
//				}
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int jd(int n)//计算去掉一位后是否为素数，是返回1，不是返回0
//{
//    int d = 1;
//    if (1 == n || 0 == n)
//    {
//        d = 0;
//    }
//    for (int i = 2;i*i <= n; i++)
//    {
//        if (n % i == 0)//如果n为素数则d变成0
//        {
//            d = 0;
//            break;
//        }
//    }
//    return d;
//}
//int trans(int n, char str[], int m)//n为长度，wei表示从第几个数字开始转换为整数
//{
//    int num = 0;
//    for (int i =m; i <= n - 1; i++)
//    {
//        num = num * 10 + (str[i] - '0');//去掉首数字
//    }
//    return num;
//}
//int main()
//{
//    int K, i, len, d;
//    scanf("%d", &K);
//    while (K--)
//    {
//        d = 1;
//        char str[20] = { 0 };
//        scanf("%s", str);//输入n,默认为素数
//        len = strlen(str);//判断n有几位
//        for (i = 0; i < len; i++)
//        {
//            if (str[i] == '0')//判断有没有0
//            {
//                d = 0;
//                break;
//            }
//            if (0 == jd(trans(len, str, i)))//参数i的作用确定从第几位开始没有0
//            {
//                d = 0;
//                break;
//            }
//        }
//        if (0 == d)
//        {
//            puts("No");
//        }
//        else
//        {
//            puts("Yes");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#define N 1000100
//int arr[1001010], len = 0, a[1001010], sum[1001010], pre[1001010];
//int main()
//{
//	int t;
//	scanf("%d",&t);
//	while (t--)
//	{
//		int a, b ,flag = 1,flag1 = 1,count = 0,k = 0;
//		int arr[1000] = { 0 };
//		scanf("%d%d", &a, &b);
//		for (int i = 2;i<=2*b;i++)
//		{
//			if (1 == i % 2)//判断奇数
//			{
//				if (1 == i)
//				{
//					flag = 0;
//				}
//				for (int j = 2;j * j <= i;j++)//判断素数
//				{
//					if (0 == i % j)
//					{
//						flag = 0;
//					}
//				}
//				if (1 == flag)
//				{
//					arr[k] = i;
//					k += 1;
//				}
//			}
//		}
//		for (int j = 0;j < k-1;j++)
//		{
//			int h = 0;
//			h = (arr[j] + arr[j + 1]) / 2;
//			for (int n = 2;n * n <= h;n++)
//			{
//				if (0 == h % n)
//				{
//					flag1 = 0;
//				}
//				if (0 == flag1 && a <= h && h <= b)
//				{
//					count++;
//				}
//			}
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include<math.h>
//#define N 1000100
//int prime[N], arr[N], sum[N], inner[N],len = 0;
//void interprime()
//{
//    memset(prime, 0, sizeof(prime));
//    int i, j;
//    for (i = 2;i <= sqrt(N);i++)//素数打表，判断哪些是素数
//    {
//        if (prime[i] == 0)
//        {
//            for (j = i * i;j <= N;j += i)
//            {
//                prime[j] = 1;
//            }
//        }
//    }
//    for (i = 2;i <= N;i++)
//    {
//        if (prime[i] == 0)//筛选素数
//        {
//            arr[len++] = i;//符合要求的素数存入arr数组中
//        }
//    }
//}
//int main()
//{
//    int i;
//    interprime();
//    memset(prime, 0, sizeof(prime));
//    memset(sum, 0, sizeof(sum));
//    memset(inner, 0, sizeof(inner));
//    for (i = 1;i < len - 1;i++)
//    {
//        int t = (arr[i] + arr[i + 1]) / 2;//连续素数平均值
//        if (prime[t] == 0)//判断t是否也是素数,已经初始化为0，如果是素数，则会变成1，以此达到存储的目的
//        {
//            inner[t] = 1;//内部素数打表
//        }
//    }
//    for (i = 1;i <= N;i++)
//    {
//        if (inner[i] == 1)
//        {
//            sum[i] = sum[i - 1] + 1;//求和打表
//        }
//        else
//        {
//            sum[i] = sum[i - 1];
//        }
//    }
//    int n;
//    scanf("%d", &n);
//    while (n--)
//    {
//        int a,b;
//        scanf("%d%d", &a, &b);
//        printf("%d\n", sum[b] - sum[a - 1]);//区间相减就是结果
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[4] = { 0 };
//	for (int i = 0;i < 4;i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 1;i < 4;i++)
//	{
//		for (int j = 0;j < 4 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int a = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = a;
//			}
//		}
//	}
//	for (int i = 0;i < 4;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int k,a,b;
//	scanf("%d", &k);
//	while (k--)
//	{
//		int i = 0,j = 0,len = 0;
//		int arr[11] = { 0 }, brr[11] = { 0 };
//		scanf("%d%d", &a, &b);
//		while (a)
//		{
//			arr[i] = a % 10;
//			a /= 10;
//			i++;
//		}
//		while (b)
//		{
//			brr[j] = b % 10;
//			b /= 10;
//			j++;
//		}
//		int sum = 0, t = 1;
//		len = i > j ? i : j;
//		for (int i = 0;i < len;i++)
//		{
//			sum += ((arr[i] + brr[i]) % 10) * t;
//			t *= 10;
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int x, y;
//	while((scanf("%d%d", &x, &y) != EOF))
//	{
//		if (0 == x && 0 == y)
//		{
//			break;
//		}
//		int a = x, b = y;
//		int t = a % b;
//		while (t != 0)
//		{
//			a = b;
//			b = t;
//			t = a % b;
//		}
//		printf("%d\n", x * y / b);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int k;
//	scanf("%d", &k);
//	while (k--)
//	{
//		int n, m;
//		int sum = 1,sum1 = 1;//sum为总的选择情况，sum1为一个都不喜欢的情况，sum—p就等于至少喜欢一个的情况
//		scanf("%d%d", &n, &m);
//		if (0 == m || 1 == m)
//		{
//			printf("1\n");
//		}
//		if (n == m)
//		{
//			printf("0\n");
//		}
//		if (n > m && 0 != m && 1!=m && n != m)
//		{
//			for (int i = n;i >= n-1;i--)
//			{
//				sum *= i;
//			}
//			for (int i = 1;i <= 2;i++)
//			{
//				sum /= i;
//			}
//			for (int j = m;j >= m - 1;j--)
//			{
//				sum1 *= j;
//			}
//			for (int j = 1;j <= 2;j++)
//			{
//				sum1 /= j;
//			}
//			int remain = sum - sum1;
//			int a = sum, b = remain, t = a % b;
//			while (t != 0)
//			{
//				a = b;
//				b = t;
//				t = a % b;
//			}
//			sum /= b;
//			remain /= b;
//			printf("%d/%d\n", remain, sum);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF && -1 != n)
//	{
//		int arr[8] = { 0 }, brr[8] = { 0 },m = 0;
//		for (int i = 7;i >= 0;i--)
//		{
//			int sum = 1;
//			for (int j = 1;j <= i;j++)
//			{
//				sum *= 2;
//			}
//			arr[m] = sum;
//			m++;
//		}
//		int i = 0,count = 0,k = 0,sum1 = 0;
//		for (i = 0;i < 8;i++)
//		{
//			sum1 += arr[i];
//			if (sum1 < n)
//			{
//				count++;
//				brr[k] = 1;
//				k++;
//				continue;
//			}
//			if (sum1 > n)
//			{
//				sum1 -= arr[i];
//				brr[k] = 0;
//				k++;
//				continue;
//			}
//			if (sum1 == n)
//			{
//				brr[k] = 1;
//				if (k < 7)
//				{
//					count++;
//				}
//				break;
//			}
//		}
//		if (k-1 < 7)
//		{
//			for (int i = k+1;i <= 7;i++)
//			{
//				brr[i] = 0;
//			}
//		}
//		if (0 == count % 2 && 0 == brr[7])
//		{
//			puts("Yes");
//		}
//		if(0 == count % 2 && 0 != brr[7])
//		{
//			puts("No");
//		}
//		if (1 == count % 2 && 1 == brr[7])
//		{
//			puts("Yes");
//		}
//		if(1 == count % 2 && 1 != brr[7])
//		{
//			puts("No");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int base[20] = { 0,1 };
//	for (int i = 2;i < 20;i++)
//	{
//		base[i] = base[i - 1] * i;
//	}
//	int n;
//	while ((scanf("%d", &n) != EOF))
//	{
//		if (0 == n)
//		{
//			puts("0");
//			continue;
//		}
//		int j = 0;
//		for (j = 0;base[j+1] <= n;j++);
//		int s = 0;
//		while (n)
//		{
//			for (;j >= 1;j--)
//			{	
//				s = n / base[j];
//				printf("%d",s);
//				n %= base[j];
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (scanf("%d", &n)!=EOF && 0 != n)
//	{
//		char arr[5][105];
//		int crr[5] = { 0 };
//		for (int i = 1;i <= n;i++)
//		{
//			arr[0][i] = 'G';
//		}
//		for (int i = 1;i <= 3;i++)
//		{
//			for (int j = 1;j <= n;j++)
//			{
//				scanf(" %c",&arr[i][j]);
//				if (arr[i][j] < arr[0][j])
//					arr[0][j] = arr[i][j];	
//			}
//		}
//		for (int i = 1;i <= n;i++)
//		{
//			printf("%c", arr[0][i]);
//			crr[arr[0][i] - 'A']++;//第几个等级
//		}
//		printf("\n%d", crr[0]);
//		for (int i = 1; i <= 4; i++)
//			printf(" %d", crr[i]);
//		puts("");
//	}
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//    int N;
//    while (scanf("%d", &N) != EOF && N != 0)
//    {
//        int crr[5] = { 0 };
//        char arr[5][105];
//        for (int i = 0; i < N; i++)           // grades[0]保存最高等级水平,默认设置最低
//            arr[0][i] = 'G';
//        for (int i = 0; i < 3; i++)
//        {
//            for (int j = 0; j < N; j++)
//            {
//                scanf(" %c", &arr[i][j]);
//                if (arr[i][j] < arr[0][j])
//                    arr[0][j] = arr[i][j];
//            }
//        }
//        for (int i = 0; i < N; i++)           // 输出同时统计各水平的个数
//        {
//            printf("%c", arr[0][i]);
//            crr[arr[0][i] - 'A']++;
//        }
//        printf("\n%d", crr[0]);
//        for (int i = 0; i < 4; i++)
//            printf(" %d", crr[i]);
//        puts("");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF && 0 != n)
//	{
//		long long sum = 1,remain = 0,sum1 = 0;
//		if (1 == n)
//		{
//			puts("2");
//			continue;
//		}
//		if (2 == n)
//		{
//			puts("3");
//			continue;
//		}
//		if (3 == n)
//		{
//			puts("5");
//			continue;
//		}
//		for (int i = 0;i < n;i++)
//		{
//			sum *= 2;
//		}
//		for (int j = 3;j < n;j++)
//		{
//			sum1 += ((n - j) * 4);
//		}
//		remain = sum - sum1 - 3-1;
//		printf("%I64d\n", remain);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a[41] = { 0 }, b[41] = { 0 };//a为正面次数 b为反面次数 
//	int i, n;
//	while (scanf("%d", &n) && n != 0)
//	{
//		a[0] = 1;b[0] = 1;//第1次为正面的次数=1 第1次为反面的次数=1
//		for (i = 1;i < n;i++)
//		{
//			a[i] = b[i - 1];
//			b[i] = a[i - 1] + b[i - 1];
//		}
//		printf("%d\n", a[n - 1] + b[n - 1]);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF && 0 != n)
//	{
//		int sum = 0;
//		for (int i = 1;i <= sqrt(n);i++)
//		{
//			int a = 0;
//			if (0 == n % i)
//			{
//				a = n / i;
//				sum += (a + i);
//			}
//			if (a == i)
//			{
//				sum -= i;
//			}
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int k;
//	while (scanf("%d", &k) != EOF)
//	{
//		while (k--)
//		{
//			int n,col,i,j,x,y;
//			char arr[53][53];
//			scanf("%d", &n);
//			int row = n;
//			x = 1, y = 1;
//			for (i = row;i > 0;i--)//行
//			{
//				col = 2 * i - 1;//列
//				for (j = y;j < y + col;j++)
//				{
//					arr[x][j] = i + 'A' - 1;
//					arr[x + col - 1][j] = i + 'A' - 1;
//					arr[j][x] = i + 'A' - 1;
//					arr[j][x + col - 1] = i + 'A' - 1;
//				}
//				x++;
//				y++;
//			}
//			for (int i = 1;i <= 2 * n - 1;i++)
//			{
//				for (int j = 1;j <= 2 * n - 1;j++)
//				{
//					printf("%c", arr[i][j]);
//				}
//				puts("");
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#define mod 1000000007
//#define N 1000010
//int arr[N];
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF && 0 != n)
//	{
//		__int64 count = 0;
//		memset(arr, 0, sizeof(arr));
//		for (int i = 1;i <= n;i++)
//		{
//			arr[i] = i;
//		}
//		for (int i = 1;i <= n;i++)
//		{
//			for (int j = i + 1;j <= n;j++)
//			{
//				for (int k = j + 1;k <= n;k++)
//				{
//					int sum = arr[i] + arr[j] + arr[k];
//					if (0 == sum % 3)
//					{
//						count++;
//					}
//				}
//			}
//		}
//		count %= mod;
//		printf("%d\n", count);
//	}
//	return 0;
//}
//#include<stdio.h>
//#define mod 1000000007
//int main()
//{
//	int n;
//	__int64 x, y, z,x1,y1,z1;
//	while (scanf("%d", &n) != EOF && 0 != n)
//	{
//		int sum = 0,sum1 = 0;
//		x = n / 3;
//		y = n / 3;
//		z = n / 3;
//		x1 = x;
//		y1 = y;
//		z1 = z;
//		if (2 == n % 3)
//		{
//			y++;
//			z++;
//		}
//		if (1 == n % 3)
//		{
//			y++;
//		}
//		x1 = x * (x - 1) * (x - 2) / 6;
//		y1 = y * (y - 1) * (y - 2) / 6;
//		z1 = z * (z - 1) * (z - 2) / 6;
//		sum1 = (x * y * z) % mod;
//		sum = (x1 + y1 + z1+sum1) % mod;
//		printf("%d\n", sum);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	char nrr[4] = { 0 };
//	while ((scanf("%s", &nrr) != EOF) && 0 != atoi(nrr))
//	{
//		int arr[4] = { 0 }, brr[4] = { 0 };
//		if (6174 == atio(nrr))
//		{
//			puts("0");
//		}
//		else
//		{
//			judge(nrr,arr, brr);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int n, t;
//int num[5];
//int cmp(const void* p1, const void* p2)// 升序
//{         
//    return *(int*)p1 - *(int*)p2;//若要为降序则只需要将p1与p2互换位置
//}
//void total()                                   // 把整数各个位数分解,方便排序
//{
//    for (int i = 0; i < 4; i++)
//    {
//        num[i] = n % 10;
//        n /= 10;
//    }
//}
//int rise()
//{
//    qsort(num, 4, sizeof(num[0]), cmp);             // 快排 (升序) 
//    t = 0;
//    for (int k = 0; k < 4; k++)                  // 还原最小值
//        t = t * 10 + num[k];
//    return t;
//}
//int drop()
//{
//    t = 0;
//    for (int k = 3; k >= 0; k--)                  // 还原最大值
//        t = t * 10 + num[k];
//    return t;
//}
//void solve()
//{
//    total();
//    int A = rise();
//    int B = drop();
//    n = B - A;
//}
//int main()
//{
//    while (scanf("%d", &n) != EOF && n != 0)
//    {
//        int cnt = 0;
//        while (n != 6174)
//        {
//            solve();
//            cnt++;
//        }
//        printf("%d\n", cnt);
//    }
//    return 0;
//} 
//#include<stdio.h>
//int main()
//{
//	int k;
//	while ((scanf("%d", &k)) != EOF)
//	{
//		while (k--)
//		{
//			int a,a1,b,b1,c,c1,n = 1;
//			int count = 1,count1 = 0,sum = 0,sum1 = 0,cnt = 1,cnt1 = 1;
//			scanf("%d+%d=%d", &a, &b, &c);
//			if (c == a + b)
//			{
//				puts("0");
//			}
//			else
//			{
//				a1 = a;
//				b1 = b;
//				c1 = c;
//				while (c1 / 10 != 0)
//				{
//					c1 /= 10;
//					count++;//c有几位
//				}
//				while (a1 / 10 != 0)
//				{
//					a1 /= 10;
//					cnt++;
//				}
//				while (b1 / 10 != 0)
//				{
//					b1 /= 10;
//					cnt1++;
//				}
//				if (cnt1 > cnt)
//				{
//					int t = cnt;
//					cnt = cnt1;
//					cnt1 = t;
//				}
//				for (int i = 1;i <= count - cnt;i++)
//				{
//					n *= 10;
//					count1++;
//				}
//				sum = a * n + b;
//				if (cnt == cnt1)
//				{
//					sum1 = b * n + a;
//				}
//				else
//				{
//					sum1 = b * n*10 + a;
//				}
//				if (sum == c && sum1 != c)
//				{
//					printf("%d\n", count1);
//				}
//				if (sum1 == c && sum != c)
//				{
//					printf("-%d\n", count1);
//				}
//				if (sum == c && sum1 == c)
//				{
//					printf("%d\n", count1);
//				}
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//#define N 1000000000
//int main()
//{
//    int x, c1, c, a, b, n, count = 0,t = 0;
//    scanf("%d", &x);
//    while (x--)
//    {
//        scanf("%d+%d=%d", &a, &b, &c);
//        count = 0, t = 0;
//        if ((a + b) == c)
//        {
//            printf("0\n");
//        }
//        else 
//        {
//            for (n = 1;n <= N;n = n * 10) 
//            {
//                if (a * n + b == c) 
//                {
//                    t = 1;//确定是左移后不在判断右移
//                    break;
//                }
//                count++;
//            }
//            if (t == 0) 
//            {
//                count = 0;
//                for (n = 1;n <= N;n = n * 10) 
//                {
//                    if (a + b * n == c) 
//                    {
//                        break;
//                    }
//                    count--;
//                } 
//            }
//            printf("%d\n", count);
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int k;
//	while ((scanf("%d", &k) != EOF))
//	{
//		while (k--)
//		{
//			int n,i = 0;
//			int arr[33] = { 0 }, brr[33] = { 0 };
//			scanf("%d", &n);
//			while (n / 2 != 0)
//			{
//				arr[i] = n % 2;
//				n /= 2;
//				i++;
//			}
//			arr[i]=n % 2;
//			int m = 0;
//			for (int j = i;j > i / 2;j--)
//			{
//				int t = arr[m];
//				arr[m] = arr[j];
//				arr[j] = t;
//				m++;
//			}
//			int count = 0,p = 0;
//			i += 1;
//			int j = 0;
//			while (i--)
//			{
//				if (1 == arr[j])
//				{
//					count++;
//					j++;
//				}
//				if (0 == arr[j])
//				{
//					brr[p] = count;
//					p++;
//					count = 0;
//					break;
//				}
//			}
//			int max = 0;
//			for (int l = 0;l <= p;l++)
//			{
//				if (brr[l] > max)
//				{
//					max = brr[l];
//				}
//			}
//			printf("%d\n", max);
//		}
//	}
//}
//#include<stdio.h>
//int main()
//{
//	int k, t, count, max;
//	__int64 n;
//	scanf("%d", &k);
//	while (k--)
//	{
//		count = 0, max = 0;
//		scanf("%I64d", &n);
//		while (n)
//		{
//			if (1 == n%2)//余数倒过来就是二进制 
//			{
//				count++;
//			}
//			else
//			{
//				if (count > max)
//				{
//					max = count;
//				}
//				count = 0;
//			}
//			n /= 2;
//		}
//		if (count > max)//没有0的情况 
//		{
//			max = count;
//		}
//		printf("%d\n", max);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int k;
//	scanf("%d", &k);
//	while (k--)
//	{
//		int n,i;
//		scanf("%d", &n);
//		char str[12] = {0};
//		while (n--)
//		{
//			scanf(" %s", str);
//			int longer = strlen(str);
//			int nums = 0;
//			for (i = 0; i < longer; i++)
//			{
//				if ((str[i] >= '0') && (str[i] <= '9'))
//				{
//					nums = nums * 10 + str[i] - '0';
//				}
//			}
//		}
//
//	}
//	return 0;
//}

//1345  素数字符串
//#include<stdio.h>
//#include<string.h>
//#include<stdbool.h>
//#define maxn 1100010
//int prime[200000];
//bool factor[2200000];//用来记录最小素因子
//int isprime[11][maxn];
//int main()
//{
//    //思路：先使用欧拉筛打表2到1000000之间的素数，再遍历L-1到R-1（对应数组下标）之间的数码，每次count++	 
//        int D,m = 0, cnt = 0,i,j;
//        char str[10];
//        int p = 1;
//        memset(factor, 0, sizeof(factor));
//        memset(isprime, 0, sizeof(isprime));
//        for (i = 2; i < 2100000; i++) {//欧拉筛法（不理解的同学可以去C一下）
//            if (!factor[i])
//            {
//                prime[p++] = i;//将素数i存在prime数组中(ordNum表示序数)
//            }
//            for (j = 1; j < p; j++) 
//            {
//                if (i * prime[j] > 2100000)break;//越界退出!
//                factor[i * prime[j]] = 1;//将非素数标记为1,素数仍为0(任何数的最小质因数都是确定的)
//                if (i % prime[j] == 0) break;//筛过一次的不用再重筛!
//            }
//        }
//        for (i = 1; prime[i] != 0; i++) 
//        {
//            memset(str,'\0', sizeof(str));
//            sprintf(str, "%d", prime[i]);//sprintf函数可以将int型整数转为int型数组
//            for (j = 0; str[j] != '\0'; j++) 
//            {
//                for (D = 0; D <= 9; D++)
//                {
//                    if (str[j] == (char)(D + 48))
//                    {
//                        isprime[D][cnt + j + 1] = 1;//'0'的ASCII码是48
//                    }
//                }
//            }
//            cnt += strlen(str);
//        }
//        for (D = 0; D <= 9; D++) 
//        {
//            for (i = 2; i <= 1000000; i++) 
//            {
//                isprime[D][i] += isprime[D][i - 1];//前缀和,前缀和就是从位置1到位置i这个区间内的所有的数字之和。
//            }
//        }
//        int T, L, R, d;
//        scanf("%d", &T);
//        while (T--)
//        {
//            scanf("%d %d %d", &L, &R, &d);
//            printf("%d\n", isprime[d][R] - isprime[d][L - 1]);
//        }
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//int prime[160000];//按顺序存储素数(从1开始)
//bool check[2100000];//检查素数
//int time[11][1100000];//存储数字0~9出现的次数
//
//int main() {
//    int i, j, D, cnt = 0, ordNum = 1;
//    char str[10];
//    memset(check, 0, sizeof(check));
//    memset(time, 0, sizeof(time));
//    for (i = 2; i < 2100000; i++) {//欧拉筛法（不理解的同学可以去C一下）
//        if (!check[i])prime[ordNum++] = i;//将素数i存在prime数组中(ordNum表示序数)
//        for (j = 1; j < ordNum; j++) {
//            if (i * prime[j] > 2100000)break;//越界退出!
//            check[i * prime[j]] = 1;//将非素数标记为1,素数仍为0(任何数的最小质因数都是确定的)
//            if (i % prime[j] == 0)break;//筛过一次的不用再重筛!
//        }
//    }
//    for (i = 1; prime[i] != 0; i++) {
//        memset(str, '\0', sizeof(str));
//        sprintf(str, "%d", prime[i]);//sprintf函数可以将int型整数转为int型数组
//        for (j = 0; str[j] != '\0'; j++) {
//            for (D = 0; D <= 9; D++) {
//                if (str[j] == (char)(D + 48))time[D][cnt + j + 1] = 1;//'0'的ASCII码是48
//            }
//        }
//        cnt += strlen(str);
//    }
//    for (D = 0; D <= 9; D++) {
//        for (i = 2; i <= 1000000; i++) {
//            time[D][i] += time[D][i - 1];//前缀和
//        }
//    }
//    int T, L, R, d;
//    scanf_s("%d", &T);
//    while (T--) {//不要将上面的素数打表和求前缀和放到循环里，不然TLE到怀疑人生QAQ
//        scanf_s("%d %d %d", &L, &R, &d);
//        printf("%d\n", time[d][R] - time[d][L - 1]);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<stdbool.h>
//#include<math.h>
//int prime[500000];//按顺序存储素数(从1开始)
//bool check[7000000];//检查素数
//int main()
//{
//	int k;
//	scanf("%d", &k);
//	while (k--)
//	{
//		int a = 0, b = 0,i = 0,j = 0;
//        int p = 1;
//		scanf("%d%d", &a, &b);
//        memset(check, 0, sizeof(check));
//        memset(prime, 0, sizeof(prime));
//        for (i = 2; i < 7000000; i++) 
//        {//欧拉筛法
//            if (!check[i])
//            {
//                prime[p++] = i;//将素数i存在prime数组中(p表示序数)
//            }
//            for (j = 1; j < p; j++) 
//            {
//               if (i * prime[j] > 7000000)
//                  break;//越界退出!
//               check[i * prime[j]] = 1;//将非素数标记为1,素数仍为0(任何数的最小质因数都是确定的)
//               if (i % prime[j] == 0)
//                  break;//筛过一次的不用再重筛!
//            }
//        }
//        int cnt = 0;
//        for (int n = 0;n<500000;n++)
//        {
//            if (prime[n] >= a && prime[n] < b)
//            {
//                int m = prime[n] + 2;
//                int flag = 1;
//                for (int i = 2;i <= sqrt(m);i++)
//                {
//                    if (0 == m % i)
//                    {
//                        flag = 0;
//                    }
//                }
//                if (1 == flag)
//                {
//                    cnt++;
//                }
//            }
//            if (prime[n] >= b)
//                break;
//        }
//        cnt--;
//        printf("%d\n", cnt);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int prime[5000005] = { 0 };
//int flag[5000001];
//int main()
//{
//    int i, j, k, a, b;
//    for (i = 2;i < 5000005;i++)
//    {
//        prime[i] = 1;
//    }
//    memset(flag, 0, sizeof(flag));
//    for (i = 2;i < 2500000;i++)
//    {
//        if (prime[i])
//        {
//            for (j = i + i;j < 5000001;j += i)
//                prime[j] = 0;
//        }
//    }
//    for (i = 2;i < 5000001;i++)
//    {
//        flag[i] += flag[i - 1];
//        if (prime[i] == prime[i + 2] && prime[i] == 1)
//            flag[i + 2]++;
//    }
//    scanf("%d", &k);
//    while (k--)
//    {
//        scanf("%d%d", &a, &b);
//        printf("%d\n", flag[b]-flag[a+1]);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int k;
//	scanf("%d", &k);
//	while (k--)
//	{
//		int a, b, n = 0;
//		int num[1000] = { 0 };
//		int sum = 0, sum1 = 0, sum2 = 0;
//		int flag = 0;
//		scanf("%d%d", &a, &b);
//		for (int i = 1;i < 20000;i++)
//		{
//			sum = a * a + b * b;
//			sum1 = a * a + i * i;
//			sum2 = b * b + i * i;
//			int l = sqrt(sum);
//			int m = sqrt(sum1);
//			int n = sqrt(sum2);
//			if (i * i == sum)
//			{
//				printf("%d\n", l);
//				flag = 1;
//				break;
//			}
//			if (b * b == sum1)
//			{
//				printf("%d\n", i);
//				flag = 1;
//				break;
//			}
//			if (a * a == sum2)
//			{
//				printf("%d\n", i);
//				flag = 1;
//				break;
//			}
//		}
//		if (0 == flag)
//		{
//			puts("None");
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int k;
//	scanf("%d", &k);
//	while (k--)
//	{
//		char sen[1003] = { 0 };
//		scanf("%s", sen);
//		int len = strlen(sen);
//		int cnt = 0, cnt1 = 0, cnt2 = 0;
//		for (int i = 0;i < len;i++)
//		{
//			if (sen[i] == 'X')
//			{
//				cnt++;
//			}
//			if (sen[i] == 'T')
//			{
//				cnt1++;
//			}
//			if (sen[i] == 'U')
//			{
//				cnt2++;
//			}
//		}
//		int min = cnt;
//		if (cnt1 < cnt)
//		{
//			min = cnt1;
//		}
//		if (cnt2 < min)
//		{
//			min = cnt2;
//		}
//		printf("%d\n", min);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//int cmp(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//int main()
//{
//	int k;
//	scanf("%d", &k);
//	while (k--)
//	{
//		int num[4] = { 0 }, num1[4] = {0};
//		for (int i = 0;i < 3;i++)
//		{
//			scanf("%d", &num[i]);
//		}
//		for (int j = 0;j < 3;j++)
//		{
//			scanf("%d", &num1[j]);
//		}
//		//判断是否为三条
//		qsort(num, 3, sizeof(int), cmp);
//		qsort(num1, 3, sizeof(int), cmp);
//		int flag = 1, flag1 = 1;//num为Alice，num1为Bob
//		for (int i = 0;i < 2;i++)
//		{
//			if (num[i] != num[i + 1])
//			{
//				flag = 0;
//			}
//			if (num1[i] != num1[i + 1])
//			{
//				flag1 = 0;
//			}
//		}
//		if (1 == flag && 0 == flag1)
//		{
//			puts("Alice");
//		}
//		if (0 == flag && 1 == flag1)
//		{
//			puts("Bob");
//		}
//		if (1 == flag && 1 == flag1)//都为三条
//		{
//			if (num[0] == num1[0])
//			{
//				puts("Draw");
//			}
//			if (1 == num[0] && 1 != num1[0])
//			{
//				puts("Alice");
//			}
//			if (1 == num1[0] && 1 != num[0])
//			{
//				puts("Alice");
//			}
//			if (1 != num[0] && 1 != num1[0])
//			{
//				if (num[0] > num1[0])
//				{
//					puts("Alice");
//				}
//				if (num[0] < num1[0])
//				{
//					puts("Bob");
//				}
//			}
//		}
//		int sign = 0, sign1 = 0;//对子
//		if (num[0] == num[1] && num[0] != num[2] || num[1] == num[2] && num[1] != num[0])
//		{
//			sign = 1;
//		}
//		if (num1[0] == num1[1] && num1[0] != num1[2] || num1[1] == num1[2] && num1[1] != num1[0])
//		{
//			sign1 = 1;
//		}
//		if (1 == sign && 1 == sign1)//全是对子
//		{
//			if (num[1] == num1[1])
//			{
//				if (num[0] == num1[0])
//				{
//					if (num[2] > num1[2])
//					{
//						puts("Alice");
//					}
//				}
//				if (num[2] == num1[2])
//				{
//					if (num[0] > num1[0])
//					{
//						puts("Alice");
//					}
//				}
//				if (num[2] == 1 && num1[2] != 1 || num[0] == 1 && num1[0] != 1)
//				{
//					puts("Alice");
//				}
//				if (num[0] == num1[0])
//				{
//					if (num[2] < num1[2])
//					{
//						puts("Bob");
//					}
//				}
//				if (num[2] == num1[2])
//				{
//					if (num[0] < num1[0])
//					{
//						puts("Bob");
//					}
//				}
//				if (num1[2] == 1 && num[2] != 1 || num1[0] == 1 && num[0] != 1)
//				{
//					puts("Bob");
//				}
//				if (num[2] == num1[2] || num[0] == num1[0])
//				{
//					puts("Draw");
//				}
//			}
//			else if (num[1] > num1[1])
//			{
//				puts("Alice");
//			}
//			else
//			{
//				puts("Bob");
//
//			}
//			if (num[1] == 1 && num1[1] != 1)
//			{
//				puts("Alice");
//			}
//			if (num1[1] == 1 && num[1] != 1)
//			{
//				puts("Bob");
//			}
//		}
//		int sum = 0, sum1 = 0;
//		int mark = 0, mark1 = 0;
//		if (0 == flag && 0 == sign)
//		{
//			mark = 1;
//			sum = num[0] + num[1] + num[2];
//		}
//		if (0 == flag1 && 0 == sign1)
//		{
//			mark1 = 1;
//			sum1 = num1[0] + num1[1] + num1[2];
//		}
//		if (1 == mark && 1 == mark1)//都为点子
//		{
//			if (sum > sum1)
//			{
//				puts("Alice");
//			}
//			else if (sum < sum1)
//			{
//				puts("Bob");
//			}
//			else
//			{
//				puts("Draw");
//			}
//		}
//		if (sign == 1 && flag1 == 0 && sign1 == 0)
//		{
//			puts("Alice");
//		}
//		if (sign1 == 1 && flag == 0 && sign == 0)
//		{
//			puts("Bob");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	while (t--)
//	{
//		int n, m;
//		int sum = 1;
//		int i = 1;
//		int num[200] = { 0 };
//		scanf("%d %d", &n, &m);
//		for (int x = 1;x <= n;x++)
//		{
//			sum *= x;
//		}
//		while (sum>0)
//		{
//			num[i] = sum % 10;
//			sum /= 10;
//			i++;
//		}
//		printf("%d\n", num[m]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int num[1010][3000] = { 0 };
//int main()
//{
//    num[0][1] = 1;      // 0的阶乘是1
//    num[1][1] = 1;      // 1的阶乘是1
//    for (int i = 2; i < 1001;i++)
//    {
//        int x = 0;
//        for (int j = 1;j < 3000; j++)
//        {
//            num[i][j] = num[i - 1][j] * i + x;  // 相乘 + 进位
//            x = num[i][j] / 10;                // 进位
//            num[i][j] %= 10;
//        }
//    }
//    int T, n, m;
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d %d", &n, &m);
//        printf("%d\n", num[n][m]);
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//#define N 2000010
//char word[N] = "\0";
//int cnt[26] = { 0 };
//int main(void)
//{
//	while (gets(word) != NULL)
//	{
//		int count = 1;
//		int len = strlen(word);
//		for (int t = 0;t < len;t++)
//		{
//			if (' ' == word[t])
//			{
//				count++;//有几个单词
//			}
//			if (word[t] >= 'a' && word[t] <= 'z')
//				word[t] -= 32;
//			cnt[word[t] - 'A']++;//每一个出现的字母出现过的次数
//		}
//		int max = cnt[word[0]-'A'], min = cnt[word[0]-'A'];
//		for (int i = 0;i < len;i++)
//		{
//			if (cnt[word[i]-'A'] > max)
//			{
//				max = cnt[word[i] - 'A'];
//			}
//			if (cnt[word[i]-'A'] < min)
//			{
//				min = cnt[word[i] - 'A'];
//			}
//		}
//		int p = max - min;
//		int flag = 1, flag1 = 0;
//		if (p == 1 && p == 0)
//		{
//			flag = 0;
//		}
//		for (int j = 2;j <= sqrt(p);j++)
//		{
//			if (0 == p % j)
//			{
//				flag = 0;
//			}
//		}
//		if (1 == count % 2 && flag == 1)
//		{
//			printf("Yes");
//			printf(" %d\n", p);
//		}
//		else
//		{
//			printf("No");
//			printf(" %d\n", p);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//__int64 gcd(__int64 x, __int64 y)
//{
//	__int64 z = y;
//	while (0 != x % y)
//	{
//		z = x % y;
//		x = y;
//		y = z;
//	}
//	return z;
//}
//int main()
//{
//	int t;
//	scanf("%d", &t);
//	while (t--)
//	{
//		int a, b,m; 
//		__int64 sum, mup, mup1;
//		int num[12] = { 0 }, num1[12] = { 0 };
//		scanf("%d%d", &a, &b);
//		if (a == b)
//		{
//			printf("1/%d\n", a);
//		}
//		else
//		{
//			__int64 i, j;
//			mup = 1,mup1 = 1, sum = 0, m = 0;
//			for (i = a;i <= b;i++)
//			{
//				mup *= i;//分母
//				num[++m] = i;
//				num1[m] = i;
//			}
//			for (int i = 1;i <= m;i++)
//			{
//				num[i] = 1;
//				mup1 = 1;
//				for (int j = 1;j <= m;j++)
//				{
//					mup1 *= num[j];
//				}
//				sum += mup1;//分子
//				num[i] *= num1[i]; 
//			}
//			__int64 x = sum, y = mup;
//			__int64 t = gcd(sum, mup);
//			sum /= t;
//			mup /= t;
//			printf("%lld/%lld\n", sum, mup);
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//__int64 gcd(__int64 a,__int64 b)//求最大公约数
//{
//    if (a % b == 0)
//    {
//        return b;
//    }
//    a %= b;
//    return gcd(b, a);
//}
//int main()
//{
//    int i, j, T, a, b;
//    scanf("%d", &T);
//    while (T--)
//    {
//        __int64 fz, fm, t;
//        scanf("%d%d", &a, &b);
//        fz = 1, fm = a;//分母起始值为a
//        for (i = a;i <= b - 1;i++)
//        {
//            fz = fz * (i + 1) + fm;
//            fm = fm * (i + 1);
//            t = gcd(fz, fm);//注意这里，要用中间变量代替gcd(fz,fm),因为写成这样
//            fz /= t;//fz/=gcd(fz,fm),fm/=gcd(fz,fm)
//            fm /= t;//第二个gcd(fz,fm)已经发生了变化    
//        }
//        printf("%I64d/%I64d\n", fz, fm);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main(){
//	int k;
//	scanf("%d", &k);
//	while (k--)
//	{
//		int n;//n-1为ASCII码值
//		scanf("%d", &n);
//		int num[53][53] = { 0 };
//		for (int i = 1;i <= n;i++)
//		{
//			int a = n;
//			for (int j = 1;j <= 2 * i - 1;j++)//一行几个字母
//			{
//				if (j > i)
//				{
//					for (int k = 1;k <= i - 1;k++)
//					{
//						num[i][j] = 65 + a + 1;
//						j++;
//						a++;
//					}
//				}
//				num[i][j] = 65 + a-1;
//				a--;
//				
//			}//每一行
//		}
//		int b = n;
//		for (int i = 1;i <= 2 * n - 1;i++)
//		{
//			int e = 1;
//			if (i > n)//倒序
//			{
//				int c = n;
//				for (int m = c - 1;m >= 1;m--)
//				{
//					for (int d = 1;d <= e;d++)
//					{
//						printf(" ");
//					}
//					e++;
//					for (int l = 1;l <= 2 * m - 1;l++)
//					{
//						printf("%c", num[m][l]);
//					}
//					if (m >= 1)
//					{
//						puts("");
//					}
//				}
//				c--;
//				break;
//			}
//			if (i <= n)
//			{
//				for (int j = b - 1;j >= 1;j--)
//				{
//					printf(" ");
//				}
//				for (int m = 1;m <= 2 * i - 1;m++)
//				{
//					printf("%c", num[i][m]);
//				}
//				puts("");
//				b--;
//			}
//		}
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int change(int n, char str[])
//{
//	int a = 0,b = 1,i = 0;
//	int sum = 0;
//	int len = strlen(str);
//	if (str[0] == '-')
//	{
//		b = -1;
//		i = 1;
//	}
//	for (;i < len;i++)
//	{
//		if (str[i] >= '0' && str[i] <= '9')
//		{
//			a = str[i] - '0';
//		}
//		if (str[i] >= 'A' && str[i] <= 'Z')
//		{
//			a = str[i] - 'A' + 10;
//		}
//		if (str[i] >= 'a' && str[i] <= 'z')
//		{
//			a = str[i] - 'a' + 36;
//		}
//		sum = sum * n + a;//关键
//	}
//	sum *= b;
//	return sum;
//}
//int main()
//{
//	int T;	
//	scanf("%d", &T);
//	while (T--)
//	{
//		char wd[1000] = { 0 };
//		char wd1[1000] = { 0 };
//		int m = 0, n = 0,sum = 0;
//		scanf("%s%d%s%d", wd, &m, wd1, &n);
//		int x = change(m, wd);
//		int y = change(n, wd1);
//		sum = x + y;
//		printf("%d\n", sum);
//	}
//	return 0;
//}
//#include<stdio.h>
//int fmax(int num[], int m,int n)//长度为m，连续的n个元素的最大值
//{
//	int fmaxt = 0,sum = 0;
//	if (m == n)
//	{
//		for (int i = 0;i < m;i++)
//		{
//			fmaxt += num[i];
//		}
//		return fmaxt;
//	}
//	else
//	{
//		for (int i = 0;i < m;i++)
//		{
//			sum = 0;
//			for (int j = 0;j <= n-1;j++)
//			{
//				sum += num[(i + j) % m];
//			}
//			if (sum > fmaxt)
//			{
//				fmaxt = sum;
//			}
//		}
//		return fmaxt;
//	}
//}
//int max(int x, int y, int z)
//{
//	int maxt = x;
//	if (y > maxt)
//	{
//		maxt = y;
//	}
//	if (z > maxt)
//	{
//		maxt = z;
//	}
//	return maxt;
//}
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		int num[4][4] = { 0 };
//		int num1[15] = { 0 };
//		int num2[4] = { 0 };
//		for (int i = 0;i < 4;i++)
//		{
//			for (int j = 0;j < 4;j++)
//			{
//				scanf("%d", &num[i][j]);
//			}
//		}
//		int a = 0;
//		for (int i = 0;i < 4;i++)
//		{
//			num1[a] = num[i][0];
//			a++;
//		}
//		for (int j = 1;j < 4;j++)
//		{
//			num1[a] = num[3][j];
//			a++;
//		}
//		for (int i = 2;i >= 0;i--)
//		{
//			num1[a] = num[i][3];
//			a++;
//		}
//		for (int j = 2;j >= 1;j--)
//		{
//			num1[a] = num[0][j];
//			a++;
//		}
//		num2[0] = num[1][1];
//		num2[1] = num[2][1];
//		num2[2] = num[2][2];
//		num2[3] = num[1][2];
//		int u1, u2, u4,umax;
//		u1 = fmax(num2, 4, 1) + fmax(num1, 12, 3);
//		u2 = fmax(num2, 4, 2) + fmax(num1, 12, 2);
//		u4 = fmax(num2, 4, 4) + fmax(num1, 12, 0);
//		umax = max(u1, u2, u4);
//		printf("%d\n", umax);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int prime[3000010];
//int isprime[3000010];
//__int64 phi[3000010] = { 0,1 };
//void euler()
//{ 
//	phi[1] = 1;
//	memset(isprime, 0, sizeof(isprime));
//	for (int i = 2;i < 3000010;i++)
//	{
//		if (!isprime[i])//当这个数是素数，那么所有小于它的数都是与它互素
//		{
//			prime[++prime[0]] = i;
//			phi[i] = i - 1;//理由看上边
//		}
//		for (int j = 1;j <= prime[0] && i * prime[j] <= 3000010;j++)
//		{
//			isprime[i * prime[j]] = 1;
//			phi[i * prime[j]] = phi[i] * phi[prime[j]];
//			if (i % prime[j] == 0)
//			{
//				phi[i * prime[j]] = phi[i] * prime[j];//如果i是此时这个素数的倍数，那么这两个数的积的欧拉函数值，其实就是i的欧拉函数值乘以这个素数，其实就是与i互素的数，理所当然的与积互素，并且这些数乘以这个素数得到的数也与该积互素，但是与i不互素的数乘以多少都不与该积互素。
//				break;
//			}
//		}
//		for (int i = 1;i <= 3000000;i++)
//		{
//			phi[i] += phi[i - 1];//前缀和
//		}
//	}
//}
//int main()
//{
//	int T;
//	euler();
//	scanf("%d", &T);
//	while (T--)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		printf("%I64d\n", phi[b] - phi[a - 1]);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include<string.h>
//int T, a, b;
//int vis[3000010];               
//int prime[3000010];              
//__int64 phi[3000010] = { 0,1 };
//void euler()
//{
//    memset(vis, 0, sizeof(vis));
//    for (int i = 2; i < 3000010; i++)
//    {
//        if (!vis[i])
//        {
//            prime[++prime[0]] = i;      // prime[0] --> 筛选出的素数个数
//            phi[i] = i - 1;               // 素数i的  ϕ(i) = i-1;
//        }
//        for (int j = 1; j <= prime[0] && i*prime[j] <= 3000010; j++)
//        {
//            vis[i * prime[j]] = 1;        // 素数prime[j]的i倍为合数
//            phi[i * prime[j]] = phi[i] * phi[prime[j]];
//            if (i % prime[j] == 0)
//            {
//                phi[i * prime[j]] = phi[i] * prime[j];
//                break;
//            }
//        }
//    }
//    for (int i = 1; i <= 3000000; i++)
//    {
//        phi[i] += phi[i - 1];
//    }
//}
//int main()
//{
//    euler();
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d %d", &a, &b);
//        printf("%I64d\n", phi[b] - phi[a - 1]);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	while (N--)
//	{
//		char str[20];
//		int n,i = 0;
//		scanf("%d", &n);
//		if (0 == n)
//		{
//			printf("0\n");
//		}
//		else
//		{
//			/*while (1)
//			{
//				num[i++] = n % 3;
//				if (0 == n / 3)
//				{
//					break;
//				}
//				n /= 3;
//			}
//			for (int l = 0;l <= i;l++)
//			{
//				if (1 == num[l])
//				{
//					str[l] = '1';
//				}
//				else if (2 == num[l])
//				{
//					str[l] = '-';
//					num[l + 1] += 1;
//				}
//				else
//				{
//					str[l] = '0';
//				}
//			}*/
//			for (;n;i++)
//			{
//				if (n % 3 == 1)
//				{
//					str[i] = '1';
//					n /= 3;
//				}
//				else if (n % 3 == 2)
//				{
//					str[i] = '-';
//					n = n / 3 + 1;
//				}
//				else
//				{
//					str[i] = '0';
//					n /= 3;
//				}
//			}
//			int m = i - 1;
//			for (m;m >= 0;m--)
//			{
//				printf("%c", str[m]);
//				if (0 == m)
//				{
//					puts("");
//				}
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		int n;
//		scanf("%d", &n);
//		int num[27] = { 0 };
//		int num1[150] = { 0 };
//		int num2[17] = { 0 };
//		int num3[17] = { 0 };
//		int num4[17] = { 0 };
//		for (int i = 2;i <= 16;i++)//目标进制
//		{
//			int j = 0;
//			while (1)
//			{
//				num[j++] = n % i;
//				if (0 == n / i)
//					break;
//				n /= i;
//			}
//			int sum = 0;
//			for (int k = 0;k < j;k++)
//			{
//				sum += num[k];
//			}
//			num1[sum]++;//每一个数码和出现的次数
//			num2[i] = sum;//每一个进制的数码和
//		}
//		int max = 0,count = 0,i,j;
//		for (i = 2; i <= 16; i++)
//		{
//			num1[i] = 1; //每个数码和，出现的次数初始化为1
//		}
//		for (i = 2; i <= 16; i++) 
//		{ //统计第i个数码和出现的次数
//			if (num1[i] == 0) 
//				continue;
//			for (j = i + 1; j <= 16; j++)
//			{
//				if (num2[j] == num2[i])
//				{
//					num1[i]++;
//					num1[j] = 0;
//				}
//			}
//		}
//		for (max = 0, i = 2; i <= 16; i++)
//		{
//			if (num1[i] > max)
//			{
//				max = num1[i];
//			}
//		}
//		printf("%d\n", max);
//		int k = 0;
//		for (i = 2;i <= 16;i++)
//		{
//			if (num2[i] == max)
//			{
//				num3[k++] = num2[i];
//				count++;
//			}
//		}
//		int flag = 0;
//		for (i = 0;i < 16;i++)
//		{
//			for (j = i+1;j < 16;j++)
//			{
//				if (num3[i] > num3[j])
//				{
//					int tem = num3[i];
//					num3[i] = num3[j];
//					num3[j] = tem;
//					flag = 1;
//				}
//			}
//			if (flag == 1)
//				break;
//		}
//		for (int i = 0;i < count;i++)
//		{
//			printf("%d", num3[i]);
//			for (int j = 2;j <= 16;j++)
//			{
//				if (num1[j] == num3[i])
//				{
//					printf(" %d", j);
//				}
//			}
//			puts("");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//int T, n, x, i, j;
//int max;
//int num[20], num1[150];    // num[i][0]保存进制i的数码和
//void change(int n)
//{
//    // 初始化
//    max = 0;
//    memset(num, 0, sizeof(num));
//    memset(num1, 0, sizeof(num1));
//    //2->16进制转换
//    for (i = 2; i <= 16; i++)
//    {
//        //   求各进制的数码和
//        x = n;
//        while (x)
//        {
//            num[i] += x % i;//直接将余数相加
//            x /= i;//几进制的数码和
//        }
//        num1[num[i]]++;
//        if (max < num1[num[i]])      // 记录出现最多的次数
//            max = num1[num[i]];
//    }
//}
//int main()
//{
//    scanf("%d", &T);
//    while (T--)
//    {
//        scanf("%d", &n);
//        change(n);
//        printf("%d\n", max);
//        for (i = 1; i < 150; i++)
//        {
//            if (num1[i] == max)
//            {
//                printf("%d", i);                 // 输出 数码和
//                for (j = 2; j <= 16; j++)
//                    if (num[j] == i)
//                        printf(" %d", j);        // 输出 进制
//                puts("");
//            }
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int N,n = 0,i,j;
//	char a[17], str[20][17], c[17];
//	scanf("%d", &N);
//	while (N--)
//	{
//		while (gets(a), strcmp(a, "END")!=0)
//		{	
//			if (0 == strcmp("START", a))//将输入的复制到str中
//			{
//				n = 0;
//			}
//			else
//			{
//				strcpy(str[n++], a);
//			}
//        }
//		for (int i = 0;i < n;i++)
//		{
//			c[i] = 1;
//		}
//		for (int i = 0;i < n;i++)
//		{
//			if (c[i] == 0)
//			{
//				continue;
//			}
//			for (int j = i + 1;j < n;j++)
//			{
//				if (strcmp(str[i], str[j]) == 0)
//				{
//					c[i]++;
//					c[j] = 0;
//				}
//			}
//		}
//		int max = 0;
//		char min[17];
//		for (int i = 0;i < n;i++)
//		{
//			if (c[i] > max)
//			{
//				max = c[i];
//			}
//		}
//		strcpy(min, "\x7F");
//		for (int i = 0;i < n;i++)
//		{
//			if (c[i] == max && strcmp(str[i], min) < 0)
//			{
//				strcpy(min, str[i]);
//			}
//		}
//		printf("%s\n", min);
//	}
//	return 0;
//}
//#include<stdio.h>
//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int  min(int a, int b)
//{
//	return a < b ? a : b;
//}
//int main()
//{
//	int K;
//	scanf("%d", &K);
//	while (K--)
//	{
//		int num[2][4] = { 0 };
//		int ax1, ax2, ay1, ay2, bx1, bx2, by1, by2, cx1, cx2, cx3,cx4, cy1, cy2,cy3,cy4;
//		int flag = 1;
//		for (int i = 0;i < 2;i++)
//		{
//			for (int j = 0;j < 4;j++)
//			{
//				scanf("%d", &num[i][j]);
//			}
//		}
//		ax1 = num[0][0];
//		ay1 = num[0][1];
//		ax2 = num[0][2];
//		ay2 = num[0][3];
//		bx1 = num[1][0];
//		by1 = num[1][1];
//		bx2 = num[1][2];
//		by2 = num[1][3];
//		cx1 = max(ax1, ax2);//第一个右界
//		cx3 = min(ax1, ax2);//左界
//		cy1 = max(ay1, ay2);//第一个上界
//		cy3 = min(ay1, ay2);//下界
//		cx2 = max(bx1, bx2);
//		cx4 = min(bx1, bx2);
//		cy2 = max(by1, by2);
//		cy4 = min(by1, by2);
//		if (cx1 <= cx4 || cx3 >= cx2 || cy1<=cy4 || cy3>=cy2)
//		{
//			flag = 0;
//		}
//		if (flag == 1)
//		{
//			printf("Yes\n");
//		}
//		if (flag == 0)
//		{
//			printf("No\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int K;
//	scanf("%d", &K);
//	while (K--)
//	{
//		int num[2][4] = { 0 };
//		int ax1, ax2, ay1, ay2, bx1, bx2, by1, by2;
//		int flag = 1;
//		for (int i = 0;i < 2;i++)
//		{
//			for (int j = 0;j < 4;j++)
//			{
//				scanf("%d", &num[i][j]);
//			}
//		}
//		ax1 = num[0][0];
//		ay1 = num[0][1];
//		ax2 = num[0][2];
//		ay2 = num[0][3];
//		bx1 = num[1][0];
//		by1 = num[1][1];
//		bx2 = num[1][2];
//		by2 = num[1][3];
//		if (ay1 <= bx1 || by1 <= ax1 || ay2 <= bx2 || by2 <= ax2)
//		{
//			flag = 0;
//		}
//		if (flag == 1)
//		{
//			printf("Yes\n");
//		}
//		if (flag == 0)
//		{
//			printf("No\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int num[105][105] = { 0 };
//int Rmax[105] = { 0 };
//int Rmin[105] = { 0 };
//int Cmax[105] = { 0 };
//int Cmin[105] = { 0 };
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		memset(Rmax, 0, sizeof(Rmax));
//		memset(Rmin, 0, sizeof(Rmin));
//		memset(Cmax, 0, sizeof(Cmax));
//		memset(Cmin, 0, sizeof(Cmin));
//		int n, m;
//		scanf("%d %d", &n, &m);
//		for (int i = 0;i < n;i++)
//		{
//			for (int j = 0;j < m;j++)
//			{
//				scanf("%d", &num[i][j]);
//			}
//		}
//		for (int i = 0;i < n;i++)
//		{
//			int max = 0;
//			int min = 1005;
//			for (int j = 0;j < m;j++)
//			{
//				if (num[i][j] > max)
//				{
//					Rmax[i] = num[i][j];
//					max = num[i][j];
//				}
//				if (num[i][j] < min)
//				{
//					Rmin[i] = num[i][j];
//					min = num[i][j];
//				}
//			}
//		}
//		for (int i = 0;i < m;i++)
//		{
//			int max = 0;
//			int min = 1005;
//			for (int j = 0;j < n;j++)
//			{
//				if (num[j][i] > max)
//				{
//					Cmax[i] = num[j][i];
//					max = num[j][i];
//				}
//				if (num[j][i] < min)
//				{
//					Cmin[i] = num[j][i];
//					min = num[j][i];
//				}
//			}
//		}
//		int cnt = 0;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < m; j++)
//			{
//				if (num[i][j] == Rmax[i] && num[i][j] == Cmin[j] || num[i][j] == Rmin[i] && num[i][j] == Cmax[j])
//				{
//					cnt++;
//				}
//			}
//		}
//		if (!cnt)
//		{
//			puts("None");
//		}
//		else
//		{
//			printf("%d\n", cnt);
//			for (int i = 0; i < n; i++)
//			{
//				for (int j = 0; j < m; j++)
//				{
//					if (num[i][j] == Rmax[i] && num[i][j] == Cmin[j] || num[i][j] == Rmin[i] && num[i][j] == Cmax[j])
//					{
//						printf("%d %d %d\n", i, j, num[i][j]);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int sq[103][103] = { 0 };
//int black[10001][3] = { 0 };
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		int m, n, k;
//		scanf("%d %d %d", &m, &n, &k);
//		memset(sq, 0, sizeof(sq));
//		memset(black, 0, sizeof(black));
//		for (int i = 1;i <= k;i++)
//		{
//			for (int j = 1;j <= 2;j++)
//			{
//				scanf("%d", &black[i][j]);
//			}
//		}
//		for (int i = 1;i <= k;i++)
//		{
//			int j = 1;
//			sq[black[i][j]][black[i][j+1]] = 1;//将黑色格子标记为1
//		}
//		int cnt = 0,cnt1 = 0,cnt2 = 0;
//		for (int i = 1;i <= m;i++)
//		{
//			int flag = 1;
//			for (int j = 1;j <= n;j++)
//			{
//				if (sq[i][j] == 1)
//				{
//					flag = 0;//此行有黑色
//				}
//			}
//			if (flag == 1)
//			{
//				cnt += n;
//				cnt1++;
//			}
//		}
//		for (int i = 1;i <= n;i++)
//		{
//			int flag1 = 1;
//			for (int j = 1;j <= m;j++)
//			{
//				if (sq[j][1] == 1)
//				{
//					flag1 = 0;//此列有黑色
//				}
//			}
//			if (flag1 == 1)
//			{
//				cnt += m;
//				cnt2++;
//			}
//		}
//		int max = cnt - cnt1 * cnt2;
//		printf("%d\n", max);
//	}
//	return 0;
//}
//#include<stdio.h>
//int num[15][15] = { 0 };
//char a;
//int x, y,n,m;
//void change(char a, int x, int y)
//{
//	if (a == 'L')
//	{
//		while (y--)
//		{
//			int b = num[x][1];
//			for (int i = 1;i < n;i++)
//			{
//				num[x][i] = num[x][i + 1];
//			}
//			num[x][n] = b;
//		}
//	}
//	if (a == 'R')
//	{
//		while (y--)
//		{
//			int b = num[x][n];
//			for (int i = n;i > 1;i--)
//			{
//				num[x][i] = num[x][i - 1];
//			}
//			num[x][1] = b;
//		}
//	}
//	if (a == 'U')
//	{
//		while (y--)
//		{
//			int b = num[1][x];
//			for (int i = 1;i < n;i++)
//			{
//				num[i][x] = num[i+1][x];
//			}
//			num[n][x] = b;
//		}
//	}
//	if (a == 'D')
//	{
//		while (y--)
//		{
//			int b = num[n][x];
//			for (int i = n;i > 1;i--)
//			{
//				num[i][x] = num[i-1][x];
//			}
//			num[1][x] = b;
//		}
//	}
//}
//int main()
//{
//	int K;
//	scanf("%d", &K);
//	while (K--)
//	{
//		scanf("%d %d", &n, &m);
//		int a = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				num[i][j] = (++a);
//			}
//		}
//		while (m--)
//		{
//			getchar();
//			scanf("%c %d %d", &a, &x, &y);
//			change(a, x, y);
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				printf("%d", num[i][j]);
//				if (!(i == n && j == n))
//					printf(" ");
//			}
//		}
//		puts("");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int n,cnt,times;
//	int a[1003][2] = {0};
//	while ((scanf("%d", &n) != EOF))
//	{
//		memset(a, 0, sizeof(a));
//		for (int i = 0;i < n;i++)
//		{
//			scanf("%d", &a[i][0]);
//		}
//		cnt = times = 0;
//		while (cnt < n)
//		{
//			for (int i = 0;i < n;i++)
//			{
//				if (cnt >= a[i][0] && a[i][1] != 1)
//				{
//					a[i][1] = 1;
//					cnt++;
//				}
//			}
//			if (cnt == n)
//				break;
//			times++;
//			for (int i = n - 1;i >= 0;i--)
//			{
//				if (cnt >= a[i][0] && a[i][1] != 1)
//				{
//					a[i][1] = 1;
//					cnt++;
//				}
//			}
//			if (cnt == n)
//				break;
//			times++;
//		}
//		printf("%d\n", times);
//	}
//	return 0;
//}
//#include <stdio.h>
//#include<stdlib.h>
//int ansA, ansB;
//int diceA[5], diceB[5];
//void change(int* dice, int &ans)
//{
//    if (dice[0] == dice[1] && dice[1] == dice[2])
//        ans = dice[0] * 100;
//    else if (dice[0] == dice[1])
//        ans = dice[0] * 10 + dice[2];
//    else if (dice[1] == dice[2])
//        ans = dice[1] * 10 + dice[0];
//    else if (dice[0] == dice[2])
//        ans = dice[0] * 10 + dice[1];
//    else
//        ans = (dice[0] - 1) % 6 + (dice[1] - 1) % 6 + (dice[2] - 1) % 6;
//}
//int main()
//{
//    int K;
//    scanf("%d", &K);
//    while (K--)
//    {
//        for (int i = 0; i < 3; i++)
//        {
//            scanf("%d", &diceA[i]);
//            if (diceA[i] == 1)  diceA[i] = 7;
//        }
//        for (int i = 0; i < 3; i++)
//        {
//            scanf("%d", &diceB[i]);
//            if (diceB[i] == 1)  diceB[i] = 7;
//        }
//        change(diceA, ansA);
//        change(diceB, ansB);
//        if (ansA > ansB)
//        {
//            puts("Alice");
//        }
//        else if (ansA < ansB)
//        {
//            puts("Bob");
//        }
//        else
//        {
//            puts("Draw");
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[205];
//	while ((scanf("%s", str) != EOF))
//	{
//		int len = strlen(str);
//		int numU = 0, numD = 0, numL = 0, numR = 0;
//		for (int i = 0;i < len;i++)
//		{
//			if (str[i] == 'U')
//			{
//				numU++;
//			}
//			if (str[i] == 'D')
//			{
//				numD++;
//			}
//			if (str[i] == 'L')
//			{
//				numL++;
//			}
//			if (str[i] == 'R')
//			{
//				numR++;
//			}
//		}
//		if (numL + numD == numR && !numU)  puts("Yes");   // D指令替换成L指令
//		else if (numL + numU == numR && !numD)  puts("Yes");   // U指令替换成L指令
//		else if (numR + numD == numL && !numU)  puts("Yes");   // D指令替换成R指令
//		else if (numR + numU == numL && !numD)  puts("Yes");   // U指令替换成R指令
//		else if (numU + numL == numD && !numR)  puts("Yes");   // L指令替换成U指令
//		else if (numU + numR == numD && !numL)  puts("Yes");   // R指令替换成U指令
//		else if (numD + numL == numU && !numR)  puts("Yes");   // L指令替换成D指令
//		else if (numD + numR == numU && !numL)  puts("Yes");   // R指令替换成D指令
//		else    puts("No");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//int num[100010] = { 0 };
//int num1[5] = { 0 };
//int cmp(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2;
//}
//int main()
//{
//	int K,i,j;
//	scanf("%d", &K);
//	while (K--)
//	{
//		int n,cnt = 0;
//		scanf("%d", &n);
//		for (i = 1;i <= n;i++)
//		{
//			scanf("%d", &num[i]);
//		}
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < cnt; j++)
//			{
//				if (num1[j] == num[i])
//					break;
//			}
//			if (j == cnt) 
//			{
//				num1[j] = num[i];
//				cnt++;
//			}
//			if (cnt == 5)  
//				break;
//		}
//		if (cnt == 5)
//		{
//			puts("No");
//			continue;
//		}
//		if (cnt <= 3)
//		{
//			puts("Yes");
//			continue;
//		}
//		qsort(num1, 4, sizeof(num1[0]), cmp);
//		if ((num1[2] - num1[0]) == (num1[3] - num1[1]))
//		{
//			puts("Yes");
//		}
//		else
//		{
//			puts("No");
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int cnt;
//int num[100010], num1[5];
//int cmp(const void* p1, const void* p2)
//{
//    return *(int*)p1 - *(int*)p2;
//}
//int main()
//{
//    int K, n, i, j;
//    scanf("%d", &K);
//    while (K--)
//    {
//        cnt = 0;
//        scanf("%d", &n);
//        for (i = 0; i < n; i++)
//            scanf("%d", &num[i]);
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < cnt; j++)
//                if (num1[j] == num[i])
//                    break;
//            if (j == cnt) 
//            { 
//                num1[j] = num[i];
//                cnt++;
//            }
//            if (cnt == 5)  break;//超过5种直接放弃
//        }//应对数组太大的情况
//        if (cnt == 5) 
//        { 
//            puts("No"); 
//            continue;
//        }
//        if (cnt <= 3) 
//        { 
//            puts("Yes");
//            continue; 
//        }
//        qsort(num1, 4, sizeof(num1[0]), cmp);
//        if ((num1[1] - num1[0]) == (num1[3] - num1[2]))
//            puts("Yes");
//        else puts("No");
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int K;
//char str[1010] = { 0 };
//int main()
//{
//	scanf("%d", &K);
//	while (K--)
//	{
//		scanf("%s", str);
//		int flag = 0,i,j,m;
//		int len = strlen(str);
//		int n = 0;
//		for (i = 1;i < len;i++)
//		{
//			int nmax = (len + 1) / 2;
//			for (m = nmax;m > n;m--)//m为半长
//			{
//				flag = 1;
//				for (j = i;j > i - m;j--)
//				{
//					if (str[j] != str[j - m])//是否为costring
//					{
//						flag = 0;
//						break;
//					}
//				}
//				if (flag == 1)
//				{
//					n = m;
//					break;
//				}
//			}
//		}
//		printf("%d\n",2*n);
//	}
//	return 0;
//}
//#include<stdio.h>
//#define N 1000000
//int B[N + 1] = { 0,0 };
//int num[N + 1] = { 0 };
//int num1[N + 1] = { 0 };
//int main()
//{
//	int i, j,cnt = 0;
//	for (i = 2; i <= N; i++)
//	{
//		B[i] = 1;
//	}
//	for (i = 2; i * i <= N; i++)
//	{
//		if (B[i])
//		{
//			for (j = i * i; j <= N; j += i)
//				B[j] = 0;
//		}
//	}
//	for (i = 2; i <= N; i++)
//	{
//		for (j = i + 1; j <= N / i; j++)
//			num[i * j] = B[i] * B[j];
//	}
//	for (i = 1;i <= N;i++)
//	{
//		num1[i] = num1[i - 1] + num[i];
//	}
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		int a, b,c = 0;
//		scanf("%d%d", &a, &b);
//		printf("%d\n", num1[b] - num1[a - 1]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int gcd(int a, int b)
//{
//	int t;
//	if (b > a) {
//		t = a; a = b; b = t;
//	}
//	while (t = a % b, t != 0) {
//		a = b; b = t;
//	}
//	return b;
//}
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		int a, b, n, N;
//		__int64 A, B;
//		scanf("%d%d%d", &a, &b, &n);
//		A = a;
//		B = b;
//		int t = gcd(A, B);
//		A /= t;
//		B /= t;
//		for (int i = 2;i <= n;i++)
//		{
//
//		}
//		printf("%I64d/%I64d\n",A,B);
//	}
//	return 0;
//}
//#include<stdio.h>
//int num[50] = { 0 };
//__int64 num1[20000] = { 0 };
//__int64 gcd(__int64 a, __int64 b)
//{
//	__int64 t;
//	if (b > a) {
//		t = a; a = b; b = t;//交换最大值
//	}
//	while (t = a % b, t != 0) {
//		a = b; b = t;
//	}
//	return b;
//}
//__int64 lcm(__int64 x, __int64 y)
//{
//	gcd(x, y);
//	return x * y / gcd(x, y);
//}
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		int n;
//		scanf("%d", &n);
//		for (int i = 1;i <= n;i++)
//		{
//			scanf("%d", &num[i]);
//		}
//		int cnt = 0;
//		for (int i = 1;i <= n - 2;i++)
//		{
//			for (int j = i + 1;j <= n - 1;j++)
//			{
//				__int64 t = lcm(num[i], num[j]);
//				for (int k = j + 1;k <= n;k++)
//				{
//					num1[cnt++] = lcm(t, num[k]);
//				}
//			}
//		}
//		__int64 min = num1[0];
//		for (int i = 0;i < cnt;i++)
//		{
//			if (num1[i] < min)
//			{
//				min = num1[i];
//			}
//		}
//		printf("%I64d\n", min);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main(){
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		int n,cnt = 0,cnt1 = 0,k = 0,d = 0;
//		int num[50] = { 0 };
//		scanf("%d", &n);
//		cnt = n / 1111, cnt1 = n / 1001;
//		for (int i = 0;i <= cnt;i++)
//		{
//			for (int j = 0;j <= cnt1;j++)
//			{
//				k = (n - 1111 * i - 1001 * j) / 11;
//				if (k >= 0)
//				{
//					num[d++] = k + i + j;
//				}
//			}
//		}
//		int min = num[0];
//		for (int i = 1;i < d;i++)
//		{
//			if (num[i] < min)
//			{
//				min = num[i];
//			}
//		}
//		printf("%d\n", min);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//char Day[8][10] = { "Mon","Tue","Wen","Thur","Fri","Sat","Sun" };
//int num[10][15] = { 0 };
//int GetDay(char str[]) 
//{
//	for (int i = 0;i < 7;i++) 
//	{
//		if (strcmp(str, Day[i]) == 0) return i;
//	}
//}
//int main()
//{
//	int K;
//	scanf("%d", &K);
//	while (K--)
//	{
//		int N, T;
//		char str[10];
//		int S, E;
//		memset(num, 0, sizeof(num));
//		scanf("%d%d", &N, &T);
//		while (N--)
//		{
//			scanf("%s %d %d", str, &S, &E);
//			int x = GetDay(str);
//			if (x == 5 || x == 6)
//				continue;
//			for (int i = S;i <= E;i++)
//			{
//				num[x][i] = 1;
//			}
//		}
//		int cnt = 0;
//		for (int i = 0;i < 5;i++)
//		{
//			if (T == 2)
//			{
//				if (!num[i][1] && !num[i][2])
//					cnt++;
//				if (!num[i][2] && !num[i][3])
//					cnt++;
//				if (!num[i][3] && !num[i][4])
//					cnt++;
//				if (!num[i][5] && !num[i][6])
//					cnt++;
//				if (!num[i][6] && !num[i][7])
//					cnt++;
//				if (!num[i][7] && !num[i][8])
//					cnt++;
//				if (!num[i][9] && !num[i][10])
//					cnt++;
//				if (!num[i][10] && !num[i][11])
//					cnt++;
//			}
//			else if (T == 3)
//			{
//				if (!num[i][1] && !num[i][2] && !num[i][3])
//					cnt++;
//				if (!num[i][2] && !num[i][3] && !num[i][4])
//					cnt++;
//				if (!num[i][5] && !num[i][6] && !num[i][7])
//					cnt++;
//				if (!num[i][6] && !num[i][7] && !num[i][8])
//					cnt++;
//				if (!num[i][9] && !num[i][10] && !num[i][11])
//					cnt++;
//			}
//			else if (T == 4)
//			{
//				if (!num[i][1] && !num[i][2] && !num[i][3] && !num[i][4])
//					cnt++;
//				if (!num[i][5] && !num[i][6] && !num[i][7] && !num[i][8])
//					cnt++;
//			}
//		}
//		printf("%d\n", cnt);
//		for (int i = 0;i < 5;i++)
//		{
//			if (T == 2)
//			{
//				if (!num[i][1] && !num[i][2])
//					printf("%s 1 2\n", Day[i]);
//				if (!num[i][2] && !num[i][3])
//					printf("%s 2 3\n", Day[i]);
//				if (!num[i][3] && !num[i][4])
//					printf("%s 3 4\n", Day[i]);
//				if (!num[i][5] && !num[i][6])
//					printf("%s 5 6\n", Day[i]);
//				if (!num[i][6] && !num[i][7])
//					printf("%s 6 7\n", Day[i]);
//				if (!num[i][7] && !num[i][8])
//					printf("%s 7 8\n", Day[i]);
//				if (!num[i][9] && !num[i][10])
//					printf("%s 9 10\n", Day[i]);
//				if (!num[i][10] && !num[i][11])
//					printf("%s 10 11\n", Day[i]);
//			}
//			else if (T == 3)
//			{
//				if (!num[i][1] && !num[i][2] && !num[i][3])
//					printf("%s 1 3\n", Day[i]);
//				if (!num[i][2] && !num[i][3] && !num[i][4])
//					printf("%s 2 4\n", Day[i]);
//				if (!num[i][5] && !num[i][6] && !num[i][7])
//					printf("%s 5 7\n", Day[i]);
//				if (!num[i][6] && !num[i][7] && !num[i][8])
//					printf("%s 6 8\n", Day[i]);
//				if (!num[i][9] && !num[i][10] && !num[i][11])
//					printf("%s 9 11\n", Day[i]);
//			}
//			else if (T == 4)
//			{
//				if (!num[i][1] && !num[i][2] && !num[i][3] && !num[i][4])
//					printf("%s 1 4\n", Day[i]);
//				if (!num[i][5] && !num[i][6] && !num[i][7] && !num[i][8])
//					printf("%s 5 8\n", Day[i]);
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//char str[105][105];
//int D[105][105];
//int  main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		int n, m, d,cnt = 0;
//		memset(D, 0, sizeof(D));
//		scanf("%d%d%d", &n, &m, &d);
//		for (int i = 0;i < n;i++)
//		{
//			for (int j = 0;j < m;j++)
//			{
//				scanf("%c", &str[i][j]);
//			}
//		}
//		int l = 0;
//		if (d == 1 || d == 4 || d == 2)
//		{
//			for (int i = 1;i < m;i++)
//			{
//				if (str[l][i] != '*')
//				{
//					for (int j = 1;j <= m;j++)
//					{
//						D[0][j]++;
//						cnt++;
//					}
//				}
//				if (str[l][i] == '*' || i == m-1)
//				{
//					for (int k = l;k <= n;k++)
//					{
//						if (str[k][i] != '*')
//						{
//							D[k][i]++;
//							cnt++;
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int min(int x, int y)
//{
//	return x < y ? x : y;
//}
//int main()
//{
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		int x1, y1, r1, x2, y2, r2;
//		scanf("%d%d%d", &x1, &y1, &r1);
//		scanf("%d%d%d", &x2, &y2, &r2);
//		double d = 0.0;
//		int b = 0,c = 0;
//		int big = max(r1, r2);//大圆半径
//		int small = min(r1, r2);//小圆半径
//		d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//		c = big - small;
//		b = big + small;
//		if (d < c)
//		{
//			puts("1");
//		}
//		if (d == c)
//		{
//			puts("2");
//		}
//		if (d > c && d < b)
//		{
//			puts("3");
//		}
//		if (d == b)
//		{
//			puts("4");
//		}
//		if (d > b)
//		{
//			puts("5");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int a[11], b[11];
//__int64 gcd(__int64 a, __int64 b)
//{
//    __int64 t;
//    if (b > a) {
//        t = a; a = b; b = t;
//    }
//    while (t = a % b, t != 0) {
//        a = b; b = t;
//    }
//    return b;
//}
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        memset(a, 0, sizeof(a));
//        memset(b, 0, sizeof(b));
//        int n;
//        __int64 t;
//        scanf("%d", &n);
//        for (int i = 0;i < n;i++)
//        {
//            scanf("%d", &a[i]);
//        }
//        for (int i = 0;i < n;i++)
//        {
//            scanf("%d", &b[i]);
//        }
//        __int64 s = b[n - 1], m = a[n - 1], tem;
//        for (int i = n - 1;i >= 1;i--)
//        {
//            tem = s;
//            s = m * b[i - 1];
//            m = a[i - 1] * m + tem;
//            t = gcd(s, m); s /= t; m /= t;
//        }
//        t = gcd(s, m); s /= t; m /= t;
//        if (s % m == 0)
//        {
//            printf("%I64d\n", s / m);
//        }
//        else
//        {
//            printf("%I64d/%I64d\n", s, m);
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int fib[50];
//int main()
//{
//	int T;	
//	scanf("%d", &T);
//	int n, i, j, k;
//	memset(fib, 0, sizeof(fib));
//	fib[1] = 1, fib[2] = 2;
//	for (i = 3;i <= 45;i++)
//	{
//		fib[i] = fib[i - 1] + fib[i - 2];
//	}
//	while (T--)
//	{
//		int cnt = 0;
//		scanf("%d", &n);
//		if (n > 2)
//		{
//			for (i = 1;i <= 45;i++)//三个数不相等的情况 
//			{
//				if (fib[i] > n)
//				{
//					break;
//				}
//				for (j = i + 1;j <= 45;j++)
//				{
//					if (fib[i] + fib[j] > n)
//					{
//						break;
//					}
//					for (k = j + 1;k <= 45;k++)
//					{
//						if (fib[i] + fib[j] + fib[k] > n)
//						{
//							break;
//						}
//						if (fib[i] + fib[j] + fib[k] == n)
//						{
//							cnt++;
//						}
//					}
//				}
//			}
//			for (i = 1;i <= 45;i++)//后两个数相等的情况 
//			{
//				if (fib[i] > n)
//				{
//					break;
//				}
//				for (j = i + 1;j <= 45;j++)
//				{
//					if (fib[i] + fib[j] > n)
//					{
//						break;
//					}
//					if (fib[i] + fib[j] * 2 == n)
//					{
//						cnt++;
//					}
//				}
//			}
//			for (i = 1;i <= 45;i++)//前两个数相等的情况 
//			{
//				if (fib[i] > n)
//				{
//					break;
//				}
//				for (j = i + 1;j <= 45;j++)
//				{
//					if (fib[i] * 2 > n)
//					{
//						break;
//					}
//					if (fib[i] * 2 + fib[j] == n)
//					{
//						cnt++;
//					}
//				}
//			}
//			for (i = 1;i <= 45;i++)//三个数相等的情况 
//			{
//				if (fib[i] > n)
//				{
//					break;
//				}
//				if (fib[i] * 3 == n)
//				{
//					cnt++;
//				}
//			}
//			printf("%d\n", cnt);
//		}
//		else
//		{
//			puts("0");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#define p 1000010
//int F[p + 5];
//int B[p + 5] = { 0,0 };
//int H[p + 5];
//int main()
//{
//	int i, j;
//	memset(B, 0, sizeof(B));
//	for (i = 2;i <= p;i++) B[i] = 1;
//	for (i = 2; i * i <= p; i++)
//		if (B[i])
//			for (j = i * i; j <= p; j = j + i)
//				B[j] = 0;
//	memset(F, 0, sizeof(F));
//	memset(H, 0, sizeof(H));
//	F[1] = 0, F[2] = 1;
//	for (i = 2;i <= p;i++)
//	{
//		if (B[i] == 1)
//		{
//			F[i] = 1;
//		}
//	}
//	for (i = 2;i <= p;i++)
//	{
//		for (j = 2;j * i <= p;j++)
//		{
//			if (B[i])
//			{
//				F[i * j]++;
//			}
//		}
//	}
//	for (i = 2;i <= p;i++)
//	{
//		H[i] = H[i - 1] + F[i];
//	}
//	int T;
//	scanf("%d", &T);
//	while (T--)
//	{
//		int a, b;
//		scanf("%d%d", &a, &b);
//		printf("%d\n", H[b] - H[a - 1]);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//char str[35];
//int main()
//{
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int n, ai, i, j, x = 0, y = 0;
//        while ((scanf("%s", str) != EOF))
//        {
//            scanf("%d", &n);
//            for (i = 0;i < n;i++)
//            {
//                scanf("%d", &ai);
//                ai--;
//                int len = strlen(str);
//                int len0 = 1, len1 = 1, cnt = 0;
//                char a = str[ai];
//                str[ai] = str[ai + 1];
//                str[ai + 1] = a;
//                for (j = ai - 1;j >= 0;j--)
//                {
//                    if (str[j] == str[ai])
//                    {
//                        len0++;
//                    }
//                    else
//                        break;
//                }
//                for (j = ai + 2;j < len;j++)
//                {
//                    if (str[j] == str[ai + 1])
//                    {
//                        len1++;
//                    }
//                    else
//                        break;
//                }
//                x = 0;
//                if (str[ai] != str[ai + 1])
//                {
//                    if (len1 >= 3)
//                    {
//                        cnt += len1;
//                        x = ai + 1;
//                    }
//                    if (len0 >= 3)
//                    {
//                        cnt += len0;
//                        x = ai - len0 + 1;
//                    }
//                }
//                else
//                {
//                    if (len0 + len1 >= 3)
//                    {
//                        cnt = cnt + len0 + len1;
//                        x = ai - len0 + 1;
//                    }
//                }
//                if (cnt >= 3)
//                {
//                    for (j = x;j + cnt <= len;j++)
//                        str[j] = str[j + cnt];
//                }
//                if (strlen(str) == 0)
//                {
//                    puts("Over");
//                }
//                else
//                {
//                    printf("%s\n", str);
//                }
//            }
//            puts("");
//        }
//    }
//    return 0;
//}
//#include <stdio.h>
//int T, n, m, d, x, y, ans;
//            //不动，d==4向左走，d==3向下走，d==2向右走，d==1向上走
//int tags[6][3] = { {0,0},{-1,0},{0,1},{1,0},{0,-1} };//改变x，y的值，因为它只能平移，所以没有x，y同时加一的情况
//char maps[102][102];
//int main()
//{
//    scanf("%d", &T);
//    while (T--)
//    {
//        int flagS = 1;
//        int books[102][102][5] = { 0 };
//        scanf("%d%d%d", &n, &m, &d);
//        for (int i = 1; i <= n; i++)
//        {
//            scanf("%s", maps[i] + 1);
//            if (flagS)
//            {
//                for (int j = 1; j <= m; j++)
//                {
//                    if (maps[i][j] == 'S')
//                        x = i, y = j, flagS = 0;   //找到出生点在哪
//                }
//            }
//        }
//        ans = 0;//记录走的步数
//        while (maps[x][y] != 'E')
//        {//初始点在第一行且向上走  //最后一列向右走    //最后一行向下走        //第一列向左走        //碰到墙壁 
//            if ((d == 1 && x == 1) || (d == 2 && y == m) || (d == 3 && x == n) || (d == 4 && y == 1) || maps[x + tags[d][0]][y + tags[d][1]] == '*')
//            {
//                d = d % 4 + 1;                          // 右转向
//                books[x][y][d]++;//记录经过点位是以什么方向经过的
//            }
//            else
//            {
//                x += tags[d][0], y += tags[d][1];   // 移动
//                books[x][y][d]++;
//                ans++;
//            }
//            if (books[x][y][d] == 2)
//            { 
//                ans = 0;
//                break;
//            }
//        }
//        if (ans)    printf("%d\n", ans);
//        else        puts("Impossible");
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#define p 1000010
//int G[p + 5];
//int B[p + 5] = { 0,0 };
//int H[p + 5];
//int main()
//{
//    int i, j,n;
//    memset(B, 0, sizeof(B));
//    for (i = 2;i <= p;i++) B[i] = 1;
//    for (i = 2; i * i <= p; i++)
//        if (B[i])
//            for (j = i * i; j <= p; j = j + i)
//                B[j] = 0;
//    memset(G, 0, sizeof(G));
//    memset(H, 0, sizeof(H));
//    G[1] = 0, G[2] = 1;
//    for (i = 2;i <= 1000000;i++)//n的值
//    {
//        n = i;
//        if (B[i])
//        {
//            G[i] = 1;
//            for (j = 1;j * i <= p;j++)
//            {
//                G[i * j] = G[i] + G[j];
//            }
//        }
//    }
//    for (i = 1;i <= p;i++)
//    {
//        G[i] += G[i - 1];
//    }
//    int T;
//    scanf("%d", &T);
//    while (T--)
//    {
//        int a, b;
//        scanf("%d%d", &a, &b);
//        printf("%d\n", G[b] - G[a - 1]);
//    }
//    return 0;
//}
#include<stdio.h>
int line[1005] = { 0 };
char str[2000];
char str1[2000];
int main()
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		int n, i, j, k,cnt,cnt1;
		scanf("%d", &n);
		for (i = 1;i < 1000;i += 2)
		{
			line[i] = i;
		}
		for (i = 1;i <= 1000;i++)
		{
			line[i] += line[i - 1];//到第几行为止有多少个三角形
		}
		cnt = n;
		for (i = 1;i <= cnt;i++)
		{
			printf(" ");
		}
		for (j = 1;j <= n;j++)
		{
			if (j == 1)
			{
				puts("*");
			}
			
			
		}

	}
	return 0;
}
