
#pragma once
namespace Project3
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class CreateLecture
	{
	private:
		ImageList^ imglst;
		Label^ label;
		array<PictureBox^>^ piclecture;
		array<TextBox^>^ nazvanieanim;
	public://Конструктор
		CreateLecture(ImageList^ input,String^ text)
		{
			imglst = gcnew ImageList;
			imglst = input;
			imglst->ImageSize = Size(200, 200);
			label = gcnew Label;
			piclecture = gcnew array<PictureBox^>(4);
			for (int i = 0; i < 4; i++)
			{
				piclecture[i] = gcnew PictureBox;
			}
			nazvanieanim = gcnew array<TextBox^>(4);
			for (int i = 0; i < 4; i++)
			{
				nazvanieanim[i] = gcnew TextBox;
			}//методы
			CreateText(text);
			CreateKartinki();
			CreateNazvan();
		}
		//Создание Текста с информацией
		Label^ CreateText(String^ text)
		{
			label->AutoSize = false;
			label->BackColor = System::Drawing::Color::Transparent;
			label->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			label->ForeColor = System::Drawing::Color::White;
			label->Location = System::Drawing::Point(24, 21);
			label->Size = System::Drawing::Size(624, 100);
			label->Text = text;
			return label;
		}
		// Картинки
		array<PictureBox^>^ CreateKartinki()
		{
			
			int temp = 30;
			for (int i = 0; i < 4; i++)
			{
				piclecture[i]->BackgroundImageLayout = ImageLayout::Stretch;
				piclecture[i]->Location = System::Drawing::Point(temp, 176);
				piclecture[i]->Size = System::Drawing::Size(100, 117);
				piclecture[i]->BackgroundImage = imglst->Images[i];
				temp += 175;
			}
			return piclecture;
		}
		// Названия
		array<TextBox^>^ CreateNazvan()
		{
			int temp = 30;
			for (int i = 0; i < 4; i++)
			{
				nazvanieanim[i]->ReadOnly = true;
				nazvanieanim[i]->Location = System::Drawing::Point(temp, 299);
				nazvanieanim[i]->Size = System::Drawing::Size(100, 20);
				temp += 175;
			}
			return nazvanieanim;
		}
	};
}
