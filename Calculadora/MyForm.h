#pragma once

namespace Calculadora {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		double numero1, numero2;
		double resultado;
		char operando;
		bool punto = false;	

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button0;

	private: System::Windows::Forms::Button^ bigual;

	private: System::Windows::Forms::Button^ bmas;
	private: System::Windows::Forms::Button^ bmenos;
	private: System::Windows::Forms::Button^ bpor;
	private: System::Windows::Forms::Button^ bdividir;




	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ bborrar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button10;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->bigual = (gcnew System::Windows::Forms::Button());
			this->bmas = (gcnew System::Windows::Forms::Button());
			this->bmenos = (gcnew System::Windows::Forms::Button());
			this->bpor = (gcnew System::Windows::Forms::Button());
			this->bdividir = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->bborrar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(59, 108);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(128, 108);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 31);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(198, 108);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 31);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(59, 145);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 31);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(128, 145);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 31);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(198, 145);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 31);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(59, 182);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 31);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(128, 182);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 31);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(198, 182);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 31);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button0
			// 
			this->button0->Location = System::Drawing::Point(128, 219);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(50, 31);
			this->button0->TabIndex = 9;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// bigual
			// 
			this->bigual->Location = System::Drawing::Point(198, 219);
			this->bigual->Name = L"bigual";
			this->bigual->Size = System::Drawing::Size(50, 31);
			this->bigual->TabIndex = 10;
			this->bigual->Text = L"=";
			this->bigual->UseVisualStyleBackColor = true;
			this->bigual->Click += gcnew System::EventHandler(this, &MyForm::bigual_Click);
			// 
			// bmas
			// 
			this->bmas->Location = System::Drawing::Point(264, 108);
			this->bmas->Name = L"bmas";
			this->bmas->Size = System::Drawing::Size(50, 31);
			this->bmas->TabIndex = 11;
			this->bmas->Text = L"+";
			this->bmas->UseVisualStyleBackColor = true;
			this->bmas->Click += gcnew System::EventHandler(this, &MyForm::bmas_Click);
			// 
			// bmenos
			// 
			this->bmenos->Location = System::Drawing::Point(264, 145);
			this->bmenos->Name = L"bmenos";
			this->bmenos->Size = System::Drawing::Size(50, 31);
			this->bmenos->TabIndex = 12;
			this->bmenos->Text = L"-";
			this->bmenos->UseVisualStyleBackColor = true;
			this->bmenos->Click += gcnew System::EventHandler(this, &MyForm::bmenos_Click);
			// 
			// bpor
			// 
			this->bpor->Location = System::Drawing::Point(264, 182);
			this->bpor->Name = L"bpor";
			this->bpor->Size = System::Drawing::Size(50, 31);
			this->bpor->TabIndex = 13;
			this->bpor->Text = L"x";
			this->bpor->UseVisualStyleBackColor = true;
			this->bpor->Click += gcnew System::EventHandler(this, &MyForm::bpor_Click);
			// 
			// bdividir
			// 
			this->bdividir->Location = System::Drawing::Point(264, 219);
			this->bdividir->Name = L"bdividir";
			this->bdividir->Size = System::Drawing::Size(50, 31);
			this->bdividir->TabIndex = 14;
			this->bdividir->Text = L"/";
			this->bdividir->UseVisualStyleBackColor = true;
			this->bdividir->Click += gcnew System::EventHandler(this, &MyForm::bdividir_Click);
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(59, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(255, 22);
			this->textBox1->TabIndex = 15;
			// 
			// bborrar
			// 
			this->bborrar->Location = System::Drawing::Point(332, 108);
			this->bborrar->Name = L"bborrar";
			this->bborrar->Size = System::Drawing::Size(50, 31);
			this->bborrar->TabIndex = 16;
			this->bborrar->Text = L"CE";
			this->bborrar->UseVisualStyleBackColor = true;
			this->bborrar->Click += gcnew System::EventHandler(this, &MyForm::bborrar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(56, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 32);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Calculadora";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(62, 219);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 31);
			this->button10->TabIndex = 18;
			this->button10->Text = L".";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(415, 293);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bborrar);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->bdividir);
			this->Controls->Add(this->bpor);
			this->Controls->Add(this->bmenos);
			this->Controls->Add(this->bmas);
			this->Controls->Add(this->bigual);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "1";//Agrega en el textbox el numero del boton que presiones
		//todo esto se repite
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "2";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "3";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "4";
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "5";
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "6";
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "7";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "8";
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "9";
	}
	private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = textBox1->Text + "0";
	}
	private: System::Void bmas_Click(System::Object^ sender, System::EventArgs^ e) {
		punto = false;//Evita que salga el error de dos puntos en los decimales cada vez que se quieran operar dos decimales
		operando = '+';
		numero1 = Convert::ToDouble(textBox1->Text);
		textBox1->Clear();//Borra el textbox para orden y evitar errorer al operar
	}
	private: System::Void bmenos_Click(System::Object^ sender, System::EventArgs^ e) {
		punto = false;
		operando = '-';
		numero1 = Convert::ToDouble(textBox1->Text);
		textBox1->Clear();
	}
	private: System::Void bpor_Click(System::Object^ sender, System::EventArgs^ e) {
		punto = false;
		operando = 'x';
		numero1 = Convert::ToDouble(textBox1->Text);
		textBox1->Clear();
	}
	private: System::Void bdividir_Click(System::Object^ sender, System::EventArgs^ e) {
		punto = false;
		operando = '/';
		numero1 = Convert::ToDouble(textBox1->Text);
		textBox1->Clear();
	}
	private: System::Void bigual_Click(System::Object^ sender, System::EventArgs^ e) {
		numero2 = Convert::ToDouble(textBox1->Text);
		switch (operando)
		{
		case '+':
			resultado = numero1 + numero2;
			textBox1->Text = Convert::ToString(resultado);//El textbox no admite valores tipo double
			break;
			textBox1->Clear();//limpia otra vez el textbox
			punto = false;//Evita que no pueda ser usado nuevamente
		case '-':
			resultado = numero1 - numero2;
			textBox1->Text = Convert::ToString(resultado);
			break;
			textBox1->Clear();
			punto = false;
		case 'x':
			resultado = numero1 * numero2;
			textBox1->Text = Convert::ToString(resultado);
			break;
			textBox1->Clear();
			punto = false;
		case '/':
			if (numero1 == 0 && numero2 == 0)
			{

				textBox1->Text = "No determinado";
				//No queremos que la calculadora explote. ¿O sí?
			}
			else {
				//La operación
				resultado = numero1 / numero2;
				textBox1->Text = Convert::ToString(resultado);
			}
			break;
			textBox1->Clear();
			punto = false;
		}
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (punto == false) {//la variable punto ayuda a la escritura y manipulación de decimales
			//cuando es falso se escribe un punto
			textBox1->Text = textBox1->Text + ".";
		}
		else {
			//Es una broma, no se lo tomen a pecho
			MessageBox::Show("Los decimales solo tienen un punto. ¿Verdad?");
		}
		punto = true;
	}
	private: System::Void bborrar_Click(System::Object^ sender, System::EventArgs^ e) {
		//Borra todo lo que aparezca en el textbox más no lo ya guardado en el número anterior
		textBox1->Clear();
	}
};
}
