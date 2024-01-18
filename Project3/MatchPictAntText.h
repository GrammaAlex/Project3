#pragma once
namespace Project3
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class MatchPictAntText
	{
	private:
		int temp = 38;
		Convert^ converter;
		array<PictureBox^>^ arrpic;
		array<ComboBox^>^ arrspis;
		ImageList^ imglst;
		array<int>^ temp1;
		Random^ rand;
		array<int>^ used;
		array<int>^ used1;
		int goodansw = 0;
	public:
		// Конструктор
		MatchPictAntText(ImageList^ imginput, String^ text1, String^ text2, String^ text3, String^ text4)
		{
			used = gcnew array<int>(4);
			used1 = gcnew array<int>(4);
			arrpic = gcnew array<PictureBox^>(4);
			arrspis = gcnew array<ComboBox^>(4);
			int tag_count = 0;
			imglst = imginput;
			rand = gcnew Random;
			for (int i = 0; i < 4; i++)
			{
				// создание игрового поля
				arrpic[i] = gcnew PictureBox;
				arrpic[i]->Location = Point(temp, 81);
				arrpic[i]->Size = Size(121, 127);
				arrpic[i]->BackgroundImageLayout = ImageLayout::Stretch;
				arrspis[i] = gcnew ComboBox;
				arrspis[i]->DropDownStyle = ComboBoxStyle::DropDownList;
				arrspis[i]->Location = Point(temp, 234);
				arrspis[i]->Items->AddRange(gcnew array<Object^>(4) { text1, text2, text3, text4 });
				temp += 175;
				tag_count++;
				used1[i] = 0;
				used[i] = -1;
			}
			// Используем тасование Фишера-Йется для генерации случайных неповторяющихся чисел
			temp1 = gcnew array<int>(4);
			for (int i = 0; i < 4; i++)
			{
				int j = rand->Next(4) % (i + 1);
				temp1[i] = temp1[j];
				temp1[j] = i;
			}
			for (int i = 0; i < 4; i++)
			{
				arrpic[temp1[i]]->Tag = i;
				arrpic[temp1[i]]->BackgroundImage = imglst->Images[i];
			}
		}
		// Возвращаемая функция, для работы на форме
		array<ComboBox^>^ Spiski()
		{
			return arrspis;
		}
		array<PictureBox^>^ PB()
		{
			return arrpic;
		}
		// Проверка ответов
		void Proverka(Object^ sender,EventArgs^ e)
		{
			ComboBox^ temptet = (ComboBox^)sender;
			// Хорошо подкована математически, логически и без багов
			if (temptet->TabIndex == 5 && converter->ToInt32(arrpic[0]->Tag) == converter->ToInt32(temptet->SelectedIndex))
			{
				if (used[0] != converter->ToInt32(temptet->SelectedIndex)&& used1[0]==0)
				{
					goodansw += 1;
					used[0] = converter->ToInt32(temptet->SelectedIndex);
					used1[0] = converter->ToInt32(temptet->TabIndex);
					return;
				}
				if (used[0] != converter->ToInt32(temptet->SelectedIndex) && used1[0] == converter->ToInt32(temptet->TabIndex))
				{
					goodansw += 2;
					used[0] = converter->ToInt32(temptet->SelectedIndex);
					return;
				}
			}
			else if (temptet->TabIndex == 7 && converter->ToInt32(arrpic[1]->Tag) == converter->ToInt32(temptet->SelectedIndex))
			{
				if (used[1] != converter->ToInt32(temptet->SelectedIndex)&&used1[1]==0)
				{
					goodansw += 1;
					used[1] = converter->ToInt32(temptet->SelectedIndex);
					used1[1] = converter->ToInt32(temptet->TabIndex);
					return;
				}
				if (used[1] != converter->ToInt32(temptet->SelectedIndex) && used1[1] == converter->ToInt32(temptet->TabIndex))
				{
					goodansw += 2;
					used[1] = converter->ToInt32(temptet->SelectedIndex);
					return;
				}
			}
			else if (temptet->TabIndex == 9 && converter->ToInt32(arrpic[2]->Tag) == converter->ToInt32(temptet->SelectedIndex))
			{
				if (used[2] != converter->ToInt32(temptet->SelectedIndex) && used1[2] == 0)
				{
					goodansw += 1;
					used[2] = converter->ToInt32(temptet->SelectedIndex);
					used1[2] = converter->ToInt32(temptet->TabIndex);
					return;
				}
				if (used[2] != converter->ToInt32(temptet->SelectedIndex) && used1[2] == converter->ToInt32(temptet->TabIndex))
				{
					goodansw += 2;
					used[2] = converter->ToInt32(temptet->SelectedIndex);
					return;
				}
			}
			else if (temptet->TabIndex == 11 && converter->ToInt32(arrpic[3]->Tag) == converter->ToInt32(temptet->SelectedIndex) )
			{
				if (used[3] != converter->ToInt32(temptet->SelectedIndex)&&used1[3] == 0)
				{
					goodansw += 1;
					used[3] = converter->ToInt32(temptet->SelectedIndex);
					used1[3] = converter->ToInt32(temptet->TabIndex);
					return;
				}
				if (used[3] != converter->ToInt32(temptet->SelectedIndex) && used1[3] == converter->ToInt32(temptet->TabIndex))
				{
					goodansw += 2;
					used[3] = converter->ToInt32(temptet->SelectedIndex);
					return;
				}
			}
			else
			{
				if (temptet->TabIndex == 5 && converter->ToInt32(arrpic[0]->Tag))
				{
					if (used1[0] != converter->ToInt32(temptet->TabIndex))
					{
						goodansw -= 1;
						used1[0] = converter->ToInt32(temptet->TabIndex);
						return;
					}
				}
				if (temptet->TabIndex == 7)
				{
					if (used1[1] != converter->ToInt32(temptet->TabIndex))
					{
						goodansw -= 1;
						used1[1] = converter->ToInt32(temptet->TabIndex);
						return;
					}
				}
				if (temptet->TabIndex == 9)
				{
					if (used1[2] != converter->ToInt32(temptet->TabIndex))
					{
						goodansw -= 1;
						used1[2] = converter->ToInt32(temptet->TabIndex);
						return;
					}
				}
				if (temptet->TabIndex == 11)
				{
					if (used1[2] != converter->ToInt32(temptet->TabIndex))
					{
						goodansw -= 1;
						used1[2] = converter->ToInt32(temptet->TabIndex);
						return;
					}
				}
			}
		}
		// Проверка полного ответа
		bool PrinudProverka()
		{
			if (goodansw == 4)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	};
}
