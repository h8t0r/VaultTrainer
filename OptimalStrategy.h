#pragma once

namespace VaultTrainer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OptimalStrategy
	/// </summary>
	public ref class OptimalStrategy : public System::Windows::Forms::Form
	{
	public:
		OptimalStrategy(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OptimalStrategy()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OptimalStrategy::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(155, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(668, 91);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Optimal Strategy:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(105, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(769, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"In a 4-digit sequence, without duplicates, there are 5,040 possible permutations "
				L"(codes).";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(217, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(544, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"The Math ->  5,040  =  (10 * 9 * 8 * 7)  =  (4!)(10 nCr 4)";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(151, 505);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(677, 25);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Intrinsically, you have to start by picking 4 digits to use, the order won\'t matt"
				L"er.";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(137, 555);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(704, 50);
			this->label5->TabIndex = 4;
			this->label5->Text = L"REGARDLESS OF WHATEVER FEEDBACK YOU GET, \r\nyour second sequence should be a NEW s"
				L"et of 4 digits: UNIQUE from the first 4.\r\n";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(90, 670);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(798, 25);
			this->label6->TabIndex = 5;
			this->label6->Text = L"By doing so, you optimize the pace in which you determine which digits are part o"
				L"f the code.";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(170, 214);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(639, 100);
			this->label7->TabIndex = 6;
			this->label7->Text = L"There are 2 factors to this stategic puzzle: Combination and Permutation \r\n\r\nTo b"
				L"e successful, you need to stategically eliminate:\r\n invalid combinations and per"
				L"mutations.";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(289, 347);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(463, 50);
			this->label8->TabIndex = 7;
			this->label8->Text = L"This regards, which 4 of 10 possible digits are used. \r\nThere are (10 nCr 4) -> 2"
				L"10 combinations of digits.";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(26, 353);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(220, 38);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Combination:";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(287, 417);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(467, 50);
			this->label10->TabIndex = 9;
			this->label10->Text = L"This regards, which sequence that the 4 are ordered.\r\nThere are 4! -> 24 possible"
				L" sequences of 4 digits.";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(26, 423);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(213, 38);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Permutation:";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(164, 708);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(650, 50);
			this->label12->TabIndex = 11;
			this->label12->Text = L"When entering 2, UNIQUE, sequences: of 4 digits, as your first 2 attempts,\r\nyou\'v"
				L"e used 8 of 10 possible digits.";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(154, 770);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(670, 100);
			this->label13->TabIndex = 12;
			this->label13->Text = resources->GetString(L"label13.Text");
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(102, 923);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(774, 50);
			this->label14->TabIndex = 13;
			this->label14->Text = L"However, in practice, if you learn were to learn ONLY 2 of the digits within the "
				L"valid code, \r\nthen you actually know all 4: because there are only 2 remaining d"
				L"igits you\'ve yet to try.";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(53, 986);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(872, 50);
			this->label15->TabIndex = 14;
			this->label15->Text = L"In this manner, you\'ve essentially used 2 sequences to gain a ~50% chance of know"
				L"ing all the digits;\r\ncounter-intuitively, the WORST CASE is if you learn ONLY 3 "
				L"of 4 digits.";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(154, 1046);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(670, 50);
			this->label16->TabIndex = 15;
			this->label16->Text = L"In the midst of entering these first 2, unique, sets of 4 digits,\r\nkeep track of "
				L"which digits are shown as green: indicating the correct position.";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(216, 1139);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(546, 25);
			this->label17->TabIndex = 16;
			this->label17->Text = L"Use the remaining time to deduce the permutation of the code.";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(58, 1217);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(862, 50);
			this->label18->TabIndex = 17;
			this->label18->Text = L"There isn\'t a practical manner to define the best means of determining the correc"
				L"t PERMUTATION.\r\nThis is due to the wide variety of possible \"feedback\" that you "
				L"might be provided.";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1039, 1344);
			this->panel1->TabIndex = 18;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(754, 1282);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 50);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Got It!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &OptimalStrategy::button1_Click);
			// 
			// OptimalStrategy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1063, 1368);
			this->Controls->Add(this->panel1);
			this->MinimumSize = System::Drawing::Size(1081, 1415);
			this->Name = L"OptimalStrategy";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"OptimalStrategy";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	delete this;
}
};
}
