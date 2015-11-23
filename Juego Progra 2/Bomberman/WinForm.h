#pragma once
#include "Controladora.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace Bomberman 
{
	public ref class Winform : public System::Windows::Forms::Form
	{
	public:
		static Winform^ winform;
		static Graphics^ graphics;
		static BufferedGraphicsContext^ context;
		static Random^ aleatorio;
		static Upecino^ upecino;
		static MatrizObjetos^ objetos;
		static ArrBombas^ bombas;
		static ArrMalignos^ malignos;
		static Introduccion^ introduccion;
		static Inicio^ inicio;
		static Juego^ juego;

		static Nivel1^ nivel1;
		static Nivel2^ nivel2;
		static Nivel3^ nivel3;
		static Nivel4^ nivel4;
		static Nivel5^ nivel5;
		
		Winform(void);
		~Winform();
	public:
		static System::Windows::Forms::Timer^  timer;
		System::ComponentModel::IContainer^  components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer
			// 
			this->timer->Enabled = true;
			this->timer->Interval = 50;
			this->timer->Tick += gcnew System::EventHandler(this, &Winform::timer_Tick);
			// 
			// Winform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(960, 640);
			this->Name = L"Winform";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Winform";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void timer_Tick(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}