#pragma once

namespace DATADICTIONARY {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for search1
	/// </summary>
	public ref class search1 : public System::Windows::Forms::Form
	{
	public:
		Dictionary* obj = Dictionary::getobj();
		search1(void)
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
		~search1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ searchbox;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ submit2button;
	private: System::Windows::Forms::Button^ exitbutton;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(search1::typeid));
			this->searchbox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->submit2button = (gcnew System::Windows::Forms::Button());
			this->exitbutton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// searchbox
			// 
			this->searchbox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->searchbox->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->searchbox->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->searchbox->Location = System::Drawing::Point(648, 141);
			this->searchbox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->searchbox->Multiline = true;
			this->searchbox->Name = L"searchbox";
			this->searchbox->Size = System::Drawing::Size(480, 42);
			this->searchbox->TabIndex = 5;
			this->searchbox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(641, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(272, 39);
			this->label1->TabIndex = 4;
			this->label1->Text = L"SEARCH WORD";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// submit2button
			// 
			this->submit2button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->submit2button->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->submit2button->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submit2button->Location = System::Drawing::Point(798, 369);
			this->submit2button->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->submit2button->Name = L"submit2button";
			this->submit2button->Size = System::Drawing::Size(231, 64);
			this->submit2button->TabIndex = 3;
			this->submit2button->Text = L"SUBMIT";
			this->submit2button->UseVisualStyleBackColor = false;
			this->submit2button->Click += gcnew System::EventHandler(this, &search1::submit2button_Click);
			// 
			// exitbutton
			// 
			this->exitbutton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->exitbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitbutton->Location = System::Drawing::Point(80, 446);
			this->exitbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->exitbutton->Name = L"exitbutton";
			this->exitbutton->Size = System::Drawing::Size(228, 52);
			this->exitbutton->TabIndex = 10;
			this->exitbutton->Text = L"EXIT";
			this->exitbutton->UseVisualStyleBackColor = false;
			this->exitbutton->Click += gcnew System::EventHandler(this, &search1::exitbutton_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(693, 210);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(416, 96);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Get Suggestion\?";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &search1::button1_Click);
			// 
			// search1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1551, 609);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->exitbutton);
			this->Controls->Add(this->searchbox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->submit2button);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"search1";
			this->Text = L"Search Page";
			this->Load += gcnew System::EventHandler(this, &search1::search1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exitbutton_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Close();
	}
private: System::Void submit2button_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ word = searchbox->Text;

	string w = msclr::interop::marshal_as<string>(word);

	string meaning = obj->SearchWordOnly(w);

	String^ m = msclr::interop::marshal_as<String^>(meaning);

	if (m != "")
	{
		MessageBox::Show("Meaning of Word " + word + " is : " + m, "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else
	{
		MessageBox::Show("Meaning of Word " + word + " not found! :(", "Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ userInput = searchbox->Text;
	string prefix = msclr::interop::marshal_as<string>(userInput);

	
	vector<string> suggestions = obj->GetSuggestions(prefix);

	
	if (!suggestions.empty()) 
	{
		
		string message = "Suggestions:\n";

		for (const auto& suggestion : suggestions)
		{
			message += suggestion + "\n";
		}

		
		String^ messageToShow = gcnew String(message.c_str());

		
		MessageBox::Show(messageToShow, "Suggestions", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else {
		
		MessageBox::Show("No suggestions for '" + userInput + "'.", "No Suggestions", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void search1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
