
#pragma once

namespace Project3
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class FindPair
	{
	private:
		int count;
		Convert^ converter;
		int openedcnt = 0;
		array <int>^ opened;
		ImageList^ imglst;
		Random^ rand;
		Panel^ panelforgame;
		const int N = 4;
		const int M = 8;
		array<array<PictureBox^>^>^ arrpic;
		array<int>^ pairs;
		array<int>^ game_pairs;
	public:
		FindPair(ImageList^ list)
		{
			//����������� ������
			imglst = gcnew ImageList;
			imglst = list;
			rand = gcnew Random;
			panelforgame = gcnew Panel;
			panelforgame->Size = Size(724, 370);
			game_pairs = gcnew array<int>(16);
			pairs = gcnew array<int>(8);
			opened = gcnew array<int>(2);
			openedcnt = 0;
			arrpic = gcnew array<array<PictureBox^>^>(N);
			for (int i = 0; i < N; i++)
			{
				arrpic[i] = gcnew array<PictureBox^>(N);
			}
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					arrpic[i][j] = gcnew PictureBox;
				}
			}
			CreatePairs();
		}
		// ���������� ��������� ��������
		void hide()
		{
			for (int i = 0; i < N; i++)
				for (int j = 0; j < N; j++)
					arrpic[i][j]->BackgroundImage = imglst->Images[4];

		}
		// �������� PB, � �������� � ����� ����������������� ������������
		array<array<PictureBox^>^>^ CreatePictureBoxes()
		{
			int tag_count = 0;
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					arrpic[i][j]->Top = i * panelforgame->Height / 4;
					arrpic[i][j]->Left = j * panelforgame->Width / 4;
					arrpic[i][j]->Width = panelforgame->Width / 4;
					arrpic[i][j]->Height = panelforgame->Height / 4;
					arrpic[i][j]->BackColor = Color::White;
					arrpic[i][j]->BorderStyle = BorderStyle::FixedSingle;
					hide();
					arrpic[i][j]->BackgroundImageLayout = ImageLayout::Stretch;
					arrpic[i][j]->Tag = tag_count;
					tag_count++;
				}
			}
			return (arrpic);
		}
		// �������� ������ "��������" ��������� �������
		void CreatePairs()
		{
			for (int i = 0; i < M; i++)
			{
				pairs[i] = rand->Next(4);
			}
			for (int i = 0; i < N * N; i++)
			{
				game_pairs[i] = -1;
			}
			int usedpairs = 0;
			//���������� ��� - 8
			while (usedpairs != 8)
			{
				int index1 = rand->Next(16);
				int index2 = rand->Next(16);
				// �������� �� ������������� �����
				if (index1 == index2)
					continue;
				// ������ �� ������ ����
				if (game_pairs[index1] == -1 && game_pairs[index2] == -1)
				{
					game_pairs[index1] = game_pairs[index2] = pairs[usedpairs];
					usedpairs++;
				}
				int count = 0;
				for (int i = 0; i < N; i++)
				{
					for (int j = 0; j < N; j++)
					{
						count++;
					}
				}
			}
		}
		// ������� �� �������� � � ���������
		void PicClick(Object^ sender, EventArgs^ e)
		{
			PictureBox^ p = (PictureBox^)sender;
			int index = converter->ToInt32(p->Tag);
			// ������� ������� �� ���� � �� �� �������� ������
			if (openedcnt == 1)
			{
				if (opened[0] == index)
					return;
			}
			//����. ���������� ����������� �� ��� �������� - 2
			if (openedcnt == 2)
			{
				openedcnt = 0;
				hide();
			}
			// ���������� index �������� ��������
			opened[openedcnt] = index;
			openedcnt++;
			count = 0;
			if (openedcnt == 2)
			{
				//������������� ����
				if (game_pairs[opened[0]] == game_pairs[opened[1]])
				{
					for (int i = 0; i < N; i++)
					{
						for (int j = 0; j < N; j++)
						{
							// ������� ����������� ��������
							if (converter->ToInt32(arrpic[i][j]->Tag) == opened[0] || converter->ToInt32(arrpic[i][j]->Tag) == opened[1])
							{
								arrpic[i][j]->Visible = false;
								count += 1;
								if (count == 8)
								{
									MessageBox::Show(L"�������, �� ��� ������!");
								}
							}
						}
					}
				}
			}
			p->BackgroundImage = imglst->Images[game_pairs[index]];
		}
	};
}

