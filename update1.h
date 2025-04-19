#pragma once
namespace DATADICTIONARY {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for update1
	/// </summary>
	public ref class update1 : public System::Windows::Forms::Form
	{
	public:
		Dictionary* obj = Dictionary::getobj();
		update1(void)
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
		~update1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ updatebutton;
	private: System::Windows::Forms::TextBox^ meaningbox;
	private: System::Windows::Forms::TextBox^ wordbox1;

	private: System::Windows::Forms::Button^ exitbutton;
	private: System::Windows::Forms::TextBox^ MessageBox1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(update1::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->updatebutton = (gcnew System::Windows::Forms::Button());
			this->meaningbox = (gcnew System::Windows::Forms::TextBox());
			this->wordbox1 = (gcnew System::Windows::Forms::TextBox());
			this->exitbutton = (gcnew System::Windows::Forms::Button());
			this->MessageBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(626, 208);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(237, 39);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Enter Meaning";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(623, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 39);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Enter Word";
			// 
			// updatebutton
			// 
			this->updatebutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->updatebutton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->updatebutton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updatebutton->Location = System::Drawing::Point(661, 354);
			this->updatebutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->updatebutton->Name = L"updatebutton";
			this->updatebutton->Size = System::Drawing::Size(189, 48);
			this->updatebutton->TabIndex = 7;
			this->updatebutton->Text = L"UPDATE";
			this->updatebutton->UseVisualStyleBackColor = false;
			this->updatebutton->Click += gcnew System::EventHandler(this, &update1::updatebutton_Click);
			// 
			// meaningbox
			// 
			this->meaningbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->meaningbox->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->meaningbox->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->meaningbox->ForeColor = System::Drawing::SystemColors::ControlText;
			this->meaningbox->Location = System::Drawing::Point(630, 269);
			this->meaningbox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->meaningbox->Multiline = true;
			this->meaningbox->Name = L"meaningbox";
			this->meaningbox->Size = System::Drawing::Size(295, 44);
			this->meaningbox->TabIndex = 6;
			this->meaningbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// wordbox1
			// 
			this->wordbox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->wordbox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->wordbox1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->wordbox1->Location = System::Drawing::Point(627, 127);
			this->wordbox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->wordbox1->Multiline = true;
			this->wordbox1->Name = L"wordbox1";
			this->wordbox1->Size = System::Drawing::Size(298, 48);
			this->wordbox1->TabIndex = 5;
			this->wordbox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// exitbutton
			// 
			this->exitbutton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->exitbutton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitbutton->Location = System::Drawing::Point(57, 539);
			this->exitbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->exitbutton->Name = L"exitbutton";
			this->exitbutton->Size = System::Drawing::Size(228, 52);
			this->exitbutton->TabIndex = 10;
			this->exitbutton->Text = L"EXIT";
			this->exitbutton->UseVisualStyleBackColor = false;
			this->exitbutton->Click += gcnew System::EventHandler(this, &update1::exitbutton_Click);
			// 
			// MessageBox1
			// 
			this->MessageBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MessageBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->MessageBox1->Location = System::Drawing::Point(648, 440);
			this->MessageBox1->Multiline = true;
			this->MessageBox1->Name = L"MessageBox1";
			this->MessageBox1->Size = System::Drawing::Size(277, 59);
			this->MessageBox1->TabIndex = 11;
			this->MessageBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// update1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1479, 639);
			this->Controls->Add(this->MessageBox1);
			this->Controls->Add(this->exitbutton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->updatebutton);
			this->Controls->Add(this->meaningbox);
			this->Controls->Add(this->wordbox1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"update1";
			this->Text = L"Update Page";
			this->Load += gcnew System::EventHandler(this, &update1::update1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void update1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void exitbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
	   //update1.h
private: System::Void updatebutton_Click(System::Object^ sender, System::EventArgs^ e) {
	   String^ word = wordbox1->Text;
	   String^ meaning = meaningbox->Text;


	   string w = msclr::interop::marshal_as<string>(word);
	   string m = msclr::interop::marshal_as<string>(meaning);

	   bool updated = obj->UpdateWord(w, m);

	   if (updated) {
		   MessageBox1->Text = "Word : " + word + " with Meaning : " + meaning + " Updated Successfully :)";

	   }
	   else {
		   MessageBox1->Text = "Word : " + word + " with Meaning : " + meaning + " could not be updated or added :)";

	   }


}

};
}
