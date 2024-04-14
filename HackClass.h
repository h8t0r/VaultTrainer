#pragma once

#include <ctime>
#include <random>
#include <vcclr.h>
#include <list>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

public ref class HackClass
{
public:
	HackClass() {};
	~HackClass() {};

	HackClass(Panel^ indicator1)
	{
		//UI = inputUI;
		hackClock = gcnew System::Windows::Forms::Timer();
		hackClock->Interval = 10;
		hackClock->Tick += gcnew EventHandler(this, &HackClass::decrementRemainingTime);

		srand(static_cast<unsigned int>(time(nullptr)));
		rand = gcnew Random();
		digits = gcnew List<String^>();
		code = gcnew List<String^>();
		inputValues = gcnew List<String^>();
		inputValues->Add("Null");
		inputValues->Add("Null");
		inputValues->Add("Null");
		inputValues->Add("Null");

		defaultColor = indicator1->DefaultBackColor;
		reset();

	}

	
	int reset();
	void startClock(); 
	void stopClock();
	void checkCode();

	Color getFeedbackColor(int slot);
	Color getDefaultColor();
	int getRemainingTime();
	void inputValue(String^ input, int slot);
	void decrementRemainingTime(System::Object^ sender, System::EventArgs^ e);

private:
	void randomizeCode();
	List<Color> listInputs();
	Color colorInput(int slot);

private:
	Color defaultColor;
	Random^ rand;
	List<String^>^ code;
	List<String^>^ digits;
	List<String^>^ inputValues;
	List<Color> coloredValues;
	Timer^ hackClock;
	int countdownSeconds;

};

