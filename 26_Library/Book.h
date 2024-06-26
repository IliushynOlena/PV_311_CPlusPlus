#pragma once
#include <iostream>
using namespace std;

enum Genre{None, History, Fantasy, Drama,Roman, Comedy,Programming,Political,ScienceFiction};

class Book
{
private:
	string title;
	int year;
	string author;
	int pages;
	Genre genre;
public:
	Book();
	Book(string t, int y, string a, int p, Genre g):title(t),year(y),
		author(a),pages(p),genre(g){}
	void ShowInfo()const;
};

