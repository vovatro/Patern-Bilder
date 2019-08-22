#include "Header.h"

Notebook::Notebook(string name):name(name)
{
}

string Notebook::getPart(const string & key)
{
	return part[key];
}

void Notebook::setPart(string key, string value)
{
	part[key] = value;
}

void Notebook::show()
{
	for (auto el : part)
		cout << el.first << "  " << el.second << endl;
}

bool Notebook::checkPart(string key)
{
	return part.find(key) != part.end();
}

GamerNotebook::GamerNotebook()
{
	devis = new Notebook("Gamer");
}

void GamerNotebook::setMemory()
{
	devis->setPart("memory", "16GGb");
}

void GamerNotebook::setHDD()
{
	devis->setPart("HHD", "1000GGb");
}

void GamerNotebook::setMatrix()
{
	devis->setPart("Matrix", "1366x768");
}

void GamerNotebook::setprocessor()
{
	devis->setPart("Processor", "i5-8400");
}

GamerNotebook::~GamerNotebook()
{
	delete devis;
}

HomeNotebook::HomeNotebook()
{
	devis = new Notebook("Home");
}

void HomeNotebook::setMemory()
{
	devis->setPart("Memory", "8GGb");
}

void HomeNotebook::setHDD()
{
	devis->setPart("HDD", "1000GGb");
}

void HomeNotebook::setMatrix()
{
	devis->setPart("Matrix", "1366x768");
}

void HomeNotebook::setprocessor()
{
	devis->setPart("Processor", "i3-8400");
}

HomeNotebook::~HomeNotebook()
{
	delete devis;
}

 CastomNotebook::CastomNotebook()
{
	devis = new Notebook("Castom");
}

void CastomNotebook::setMemory()
{
	string temp;
	cout << "Enter Memory:";
	cin >> temp;
	devis->setPart("Memory", temp);
}

void CastomNotebook::setHDD()
{
	string temp;
	cout << "Enter HDD:";
	cin >> temp;
	devis->setPart("HDD", temp);
}

void CastomNotebook::setMatrix()
{
	string temp;
	cout << "Enter Matrix:";
	cin >> temp;
	devis->setPart("Matrix", temp);
}

void CastomNotebook::setprocessor()
{
	string temp;
	cout << "Enter Processor:";
	cin >> temp;
	devis->setPart("Processor", temp);
}

CastomNotebook::~CastomNotebook()
{
	delete devis;
}

void NotebookShop::createNotebook(NotebookBuilder * obj)
{
	obj->setMemory();
	obj->setHDD();
	obj->setMatrix();
	obj->setprocessor();
}

Notebook* NotebookBuilder::getDivice()
{
	return this->devis;
}
