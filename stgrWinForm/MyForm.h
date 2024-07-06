#pragma once
#include <windows.h>
#include "string"
#include <fstream>
#include <msclr\marshal_cppstd.h>
#using <System.dll>

namespace stgrWinForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ title;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ info;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::NumericUpDown^ amountSpin;

	private: System::Windows::Forms::Label^ amount;
	private: System::Windows::Forms::TextBox^ extVal;

	private: System::Windows::Forms::Label^ ext;
	private: System::Windows::Forms::Label^ size;
	private: System::Windows::Forms::NumericUpDown^ sizeSpin;

	private: System::Windows::Forms::RadioButton^ kb;
	private: System::Windows::Forms::RadioButton^ mb;
	private: System::Windows::Forms::TextBox^ path;

	private: System::Windows::Forms::Label^ pathLbl;
	private: System::Windows::Forms::Button^ choosePath;

	private: System::Windows::Forms::CheckBox^ rest;
	private: System::Windows::Forms::ProgressBar^ progress;

	private: System::Windows::Forms::Button^ start;
	private: System::Windows::Forms::Button^ creator;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;









	protected:

	protected:





	protected:

	protected:

	protected:

	protected:

	protected:





	protected:



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->title = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->info = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rest = (gcnew System::Windows::Forms::CheckBox());
			this->choosePath = (gcnew System::Windows::Forms::Button());
			this->path = (gcnew System::Windows::Forms::TextBox());
			this->pathLbl = (gcnew System::Windows::Forms::Label());
			this->kb = (gcnew System::Windows::Forms::RadioButton());
			this->mb = (gcnew System::Windows::Forms::RadioButton());
			this->sizeSpin = (gcnew System::Windows::Forms::NumericUpDown());
			this->size = (gcnew System::Windows::Forms::Label());
			this->extVal = (gcnew System::Windows::Forms::TextBox());
			this->ext = (gcnew System::Windows::Forms::Label());
			this->amountSpin = (gcnew System::Windows::Forms::NumericUpDown());
			this->amount = (gcnew System::Windows::Forms::Label());
			this->progress = (gcnew System::Windows::Forms::ProgressBar());
			this->start = (gcnew System::Windows::Forms::Button());
			this->creator = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sizeSpin))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->amountSpin))->BeginInit();
			this->SuspendLayout();
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->Location = System::Drawing::Point(0, 9);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(189, 33);
			this->title->TabIndex = 0;
			this->title->Text = L"FileOverFlow";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(185, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(28, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"v1.5";
			// 
			// info
			// 
			this->info->AutoSize = true;
			this->info->Location = System::Drawing::Point(3, 51);
			this->info->Name = L"info";
			this->info->Size = System::Drawing::Size(280, 39);
			this->info->TabIndex = 2;
			this->info->Text = L"Note: This process is boring and long. Be patient, choose \r\nthe path where to sta"
				L"rt the generation, select the number \r\nof files to be generated and click the \"S"
				L"tart\" button.\r\n";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rest);
			this->groupBox1->Controls->Add(this->choosePath);
			this->groupBox1->Controls->Add(this->path);
			this->groupBox1->Controls->Add(this->pathLbl);
			this->groupBox1->Controls->Add(this->kb);
			this->groupBox1->Controls->Add(this->mb);
			this->groupBox1->Controls->Add(this->sizeSpin);
			this->groupBox1->Controls->Add(this->size);
			this->groupBox1->Controls->Add(this->extVal);
			this->groupBox1->Controls->Add(this->ext);
			this->groupBox1->Controls->Add(this->amountSpin);
			this->groupBox1->Controls->Add(this->amount);
			this->groupBox1->Location = System::Drawing::Point(8, 103);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(283, 222);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Options";
			// 
			// rest
			// 
			this->rest->AutoSize = true;
			this->rest->Location = System::Drawing::Point(9, 190);
			this->rest->Name = L"rest";
			this->rest->Size = System::Drawing::Size(195, 17);
			this->rest->TabIndex = 11;
			this->rest->Text = L"REST IN PISS! (Not recommended)";
			this->rest->UseVisualStyleBackColor = true;
			this->rest->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rest_CheckedChanged);
			// 
			// choosePath
			// 
			this->choosePath->Location = System::Drawing::Point(197, 159);
			this->choosePath->Name = L"choosePath";
			this->choosePath->Size = System::Drawing::Size(75, 23);
			this->choosePath->TabIndex = 10;
			this->choosePath->Text = L"Open";
			this->choosePath->UseVisualStyleBackColor = true;
			this->choosePath->Click += gcnew System::EventHandler(this, &MyForm::choosePath_Click);
			// 
			// path
			// 
			this->path->Enabled = false;
			this->path->Location = System::Drawing::Point(6, 160);
			this->path->Name = L"path";
			this->path->Size = System::Drawing::Size(185, 20);
			this->path->TabIndex = 9;
			this->path->Text = L"Select the path";
			// 
			// pathLbl
			// 
			this->pathLbl->AutoSize = true;
			this->pathLbl->Location = System::Drawing::Point(6, 143);
			this->pathLbl->Name = L"pathLbl";
			this->pathLbl->Size = System::Drawing::Size(89, 13);
			this->pathLbl->TabIndex = 8;
			this->pathLbl->Text = L"Path for generate";
			// 
			// kb
			// 
			this->kb->AutoSize = true;
			this->kb->Location = System::Drawing::Point(155, 117);
			this->kb->Name = L"kb";
			this->kb->Size = System::Drawing::Size(39, 17);
			this->kb->TabIndex = 7;
			this->kb->TabStop = true;
			this->kb->Text = L"KB";
			this->kb->UseVisualStyleBackColor = true;
			// 
			// mb
			// 
			this->mb->AutoSize = true;
			this->mb->Location = System::Drawing::Point(108, 117);
			this->mb->Name = L"mb";
			this->mb->Size = System::Drawing::Size(41, 17);
			this->mb->TabIndex = 6;
			this->mb->TabStop = true;
			this->mb->Text = L"MB";
			this->mb->UseVisualStyleBackColor = true;
			// 
			// sizeSpin
			// 
			this->sizeSpin->Location = System::Drawing::Point(9, 116);
			this->sizeSpin->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1024, 0, 0, 0 });
			this->sizeSpin->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->sizeSpin->Name = L"sizeSpin";
			this->sizeSpin->Size = System::Drawing::Size(84, 20);
			this->sizeSpin->TabIndex = 5;
			this->sizeSpin->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// size
			// 
			this->size->AutoSize = true;
			this->size->Location = System::Drawing::Point(6, 100);
			this->size->Name = L"size";
			this->size->Size = System::Drawing::Size(102, 13);
			this->size->TabIndex = 4;
			this->size->Text = L"File size (max. 1024)";
			// 
			// extVal
			// 
			this->extVal->Location = System::Drawing::Point(9, 74);
			this->extVal->Name = L"extVal";
			this->extVal->Size = System::Drawing::Size(100, 20);
			this->extVal->TabIndex = 3;
			// 
			// ext
			// 
			this->ext->AutoSize = true;
			this->ext->Location = System::Drawing::Point(6, 58);
			this->ext->Name = L"ext";
			this->ext->Size = System::Drawing::Size(143, 13);
			this->ext->TabIndex = 2;
			this->ext->Text = L"File extension(do not use \".\")";
			// 
			// amountSpin
			// 
			this->amountSpin->Location = System::Drawing::Point(9, 32);
			this->amountSpin->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->amountSpin->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->amountSpin->Name = L"amountSpin";
			this->amountSpin->Size = System::Drawing::Size(120, 20);
			this->amountSpin->TabIndex = 1;
			this->amountSpin->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// amount
			// 
			this->amount->AutoSize = true;
			this->amount->Location = System::Drawing::Point(6, 16);
			this->amount->Name = L"amount";
			this->amount->Size = System::Drawing::Size(134, 13);
			this->amount->TabIndex = 0;
			this->amount->Text = L"Amount of files (max. 9999)";
			// 
			// progress
			// 
			this->progress->Location = System::Drawing::Point(8, 332);
			this->progress->Name = L"progress";
			this->progress->Size = System::Drawing::Size(283, 23);
			this->progress->TabIndex = 4;
			// 
			// start
			// 
			this->start->Location = System::Drawing::Point(216, 361);
			this->start->Name = L"start";
			this->start->Size = System::Drawing::Size(75, 23);
			this->start->TabIndex = 5;
			this->start->Text = L"Start!";
			this->start->UseVisualStyleBackColor = true;
			this->start->Click += gcnew System::EventHandler(this, &MyForm::start_Click);
			// 
			// creator
			// 
			this->creator->Location = System::Drawing::Point(154, 361);
			this->creator->Name = L"creator";
			this->creator->Size = System::Drawing::Size(59, 23);
			this->creator->TabIndex = 6;
			this->creator->Text = L"Creator";
			this->creator->UseVisualStyleBackColor = true;
			this->creator->Click += gcnew System::EventHandler(this, &MyForm::creator_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(303, 390);
			this->Controls->Add(this->creator);
			this->Controls->Add(this->start);
			this->Controls->Add(this->progress);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->info);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->title);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FileOverFlow";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sizeSpin))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->amountSpin))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void rest_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (rest->Checked) {
		amount->Text = "Amount of files (max. 99999)";
		amountSpin->Maximum = 99999;
	}
	else {
		amount->Text = "Amount of files (max. 9999)";
		amountSpin->Maximum = 9999;
	}
}
private: System::Void choosePath_Click(System::Object^ sender, System::EventArgs^ e) {
	folderBrowserDialog1->ShowDialog();
	if (folderBrowserDialog1->SelectedPath != "") {
		path->Text = folderBrowserDialog1->SelectedPath;
	}
}
private: System::Void creator_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ url = "https://t.me/stg_xz";
	System::Diagnostics::Process::Start(url);
}

private: System::Void disableAll() {
	amountSpin->Enabled = false;
	extVal->Enabled = false;
	sizeSpin->Enabled = false;
	mb->Enabled = false;
	kb->Enabled = false;
	choosePath->Enabled = false;
	rest->Enabled = false;
	start->Enabled = false;
	creator->Enabled = false;
}

private: System::Void enableAll() {
	amountSpin->Enabled = true;
	extVal->Enabled = true;
	sizeSpin->Enabled = true;
	mb->Enabled = true;
	kb->Enabled = true;
	choosePath->Enabled = true;
	rest->Enabled = true;
	start->Enabled = true;
	creator->Enabled = true;
}



private: System::Void start_Click(System::Object^ sender, System::EventArgs^ e) {
	if (extVal->Text == "" || path->Text == "Select the path" || (mb->Checked == false && kb->Checked == false)) {
		MessageBox::Show("You haven't filled in some fields, maybe you should do it?", "", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	disableAll();
	this->ControlBox = false;
	double oneVal = 100.0 / static_cast<double>(Decimal::ToInt32(amountSpin->Value));
	System::String^ managedString = path->Text;
	std::string nativeString = msclr::interop::marshal_as<std::string>(managedString);
	System::String^ managedString2 = extVal->Text;
	std::string nativeString2 = msclr::interop::marshal_as<std::string>(managedString2);
	int a = Decimal::ToInt32(amountSpin->Value);
	long long by;

	if (mb->Checked) {
		by = Decimal::ToInt32(sizeSpin->Value) * 1024 * 1024;
	}
	else if (kb->Checked) {
		by = Decimal::ToInt32(sizeSpin->Value) * 1024;
	}

	for (int i = 1; i <= a; i++) {
		// Формируем корректный путь к файлу
		std::string filepath = nativeString + "/" + std::to_string(i) + "." + nativeString2;

		// Открываем файл для записи
		std::ofstream file(filepath, std::ios::binary);
		if (file.is_open()) {
			file.seekp(0, std::ios::end);
			long long fileSizeInBytes = file.tellp();
			// Записываем данные в файл до достижения нужного размера
			while (fileSizeInBytes < by) {
				file.write("1", 1);
				fileSizeInBytes = file.tellp();
			}
			file.close();
			progress->Value += oneVal;
		}
	}
	MessageBox::Show("Done!", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
	progress->Value = 0;
	enableAll();
	this->ControlBox = true;
}


};
}
