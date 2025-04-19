#pragma once
#include "Header.h"

namespace DATADICTIONARY {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Insert
	/// </summary>
	public ref class Insert : public System::Windows::Forms::Form
	{
	public:
		Dictionary* obj = Dictionary::getobj();
		Insert(void)
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
		~Insert()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ meaningbox;
	private: System::Windows::Forms::TextBox^ insertbox;
	private: System::Windows::Forms::Label^ addbutton;
	private: System::Windows::Forms::Button^ submitbutton;
	private: System::Windows::Forms::Button^ exitbutton;
	private: System::Windows::Forms::TextBox^ MessageBox;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Insert::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->meaningbox = (gcnew System::Windows::Forms::TextBox());
			this->insertbox = (gcnew System::Windows::Forms::TextBox());
			this->addbutton = (gcnew System::Windows::Forms::Label());
			this->submitbutton = (gcnew System::Windows::Forms::Button());
			this->exitbutton = (gcnew System::Windows::Forms::Button());
			this->MessageBox = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(582, 197);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(269, 39);
			this->label1->TabIndex = 9;
			this->label1->Text = L"ENTER Meaning";
			// 
			// meaningbox
			// 
			this->meaningbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->meaningbox->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->meaningbox->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->meaningbox->ForeColor = System::Drawing::SystemColors::ControlText;
			this->meaningbox->Location = System::Drawing::Point(572, 261);
			this->meaningbox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->meaningbox->Multiline = true;
			this->meaningbox->Name = L"meaningbox";
			this->meaningbox->Size = System::Drawing::Size(330, 50);
			this->meaningbox->TabIndex = 8;
			this->meaningbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// insertbox
			// 
			this->insertbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->insertbox->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->insertbox->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insertbox->ForeColor = System::Drawing::SystemColors::ControlText;
			this->insertbox->Location = System::Drawing::Point(572, 126);
			this->insertbox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->insertbox->Multiline = true;
			this->insertbox->Name = L"insertbox";
			this->insertbox->Size = System::Drawing::Size(330, 50);
			this->insertbox->TabIndex = 7;
			this->insertbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// addbutton
			// 
			this->addbutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->addbutton->AutoSize = true;
			this->addbutton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->addbutton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addbutton->Location = System::Drawing::Point(579, 65);
			this->addbutton->Name = L"addbutton";
			this->addbutton->Size = System::Drawing::Size(245, 39);
			this->addbutton->TabIndex = 6;
			this->addbutton->Text = L"ENTER WORD";
			// 
			// submitbutton
			// 
			this->submitbutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->submitbutton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->submitbutton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submitbutton->Location = System::Drawing::Point(670, 342);
			this->submitbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->submitbutton->Name = L"submitbutton";
			this->submitbutton->Size = System::Drawing::Size(154, 59);
			this->submitbutton->TabIndex = 5;
			this->submitbutton->Text = L"Submit";
			this->submitbutton->UseVisualStyleBackColor = false;
			this->submitbutton->Click += gcnew System::EventHandler(this, &Insert::submitbutton_Click);
			// 
			// exitbutton
			// 
			this->exitbutton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->exitbutton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitbutton->Location = System::Drawing::Point(75, 568);
			this->exitbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->exitbutton->Name = L"exitbutton";
			this->exitbutton->Size = System::Drawing::Size(228, 52);
			this->exitbutton->TabIndex = 10;
			this->exitbutton->Text = L"EXIT";
			this->exitbutton->UseVisualStyleBackColor = false;
			this->exitbutton->Click += gcnew System::EventHandler(this, &Insert::exitbutton_Click);
			// 
			// MessageBox
			// 
			this->MessageBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MessageBox->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->MessageBox->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MessageBox->ForeColor = System::Drawing::SystemColors::ControlText;
			this->MessageBox->Location = System::Drawing::Point(586, 445);
			this->MessageBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MessageBox->Multiline = true;
			this->MessageBox->Name = L"MessageBox";
			this->MessageBox->Size = System::Drawing::Size(330, 86);
			this->MessageBox->TabIndex = 11;
			// 
			// Insert
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1503, 655);
			this->Controls->Add(this->MessageBox);
			this->Controls->Add(this->exitbutton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->meaningbox);
			this->Controls->Add(this->insertbox);
			this->Controls->Add(this->addbutton);
			this->Controls->Add(this->submitbutton);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"Insert";
			this->Text = L"Insert";
			this->Load += gcnew System::EventHandler(this, &Insert::Insert_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exitbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void submitbutton_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		String^ word = insertbox->Text;
		String^ meaning = meaningbox->Text;

		string w = msclr::interop::marshal_as<string>(word);
		string m = msclr::interop::marshal_as<string>(meaning);

		if (obj->AddWord(w, m))
		{
			
			MessageBox->Text = "Word : " + word + " with Meaning : " + meaning + " Added Successfully :)";
		}
		else
		{
			MessageBox->Text = "Word : " + word + " with Meaning : " + meaning + " could no be added :)";
		}
	}
	private: System::Void Insert_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
};

