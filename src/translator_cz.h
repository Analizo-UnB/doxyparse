/******************************************************************************
 *
 * 
 *
 * Copyright (C) 1997-2000 by Dimitri van Heesch.
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
 */

#ifndef TRANSLATOR_CZ_H
#define TRANSLATOR_CZ_H

#include "translator.h"

// The translation from English to Czech by Vlastimil Havran.
// In the cases where are more translations possible I hope
// that I have selected the most reasonable text. If not, please,
// mail the comments and text proposals to
//
// havran@fel.cvut.cz, 1999/04/11


// Notice that the following texts were written in Czech using
// MS-Windows code page 1250. If you want to use it in Unix, 
// convert the file to the ISO Latin-2 
// This is a prototype created by Petr Prikryl (prikrylp@skil.cz), 2000/06/20.
//
class TranslatorCzech : public Translator
{
  public:
    virtual QCString idLanguage()
    { return "czech"; }

    virtual QCString latexLanguageSupportCommand()
    { return "\\usepackage{czech}\n"; }
    
    /*! returns the name of the package that is included by LaTeX */
    virtual QCString latexBabelPackage() 
    { return ""; }

    /*! used in the compound documentation before a list of related functions. */
    virtual QCString trRelatedFunctions()
    { return "Souvisej�c� funkce"; }

    /*! subscript for the related functions. */
    virtual QCString trRelatedSubscript()
    { return "(V��e uveden� funkce nejsou �lensk�mi funkcemi.)"; }

    /*! header that is put before the detailed description of files, classes and namespaces. */
    virtual QCString trDetailedDescription()
    { return "Detailn� popis"; }

    /*! header that is put before the list of typedefs. */
    virtual QCString trMemberTypedefDocumentation()
    { return "Dokumentace k �lensk�ch typ�m"; }
    
    /*! header that is put before the list of enumerations. */
    virtual QCString trMemberEnumerationDocumentation()
    { return "Dokumentace k �lensk�m v��t�m"; }
    
    /*! header that is put before the list of member functions. */
    virtual QCString trMemberFunctionDocumentation()
    { return "Dokumentace k metod�m"; }
    
    /*! header that is put before the list of member attributes. */
    virtual QCString trMemberDataDocumentation()
    { return "Dokumentace k datov�m �len�m"; }

    /*! this is the text of a link put after brief descriptions. */
    virtual QCString trMore() 
    { return "Podrobnosti..."; }

    /*! put in the class documentation */
    virtual QCString trListOfAllMembers()
    { return "Seznam v�ech �len�."; }

    /*! used as the title of the "list of all members" page of a class */
    virtual QCString trMemberList()
    { return "Seznam �len� t��dy"; }

    /*! this is the first part of a sentence that is followed by a class name */
    virtual QCString trThisIsTheListOfAllMembers()
    { return "�pln� seznam �len� t��dy "; }

    /*! this is the remainder of the sentence after the class name */
    virtual QCString trIncludingInheritedMembers()
    { return ", v�etn� v�ech zd�d�n�ch �len�."; }
    
    /*! this is put at the author sections at the bottom of man pages.
     *  parameter s is name of the project name.
     */
    virtual QCString trGeneratedAutomatically(const char *s)
    { QCString result="Generov�no automaticky programem Doxygen "
                      "ze zdrojov�ch text�";
      if (s) result+=(QCString)" projektu "+s;
      result+="."; 
      return result;
    }

    /*! put after an enum name in the list of all members */
    virtual QCString trEnumName()
    { return "jm�no v��tu"; }
    
    /*! put after an enum value in the list of all members */
    virtual QCString trEnumValue()
    { return "hodnota v��tu"; }
    
    /*! put after an undocumented member in the list of all members */
    virtual QCString trDefinedIn()
    { return "definov�n v"; }

    /*! put as in introduction in the verbatim header file of a class.
     *  parameter f is the name of the include file.
     */
    virtual QCString trVerbatimText(const char *f)
    { return (QCString)"�pln� text vkl�dan�ho souboru "+f+"."; }
    
    // quick reference sections

    /*! This is put above each page as a link to the list of all groups of 
     *  compounds or files (see the \group command).
     */
    virtual QCString trModules()
    { return "Moduly"; }
    
    /*! This is put above each page as a link to the class hierarchy */
    virtual QCString trClassHierarchy()
    { return "Hierarchie t��d"; }
    
    /*! This is put above each page as a link to the list of annotated classes */
    virtual QCString trCompoundList()
    { return "Seznam slo�enin"; }
    
    /*! This is put above each page as a link to the list of documented files */
    virtual QCString trFileList()
    { return "Seznam soubor�"; }

    /*! This is put above each page as a link to the list of all verbatim headers */
    virtual QCString trHeaderFiles()
    { return "Seznam hlavi�kov�ch soubor�"; }

    /*! This is put above each page as a link to all members of compounds. */
    virtual QCString trCompoundMembers()
    { return "Sou��sti slo�enin"; }

    /*! This is put above each page as a link to all members of files. */
    virtual QCString trFileMembers()
    { return "Seznam glob�ln�ch symbol�"; }

    /*! This is put above each page as a link to all related pages. */
    virtual QCString trRelatedPages()
    { return "Souvisej�c� str�nky"; }

    /*! This is put above each page as a link to all examples. */
    virtual QCString trExamples()
    { return "P��klady"; }

    /*! This is put above each page as a link to the search engine. */
    virtual QCString trSearch()
    { return "Hledat"; }

    /*! This is an introduction to the class hierarchy. */
    virtual QCString trClassHierarchyDescription()
    { return "Zde naleznete seznam, vyjad�uj�c� vztah d�di�nosti t��d. "
             "Je se�azen p�ibli�n� (ale ne �pln�) podle abecedy:";
    }

    /*! This is an introduction to the list with all files. */
    virtual QCString trFileListDescription(bool extractAll)
    {
      QCString result="Zde naleznete seznam v�ech ";
      if (!extractAll) result+="dokumentovan�ch ";
      result+="soubor� se stru�n�mi popisy:";
      return result;
    }

    /*! This is an introduction to the annotated compound list. */
    virtual QCString trCompoundListDescription()
    { return "Slo�eninami (compound) se rozum� netrivi�ln� prvky, kter� "
             "zahrnuj� t��dy, struktury (struct), unie (union) "
             "a rozhran� (interface). V seznamu jsou uvedeny jejich stru�n� "
             "popisy:"; 
    }

    /*! This is an introduction to the page with all class members. */
    virtual QCString trCompoundMembersDescription(bool extractAll)
    {
      QCString result="Zde naleznete seznam v�ech ";
      if (!extractAll) result+="dokumentovan�ch ";
      result+="�len� t��d s odkazy na ";
      if (extractAll) 
        result+="dokumentaci t��d, ke kter�m p��slu�ej�:";
      else 
        result+="t��dy, ke kter�m p��slu�ej�:";
      return result;
    }

    /*! This is an introduction to the page with all file members. */
    virtual QCString trFileMembersDescription(bool extractAll)
    {
      QCString result="Zde naleznete seznam v�ech ";
      if (!extractAll) result+="dokumentovan�ch ";
      result+="glob�ln�ch symbol�, kter� jsou definov�ny v souborech projektu. "
              "Pro ka�d� symbol je uveden odkaz na ";
      if (extractAll) 
        result+="dokumentaci p��slu�n�ho souboru";
      else 
        result+="soubor, ve kter�m je symbol definov�n";
      result+=". Symbol m��e ozna�ovat makro, typ, instanci t��dy, "
              "prom�nnou, konstantu, funkci, v��et, hodnotu v��tu a podobn�:";  
        
      return result;
    }

    /*! This is an introduction to the page with the list of all header files. */
    virtual QCString trHeaderFilesDescription()
    { return "Zde naleznete hlavi�kov� soubory, kter� tvo�� "
             "aplika�n� program�torsk� rozhran� (API):"; }

    /*! This is an introduction to the page with the list of all examples */
    virtual QCString trExamplesDescription()
    { return "Zde naleznete seznam v�ech p��klad�:"; }

    /*! This is an introduction to the page with the list of related pages */
    virtual QCString trRelatedPagesDescription()
    { return "Zde naleznete seznam v�ech souvisej�c�ch str�nek dokumentace:"; }

    /*! This is an introduction to the page with the list of class/file groups */
    virtual QCString trModulesDescription()
    { return "Zde naleznete seznam v�ech modul�:"; }

    /*! This sentences is used in the annotated class/file lists if no brief
     * description is given. 
     */
    virtual QCString trNoDescriptionAvailable()
    { return "Popis nen� k dispozici"; }
    
    // index titles (the project name is prepended for these) 


    /*! This is used in HTML as the title of index.html. */
    virtual QCString trDocumentation()
    { return "Dokumentace"; }

    /*! This is used in LaTeX as the title of the chapter with the 
     * index of all groups.
     */
    virtual QCString trModuleIndex()
    { return "Rejst��k modul�"; }

    /*! This is used in LaTeX as the title of the chapter with the 
     * class hierarchy.
     */
    virtual QCString trHierarchicalIndex()
    { return "Rejst��k hierarchie t��d"; }

    /*! This is used in LaTeX as the title of the chapter with the 
     * annotated compound index.
     */
    virtual QCString trCompoundIndex()
    { return "Rejst��k slo�enin"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * list of all files.
     */
    virtual QCString trFileIndex() 
    { return "Rejst��k soubor�"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all groups.
     */
    virtual QCString trModuleDocumentation()
    { return "Dokumentace modul�"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all classes, structs and unions.
     */
    virtual QCString trClassDocumentation()
    { return "Dokumentace t��d"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all files.
     */
    virtual QCString trFileDocumentation()
    { return "Dokumentace soubor�"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all examples.
     */
    virtual QCString trExampleDocumentation()
    { return "Dokumentace p��klad�"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all related pages.
     */
    virtual QCString trPageDocumentation()
    { return "Dokumentace souvisej�c�ch str�nek"; }

    /*! This is used in LaTeX as the title of the document */
    virtual QCString trReferenceManual()
    { return "Referen�n� p��ru�ka"; }
    
    /*! This is used in the documentation of a file as a header before the 
     *  list of defines
     */
    virtual QCString trDefines()
    { return "Definice maker"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of function prototypes
     */
    virtual QCString trFuncProtos()
    { return "Prototypy"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of typedefs
     */
    virtual QCString trTypedefs()
    { return "Definice typ�"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of enumerations
     */
    virtual QCString trEnumerations()
    { return "V��ty"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) functions
     */
    virtual QCString trFunctions()
    { return "Funkce"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) variables
     */
    virtual QCString trVariables()
    { return "Prom�nn�"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) variables
     */
    virtual QCString trEnumerationValues()
    { return "Hodnoty v��t�"; }
    
    /*! This is used in man pages as the author section. */
    virtual QCString trAuthor()
    { return "Autor"; }

    /*! This is used in the documentation of a file before the list of
     *  documentation blocks for defines
     */
    virtual QCString trDefineDocumentation()
    { return "Dokumentace k definic�m maker"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for function prototypes
     */
    virtual QCString trFunctionPrototypeDocumentation()
    { return "Dokumentace prototyp�"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for typedefs
     */
    virtual QCString trTypedefDocumentation()
    { return "Dokumentace definic typ�"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for enumeration types
     */
    virtual QCString trEnumerationTypeDocumentation()
    { return "Dokumentace v��tov�ch typ�"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for enumeration values
     */
    virtual QCString trEnumerationValueDocumentation()
    { return "Dokumentace v��tov�ch hodnot"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for functions
     */
    virtual QCString trFunctionDocumentation()
    { return "Dokumentace funkc�"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for variables
     */
    virtual QCString trVariableDocumentation()
    { return "Dokumentace prom�nn�ch"; }

    /*! This is used in the documentation of a file/namespace/group before 
     *  the list of links to documented compounds
     */
    virtual QCString trCompounds()
    { return "Slo�eniny"; }

    /*! This is used in the documentation of a group before the list of 
     *  links to documented files
     */
    virtual QCString trFiles()
    { return "Soubory"; }

    /*! This is used in the standard footer of each page and indicates when 
     *  the page was generated 
     */
    virtual QCString trGeneratedAt(const char *date,const char *projName)
    { 
      QCString result=(QCString)"Generov�no "+date;
      if (projName) result+=(QCString)" pro projekt "+projName;
      result+=(QCString)" programem";
      return result;
    }
    /*! This is part of the sentence used in the standard footer of each page.
     */
    virtual QCString trWrittenBy()
    {
      return " -- autor ";
    }

    /*! this text is put before a class diagram */
    virtual QCString trClassDiagram(const char *clName)
    {
      return (QCString)"Diagram d�di�nosti pro t��du "+clName;
    }
    
    /*! this text is generated when the \internal command is used. */
    virtual QCString trForInternalUseOnly()
    { return "Pouze pro vnit�n� pou�it�."; }

    /*! this text is generated when the \reimp command is used. */
    virtual QCString trReimplementedForInternalReasons()
    { return "Reimplementov�no z intern�ch d�vod�; aplika�n� rozhran� zachov�no."; }

    /*! this text is generated when the \warning command is used. */
    virtual QCString trWarning()
    { return "Pozor"; }

    /*! this text is generated when the \bug command is used. */
    virtual QCString trBugsAndLimitations()
    { return "Chyby a omezen�"; }

    /*! this text is generated when the \version command is used. */
    virtual QCString trVersion()
    { return "Verze"; }

    /*! this text is generated when the \date command is used. */
    virtual QCString trDate()
    { return "Datum"; }

    /*! this text is generated when the \author command is used. */
    virtual QCString trAuthors()
    { return "Autor/auto�i"; }

    /*! this text is generated when the \return command is used. */
    virtual QCString trReturns()
    { return "Vrac�"; }

    /*! this text is generated when the \sa command is used. */
    virtual QCString trSeeAlso()
    { return "Viz tak�"; }

    /*! this text is generated when the \param command is used. */
    virtual QCString trParameters()
    { return "Parametry"; }

    /*! this text is generated when the \exception command is used. */
    virtual QCString trExceptions()
    { return "V�jimky"; }
    
    /*! this text is used in the title page of a LaTeX document. */
    virtual QCString trGeneratedBy()
    { return "Generov�no programem"; }

    // new since 0.49-990307
    
    /*! used as the title of page containing all the index of all namespaces. */
    virtual QCString trNamespaceList()
    { return "Seznam prostor� jmen"; }

    /*! used as an introduction to the namespace list */
    virtual QCString trNamespaceListDescription(bool extractAll)
    {
      QCString result="Zde naleznete seznam v�ech ";
      if (!extractAll) result+="dokumentovan�ch ";
      result+="prostor� jmen se stru�n�m popisem:";
      return result;
    }

    /*! used in the class documentation as a header before the list of all
     *  friends of a class
     */
    virtual QCString trFriends()
    { return "Friends"; }
    
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990405
//////////////////////////////////////////////////////////////////////////
    
    /*! used in the class documentation as a header before the list of all
     * related classes 
     */
    virtual QCString trRelatedFunctionDocumentation()
    { return "Dokumentace k friends"; }
    
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990425
//////////////////////////////////////////////////////////////////////////

    /*! used as the title of the HTML page of a class/struct/union */
    virtual QCString trCompoundReference(const char *clName,
                                    ClassDef::CompoundType compType,
                                    bool /*isTemplate*/)
    {
      QCString result=(QCString)clName+" ";
      switch(compType)
      {
        case ClassDef::Class:      result+=" T��da"; break;
        case ClassDef::Struct:     result+=" Struktura"; break;
        case ClassDef::Union:      result+=" Unie"; break;
        case ClassDef::Interface:  result+=" Rozhran�"; break;
        case ClassDef::Exception:  result+=" V�jimka"; break;
      }
      result+=" Reference";
      return result;
    }

    /*! used as the title of the HTML page of a file */
    virtual QCString trFileReference(const char *fileName)
    {
      QCString result="Odkaz na soubor";
      result+=fileName; 
      return result;
    }

    /*! used as the title of the HTML page of a namespace */
    virtual QCString trNamespaceReference(const char *namespaceName)
    {
      QCString result=namespaceName;
      result+=" Namespace Reference???";
      return result;
    }
    
    /*! \mgroup Class sections
     *  these are for the member sections of a class, struct or union 
     */
    virtual QCString trPublicMembers()
    { return "Ve�ejn� metody"; }
    virtual QCString trPublicSlots()
    { return "Ve�ejn� sloty"; }
    virtual QCString trSignals()
    { return "Sign�ly"; }
    virtual QCString trStaticPublicMembers()
    { return "Statick� ve�ejn� metody"; }
    virtual QCString trProtectedMembers()
    { return "Chr�n�n� metody"; }
    virtual QCString trProtectedSlots()
    { return "Chr�n�n� sloty"; }
    virtual QCString trStaticProtectedMembers()
    { return "Statick� chr�n�n� metody"; }
    virtual QCString trPrivateMembers()
    { return "Priv�tn� metody"; }
    virtual QCString trPrivateSlots()
    { return "Priv�tn� sloty"; }
    virtual QCString trStaticPrivateMembers()
    { return "Statick� priv�tn� metody"; }
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
            result+=" a ";
        }
      }
      return result; 
    }
    
    /*! used in class documentation to produce a list of base classes,
     *  if class diagrams are disabled.
     */
    virtual QCString trInheritsList(int numEntries)
    {
      return "D�d� "+trWriteList(numEntries)+".";
    }

    /*! used in class documentation to produce a list of super classes,
     *  if class diagrams are disabled.
     */
    virtual QCString trInheritedByList(int numEntries)
    {
      return "Zd�d�na t��dami "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of 
     *  members that are hidden by this one.
     */
    virtual QCString trReimplementedFromList(int numEntries)
    {
      return "Reimplementace z "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of
     *  all member that overwrite the implementation of this member.
     */
    virtual QCString trReimplementedInList(int numEntries)
    {
      return "Reimplementov�no v "+trWriteList(numEntries)+".";
    }

    /*! This is put above each page as a link to all members of namespaces. */
    virtual QCString trNamespaceMembers()
    { return "???Namespace Members"; }

    /*! This is an introduction to the page with all namespace members */
    virtual QCString trNamespaceMemberDescription(bool extractAll)
    { 
      QCString result="Zde naleznete seznam v�ech ";
      if (!extractAll) result+="dokumentovan�ch ";
      result+="???namespace members s odkazy na ";
      if (extractAll) 
        result+="dokumentaci prostoru jmen pro ka�d� �len:";
      else 
        result+="prostory jmen, ke kter�m p��slu�ej�:";
      return result;
    }
    /*! This is used in LaTeX as the title of the chapter with the 
     *  index of all namespaces.
     */
    virtual QCString trNamespaceIndex()
    { return "Rejst��k prostor� jmen"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all namespaces.
     */
    virtual QCString trNamespaceDocumentation()
    { return "Dokumentace prostor� jmen"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990522
//////////////////////////////////////////////////////////////////////////

    /*! This is used in the documentation before the list of all
     *  namespaces in a file.
     */
    virtual QCString trNamespaces()
    { return "Prostory jmen"; }

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
      QCString result=(QCString)"Dokumentace pro ";
      switch(compType)
      {
        case ClassDef::Class:      result+="tuto t��du"; break;
        case ClassDef::Struct:     result+="tuto strukturu (struct)"; break;
        case ClassDef::Union:      result+="tuto unii (union)"; break;
        case ClassDef::Interface:  result+="toto rozhran�"; break;
        case ClassDef::Exception:  result+="tuto v�jimku"; break;
      }
      result+=" byla generov�na z ";
      if (single) result+="n�sleduj�c�ho souboru:"; 
      else        result+="n�sleduj�c�ch soubor�:";
      return result;
    }

    /*! This is in the (quick) index as a link to the alphabetical compound
     * list.
     */
    virtual QCString trAlphabeticalList()
    { return "Abecedn� seznam slo�enin"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990901
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the heading text for the retval command. */
    virtual QCString trReturnValues()
    { return "Vracen� hodnoty"; }

    /*! This is in the (quick) index as a link to the main page (index.html)
     */
    virtual QCString trMainPage()
    { return "Hlavn� str�nka"; }

    /*! This is used in references to page that are put in the LaTeX 
     *  documentation. It should be an abbreviation of the word page.
     */
    virtual QCString trPageAbbreviation()
    { return "s."; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991003
//////////////////////////////////////////////////////////////////////////

    virtual QCString trSources()
    {
      return "Zdroje";
    }
    virtual QCString trDefinedAtLineInSourceFile()
    {
      return "Definice je uvedena na ��dku @0 v souboru @1.";
    }
    virtual QCString trDefinedInSourceFile()
    {
      return "Definice v souboru @0.";
    }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991205
//////////////////////////////////////////////////////////////////////////

    virtual QCString trDeprecated()
    {
      return "Zastaral�";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.0.0
//////////////////////////////////////////////////////////////////////////

    /*! this text is put before a collaboration diagram */
    virtual QCString trCollaborationDiagram(const char *clName)
    {
      return (QCString)"Diagram t��d pro "+clName+":";
    }
    /*! this text is put before an include dependency graph */
    virtual QCString trInclDepGraph(const char *fName)
    {
      return (QCString)"Graf z�vislost� soubor� pro "+fName+":";
    }
    /*! header that is put before the list of constructor/destructors. */
    virtual QCString trConstructorDocumentation()
    {
      return "Dokumentace konstruktoru a destruktoru"; 
    }
    /*! Used in the file documentation to point to the corresponding sources. */
    virtual QCString trGotoSourceCode()
    {
      return "Zobrazit zdrojov� text tohoto souboru.";
    }
    /*! Used in the file sources to point to the corresponding documentation. */
    virtual QCString trGotoDocumentation()
    {
      return "Zobrazit dokumentaci tohoto souboru.";
    }
    /*! Text for the \pre command */
    virtual QCString trPrecondition()
    {
      return "Precondition";
    }
    /*! Text for the \post command */
    virtual QCString trPostcondition()
    {
      return "Postcondition";
    }
    /*! Text for the \invariant command */
    virtual QCString trInvariant()
    {
      return "Invariant";
    }
    /*! Text shown before a multi-line variable/enum initialization */
    virtual QCString trInitialValue()
    {
      return "Initializer:";
    }
    /*! Text used the source code in the file index */
    virtual QCString trCode()
    {
      return "zdrojov� text";
    }
    virtual QCString trGraphicalHierarchy()
    {
      return "Grafick� zobrazen� hierarchie t��d";
    }
    virtual QCString trGotoGraphicalHierarchy()
    {
      return "Zobrazit grafickou podobu hierarchie t��d";
    }
    virtual QCString trGotoTextualHierarchy()
    {
      return "Zobrazit textovou podobu hierarchie t��d";
    }
    virtual QCString trPageIndex()
    {
      return "Rejst��k str�nek";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.0
//////////////////////////////////////////////////////////////////////////
    
    virtual QCString trNote()
    {
      return "Pozn�mka";
    }
    virtual QCString trPublicTypes()
    {
      return "Ve�ejn� typy";
    }
    virtual QCString trPublicAttribs()
    {
      return "Ve�ejn� atributy";
    }
    virtual QCString trStaticPublicAttribs()
    {
      return "Statick� ve�ejn� atributy";
    }
    virtual QCString trProtectedTypes()
    {
      return "Chr�n�n� typy";
    }
    virtual QCString trProtectedAttribs()
    {
      return "Chr�n�n� atributy";
    }
    virtual QCString trStaticProtectedAttribs()
    {
      return "Statick� chr�n�n� atributy";
    }
    virtual QCString trPrivateTypes()
    {
      return "Priv�tn� typy";
    }
    virtual QCString trPrivateAttribs()
    {
      return "Priv�tn� atributy";
    }
    virtual QCString trStaticPrivateAttribs()
    {
      return "Statick� priv�tn� atributy";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.3
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a todo item */
    virtual QCString trTodo()
    {
      return "Ud�lat";
    }
    /*! Used as the header of the todo list */
    virtual QCString trTodoList()
    {
      return "Seznam pl�novan�ch �prav";
    }

};

#endif // TRANSLATOR_CZ_H


