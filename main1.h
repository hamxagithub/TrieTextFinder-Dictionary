#pragma once

#include"Insert.h"
#include"del.h"
#include"search1.h"
#include"update1.h"

namespace DATADICTIONARY {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for main1
	/// </summary>
	public ref class main1 : public System::Windows::Forms::Form
	{
	public:
		main1(void)
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
		~main1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ insertbutton;
	private: System::Windows::Forms::Button^ exitbutton;

	protected:



	protected:

	protected:











	private: System::Windows::Forms::Button^ deletebutton;
	private: System::Windows::Forms::Button^ searchbutton;
	private: System::Windows::Forms::Button^ UpdateButton;
	private: System::Windows::Forms::Label^ label1;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main1::typeid));
			this->insertbutton = (gcnew System::Windows::Forms::Button());
			this->exitbutton = (gcnew System::Windows::Forms::Button());
			this->deletebutton = (gcnew System::Windows::Forms::Button());
			this->searchbutton = (gcnew System::Windows::Forms::Button());
			this->UpdateButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// insertbutton
			// 
			this->insertbutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->insertbutton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->insertbutton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insertbutton->Location = System::Drawing::Point(590, 79);
			this->insertbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->insertbutton->Name = L"insertbutton";
			this->insertbutton->Size = System::Drawing::Size(228, 52);
			this->insertbutton->TabIndex = 6;
			this->insertbutton->Text = L"INSERT";
			this->insertbutton->UseVisualStyleBackColor = false;
			this->insertbutton->Click += gcnew System::EventHandler(this, &main1::insertbutton_Click);
			// 
			// exitbutton
			// 
			this->exitbutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->exitbutton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->exitbutton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitbutton->Location = System::Drawing::Point(590, 414);
			this->exitbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->exitbutton->Name = L"exitbutton";
			this->exitbutton->Size = System::Drawing::Size(228, 52);
			this->exitbutton->TabIndex = 9;
			this->exitbutton->Text = L"EXIT";
			this->exitbutton->UseVisualStyleBackColor = false;
			this->exitbutton->Click += gcnew System::EventHandler(this, &main1::exitbutton_Click);
			// 
			// deletebutton
			// 
			this->deletebutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->deletebutton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->deletebutton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deletebutton->Location = System::Drawing::Point(590, 162);
			this->deletebutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->deletebutton->Name = L"deletebutton";
			this->deletebutton->Size = System::Drawing::Size(228, 48);
			this->deletebutton->TabIndex = 10;
			this->deletebutton->Text = L"DELETE";
			this->deletebutton->UseVisualStyleBackColor = false;
			this->deletebutton->Click += gcnew System::EventHandler(this, &main1::deletebutton_Click);
			// 
			// searchbutton
			// 
			this->searchbutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->searchbutton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->searchbutton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchbutton->Location = System::Drawing::Point(590, 329);
			this->searchbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->searchbutton->Name = L"searchbutton";
			this->searchbutton->Size = System::Drawing::Size(228, 49);
			this->searchbutton->TabIndex = 12;
			this->searchbutton->Text = L"SEARCH";
			this->searchbutton->UseVisualStyleBackColor = false;
			this->searchbutton->Click += gcnew System::EventHandler(this, &main1::searchbutton_Click);
			// 
			// UpdateButton
			// 
			this->UpdateButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->UpdateButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->UpdateButton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdateButton->Location = System::Drawing::Point(590, 239);
			this->UpdateButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->UpdateButton->Name = L"UpdateButton";
			this->UpdateButton->Size = System::Drawing::Size(228, 59);
			this->UpdateButton->TabIndex = 8;
			this->UpdateButton->Text = L"UPDATE";
			this->UpdateButton->UseVisualStyleBackColor = false;
			this->UpdateButton->Click += gcnew System::EventHandler(this, &main1::button3_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Cursor = System::Windows::Forms::Cursors::PanNW;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label1->Location = System::Drawing::Point(372, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(719, 43);
			this->label1->TabIndex = 13;
			this->label1->Text = L"WELCOME TO FAST CFD DICTIONARY";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// main1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1480, 628);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->searchbutton);
			this->Controls->Add(this->deletebutton);
			this->Controls->Add(this->exitbutton);
			this->Controls->Add(this->UpdateButton);
			this->Controls->Add(this->insertbutton);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"main1";
			this->Text = L"main1";
			this->Load += gcnew System::EventHandler(this, &main1::main1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		update1 obj;
		obj.ShowDialog();
	}
private: System::Void main1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void insertbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	Insert obj;
	obj.ShowDialog();
}
private: System::Void deletebutton_Click(System::Object^ sender, System::EventArgs^ e) {
	del obj;
	obj.ShowDialog();
}
private: System::Void searchbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	search1 obj;
	obj.ShowDialog();

}
private: System::Void exitbutton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Close();
}
};
}
