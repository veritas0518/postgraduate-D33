//#include<stdio.h>
//#define MAX 100
//void Show(int arr1[], int n) {  //��ӡ�����������
//	int i;
//	for (i = 0; i < n; i++) {
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//}
//
//void Reverse(int* x, int* y) {  //����Ԫ�ص�λ��
//	int temp = *y;
//	*y = *x;
//	*x = temp;
//}
//
//void DoubleBubble(int arr2[], int n) {
//	int low, high, flag, i;
//	low = 0;
//	high = n - 1;
//	while (low < high) {
//		flag = 0; //low<highʱ��Ԫ�ؽ�������¼���û����
//		for (i = low; i < high; i++) {
//			if (arr2[i] > arr2[i + 1]) {
//				Reverse(&arr2[i], &arr2[i + 1]);
//				flag = 1; //��ʾ����Ԫ������¼�������
//			}
//		}
//		if (!flag) {//���flagΪ�棬��������
//			break;
//		}
//		high--;
//		for (i = high; i > low; i--) {
//			if (arr2[i] < arr2[i - 1]) {
//				Reverse(&arr2[i], &arr2[i - 1]);
//			}
//		}
//		low++;
//		Show(arr2, n);
//	}
//}
//
//int main() {
//	int data[MAX], n, i;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++) {
//		scanf("%d", &data[i]);
//	}
//	Show(data, n);
//	DoubleBubble(data, n);
//	Show(data, n);
//return 0;
//}
