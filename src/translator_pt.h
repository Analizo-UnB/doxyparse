/******************************************************************************
 *
 * 
 *
 * Copyright (C) 1997-2001 by Dimitri van Heesch.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation under the terms of the GNU General Public License is hereby
 * granted. No representations are made about the suitability of this software
 * for any purpose. It is provided "as is" without express or implied warranty.
 * See the GNU General Public License for more details.
 *
 * Documents produced by Doxygen are derivative works derived from the
 * input used in their production; they are not affected by this license.
 *
 * The translation into Portuguese was provided by
 *   Rui Godinho Lopes <ruiglopes@yahoo.com>
 */

#ifndef TRANSLATOR_PT_H
#define TRANSLATOR_PT_H

#include "translator.h"

class TranslatorPortuguese : public Translator
{
  public:
    QCString idLanguage()
    { return "portuguese"; }
    /*! returns the name of the package that is included by LaTeX */
    QCString latexBabelPackage()
    { return "portuguese"; }

    /*! used in the compound documentation before a list of related functions. */
    QCString trRelatedFunctions()
    { return "Fun��es associadas"; }

    /*! subscript for the related functions. */
    QCString trRelatedSubscript()
    { return "(Note que n�o s�o fun��es membro)"; }

    /*! header that is put before the detailed description of files, classes and namespaces. */
    QCString trDetailedDescription()
    { return "Descri��o detalhada"; }

    /*! header that is put before the list of typedefs. */
    QCString trMemberTypedefDocumentation()
    { return "Documenta��o de tipos definidos"; }

    /*! header that is put before the list of enumerations. */
    QCString trMemberEnumerationDocumentation()
    { return "Documenta��o da enumera��es"; }

    /*! header that is put before the list of member functions. */
    QCString trMemberFunctionDocumentation()
    { return "Documenta��o dos m�todos"; }

    /*! header that is put before the list of member attributes. */
    QCString trMemberDataDocumentation()
    { return "Documenta��o dos dados"; }

    /*! this is the text of a link put after brief descriptions. */
    QCString trMore()
    { return "Mais..."; }

    /*! put in the class documentation */
    QCString trListOfAllMembers()
    { return "Mostrar lista completa dos membros"; }

    /*! used as the title of the "list of all members" page of a class */
    QCString trMemberList()
    { return "Lista dos membros"; }

    /*! this is the first part of a sentence that is followed by a class name */
    QCString trThisIsTheListOfAllMembers()
    { return "Esta � a lista completa dos membros de "; }

    /*! this is the remainder of the sentence after the class name */
    QCString trIncludingInheritedMembers()
    { return ", incluindo todos os membros herdados."; }

    /*! this is put at the author sections at the bottom of man pages.
     *  parameter s is name of the project name.
     */
    QCString trGeneratedAutomatically(const char *s)
    { QCString result="Gerado automaticamente por Doxygen";
      if (s) result+=(QCString)" para "+s;
      result+=" a partir do c�digo fonte.";
      return result;
    }

    /*! put after an enum name in the list of all members */
    QCString trEnumName()
    { return "enumera��o"; }

    /*! put after an enum value in the list of all members */
    QCString trEnumValue()
    { return "valor enumerado"; }

    /*! put after an undocumented member in the list of all members */
    QCString trDefinedIn()
    { return "definido em"; }

    /*! put as in introduction in the verbatim header file of a class.
     *  parameter f is the name of the include file.
     */
    QCString trIncludeFile()
    { return "Ficheiro inclu�do"; }
    QCString trVerbatimText(const char *f)
    { return (QCString)"Este texto foi originado pelo ficheiro inclu�do "+f+"."; }

    // quick reference sections

    /*! This is put above each page as a link to the list of all groups of
     *  compounds or files (see the \group command).
     */
    QCString trModules()
    { return "M�dulos"; }

    /*! This is put above each page as a link to the class hierarchy */
    QCString trClassHierarchy()
    { return "Hierarquia de classes"; }

    /*! This is put above each page as a link to the list of annotated classes */
    QCString trCompoundList()
    { return "Lista de componentes";

    /*! This is put above each page as a link to the list of documented files */}
    QCString trFileList()
    { return "Lista de ficheiros"; }

    /*! This is put above each page as a link to the list of all verbatim headers */
    QCString trHeaderFiles()
    { return "Ficheiros Inclu�dos"; }

    /*! This is put above each page as a link to all members of compounds. */
    QCString trCompoundMembers()
    { return "Componentes"; }

    /*! This is put above each page as a link to all members of files. */
    QCString trFileMembers()
    { return "Declara��es"; }

    /*! This is put above each page as a link to all related pages. */
    QCString trRelatedPages()
    { return "Paginas relacionadas"; }

    /*! This is put above each page as a link to all examples. */
    QCString trExamples()
    { return "Exemplos"; }

    /*! This is put above each page as a link to the search engine. */
    QCString trSearch()
    { return "Localizar"; }

    /*! This is an introduction to the class hierarchy. */
    QCString trClassHierarchyDescription()
    { return "Esta lista de heran�as est� organizada, dentro do poss�vel, por ordem alfab�tica:"; }

    /*! This is an introduction to the list with all files. */
    QCString trFileListDescription(bool extractAll)
    {
      QCString result="Lista de todos os ficheiros ";
      if (!extractAll) result+="documentados ";
      result+="com uma breve descri��o:";
      return result;
    }

    /*! This is an introduction to the annotated compound list. */
    QCString trCompoundListDescription()
    { return "Lista da classes, estruturas, uni�es e interfaces com uma breve descri��o:";
    }

    /*! This is an introduction to the page with all class members. */
    QCString trCompoundMembersDescription(bool extractAll)
    {
      QCString result="Lista de todas as fun��es membro ";
      if (!extractAll) result+="documentadas ";
      result+="com links para ";
      if (extractAll) result+="a documenta��o da classe correspondente:";
      else result+="o ficheiro a que pertencem:";
      return result;
    }

    /*! This is an introduction to the page with all file members. */
    QCString trFileMembersDescription(bool extractAll)
    {
      QCString result="Lista de todas as fun��es membro ";
      if (!extractAll) result+="documentadas ";
      result+="com links para ";
      if (extractAll) result+="a documenta��o correspondente:";
      else result+="os ficheiros onde foram definidas:";
      return result;
    }

    /*! This is an introduction to the page with the list of all header files. */
    QCString trHeaderFilesDescription()
    { return "Lista de todos os ficheiros cabe�alho que constituem a API:"; }

    /*! This is an introduction to the page with the list of all examples */
    QCString trExamplesDescription()
    { return "Lista de todos os exemplos:"; }

    /*! This is an introduction to the page with the list of related pages */
    QCString trRelatedPagesDescription()
    { return "Lista de documenta��o relacionada:"; }

    /*! This is an introduction to the page with the list of class/file groups */
    QCString trModulesDescription()
    { return "Lista de todos os m�dulos:"; }

    /*! This sentences is used in the annotated class/file lists if no brief
     * description is given.
     */
    QCString trNoDescriptionAvailable()
    { return "Nenhuma descri��o dispon�vel"; }

    // index titles (the project name is prepended for these)


    /*! This is used in HTML as the title of index.html. */
    QCString trDocumentation()
    { return "Documenta��o"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * index of all groups.
     */
    QCString trModuleIndex()
    { return "�ndice dos m�dulos"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * class hierarchy.
     */
    QCString trHierarchicalIndex()
    { return "�ndice da hierarquia"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * annotated compound index.
     */
    QCString trCompoundIndex()
    { return "�ndice dos componentes"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * list of all files.
     */
    QCString trFileIndex()
    { return "�ndice dos ficheiros"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all groups.
     */
    QCString trModuleDocumentation()
    { return "Documenta��o do m�dulo"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all classes, structs and unions.
     */
    QCString trClassDocumentation()
    { return "Documenta��o da classe"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all files.
     */
    QCString trFileDocumentation()
    { return "Documenta��o do ficheiro"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all examples.
     */
    QCString trExampleDocumentation()
    { return "Documenta��o do exemplo"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all related pages.
     */
    QCString trPageDocumentation()
    { return "Documenta��o da p�gina"; }

    /*! This is used in LaTeX as the title of the document */
    QCString trReferenceManual()
    { return "Manual de refer�ncia"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of defines
     */
    QCString trDefines()
    { return "Defini��o de macros"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of function prototypes
     */
    QCString trFuncProtos()
    { return "Prot�tipos de fun��es"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of typedefs
     */
    QCString trTypedefs()
    { return "Defini��o de tipos"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of enumerations
     */
    QCString trEnumerations()
    { return "Enumera��es"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) functions
     */
    QCString trFunctions()
    { return "Fun��es"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) variables
     */
    QCString trVariables()
    { return "Vari�veis"; }

    /*! This is used in the documentation of a file as a header before the
     *  list of (global) variables
     */
    QCString trEnumerationValues()
    { return "Valores da enumera��o"; }

    /*! This is used in man pages as the author section. */
    QCString trAuthor()
    { return "Autor"; }

    /*! This is used in the documentation of a file before the list of
     *  documentation blocks for defines
     */
    QCString trDefineDocumentation()
    { return "Documenta��o da macro"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for function prototypes
     */
    QCString trFunctionPrototypeDocumentation()
    { return "Documenta��o do prot�tipo da fun��o"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for typedefs
     */
    QCString trTypedefDocumentation()
    { return "Documenta��o do tipo"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for enumeration types
     */
    QCString trEnumerationTypeDocumentation()
    { return "Documenta��o do tipo de enumera��o"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for enumeration values
     */
    QCString trEnumerationValueDocumentation()
    { return "Documenta��o dos elementos da enumera��o"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for functions
     */
    QCString trFunctionDocumentation()
    { return "Documenta��o da fun��o"; }

    /*! This is used in the documentation of a file/namespace before the list
     *  of documentation blocks for variables
     */
    QCString trVariableDocumentation()
    { return "Documenta��o da vari�vel"; }

    /*! This is used in the documentation of a file/namespace/group before
     *  the list of links to documented compounds
     */
    QCString trCompounds()
    { return "Componentes"; }

    /*! This is used in the documentation of a group before the list of
     *  links to documented files
     */
    QCString trFiles()
    { return "Ficheiros"; }

    /*! This is used in the standard footer of each page and indicates when
     *  the page was generated
     */
    QCString trGeneratedAt(const char *date,const char *projName)
    {
      QCString result=(QCString)"Gerado em "+date;
      if (projName) result+=(QCString)" para "+projName;
      result+=(QCString)" por";
      return result;
    }
    /*! This is part of the sentence used in the standard footer of each page.
     */
    QCString trWrittenBy()
    {
      return "escrito por";
    }

    /*! this text is put before a class diagram */
    QCString trClassDiagram(const char *clName)
    {
      return (QCString)"Diagrama de heran�as da classe "+clName;
    }

    /*! this text is generated when the \internal command is used. */
    QCString trForInternalUseOnly()
    { return "Apenas para uso interno."; }

    /*! this text is generated when the \reimp command is used. */
    QCString trReimplementedForInternalReasons()
    { return "Redefinido por raz�es internas; o interface n�o � afectado";
    }

    /*! this text is generated when the \warning command is used. */
    QCString trWarning()
    { return "Aviso"; }

    /*! this text is generated when the \bug command is used. */
    QCString trBugsAndLimitations()
    { return "Bugs e limita��es"; }

    /*! this text is generated when the \version command is used. */
    QCString trVersion()
    { return "Vers�o"; }

    /*! this text is generated when the \date command is used. */
    QCString trDate()
    { return "Data"; }

    /*! this text is generated when the \author command is used. */
    QCString trAuthors()
    { return "Autor(es)"; }

    /*! this text is generated when the \return command is used. */
    QCString trReturns()
    { return "Retorna"; }

    /*! this text is generated when the \sa command is used. */
    QCString trSeeAlso()
    { return "Veja tamb�m"; }

    /*! this text is generated when the \param command is used. */
    QCString trParameters()
    { return "Par�metros"; }

    /*! this text is generated when the \exception command is used. */
    QCString trExceptions()
    { return "Excep��es"; }

    /*! this text is used in the title page of a LaTeX document. */
    QCString trGeneratedBy()
    { return "Gerado por"; }

    // new since 0.49-990307

    virtual QCString trNamespaceList()
    { return "Lista de namespaces"; }

    /*! used as an introduction to the namespace list */
    virtual QCString trNamespaceListDescription(bool extractAll)
    {
      QCString result="Lista ";
      if (!extractAll) result+="de toda a documenta��o ";
      result+="dos namespaces com uma breve descri��o:";
      return result;
    }

    /*! used in the class documentation as a header before the list of all
     *  friends of a class
     */
    virtual QCString trFriends()
    { return "Amigos"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990405
//////////////////////////////////////////////////////////////////////////

    /*! used in the class documentation as a header before the list of all
     * related classes
     */
    virtual QCString trRelatedFunctionDocumentation()
    { return "Documenta��o das fun��es relacionadas e classes amigas"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990425
//////////////////////////////////////////////////////////////////////////

    /*! used as the title of the HTML page of a class/struct/union */
    virtual QCString trCompoundReference(const char *clName,
                                    ClassDef::CompoundType compType,
                                    bool isTemplate)
    {
      QCString result="Referencia ";
      switch(compType)
      {
        case ClassDef::Class:      result+="� classe "; break;
        case ClassDef::Struct:     result+="� estrutura "; break;
        case ClassDef::Union:      result+="� uni�o "; break;
        case ClassDef::Interface:  result+="ao interface "; break;
        case ClassDef::Exception:  result+="� excep��o "; break;
      }

      if (isTemplate)
        result+="<template> ";

      result+=(QCString)clName;
      return result;
    }

    /*! used as the title of the HTML page of a file */
    virtual QCString trFileReference(const char *fileName)
    {
      QCString result= "Referencia ao ficheiro ";
      result += fileName;
      return result;
    }

    /*! used as the title of the HTML page of a namespace */
    virtual QCString trNamespaceReference(const char *namespaceName)
    {
      QCString result= "Referencia ao namespace ";
      result += namespaceName;
      return result;
    }

    /*! \mgroup Class sections
     *  these are for the member sections of a class, struct or union
     */
    virtual QCString trPublicMembers()
    { return "Membros p�blicos"; }
    virtual QCString trPublicSlots()
    { return "Slots p�blicos"; }
    virtual QCString trSignals()
    { return "Sinais"; }
    virtual QCString trStaticPublicMembers()
    { return "Membros p�blicos est�ticos"; }
    virtual QCString trProtectedMembers()
    { return "Membros protegidos"; }
    virtual QCString trProtectedSlots()
    { return "Slots protegidos"; }
    virtual QCString trStaticProtectedMembers()
    { return "Membros protegidos est�ticos"; }
    virtual QCString trPrivateMembers()
    { return "Membros privados"; }
    virtual QCString trPrivateSlots()
    { return "Slots privados"; }
    virtual QCString trStaticPrivateMembers()
    { return "Membros privados est�ticos"; }
    /*! \endmgroup */

    /*! this function is used to produce a comma-separated list of items.
     *  use generateMarker(i) to indicate where item i should be put.
     */
    virtual QCString trWriteList(int numEntries)
    {
      QCString result;
      int i;
      // the inherits list contain `numEntries' classes
      for (i=0;i<numEntries;i++)
      {
        // use generateMarker to generate placeholders for the class links!
        result+=generateMarker(i); // generate marker for entry i in the list
                                   // (order is left to right)

        if (i!=numEntries-1)  // not the last entry, so we need a separator
        {
          if (i<numEntries-2) // not the fore last entry
            result+=", ";
          else                // the fore last entry
            result+=", e ";
        }
      }
      return result;
    }

    /*! used in class documentation to produce a list of base classes,
     *  if class diagrams are disabled.
     */
    virtual QCString trInheritsList(int numEntries)
    {
      return "Derivada de "+trWriteList(numEntries)+".";
    }

    /*! used in class documentation to produce a list of super classes,
     *  if class diagrams are disabled.
     */
    virtual QCString trInheritedByList(int numEntries)
    {
      return "Herdado por "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of
     *  members that are hidden by this one.
     */
    virtual QCString trReimplementedFromList(int numEntries)
    {
      return "Reimplementado de "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of
     *  all member that overwrite the implementation of this member.
     */
    virtual QCString trReimplementedInList(int numEntries)
    {
      return "Reimplementado em "+trWriteList(numEntries)+".";
    }

    /*! This is put above each page as a link to all members of namespaces. */
    virtual QCString trNamespaceMembers()
    { return "Membros do namespace"; }

    /*! This is an introduction to the page with all namespace members */
    virtual QCString trNamespaceMemberDescription(bool extractAll)
    {
      QCString result="Lista ";
	  if (extractAll) result+="de todos os ";
      else result+="de toda a documenta��o dos ";
      result+="membros do namespace com links para ";
      if (extractAll) result+="a documenta��o de cada membro:";
      else result+="o namespace correspondente:";
      return result;
    }

	/*! This is used in LaTeX as the title of the chapter with the
     *  index of all namespaces.
     */
    virtual QCString trNamespaceIndex()
    { return "�ndice dos namespaces"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all namespaces.
     */
    virtual QCString trNamespaceDocumentation()
    { return "Documenta��o dos namespaces"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990522
//////////////////////////////////////////////////////////////////////////

    /*! This is used in the documentation before the list of all
     *  namespaces in a file.
     */
    virtual QCString trNamespaces()
    { return "Namespaces"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990728
//////////////////////////////////////////////////////////////////////////

    /*! This is put at the bottom of a class documentation page and is
     *  followed by a list of files that were used to generate the page.
     */
    virtual QCString trGeneratedFromFiles(ClassDef::CompoundType compType,
        bool single)
    { // here s is one of " Class", " Struct" or " Union"
      // single is true implies a single file
      QCString result=(QCString)"A documenta��o para ";
      switch(compType)
      {
        case ClassDef::Class:      result+="esta classe"; break;
        case ClassDef::Struct:     result+="esta estrutura"; break;
        case ClassDef::Union:      result+="esta uni�o"; break;
        case ClassDef::Interface:  result+="este interface"; break;
        case ClassDef::Exception:  result+="esta excep��o"; break;
      }
      result+=" foi gerada a partir ";
      if (single) result+=" do seguinte ficheiro:";
      else result+="dos seguintes ficheiros:";
      return result;
    }

    /*! This is in the (quick) index as a link to the alphabetical compound
     * list.
     */
    virtual QCString trAlphabeticalList()
    {
      return "Lista alfab�tica";
    }


//////////////////////////////////////////////////////////////////////////
// new since 0.49-990901
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the heading text for the retval command. */
    virtual QCString trReturnValues()
    { return "Valores retornados"; }

    /*! This is in the (quick) index as a link to the main page (index.html)
     */
    virtual QCString trMainPage()
    { return "P�gina principal"; }

    /*! This is used in references to page that are put in the LaTeX
     *  documentation. It should be an abbreviation of the word page.
     */
    virtual QCString trPageAbbreviation()
    { return "p. "; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991003
//////////////////////////////////////////////////////////////////////////

    virtual QCString trSources()
    {
      return "Fontes";
    }
    virtual QCString trDefinedAtLineInSourceFile()
    {
      return "Definido na linha @0 do ficheiro @1.";
    }
    virtual QCString trDefinedInSourceFile()
    {
      return "Definido no ficheiro @0.";
    }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991205
//////////////////////////////////////////////////////////////////////////

    virtual QCString trDeprecated()
    {
      return "Desaprovado";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.0.0
//////////////////////////////////////////////////////////////////////////

    /*! this text is put before a collaboration diagram */
    virtual QCString trCollaborationDiagram(const char *clName)
    {
      return (QCString)"Diagrama de colabora��o para "+clName+":";
    }
    /*! this text is put before an include dependency graph */
    virtual QCString trInclDepGraph(const char *fName)
    {
      return (QCString)"Diagrama de depend�ncias de inclus�o para "+fName+":";
    }
    /*! header that is put before the list of constructor/destructors. */
    virtual QCString trConstructorDocumentation()
    {
      return "Documenta��o do Construtor & Destrutor"; 
    }
    /*! Used in the file documentation to point to the corresponding sources. */
    virtual QCString trGotoSourceCode()
    {
      return "Ir para o c�digo fonte deste ficheiro.";
    }
    /*! Used in the file sources to point to the corresponding documentation. */
    virtual QCString trGotoDocumentation()
    {
      return "Ir para a documenta��o deste ficheiro.";
    }
    /*! Text for the \pre command */
    virtual QCString trPrecondition()
    {
      return "Precondi��o";
    }
    /*! Text for the \post command */
    virtual QCString trPostcondition()
    {
      return "Poscondi��o";
    }
    /*! Text for the \invariant command */
    virtual QCString trInvariant()
    {
      return "Invariante";
    }
    /*! Text shown before a multi-line variable/enum initialization */
    virtual QCString trInitialValue()
    {
      return "Valor inicial:";
    }
    /*! Text used the source code in the file index */
    virtual QCString trCode()
    {
      return "c�digo";
    }
    virtual QCString trGraphicalHierarchy()
    {
      return "Representa��o gr�fica da hiearquia da classe";
    }
    virtual QCString trGotoGraphicalHierarchy()
    {
      return "Ir para a representa��o gr�fica da hierarquia da classe";
    }
    virtual QCString trGotoTextualHierarchy()
    {
      return "Ir para a representa��o textual da hierarquia da classe";
    }
    virtual QCString trPageIndex()
    {
      return "�ndice da p�gina";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.0
//////////////////////////////////////////////////////////////////////////
    
    virtual QCString trNote()
    {
      return "Nota";
    }
    virtual QCString trPublicTypes()
    {
      return "Tipos P�blicos";
    }
    virtual QCString trPublicAttribs()
    {
      return "Atributos P�blicos";
    }
    virtual QCString trStaticPublicAttribs()
    {
      return "Atributos P�blicos Est�ticos";
    }
    virtual QCString trProtectedTypes()
    {
      return "Tipos Protegidos";
    }
    virtual QCString trProtectedAttribs()
    {
      return "Atributos Protegidos";
    }
    virtual QCString trStaticProtectedAttribs()
    {
      return "Atributos Protegidos Est�ticos";
    }
    virtual QCString trPrivateTypes()
    {
      return "Tipos Privados";
    }
    virtual QCString trPrivateAttribs()
    {
      return "Atributos Privados";
    }
    virtual QCString trStaticPrivateAttribs()
    {
      return "Atributos Privados Est�ticos";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.3
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a todo item */
    virtual QCString trTodo()
    {
      return "Tarefa";
    }
    /*! Used as the header of the todo list */
    virtual QCString trTodoList()
    {
      return "Lista de tarefas";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.4
//////////////////////////////////////////////////////////////////////////

    virtual QCString trReferencedBy()
    {
      return "Referenciado por";
    }
    virtual QCString trRemarks()
    {
      return "Observa��es";
    }
    virtual QCString trAttention()
    {
      return "Aten��o";
    }
    virtual QCString trInclByDepGraph()
    {
      return "Este gr�fico mostra quais s�o os ficheiros que incluem directamente ou indirectamente este ficheiro:";
    }
    virtual QCString trSince()
    {
      return "Desde";
    }

};
#endif
