#include"Header.h"
void main()
{
	NotebookShop *shop=new NotebookShop();
	NotebookBuilder *builder = new GamerNotebook();
	shop->createNotebook(builder);
	builder->getDivice()->show();

	delete builder;
	builder = new HomeNotebook();
	shop->createNotebook(builder);
	builder->getDivice()->show();
	system("pause");
}