#include"management.h"
void menu()
{
	printf("******************************************\n");
	printf("***1.添加学生	      2.删除学生********\n");
	printf("***3.查找学生	      4.修改学生信息****\n");
	printf("******************0.退出******************\n");
	printf("******************************************\n");
}
int main()
{
	do 
	{
		menu();
		printf("请输入想执行的操作：");
		scanf("%d", &x);
		switch (x)
		{
			case 1:
			{
				add_stu();
				break;
			}
			case 2:
			{	
				del_stu();
				break;
			}
			case 3:
			{
				search_stu();
				break;
			}
			case 4:
			{
				modify_stu();
				break;
			}
			case 0:
			{
				
				printf("已退出通讯录\n");
				break;
		        }
			default:
			{
				printf("输入错误，请重新输入\n");
				break;
			}
	}
