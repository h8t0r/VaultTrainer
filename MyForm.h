#pragma once
#pragma comment(lib, "winmm.lib")

#include <ctime>
#include <random>
#include <vcclr.h>
#include <list>
#include <Windows.h>
#include "How-To.h"
#include "OptimalStrategy.h"

namespace VaultTrainer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Threading;
	//using namespace System::Threading;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm()
		{
			InitializeComponent();

			hackClock = gcnew System::Threading::Timer(
				gcnew TimerCallback(this, &MyForm::hackClockCallback),
				nullptr, Timeout::Infinite, Timeout::Infinite);

			delayTimer = gcnew System::Threading::Timer(
				gcnew TimerCallback(this, &MyForm::DelayTimerCallback),
				nullptr, Timeout::Infinite, Timeout::Infinite);

			srand(static_cast<unsigned int>(time(nullptr)));
			rand = gcnew Random();
			digits = gcnew List<String^>();
			code = gcnew List<String^>();
			inputValues = gcnew List<String^>();
			inputValues->Add("Null");
			inputValues->Add("Null");
			inputValues->Add("Null");
			inputValues->Add("Null");
			indexOfFocus = 0;
			inputsActive = false;
			defaultColor = indicator1->DefaultBackColor;
			refColor = Color::Green;
			hightlightColor = Color::Aqua;
			start->Focus();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
			if (delayTimer != nullptr) {
				delete delayTimer;
				delayTimer = nullptr;
			}
			if (hackClock != nullptr) {
				delete hackClock;
				hackClock = nullptr;
			}
		}

	private:
		Color defaultColor; 
		Color hightlightColor;
		Color refColor;
		Random^ rand;
		List<String^>^ code;
		List<String^>^ digits;
		List<String^>^ inputValues;
		List<Color> coloredValues;
		System::Threading::Timer^ hackClock;
		System::Threading::Timer^ delayTimer;
		int countdownSeconds;
		int indexOfFocus;
		bool inputsActive;
		int delayIndex;

	private: System::Windows::Forms::Button^ start;

	public: System::Windows::Forms::ProgressBar^ timerBar;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;

	private: System::Windows::Forms::Panel^ indicator1;
	private: System::Windows::Forms::Panel^ indicator2;
	private: System::Windows::Forms::Panel^ indicator3;
	private: System::Windows::Forms::Panel^ indicator4;

	private: System::Windows::Forms::Label^ input1;
	private: System::Windows::Forms::Panel^ highlight4;
	private: System::Windows::Forms::Label^ input4;
	private: System::Windows::Forms::Panel^ highlight3;
	private: System::Windows::Forms::Label^ input3;
	private: System::Windows::Forms::Panel^ highlight2;
	private: System::Windows::Forms::Label^ input2;
	private: System::Windows::Forms::Panel^ highlight1;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ howToUseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ optimalStrategyToolStripMenuItem;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->start = (gcnew System::Windows::Forms::Button());
			this->timerBar = (gcnew System::Windows::Forms::ProgressBar());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->highlight4 = (gcnew System::Windows::Forms::Panel());
			this->input4 = (gcnew System::Windows::Forms::Label());
			this->highlight3 = (gcnew System::Windows::Forms::Panel());
			this->input3 = (gcnew System::Windows::Forms::Label());
			this->highlight2 = (gcnew System::Windows::Forms::Panel());
			this->input2 = (gcnew System::Windows::Forms::Label());
			this->highlight1 = (gcnew System::Windows::Forms::Panel());
			this->input1 = (gcnew System::Windows::Forms::Label());
			this->indicator4 = (gcnew System::Windows::Forms::Panel());
			this->indicator3 = (gcnew System::Windows::Forms::Panel());
			this->indicator2 = (gcnew System::Windows::Forms::Panel());
			this->indicator1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->howToUseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optimalStrategyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->highlight4->SuspendLayout();
			this->highlight3->SuspendLayout();
			this->highlight2->SuspendLayout();
			this->highlight1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel1->Controls->Add(this->start);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 283);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(725, 118);
			this->panel1->TabIndex = 0;
			// 
			// start
			// 
			this->start->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->start->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->start->Location = System::Drawing::Point(3, 6);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(719, 109);
			this->start->TabIndex = 1;
			this->start->Text = L"Start";
			this->start->UseVisualStyleBackColor = true;
			this->start->Click += gcnew System::EventHandler(this, &MyForm::start_Click);
			this->start->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::start_KeyPress);
			// 
			// timerBar
			// 
			this->timerBar->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->timerBar->Location = System::Drawing::Point(0, 236);
			this->timerBar->MarqueeAnimationSpeed = 1;
			this->timerBar->Maximum = 13500;
			this->timerBar->Name = L"timerBar";
			this->timerBar->Size = System::Drawing::Size(725, 47);
			this->timerBar->TabIndex = 0;
			this->timerBar->Value = 13500;
			// 
			// panel2
			// 
			this->panel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel2->Controls->Add(this->highlight4);
			this->panel2->Controls->Add(this->highlight3);
			this->panel2->Controls->Add(this->highlight2);
			this->panel2->Controls->Add(this->highlight1);
			this->panel2->Controls->Add(this->indicator4);
			this->panel2->Controls->Add(this->indicator3);
			this->panel2->Controls->Add(this->indicator2);
			this->panel2->Controls->Add(this->indicator1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(725, 236);
			this->panel2->TabIndex = 5;
			// 
			// highlight4
			// 
			this->highlight4->Controls->Add(this->input4);
			this->highlight4->Location = System::Drawing::Point(544, 36);
			this->highlight4->Name = L"highlight4";
			this->highlight4->Size = System::Drawing::Size(178, 142);
			this->highlight4->TabIndex = 15;
			// 
			// input4
			// 
			this->input4->AutoSize = true;
			this->input4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->input4->Location = System::Drawing::Point(31, 7);
			this->input4->Name = L"input4";
			this->input4->Size = System::Drawing::Size(123, 135);
			this->input4->TabIndex = 8;
			this->input4->Text = L"_";
			// 
			// highlight3
			// 
			this->highlight3->Controls->Add(this->input3);
			this->highlight3->Location = System::Drawing::Point(363, 36);
			this->highlight3->Name = L"highlight3";
			this->highlight3->Size = System::Drawing::Size(178, 142);
			this->highlight3->TabIndex = 14;
			// 
			// input3
			// 
			this->input3->AutoSize = true;
			this->input3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->input3->Location = System::Drawing::Point(31, 7);
			this->input3->Name = L"input3";
			this->input3->Size = System::Drawing::Size(123, 135);
			this->input3->TabIndex = 8;
			this->input3->Text = L"_";
			// 
			// highlight2
			// 
			this->highlight2->Controls->Add(this->input2);
			this->highlight2->Location = System::Drawing::Point(182, 36);
			this->highlight2->Name = L"highlight2";
			this->highlight2->Size = System::Drawing::Size(178, 142);
			this->highlight2->TabIndex = 13;
			// 
			// input2
			// 
			this->input2->AutoSize = true;
			this->input2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->input2->Location = System::Drawing::Point(31, 7);
			this->input2->Name = L"input2";
			this->input2->Size = System::Drawing::Size(123, 135);
			this->input2->TabIndex = 8;
			this->input2->Text = L"_";
			// 
			// highlight1
			// 
			this->highlight1->Controls->Add(this->input1);
			this->highlight1->Location = System::Drawing::Point(1, 36);
			this->highlight1->Name = L"highlight1";
			this->highlight1->Size = System::Drawing::Size(178, 142);
			this->highlight1->TabIndex = 12;
			// 
			// input1
			// 
			this->input1->AutoSize = true;
			this->input1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->input1->Location = System::Drawing::Point(31, 7);
			this->input1->Name = L"input1";
			this->input1->Size = System::Drawing::Size(123, 135);
			this->input1->TabIndex = 8;
			this->input1->Text = L"_";
			// 
			// indicator4
			// 
			this->indicator4->Location = System::Drawing::Point(546, 181);
			this->indicator4->Name = L"indicator4";
			this->indicator4->Size = System::Drawing::Size(175, 50);
			this->indicator4->TabIndex = 7;
			// 
			// indicator3
			// 
			this->indicator3->Location = System::Drawing::Point(365, 181);
			this->indicator3->Name = L"indicator3";
			this->indicator3->Size = System::Drawing::Size(175, 50);
			this->indicator3->TabIndex = 6;
			// 
			// indicator2
			// 
			this->indicator2->Location = System::Drawing::Point(184, 181);
			this->indicator2->Name = L"indicator2";
			this->indicator2->Size = System::Drawing::Size(175, 50);
			this->indicator2->TabIndex = 6;
			// 
			// indicator1
			// 
			this->indicator1->Location = System::Drawing::Point(1, 181);
			this->indicator1->Name = L"indicator1";
			this->indicator1->Size = System::Drawing::Size(178, 50);
			this->indicator1->TabIndex = 5;
			// 
			// panel3
			// 
			this->panel3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel3->Controls->Add(this->panel2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(725, 236);
			this->panel3->TabIndex = 6;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->howToUseToolStripMenuItem,
					this->optimalStrategyToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(725, 28);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// howToUseToolStripMenuItem
			// 
			this->howToUseToolStripMenuItem->Name = L"howToUseToolStripMenuItem";
			this->howToUseToolStripMenuItem->Size = System::Drawing::Size(122, 24);
			this->howToUseToolStripMenuItem->Text = L"How to Guide\?";
			this->howToUseToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::howToUseToolStripMenuItem_Click);
			// 
			// optimalStrategyToolStripMenuItem
			// 
			this->optimalStrategyToolStripMenuItem->Name = L"optimalStrategyToolStripMenuItem";
			this->optimalStrategyToolStripMenuItem->Size = System::Drawing::Size(140, 24);
			this->optimalStrategyToolStripMenuItem->Text = L"Optimal Strategy!";
			this->optimalStrategyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::optimalStrategyToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(725, 401);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->timerBar);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(743, 448);
			this->MinimumSize = System::Drawing::Size(743, 448);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Get Cracked!            VIP me: h8t0r";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->highlight4->ResumeLayout(false);
			this->highlight4->PerformLayout();
			this->highlight3->ResumeLayout(false);
			this->highlight3->PerformLayout();
			this->highlight2->ResumeLayout(false);
			this->highlight2->PerformLayout();
			this->highlight1->ResumeLayout(false);
			this->highlight1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	void DelayTimerCallback(Object^ state)
	{
		if (inputsActive)
		{ 
			switch (delayIndex)
			{
			case 0:
				indicator1->BackColor = coloredValues[0];
				PlaySound(L"SoftClap.wav", NULL, SND_FILENAME | SND_ASYNC);
				delayIndex++;
				break;
			case 1:
				indicator2->BackColor = coloredValues[1];
				PlaySound(L"SoftClap.wav", NULL, SND_FILENAME | SND_ASYNC);
				highlight1->BackColor = defaultColor;
				highlight2->BackColor = hightlightColor;
				delayIndex++;
				break;
			case 2:
				indicator3->BackColor = coloredValues[2];
				PlaySound(L"SoftClap.wav", NULL, SND_FILENAME | SND_ASYNC);
				highlight2->BackColor = defaultColor;
				highlight3->BackColor = hightlightColor;
				delayIndex++;
				break;
			case 3:
				indicator4->BackColor = coloredValues[3];
				PlaySound(L"SoftClap.wav", NULL, SND_FILENAME | SND_ASYNC);
				highlight3->BackColor = defaultColor;
				highlight4->BackColor = hightlightColor;
				delayIndex++;
				break;
			case 4:
				delayIndex++;
			default:
				break;
			}

			if( delayIndex == 5)
			{
				highlight4->BackColor = defaultColor;
			}
			else if (delayIndex == 4)
			{
				Invoke(gcnew Action(this, &MyForm::checkIfCracked));
			}
			
		}
	}

	private: System::Void checkInputs(System::Object^ sender, System::EventArgs^ e)
	{
		listInputs();

		highlight1->BackColor = hightlightColor;
		delayIndex = 0;
		delayTimer->Change(0, 250);
	}

	void checkIfCracked() 
	{
		if ((inputsActive) && (coloredValues[0] == refColor) && (coloredValues[1] == refColor) && (coloredValues[2] == refColor) && (coloredValues[3] == refColor))
		{
			inputsActive = false;
			highlight4->BackColor = defaultColor;
			delayTimer->Change(Timeout::Infinite, Timeout::Infinite);
			hackClock->Change(Timeout::Infinite, Timeout::Infinite);
			PlaySound(L"Gawd.wav", NULL, SND_FILENAME | SND_ASYNC);
			start->Text = "SUCCESS!";
		}
	}

	void reset()
	{
		randomizeCode();
		countdownSeconds = 13500;
		indexOfFocus = 0;
		timerBar->Value = countdownSeconds;
	}

	void randomizeCode()
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

	void listInputs()
	{
		coloredValues.Clear();

		coloredValues.Add(compareInput(0));
		coloredValues.Add(compareInput(1));
		coloredValues.Add(compareInput(2));
		coloredValues.Add(compareInput(3));
	}

	Color compareInput(int slot)
	{
		String^ inputRef = inputValues[slot];

		System::Drawing::Color newColor;

		if ((inputRef != "") && (inputRef == code[slot]))
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

	void inputValue(String^ input, int slot)
	{
		inputValues[slot] = input;
	}
	
	void hackClockCallback(Object^ state)
	{
		if (countdownSeconds >= 10)
		{
			countdownSeconds -= 10;
			
			if (countdownSeconds <= 0)
			{
				hackClock->Change(Timeout::Infinite, Timeout::Infinite);
				countdownSeconds = 0;
				timerBar->Invoke(gcnew Action<Object^>(this, &MyForm::UpdateTimerBar), state);
				PlaySound(L"Failed.wav", NULL, SND_FILENAME | SND_ASYNC);
				Invoke(gcnew Action(this, &MyForm::timeRanOut));
			}
			else
			{
				timerBar->Invoke(gcnew Action<Object^>(this, &MyForm::UpdateTimerBar), state);
			}
		}
	}

	private: System::Void UpdateTimerBar(Object^ state)
	{
		timerBar->Value = countdownSeconds;
	}

	private: System::Void start_Click(System::Object^ sender, System::EventArgs^ e)
		{
		if (start->Text == "Start")
		{
			initiateStart(sender, e);
		}
		else if(start->Text == "Crack")
		{
			if (input4->Text != "_")
			{
				checkInputs(sender, e);
				start->Focus();
			}
		}
		else
		{
			clearFields(sender, e);
		}
	}
	
	private: System::Void initiateStart(System::Object^ sender, System::EventArgs^ e)
	{
		reset();
		
		input1->Enabled = true;
		input2->Enabled = true;
		input3->Enabled = true;
		input4->Enabled = true;

		start->Text = "Crack";

		inputsActive = true;
		hackClock->Change(0, 10);

		start->Focus();
	}

	private: System::Void incrementFocusIndex()
	{
		if (indexOfFocus < 3)
		{
			indexOfFocus++;
		}
		start->Focus();
	}

	private: System::Void decrementFocusIndex()
	{
		if ((indexOfFocus > 0) && (input4->Text == "_"))
		{
			indexOfFocus--;
		}

		switch (indexOfFocus)
		{
		case 0:
			input1->Text = "_";
			inputValue("NULL", 0);
			break;
		case 1:
			input2->Text = "_";
			inputValue("NULL", 1);
			break;
		case 2:
			input3->Text = "_";
			inputValue("NULL", 2);
			break;
		case 3:
			input4->Text = "_";
			inputValue("NULL", 3);
			break;
		default:
			break;
		}

		start->Focus();
	}

	public: System::Void timeRanOut()
	{
		inputsActive = false;

		input1->Enabled = false;
		input2->Enabled = false;
		input3->Enabled = false;
		input4->Enabled = false;

		start->Enabled = true;
		start->Text = "RESET / RETRY";

		start->Focus();
	}

	private: System::Void clearFields(System::Object^ sender, System::EventArgs^ e)
	{
		input1->Text = "_";
		input2->Text = "_";
		input3->Text = "_";
		input4->Text = "_";

		indicator1->BackColor = defaultColor;
		indicator2->BackColor = defaultColor;
		indicator3->BackColor = defaultColor;
		indicator4->BackColor = defaultColor;

		initiateStart(sender, e);
	}

	private: System::Void start_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
	{
		if (inputsActive)
		{
			if (Char::IsDigit(e->KeyChar))
			{
				registerKeyInput(e->KeyChar.ToString());
			}
			else if (e->KeyChar == '\b')
			{
				registerBackspace();
			}
		}
		else if ((indexOfFocus == 3) && (input4->Text != "_") && (e->KeyChar == (char)Keys::Enter))
		{
			e->Handled = true; 
			start_Click(sender, e);
		}
		e->Handled = true;
	}

	private: System::Void registerKeyInput(String^ input)
	{
		switch (indexOfFocus)
		{
			case 0:
				input1->Text = input;
				inputValue(input, 0); 
				incrementFocusIndex();
				break;
			case 1:
				input2->Text = input;
				inputValue(input, 1);
				incrementFocusIndex();
				break;
			case 2:
				input3->Text = input;
				inputValue(input, 2);
				incrementFocusIndex();
				break;
			case 3:
				input4->Text = input;
				inputValue(input, 3);
				break;
			default:
				break;
		}
	}

	private: System::Void registerBackspace()
	{
		if (indexOfFocus >= 0)
		{
			decrementFocusIndex();
		}
	}


	private: System::Void howToUseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		HowTo^ Guide = gcnew HowTo();

		Guide->Show();
	}
	
	private: System::Void optimalStrategyToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		OptimalStrategy^ Strat = gcnew OptimalStrategy();

		Strat->Show();
	}

};
}
