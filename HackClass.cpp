#include "HackClass.h"

void HackClass::randomizeCode()
{
	digits->Clear();

	digits->Add("0");
	digits->Add("1");
	digits->Add("2");
	digits->Add("3");
	digits->Add("4");
	digits->Add("5");
	digits->Add("6");
	digits->Add("7");
	digits->Add("8");
	digits->Add("9");

	code->Clear();

	int randomDigit = rand->Next(0, 10);
	code->Add(digits[randomDigit]);
	digits->Remove(randomDigit.ToString());

	randomDigit = rand->Next(0, 9);
	code->Add(digits[randomDigit]);
	digits->Remove(digits[randomDigit]);

	randomDigit = rand->Next(0, 8);
	code->Add(digits[randomDigit]);
	digits->Remove(digits[randomDigit]);

	randomDigit = rand->Next(0, 7);
	code->Add(digits[randomDigit]);
}

Color HackClass::getDefaultColor()
{
	return defaultColor;
}

int HackClass::getRemainingTime()
{
	return countdownSeconds;
}

int HackClass::reset()
{
	randomizeCode();
	countdownSeconds = 850;
	return countdownSeconds;
}

void HackClass::decrementRemainingTime(System::Object^ sender, System::EventArgs^ e)
{
	if (--countdownSeconds == 0) 
	{
		hackClock->Stop();
		//UI->timeRanOut();

		//UI->timerBar->Value = countdownSeconds;
	}
	
}

void HackClass::startClock()
{
	hackClock->Start();
}

void HackClass::stopClock()
{
	hackClock->Stop();
}

void HackClass::checkCode()
{
	listInputs();

	Color ref = Color::Green;

	if ((coloredValues[0] == ref) && (coloredValues[1] == ref) && (coloredValues[2] == ref) && (coloredValues[3] == ref))
	{
		stopClock();
	}


}

Color HackClass::getFeedbackColor(int slot)
{
	return (coloredValues[slot]);
}

void HackClass::inputValue(String^ input, int slot)
{
	inputValues[slot] = input;
}

List<Color> HackClass::listInputs()
{
	coloredValues.Clear();

	coloredValues.Add(colorInput(0));
	coloredValues.Add(colorInput(1));
	coloredValues.Add(colorInput(2));
	coloredValues.Add(colorInput(3));
}

Color HackClass::colorInput(int slot)
{
	String^ inputRef = inputValues[slot];

	System::Drawing::Color newColor;

	if ((inputRef != "") && (inputRef == code[0]))
	{
		newColor = Color::Green;
	}
	else if ((inputRef == code[0]) || (inputRef == code[1]) || (inputRef == code[2]) || (inputRef == code[3]))
	{
		newColor = Color::Yellow;
	}
	else
	{
		newColor = Color::Red;
	}

	return newColor;
}