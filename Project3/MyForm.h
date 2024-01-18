#pragma once
//Подключаем наши классы к нашей форме
#include "FindPair.h"
#include "CreateLecture.h"
#include "MatchPictAntText.h"
#include "Zagadka.h"
namespace Project3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ startButton;
	private: System::Windows::Forms::Button^ animalsButton;

	private: System::Windows::Forms::Button^ plantsButton;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ Quiz1;
	private: System::Windows::Forms::Button^ Quiz2;


	private: System::Windows::Forms::ImageList^ AnimalList;
	private: System::Windows::Forms::Button^ backtokingdomsButton;
	private: System::Windows::Forms::Button^ forwardtoprq1Button;


	private: System::Windows::Forms::Button^ Quiz5;
	private: System::Windows::Forms::Button^ Quiz6;


	private: System::Windows::Forms::Button^ backtoAnimQuiz;
	private: System::Windows::Forms::Button^ backtoQuiz1lect;
	private: System::Windows::Forms::Button^ backtoQuiz2lect;


	private: System::Windows::Forms::Button^ forwardtoanimboard;
	private: System::Windows::Forms::Button^ forwardtoprq2;

	private: System::Windows::Forms::ImageList^ VodaList;

	private: System::Windows::Forms::Button^ proverkaButton;
	private: System::Windows::Forms::Button^ backtopllect2;





	private: System::Windows::Forms::Button^ backtopllect1;

	private: System::Windows::Forms::Button^ backtoPlantsquiz;

	private: System::Windows::Forms::Button^ forwtoplMainBoard;


	private: System::Windows::Forms::Button^ forwtoplquiz2;

	private: System::Windows::Forms::Button^ forwtopl1quiz;
	private: System::Windows::Forms::ImageList^ FlowersList;
	private: System::Windows::Forms::ImageList^ TreeList;




	// Объявляем их
	private: MatchPictAntText^ Match,^Match2;
	private: FindPair^ pair,^pair2;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->animalsButton = (gcnew System::Windows::Forms::Button());
			this->plantsButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Quiz1 = (gcnew System::Windows::Forms::Button());
			this->Quiz2 = (gcnew System::Windows::Forms::Button());
			this->AnimalList = (gcnew System::Windows::Forms::ImageList(this->components));
			this->backtokingdomsButton = (gcnew System::Windows::Forms::Button());
			this->forwardtoprq1Button = (gcnew System::Windows::Forms::Button());
			this->Quiz5 = (gcnew System::Windows::Forms::Button());
			this->Quiz6 = (gcnew System::Windows::Forms::Button());
			this->backtoAnimQuiz = (gcnew System::Windows::Forms::Button());
			this->backtoQuiz1lect = (gcnew System::Windows::Forms::Button());
			this->backtoQuiz2lect = (gcnew System::Windows::Forms::Button());
			this->forwardtoanimboard = (gcnew System::Windows::Forms::Button());
			this->forwardtoprq2 = (gcnew System::Windows::Forms::Button());
			this->VodaList = (gcnew System::Windows::Forms::ImageList(this->components));
			this->proverkaButton = (gcnew System::Windows::Forms::Button());
			this->backtopllect2 = (gcnew System::Windows::Forms::Button());
			this->backtopllect1 = (gcnew System::Windows::Forms::Button());
			this->backtoPlantsquiz = (gcnew System::Windows::Forms::Button());
			this->forwtoplMainBoard = (gcnew System::Windows::Forms::Button());
			this->forwtoplquiz2 = (gcnew System::Windows::Forms::Button());
			this->forwtopl1quiz = (gcnew System::Windows::Forms::Button());
			this->FlowersList = (gcnew System::Windows::Forms::ImageList(this->components));
			this->TreeList = (gcnew System::Windows::Forms::ImageList(this->components));
			this->SuspendLayout();
			// 
			// startButton
			// 
			this->startButton->BackColor = System::Drawing::Color::OrangeRed;
			this->startButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"startButton.BackgroundImage")));
			this->startButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->startButton->Location = System::Drawing::Point(404, 180);
			this->startButton->Margin = System::Windows::Forms::Padding(4);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(152, 76);
			this->startButton->TabIndex = 0;
			this->startButton->UseVisualStyleBackColor = false;
			this->startButton->Click += gcnew System::EventHandler(this, &MyForm::startButton_Click);
			// 
			// animalsButton
			// 
			this->animalsButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"animalsButton.BackgroundImage")));
			this->animalsButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->animalsButton->Location = System::Drawing::Point(24, 23);
			this->animalsButton->Name = L"animalsButton";
			this->animalsButton->Size = System::Drawing::Size(257, 326);
			this->animalsButton->TabIndex = 1;
			this->animalsButton->UseVisualStyleBackColor = true;
			this->animalsButton->Click += gcnew System::EventHandler(this, &MyForm::animalsButton_Click);
			// 
			// plantsButton
			// 
			this->plantsButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"plantsButton.BackgroundImage")));
			this->plantsButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->plantsButton->Location = System::Drawing::Point(458, 23);
			this->plantsButton->Name = L"plantsButton";
			this->plantsButton->Size = System::Drawing::Size(245, 326);
			this->plantsButton->TabIndex = 2;
			this->plantsButton->UseVisualStyleBackColor = true;
			this->plantsButton->Click += gcnew System::EventHandler(this, &MyForm::plantsButton_Click);
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(0, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(724, 370);
			this->panel1->TabIndex = 1;
			// 
			// Quiz1
			// 
			this->Quiz1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Quiz1.BackgroundImage")));
			this->Quiz1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Quiz1->Location = System::Drawing::Point(0, 0);
			this->Quiz1->Name = L"Quiz1";
			this->Quiz1->Size = System::Drawing::Size(75, 23);
			this->Quiz1->TabIndex = 1;
			this->Quiz1->UseVisualStyleBackColor = true;
			this->Quiz1->Click += gcnew System::EventHandler(this, &MyForm::Quiz1_Click);
			// 
			// Quiz2
			// 
			this->Quiz2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Quiz2.BackgroundImage")));
			this->Quiz2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Quiz2->Location = System::Drawing::Point(0, 0);
			this->Quiz2->Name = L"Quiz2";
			this->Quiz2->Size = System::Drawing::Size(75, 23);
			this->Quiz2->TabIndex = 2;
			this->Quiz2->UseVisualStyleBackColor = true;
			this->Quiz2->Click += gcnew System::EventHandler(this, &MyForm::Quiz2_Click);
			// 
			// AnimalList
			// 
			this->AnimalList->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"AnimalList.ImageStream")));
			this->AnimalList->TransparentColor = System::Drawing::Color::Transparent;
			this->AnimalList->Images->SetKeyName(0, L"1.png");
			this->AnimalList->Images->SetKeyName(1, L"2.png");
			this->AnimalList->Images->SetKeyName(2, L"3.png");
			this->AnimalList->Images->SetKeyName(3, L"4.png");
			this->AnimalList->Images->SetKeyName(4, L"5.jpg");
			// 
			// backtokingdomsButton
			// 
			this->backtokingdomsButton->Location = System::Drawing::Point(12, 330);
			this->backtokingdomsButton->Name = L"backtokingdomsButton";
			this->backtokingdomsButton->Size = System::Drawing::Size(61, 29);
			this->backtokingdomsButton->TabIndex = 1;
			this->backtokingdomsButton->Text = L"Назад";
			this->backtokingdomsButton->UseVisualStyleBackColor = true;
			this->backtokingdomsButton->Click += gcnew System::EventHandler(this, &MyForm::backtokingdomsButton_Click);
			// 
			// forwardtoprq1Button
			// 
			this->forwardtoprq1Button->Location = System::Drawing::Point(647, 330);
			this->forwardtoprq1Button->Name = L"forwardtoprq1Button";
			this->forwardtoprq1Button->Size = System::Drawing::Size(65, 29);
			this->forwardtoprq1Button->TabIndex = 2;
			this->forwardtoprq1Button->Text = L"Вперед";
			this->forwardtoprq1Button->UseVisualStyleBackColor = true;
			this->forwardtoprq1Button->Click += gcnew System::EventHandler(this, &MyForm::forwardtoprq1Button_Click);
			// 
			// Quiz5
			// 
			this->Quiz5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Quiz5.BackgroundImage")));
			this->Quiz5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Quiz5->Location = System::Drawing::Point(110, 94);
			this->Quiz5->Name = L"Quiz5";
			this->Quiz5->Size = System::Drawing::Size(75, 23);
			this->Quiz5->TabIndex = 3;
			this->Quiz5->UseVisualStyleBackColor = true;
			this->Quiz5->Click += gcnew System::EventHandler(this, &MyForm::Quiz5_Click);
			// 
			// Quiz6
			// 
			this->Quiz6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Quiz6.BackgroundImage")));
			this->Quiz6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Quiz6->Location = System::Drawing::Point(127, 137);
			this->Quiz6->Name = L"Quiz6";
			this->Quiz6->Size = System::Drawing::Size(75, 23);
			this->Quiz6->TabIndex = 4;
			this->Quiz6->UseVisualStyleBackColor = true;
			this->Quiz6->Click += gcnew System::EventHandler(this, &MyForm::Quiz6_Click);
			// 
			// backtoAnimQuiz
			// 
			this->backtoAnimQuiz->Location = System::Drawing::Point(12, 330);
			this->backtoAnimQuiz->Name = L"backtoAnimQuiz";
			this->backtoAnimQuiz->Size = System::Drawing::Size(61, 29);
			this->backtoAnimQuiz->TabIndex = 1;
			this->backtoAnimQuiz->Text = L"Назад";
			this->backtoAnimQuiz->UseVisualStyleBackColor = true;
			this->backtoAnimQuiz->Click += gcnew System::EventHandler(this, &MyForm::backtoAnimQuiz_Click);
			// 
			// backtoQuiz1lect
			// 
			this->backtoQuiz1lect->Location = System::Drawing::Point(12, 330);
			this->backtoQuiz1lect->Name = L"backtoQuiz1lect";
			this->backtoQuiz1lect->Size = System::Drawing::Size(61, 29);
			this->backtoQuiz1lect->TabIndex = 2;
			this->backtoQuiz1lect->Text = L"Назад";
			this->backtoQuiz1lect->UseVisualStyleBackColor = true;
			this->backtoQuiz1lect->Click += gcnew System::EventHandler(this, &MyForm::Quiz1_Click);
			// 
			// backtoQuiz2lect
			// 
			this->backtoQuiz2lect->Location = System::Drawing::Point(12, 330);
			this->backtoQuiz2lect->Name = L"backtoQuiz2lect";
			this->backtoQuiz2lect->Size = System::Drawing::Size(61, 29);
			this->backtoQuiz2lect->TabIndex = 4;
			this->backtoQuiz2lect->Text = L"Назад";
			this->backtoQuiz2lect->UseVisualStyleBackColor = true;
			this->backtoQuiz2lect->Click += gcnew System::EventHandler(this, &MyForm::Quiz2_Click);
			// 
			// forwardtoanimboard
			// 
			this->forwardtoanimboard->Location = System::Drawing::Point(647, 330);
			this->forwardtoanimboard->Name = L"forwardtoanimboard";
			this->forwardtoanimboard->Size = System::Drawing::Size(65, 29);
			this->forwardtoanimboard->TabIndex = 1;
			this->forwardtoanimboard->Text = L"Вперед";
			this->forwardtoanimboard->UseVisualStyleBackColor = true;
			this->forwardtoanimboard->Click += gcnew System::EventHandler(this, &MyForm::forwardtoanimboard_Click);
			// 
			// forwardtoprq2
			// 
			this->forwardtoprq2->Location = System::Drawing::Point(647, 330);
			this->forwardtoprq2->Name = L"forwardtoprq2";
			this->forwardtoprq2->Size = System::Drawing::Size(65, 29);
			this->forwardtoprq2->TabIndex = 2;
			this->forwardtoprq2->Text = L"Вперед";
			this->forwardtoprq2->UseVisualStyleBackColor = true;
			this->forwardtoprq2->Click += gcnew System::EventHandler(this, &MyForm::forwardtoprq2_Click);
			// 
			// VodaList
			// 
			this->VodaList->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"VodaList.ImageStream")));
			this->VodaList->TransparentColor = System::Drawing::Color::Transparent;
			this->VodaList->Images->SetKeyName(0, L"1.png");
			this->VodaList->Images->SetKeyName(1, L"2.png");
			this->VodaList->Images->SetKeyName(2, L"3.png");
			this->VodaList->Images->SetKeyName(3, L"4.png");
			// 
			// proverkaButton
			// 
			this->proverkaButton->Location = System::Drawing::Point(419, 376);
			this->proverkaButton->Name = L"proverkaButton";
			this->proverkaButton->Size = System::Drawing::Size(112, 36);
			this->proverkaButton->TabIndex = 1;
			this->proverkaButton->Text = L"Проверить";
			this->proverkaButton->UseVisualStyleBackColor = true;
			this->proverkaButton->Visible = false;
			this->proverkaButton->Click += gcnew System::EventHandler(this, &MyForm::proverkaButton_Click);
			// 
			// backtopllect2
			// 
			this->backtopllect2->Location = System::Drawing::Point(12, 330);
			this->backtopllect2->Name = L"backtopllect2";
			this->backtopllect2->Size = System::Drawing::Size(61, 29);
			this->backtopllect2->TabIndex = 2;
			this->backtopllect2->Text = L"Назад";
			this->backtopllect2->UseVisualStyleBackColor = true;
			this->backtopllect2->Click += gcnew System::EventHandler(this, &MyForm::backtopllect2_Click);
			// 
			// backtopllect1
			// 
			this->backtopllect1->Location = System::Drawing::Point(12, 330);
			this->backtopllect1->Name = L"backtopllect1";
			this->backtopllect1->Size = System::Drawing::Size(68, 26);
			this->backtopllect1->TabIndex = 6;
			this->backtopllect1->Text = L"Назад";
			this->backtopllect1->UseVisualStyleBackColor = true;
			this->backtopllect1->Click += gcnew System::EventHandler(this, &MyForm::backtopllect1_Click);
			// 
			// backtoPlantsquiz
			// 
			this->backtoPlantsquiz->Location = System::Drawing::Point(12, 330);
			this->backtoPlantsquiz->Name = L"backtoPlantsquiz";
			this->backtoPlantsquiz->Size = System::Drawing::Size(65, 24);
			this->backtoPlantsquiz->TabIndex = 7;
			this->backtoPlantsquiz->Text = L"назад";
			this->backtoPlantsquiz->UseVisualStyleBackColor = true;
			this->backtoPlantsquiz->Click += gcnew System::EventHandler(this, &MyForm::backtoPlantsquiz_Click);
			// 
			// forwtoplMainBoard
			// 
			this->forwtoplMainBoard->Location = System::Drawing::Point(647, 330);
			this->forwtoplMainBoard->Name = L"forwtoplMainBoard";
			this->forwtoplMainBoard->Size = System::Drawing::Size(87, 35);
			this->forwtoplMainBoard->TabIndex = 3;
			this->forwtoplMainBoard->Text = L"Вперед";
			this->forwtoplMainBoard->UseVisualStyleBackColor = true;
			this->forwtoplMainBoard->Click += gcnew System::EventHandler(this, &MyForm::forwtoplMainBoard_Click);
			// 
			// forwtoplquiz2
			// 
			this->forwtoplquiz2->Location = System::Drawing::Point(647, 330);
			this->forwtoplquiz2->Name = L"forwtoplquiz2";
			this->forwtoplquiz2->Size = System::Drawing::Size(92, 34);
			this->forwtoplquiz2->TabIndex = 4;
			this->forwtoplquiz2->Text = L"Вперед";
			this->forwtoplquiz2->UseVisualStyleBackColor = true;
			this->forwtoplquiz2->Click += gcnew System::EventHandler(this, &MyForm::forwtoplquiz2_Click);
			// 
			// forwtopl1quiz
			// 
			this->forwtopl1quiz->Location = System::Drawing::Point(647, 330);
			this->forwtopl1quiz->Name = L"forwtopl1quiz";
			this->forwtopl1quiz->Size = System::Drawing::Size(88, 33);
			this->forwtopl1quiz->TabIndex = 5;
			this->forwtopl1quiz->Text = L"Вперед";
			this->forwtopl1quiz->UseVisualStyleBackColor = true;
			this->forwtopl1quiz->Click += gcnew System::EventHandler(this, &MyForm::forwtopl1quiz_Click);
			// 
			// FlowersList
			// 
			this->FlowersList->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"FlowersList.ImageStream")));
			this->FlowersList->TransparentColor = System::Drawing::Color::Transparent;
			this->FlowersList->Images->SetKeyName(0, L"1.png");
			this->FlowersList->Images->SetKeyName(1, L"2.png");
			this->FlowersList->Images->SetKeyName(2, L"3.png");
			this->FlowersList->Images->SetKeyName(3, L"4.png");
			this->FlowersList->Images->SetKeyName(4, L"5.jpg");
			// 
			// TreeList
			// 
			this->TreeList->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"TreeList.ImageStream")));
			this->TreeList->TransparentColor = System::Drawing::Color::Transparent;
			this->TreeList->Images->SetKeyName(0, L"1.png");
			this->TreeList->Images->SetKeyName(1, L"2.png");
			this->TreeList->Images->SetKeyName(2, L"3.png");
			this->TreeList->Images->SetKeyName(3, L"4.png");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(965, 457);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->proverkaButton);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			pair = gcnew FindPair(AnimalList);
			pair2 = gcnew FindPair(FlowersList);
			Match = gcnew MatchPictAntText(VodaList, L"Рыба-клоун", L"Сом", L"Рак", L"Лягушка");
			Match2 = gcnew MatchPictAntText(TreeList, L"Дуб", L"Береза", L"Ель",L"Клен");
			this->Text = L"Kursovaya";
			this->ResumeLayout(false);

		}
#pragma endregion
		// Начальный экран, после нажатия кнопки
	private: System::Void startButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Clear();
		this->Controls->Add(this->animalsButton);
		this->Controls->Add(this->plantsButton);
	}//Выбор области изучения: Животный мир или Растительный в очень красочной форме
	private: System::Void animalsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Clear();
		this->Controls->Add(this->panel1);
		this->panel1->Hide();
		this->Controls->Add(this->Quiz1);
		this->Controls->Add(this->Quiz2);
		this->Quiz1->Location = Point(50, this->panel1->Height / 8);
		this->Quiz2->Location = Point(50 + this->panel1->Width / 2, this->panel1->Height / 8);
		this->Quiz1->Size = System::Drawing::Size(this->panel1->Width / 6, this->panel1->Height * 3 / 4);
		this->Quiz2->Size = System::Drawing::Size(this->panel1->Width / 6, this->panel1->Height * 3 / 4);
		this->Controls->Add(this->backtokingdomsButton);

	}
	private: System::Void plantsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Clear();
		this->Controls->Add(this->panel1);
		this->panel1->Hide();
		this->Controls->Add(this->Quiz5);
		this->Controls->Add(this->Quiz6);
		this->Quiz5->Location = Point(50, this->panel1->Height / 8);
		this->Quiz6->Location = Point(50 + this->panel1->Width / 2, this->panel1->Height / 8);
		this->Quiz5->Size = System::Drawing::Size(this->panel1->Width / 6, this->panel1->Height * 3 / 4);
		this->Quiz6->Size = System::Drawing::Size(this->panel1->Width / 6, this->panel1->Height * 3 / 4);
		this->Controls->Add(this->backtokingdomsButton);
	}
		   //Создание теоретического урока с помощью CreateLecture
	private: System::Void Quiz1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Controls->Clear();
		array<PictureBox^>^ Animals;
		array<TextBox^>^ Textboxes;
		CreateLecture^ temp;
		temp = gcnew CreateLecture(AnimalList, "Животные бывают дикие и домашние.Дикие животные злые - это лисичка и волчок, а "
			L"домашние животные добрые - это собачка и кошечка");
		Animals = temp->CreateKartinki();
		Textboxes = temp->CreateNazvan();
		Textboxes[0]->Text = "Лисичка";
		Textboxes[1]->Text = "Волчок";
		Textboxes[2]->Text = "Котик";
		Textboxes[3]->Text = "Собачка";
		for (int i = 0; i < 4; i++)
		{
			Controls->Add(Animals[i]);
			Controls->Add(Textboxes[i]);
		}
		Controls->Add(temp->CreateText("Животные бывают дикие и домашние.Дикие животные злые - это лисичка и волчок, а "
			L"домашние животные добрые - это собачка и кошечка"));
		this->Controls->Add(backtoAnimQuiz);

		this->Controls->Add(this->forwardtoprq1Button);
	}
	private: System::Void backtokingdomsButton_Click(System::Object^ sender, System::EventArgs^ e) {
		startButton_Click(nullptr, nullptr);
	}
	private: System::Void backtoAnimQuiz_Click(System::Object^ sender, System::EventArgs^ e) {
		animalsButton_Click(nullptr, nullptr);
	}
		   // Создание 2-ой теории
	private: System::Void Quiz2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Clear();
		this->Controls->Add(backtoAnimQuiz);
		this->Controls->Add(forwardtoprq2);
		array<PictureBox^>^ Animals;
		array<TextBox^>^ Textboxes;
		CreateLecture^ temp;
		temp = gcnew CreateLecture(VodaList, L"В воде живут рыбки ,например, рыба-клоун из Немо и мудрый сом. Помимо рыб"
		L" там живет много интересных животных, например, рак и лягушка");
		Animals = temp->CreateKartinki();
		Textboxes = temp->CreateNazvan();
		Textboxes[0]->Text = "Рыба-клоун";
		Textboxes[1]->Text = "Сом";
		Textboxes[2]->Text = "Рак";
		Textboxes[3]->Text = "Лягушка";
		for (int i = 0; i < 4; i++)
		{
			Controls->Add(Animals[i]);
			Controls->Add(Textboxes[i]);
		}
		Controls->Add(temp->CreateText(L"В воде живут рыбки ,например, рыба-клоун из Немо и мудрый сом. Помимо рыб"
			L" там живет много интересных животных, например, рак и лягушка"));
	}
		   // Создание мини-игры "Угадай пару"
	private: System::Void forwardtoprq1Button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Clear();
		this->Controls->Add(backtoQuiz1lect);
		this->Controls->Add(forwardtoanimboard);
		array<array<PictureBox^>^>^ pctr;
		pctr = pair->CreatePictureBoxes();
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				this->Controls->Add(pctr[i][j]);
				// Нажатие на PB
				pctr[i][j]->Click += gcnew System::EventHandler(this,&MyForm::OnClick);
			}
		}
	}
		   void OnClick(System::Object^ sender, System::EventArgs^ e);
private: System::Void forwardtoanimboard_Click(System::Object^ sender, System::EventArgs^ e) {
	animalsButton_Click(nullptr, nullptr);
}
	   // Создание мини-игры "Сопоставь"
private: System::Void forwardtoprq2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(backtoQuiz2lect);
	this->Controls->Add(this->proverkaButton);
	this->proverkaButton->Visible = true;
	this->Controls->Add(forwardtoanimboard);
	array<ComboBox^>^ spispki;
	array<PictureBox^>^ picboxes;
	// Реализация класса
	spispki = Match->Spiski();
	picboxes = Match->PB();
	for (int i = 0; i < 4; i++)
	{
		Controls->Add(spispki[i]);
		Controls->Add(picboxes[i]);
		//Выбор элемента выпадающего списка
		spispki[i]->SelectedIndexChanged += gcnew System::EventHandler(this, &Project3::MyForm::OnSelectedIndexChanged);
	}
}

private: System::Void proverkaButton_Click(System::Object^ sender, System::EventArgs^ e) {
	// проверка правильности сделанного задания в мини-игре "Сопоставь"
	if (Match->PrinudProverka() || Match2->PrinudProverka())
	{
		MessageBox::Show(L"Молодец! Все правильно!");
	}
	else
	{
		MessageBox::Show(L"Ошибка! Попробуй снова!");
	}
}
private: System::Void Quiz5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(backtoPlantsquiz);
	this->Controls->Add(forwtopl1quiz);
	array<PictureBox^>^ Trees;
	array<TextBox^>^ Textboxes;
	CreateLecture^ temp;
	temp = gcnew CreateLecture(TreeList, L"Деревья очищают и увлажняют воздух, создают прохладу, дают плоды. Спиленные деревья являются строительным материалом");
	Trees = temp->CreateKartinki();
	Textboxes = temp->CreateNazvan();
	Textboxes[0]->Text = "Дуб";
	Textboxes[1]->Text = "Береза";
	Textboxes[2]->Text = "Ель";
	Textboxes[3]->Text = "Клен";
	for (int i = 0; i < 4; i++)
	{
		Controls->Add(Trees[i]);
		Controls->Add(Textboxes[i]);
	}
	Controls->Add(temp->CreateText(L"Деревья очищают и увлажняют воздух, создают прохладу, дают плоды. Спиленные деревья являются строительным материалом"));
}
private: System::Void Quiz6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	array<PictureBox^>^ Flowers;
	array<TextBox^>^ Textboxes;
	CreateLecture^ temp;
	temp = gcnew CreateLecture(FlowersList, "Разные цветы, могут выживать в разных условиях, и по-разному пахнут");
	Flowers = temp->CreateKartinki();
	Textboxes = temp->CreateNazvan();
	Textboxes[0]->Text = "Роза";
	Textboxes[1]->Text = "Колокольчик";
	Textboxes[2]->Text = "Тюльпан";
	Textboxes[3]->Text = "Незабудка";
	for (int i = 0; i < 4; i++)
	{
		Controls->Add(Flowers[i]);
		Controls->Add(Textboxes[i]);
	}
	Controls->Add(temp->CreateText("Разные цветы, могут выживать в разных условиях, и по-разному пахнут"));
	Controls->Add(forwtoplquiz2);
	Controls->Add(backtoPlantsquiz);
}
	private: System::Void forwtopl1quiz_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Controls->Clear();
		this->Controls->Add(this->proverkaButton);
		this->proverkaButton->Visible = true;
		this->Controls->Add(backtopllect1);
		this->Controls->Add(forwtoplMainBoard);
		array<ComboBox^>^ spispki;
		array<PictureBox^> ^ picboxes;
		// Реализация класса
		spispki = Match2->Spiski();
		picboxes = Match2->PB();
		for (int i = 0; i < 4; i++)
		{
			Controls->Add(spispki[i]);
			Controls->Add(picboxes[i]);
			//Выбор элемента выпадающего списка
			spispki[i]->SelectedIndexChanged += gcnew System::EventHandler(this, &Project3::MyForm::OnSelectedIndexChanged);
		}
	}
private: System::Void forwtoplquiz2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Controls->Clear();
	this->Controls->Add(backtopllect2);
	this->Controls->Add(forwtoplMainBoard);
	array<array<PictureBox^>^>^ pctr;
	pctr = pair2->CreatePictureBoxes();
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			this->Controls->Add(pctr[i][j]);
			// Нажатие на PB
			pctr[i][j]->Click += gcnew System::EventHandler(this, &MyForm::OnClick);
		}
	}
}
private: System::Void forwtoplMainBoard_Click(System::Object^ sender, System::EventArgs^ e) {
	plantsButton_Click(nullptr, nullptr);
}
private: System::Void backtoPlantsquiz_Click(System::Object^ sender, System::EventArgs^ e) {
	plantsButton_Click(nullptr, nullptr);
}
private: System::Void backtopllect1_Click(System::Object^ sender, System::EventArgs^ e) {
	Quiz5_Click(nullptr, nullptr);
}
private: System::Void backtopllect2_Click(System::Object^ sender, System::EventArgs^ e) {
	Quiz6_Click(nullptr, nullptr);
}
	   void OnSelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
};
// Функция клика в мини-игре "Найди пару"
void Project3::MyForm::OnClick(System::Object^ sender, System::EventArgs^ e)
{
	this->pair->PicClick(sender, e);
	this->pair2->PicClick(sender, e);
}
}

// Функция изменения элемента в выпадающем списке
void Project3::MyForm::OnSelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	Match->Proverka(sender, e);
	Match2->Proverka(sender, e);
}

