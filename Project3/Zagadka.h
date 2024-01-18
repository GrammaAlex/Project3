#pragma once
namespace Project3
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class Zagadka
	{
	private:
		int index,index1;
		int loc = 30;
		array<int>^ temp;
		array<Label^>^ labels;
		Random^ rand;
		array<ComboBox^>^ otvet;
	public:
		Zagadka(String^ text1, String^ text2, String^ text3, String^ anim1, String^ anim2, String^ anim3, String^ anim4)
		{
			rand = gcnew Random;
			otvet = gcnew array<ComboBox^>(2);
			labels = gcnew array<Label^>(3);
			for (int i = 0; i < 3; i++)
			{
				labels[i] = gcnew Label;
				labels[i]->AutoSize = false;
				labels[i]->BackColor = System::Drawing::Color::Transparent;
				labels[i]->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
				labels[i]->ForeColor = System::Drawing::Color::White;
				labels[i]->Size = System::Drawing::Size(624, 100);
			}
			for (int i = 0; i < 2; i++)
			{
				otvet[i] = gcnew ComboBox;
				otvet[i]->Location = Point(40, loc+130);
				otvet[i]->Items->AddRange(gcnew array<Object^>(4) { anim1, anim2, anim3, anim4 });
				loc += 150;
			}
			labels[0]->Text = text1;
			labels[1]->Text = text2;
			labels[2]->Text = text3;
			temp = gcnew array<int>(3);
			
		}
		Label^ Labelonscreen1()
		{
			index = rand->Next(3);
			return labels[index];
			labels[index]->Location = System::Drawing::Point(60, 30);
		}
		Label^ Labelonscreen2()
		
		{
			while(index1 != index)
			index1 = rand->Next(3);
			labels[index1]->Location = System::Drawing::Point(60, 150);
			return labels[index1];
			
		} 
		array<ComboBox^>^ create()
		{
			return otvet;
		}
	};

}