#pragma once

namespace DATADICTIONARY {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for del
	/// </summary>
	public ref class del : public System::Windows::Forms::Form
	{
	public:
		Dictionary* obj = Dictionary::getobj();
		del(void)
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
		~del()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ deletebutton;
	protected:
	private: System::Windows::Forms::TextBox^ WordBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ exitbutton;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(del::typeid));
			this->deletebutton = (gcnew System::Windows::Forms::Button());
			this->WordBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->exitbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// deletebutton
			// 
			this->deletebutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->deletebutton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->deletebutton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deletebutton->Location = System::Drawing::Point(687, 256);
			this->deletebutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->deletebutton->Name = L"deletebutton";
			this->deletebutton->Size = System::Drawing::Size(228, 48);
			this->deletebutton->TabIndex = 11;
			this->deletebutton->Text = L"SUBMIT";
			this->deletebutton->UseVisualStyleBackColor = false;
			this->deletebutton->Click += gcnew System::EventHandler(this, &del::deletebutton_Click);
			// 
			// WordBox
			// 
			this->WordBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->WordBox->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->WordBox->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->WordBox->Location = System::Drawing::Point(573, 143);
			this->WordBox->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->WordBox->Multiline = true;
			this->WordBox->Name = L"WordBox";
			this->WordBox->Size = System::Drawing::Size(520, 60);
			this->WordBox->TabIndex = 12;
			this->WordBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(680, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(262, 39);
			this->label1->TabIndex = 13;
			this->label1->Text = L"DELETE WORD";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// exitbutton
			// 
			this->exitbutton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->exitbutton->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitbutton->Location = System::Drawing::Point(74, 433);
			this->exitbutton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->exitbutton->Name = L"exitbutton";
			this->exitbutton->Size = System::Drawing::Size(228, 52);
			this->exitbutton->TabIndex = 14;
			this->exitbutton->Text = L"EXIT";
			this->exitbutton->UseVisualStyleBackColor = false;
			this->exitbutton->Click += gcnew System::EventHandler(this, &del::exitbutton_Click);
			// 
			// del
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1421, 541);
			this->Controls->Add(this->exitbutton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->WordBox);
			this->Controls->Add(this->deletebutton);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"del";
			this->Text = L"del";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void deletebutton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ word = WordBox->Text;

		string w = msclr::interop::marshal_as<string>(word);

		if ((MessageBox::Show("Do You want to add word ?", "Information", MessageBoxButtons::YesNo, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::Yes))
		{
			bool deleted = obj->DeleteWord(w);

			if (deleted)
			{
				MessageBox::Show("Word Deleted Succesfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			else
			{
				MessageBox::Show("Word could not be deleted ", "Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		
		
	}
	private: System::Void exitbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
