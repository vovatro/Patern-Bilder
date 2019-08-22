#pragma once
#include<iostream>
#include<string>
#include<map>
using namespace std;
class Notebook
{
	string name;
	map<string, string>part;
public:
	Notebook(string name);
	string getPart(const string&key);
	void setPart(string key,string value);
	void show();
	bool checkPart(string key);

};

class NotebookBuilder 
{
protected:
	Notebook*devis;
public:
	virtual Notebook* getDivice();
	virtual void setMemory()=0;
	virtual void setHDD()=0;
	virtual void setMatrix()=0;
	virtual void setprocessor()=0;
	virtual ~NotebookBuilder() {}
};

class GamerNotebook :public NotebookBuilder 
{
public:
	GamerNotebook();
	virtual void setMemory();
	virtual void setHDD();
	virtual void setMatrix();
	virtual void setprocessor();
	virtual ~GamerNotebook();
};

class HomeNotebook :public NotebookBuilder
{
public:
	HomeNotebook();
	virtual void setMemory();
	virtual void setHDD();
	virtual void setMatrix();
	virtual void setprocessor();
	virtual ~HomeNotebook();
};

class CastomNotebook :public NotebookBuilder
{
public:
	CastomNotebook();
	virtual void setMemory();
	virtual void setHDD();
	virtual void setMatrix();
	virtual void setprocessor();
	virtual ~CastomNotebook();
};

class NotebookShop
{
public:
	void createNotebook(NotebookBuilder*obj);
};