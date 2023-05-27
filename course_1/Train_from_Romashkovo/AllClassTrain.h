#pragma once
#include <vcclr.h>
#include <math.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

class myRecttangle
{
protected: 
	int xl;
	int yl;
	int width,height;
	gcroot <Color> cline, cfon;

public:

	myRecttangle(int _x = 0, int _y = 0, int _width = 0, int _height = 0)
	{
		xl = _x;
		yl = _y;
		width = _width;
		height = _height;
		cfon = Color::Black;
		cline = Color::Black;
	}

	~myRecttangle(){};

	void Show (Graphics^ g)
	{
		Pen^ b = gcnew Pen(cline, 5);
		Brush^ a = gcnew SolidBrush(cfon);
		g->DrawRectangle(b, xl, yl, width, height);
		g->FillRectangle(a, xl, yl, width, height);
	}

	void move (int dx)
	{
		xl += dx;
	}

	void setcfon(gcroot <Color> _cfon)
	{
		cfon = _cfon;
	}

	void setcline(gcroot <Color> _cline)
	{
		cline = _cline;
	}
};

class windo:public myRecttangle{
public:
	windo(int x = 0, int y = 0, int h = 0): myRecttangle(x, y, 6 * h, 6 * h)
	{
		cfon = Color::Blue;
		cline = Color::Blue;
	}
};

class door: public myRecttangle{
public:
	door(int x = 0, int y = 0, int h = 0): myRecttangle(x, y, 6 * h, 12 * h)
	{
		cfon = Color::Red;
		cline = Color::Red;
	}
};

class corpus: public myRecttangle{
public:
	corpus(int x = 0, int y = 0, int h = 0): myRecttangle(x, y, 33 * h, 14 * h)
	{
		cfon = Color::YellowGreen;
		cline = Color::YellowGreen;
	}
};

class wheel: public myRecttangle{
public:
	wheel(int x = 0, int y = 0, int h = 0): myRecttangle(x, y, 4 * h, 4 * h)
	{
		cfon = Color::Gray;
		cline = Color::Gray;
	}

	void Show(Graphics ^g)
	{
		Pen^ b = gcnew Pen(cline, 5);
		Brush^ a = gcnew SolidBrush(cfon);
		g->DrawEllipse(b, xl, yl, width, height);
		g->FillEllipse(a, xl, yl, width, height);
	}
};

class carriage{
private:
	corpus corp;
	door dver;
	windo *okno;
	wheel leftcoleso, rightcoleso;

public:
	carriage(int x = 0, int y = 0, int h = 0)
	{
		corp = corpus(x, y, h);
		dver = door(x, y + 2 * h, h);
		okno = new windo[3];
		for (int i = 0; i < 3; i++)
		{
			okno[i] = windo(x + 9 * h + 8 * i * h, y + 2 * h, h);
		}
		leftcoleso = wheel(x + 1 * h, y + 14 * h, h);
		rightcoleso = wheel(x + 28 * h, y + 14 * h, h);
	}

	carriage (const carriage &tmp)
	{
		corp = tmp.corp;
		dver = tmp.dver;
		okno = new windo[3];
		for(int i=0; i < 3; i++)
		{
			okno[i] = tmp.okno[i];
		}
		leftcoleso = tmp.leftcoleso;
		rightcoleso = tmp.rightcoleso;
	}

	carriage &operator= (carriage tmp)
	{
		corp = tmp.corp;
		dver = tmp.dver;
		for(int i = 0; i < 3; i++)
		{
			okno[i] = tmp.okno[i];
		}
		leftcoleso = tmp.leftcoleso;
		rightcoleso = tmp.rightcoleso;
		return *this;
	}

	void Show(Graphics ^g)
	{
		corp.Show(g);
		dver.Show(g);
		for (int i = 0; i < 3; i++)
		{
			okno[i].Show(g);
		}
		leftcoleso.Show(g);
		rightcoleso.Show(g);
	}

	void move(int dx)
	{
		corp.move(dx);
		dver.move(dx);
		for (int i = 0; i < 3; i++)
		{
			okno[i].move(dx);
		}
		leftcoleso.move(dx);
		rightcoleso.move(dx);
	}

	~carriage()
	{
		delete[] okno;
	}
};

class truba:public myRecttangle{
public:
	truba(int x = 0, int y = 0, int h = 0): myRecttangle(x, y, 2 * h, 4 * h)
	{
		cfon = Color::RosyBrown;
		cline = Color::RosyBrown;
	}
};

class myline 
{
protected:
	int xll, yll, xrl, yrl;
	gcroot <Color> cfonli;

public:
	myline(int _xll = 0, int _yll = 0, int _xrl = 0, int _yrl = 0)
	{
		xll = _xll;
		yll = _yll;
		xrl = _xrl;
		yrl = _yrl;
		cfonli = Color::Aquamarine;
	}

	~myline(){};

	void Show (Graphics^ g)
	{
		Pen^ b = gcnew Pen(cfonli, 5);
		g->DrawLine(b, xll, yll, xrl, yrl);	
	}

	void move (int dx)
	{
		xll += dx;
		xrl += dx;
	}

	void setcfonli(gcroot <Color> _cfonli)
	{
		cfonli = _cfonli;
	}
};

class scepka: public myline{
public:
	scepka(int x = 0, int y = 0, int h = 0): myline(x, y, x + 3 * h, y)
	{
		cfonli = Color::Black;	
	}

	void move(int dx)
	{
		xll += dx;
		xrl += dx;
	}
};

class engine: public myline
{
private:
	int _xl, _yl, _xr, _yr, _h;
	double r, angle;

public:
	engine(int x = 0, int y = 0, int h = 0): myline(x + 3 * h, y - 1, x + 27 * h + 3 * h, y - 1)
	{
		angle = 0;
		_yr = yll;
		_xl = xll;
		_xr = xll + 27 * h;
		_yl = yll;
		_h = h;
		r = 1 * _h;
		cfonli = Color::Black;	
	}

	void move(int dx)
	{
		_xl += dx;
		_xr += dx;

		angle = angle + dx / (r);

		if (angle > 6.28)
		{
			angle = angle - 6.28;
		}

		xll = (int)(_xl + r * cos(angle));
		yll = (int)(_yl + r * sin(angle));
		xrl = (int)(_xr + r * cos(angle));
		yrl = (int)(_yr + r * sin(angle));
	}

	void Show(Graphics^ g)
	{
		Pen^ b = gcnew Pen(cfonli, 2);
		g->DrawLine(b, _xl, _yl, xll, yll);
		g->DrawLine(b, xll, yll, xrl, yrl);
		g->DrawLine(b, _xr, _yr, xrl, yrl);
	}
};

class paravoz
{
private:
	corpus corppar;
	door dverpar;
	windo *oknopar;
	wheel leftcolesopar, rightcolesopar;
	truba tube;
	engine dvig;

public:
	paravoz(int x = 0, int y = 0, int h = 0)
	{

		corppar = corpus(x, y, h);
		dverpar = door(x, y + 2 * h, h);
		oknopar = new windo[3];
		for(int i = 0; i < 3; i++)
		{
			oknopar[i] = windo(x + 9 * h + 8 * h * i, y + 2 * h, h);
		}
		leftcolesopar = wheel(x + 1 * h, y + 14 * h, h);
		rightcolesopar = wheel(x + 28 * h, y + 14 * h, h);

		tube = truba(x + h * 30, y - 4 * h, h);
		dvig = engine(x, y + 16 * h, h);
	}

	~paravoz()
	{
		delete[] oknopar;
	}

	paravoz (const paravoz &tmp)
	{
		corppar = tmp.corppar;
		dverpar = tmp.dverpar;
		oknopar = new windo[3];
		for(int i = 0; i < 3; i++)
		{
			oknopar[i] = tmp.oknopar[i];
		}
		leftcolesopar = tmp.leftcolesopar;
		rightcolesopar = tmp.rightcolesopar;
		dvig = tmp.dvig;
		tube = tmp.tube;
	}

	paravoz &operator= (paravoz tmp)
	{
		corppar = tmp.corppar;
		dverpar = tmp.dverpar;
		for(int i = 0; i < 3; i++)
		{
			oknopar[i] = tmp.oknopar[i];
		}
		leftcolesopar = tmp.leftcolesopar;
		rightcolesopar = tmp.rightcolesopar;
		dvig = tmp.dvig;
		tube = tmp.tube;
		return *this;
	}

	void Show(Graphics ^g)
	{
		corppar.Show(g);
		dverpar.Show(g);
		for (int i = 0; i < 3; i++)
		{
			oknopar[i].Show(g);
		}
		leftcolesopar.Show(g);
		rightcolesopar.Show(g);
		dvig.Show(g);
		tube.Show(g);
	}

	void move(int dx)
	{
		corppar.move(dx);
		dverpar.move(dx);
		for (int i = 0; i < 3; i++)
		{
			oknopar[i].move(dx);
		}
		leftcolesopar.move(dx);
		rightcolesopar.move(dx);
		dvig.move(dx);
		tube.move(dx);
	}
};

class train 
{
private:
	paravoz first;
	carriage *vagons;
	scepka *sceps;
	int kolvo;

public:
	train(int x = 0, int y = 0, int h = 0, int n = 0)
	{
		kolvo = n;
		first = paravoz(x, y, h);
		vagons = new carriage[kolvo];
		for(int i = 0; i < kolvo; i++)
		{
			vagons[i] = carriage(x - (33 + 3) * h * (i + 1), y, h);	
		}
		sceps = new scepka[kolvo];
		for(int i = 0; i < kolvo; i++)
		{
			sceps[i] = scepka(x - (33 + 3) * h * i - 3 * h, y + 13 * h, h);
		}
	}

	~train()
	{
		delete[] vagons;
		delete[] sceps;
	}

	train (const train &tmp)
	{
		kolvo = tmp.kolvo;
		first = tmp.first;
		vagons = new carriage[kolvo];
		for(int i = 0; i < kolvo; i++)
		{
			vagons[i] = tmp.vagons[i];	
		}
		sceps = new scepka[kolvo];
		for(int i = 0; i < kolvo; i++)
		{
			sceps[i] = tmp.sceps[i];	
		}

	}

	train &operator= (train tmp)
	{
		kolvo = tmp.kolvo;
		first = tmp.first;
		for(int i = 0 ; i < kolvo; i++)
		{
			vagons[i] = tmp.vagons[i];	
		}
		for(int i = 0; i < kolvo; i++)
		{
			sceps[i] = tmp.sceps[i];	
		}
		return *this;
	}

	void Show(Graphics ^g)
	{
		first.Show(g);
		for(int i = 0; i < kolvo; i++)
		{
			vagons[i].Show(g);	
		}
		for(int i = 0; i < kolvo; i++)
		{
			sceps[i].Show(g);	
		}
	}

	void move(int dx)
	{
		first.move(dx);
		for(int i = 0; i < kolvo; i++)
		{
			vagons[i].move(dx);	
		}
		for(int i = 0; i < kolvo; i++)
		{
			sceps[i].move(dx);	
		}
	}
};