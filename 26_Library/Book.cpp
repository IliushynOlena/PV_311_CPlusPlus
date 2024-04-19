#include "Book.h"

Book::Book()
{
	title = "no title";
	year = 1;
	author = "no author";
	pages = 0;
	genre = None;
}

void Book::ShowInfo() const
{
	cout << "Title book : " << title << endl;
	cout << "Year : " << year << endl;
	cout << "Author : " << author << endl;
	cout << "Pages : " << pages << endl;
	cout << "Genre : " << genre ;
	switch (genre)
	{
	case None:cout << "None " << endl;break;
	case History:cout << "History " << endl;break;
	case Fantasy:cout << "Fantasy " << endl;break;
	case Drama:cout << "Drama " << endl;break;
	case Roman:cout << "Roman " << endl;break;
	case Comedy:cout << "Comedy " << endl;	break;
	case Programming:cout << "Programming " << endl;break;
	case Political:cout << "Political " << endl;break;
	case ScienceFiction:cout << "ScienceFiction " << endl;break;
	}
}


