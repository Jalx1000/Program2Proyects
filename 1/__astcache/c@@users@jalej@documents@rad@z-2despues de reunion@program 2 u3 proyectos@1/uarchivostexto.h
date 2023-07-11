﻿//---------------------------------------------------------------------------

#ifndef UArchivosTextoH
#define UArchivosTextoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.ImageList.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtDlgs.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.BaseImageCollection.hpp>
#include <Vcl.ImageCollection.hpp>

#include <fstream>
#include <iostream>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
  __published: // IDE-managed Components
    TMainMenu* MainMenu1;
	TImageList* ImageList1;
    TOpenTextFileDialog* OpenTextFileDialog1;
	TMenuItem* Probar1;
	TMenuItem* Cargar1;
	TImageCollection *ImageCollection1;
	void __fastcall Cargar1Click(TObject *Sender);
	void __fastcall Probar1Click(TObject *Sender);
  private: // User declarations
    char Laberinto[100][100];
    byte m, n; // para la dimensión de la matriz del mapa de bits
	int x, y; //las coordenadas del hámster
  public: // User declarations
    __fastcall TForm1(TComponent* Owner);
	void Cargar(String nom); //carga el mapa de bits a partir del archivo txt
	bool BackTrack(char Lab[][100], int x, int y); //recorre el laberinto buscando la salida. TRUE si lo encuentra.
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1* Form1;
//---------------------------------------------------------------------------
#endif
