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
 * The translation into French was provided by
 *   Christophe Bordeux (bordeux@lig.di.epfl.ch)
 */

#ifndef TRANSLATOR_FR_H
#define TRANSLATOR_FR_H

#include "translator.h"

class TranslatorFrench : public Translator
{
  public:
    /*! returns the name of the package that is included by LaTeX */
    QCString latexBabelPackage()
    { return "french"; }

    /*! used in the compound documentation before a list of related functions. */
    QCString trRelatedFunctions()
    { return "Fonctions associ�es"; }

    /*! subscript for the related functions. */
    QCString trRelatedSubscript()
    { return "(Noter que ces fonctions ne sont pas des m�thodes de la classe)"; }

    /*! header that is put before the detailed description of files, classes and namespaces. */
    QCString trDetailedDescription()
    { return "Description d�taill�e"; }

    /*! header that is put before the list of typedefs. */
    QCString trMemberTypedefDocumentation()
    { return "Documentation des types imbriqu�s"; }
    
    /*! header that is put before the list of enumerations. */
    QCString trMemberEnumerationDocumentation()
    { return "Documentation des �num�rations imbriqu�es"; }
    
    /*! header that is put before the list of member functions. */
    QCString trMemberFunctionDocumentation()
    { return "Documentation des m�thodes"; }
    
    /*! header that is put before the list of member attributes. */
    QCString trMemberDataDocumentation()
    { return "Documentation des donn�es imbriqu�es"; }

    /*! this is the text of a link put after brief descriptions. */
    QCString trMore()
    { return "Plus de d�tails..."; }

    /*! put in the class documentation */
    QCString trListOfAllMembers()
    { return "Liste de tous les membres"; }

    /*! used as the title of the "list of all members" page of a class */
    QCString trMemberList()
    { return "Liste des membres"; }

    /*! this is the first part of a sentence that is followed by a class name */
    QCString trThisIsTheListOfAllMembers()
    { return "Ceci est la liste compl�te des membres de "; }

    /*! this is the remainder of the sentence after the class name */
    QCString trIncludingInheritedMembers()
    { return " y compris des membres des classes h�rit�es."; }
    
    /*! this is put at the author sections at the bottom of man pages.
     *  parameter s is name of the project name.
     */
    QCString trGeneratedAutomatically(const char *s)
    { QCString result="G�n�r� automatiquement par Doxygen"; 
      if (s) result+=(QCString)" pour "+s;
      result+=" � partir du code source."; 
      return result;
    }

    /*! put after an enum name in the list of all members */
    QCString trEnumName()
    { return "�num�ration"; }
    
    /*! put after an enum value in the list of all members */
    QCString trEnumValue()
    { return "�l�ment d'une �num�ration"; }
    
    /*! put after an undocumented member in the list of all members */
    QCString trDefinedIn()
    { return "d�fini dans"; }

    /*! put as in introduction in the verbatim header file of a class.
     *  parameter f is the name of the include file.
     */
    QCString trIncludeFile()
    { return "Fichier inclu"; }
    QCString trVerbatimText(const char *f)
    { return (QCString)"Ce texte provient du fichier inclu "+f+"."; }

    // quick reference sections

    /*! This is put above each page as a link to the list of all groups of 
     *  compounds or files (see the \group command).
     */
    QCString trModules()
    { return "Modules"; }
    
    /*! This is put above each page as a link to the class hierarchy */
    QCString trClassHierarchy()
    { return "Hi�rarchie des classes"; }
    
    /*! This is put above each page as a link to the list of annotated classes */
    QCString trCompoundList()
    { return "Liste des composants"; 
    
    /*! This is put above each page as a link to the list of documented files */}
    QCString trFileList()
    { return "Liste des fichiers"; }

    /*! This is put above each page as a link to the list of all verbatim headers */
    QCString trHeaderFiles()
    { return "Fichiers d'en-t�te"; }

    /*! This is put above each page as a link to all members of compounds. */
    QCString trCompoundMembers()
    { return "Composants"; }

    /*! This is put above each page as a link to all members of files. */
    QCString trFileMembers()
    { return "D�clarations"; }

    /*! This is put above each page as a link to all related pages. */
    QCString trRelatedPages()
    { return "Pages associ�es"; }

    /*! This is put above each page as a link to all examples. */
    QCString trExamples()
    { return "Exemples"; }

    /*! This is put above each page as a link to the search engine. */
    QCString trSearch()
    { return "Recherche"; }

    /*! This is an introduction to the class hierarchy. */
    QCString trClassHierarchyDescription()
    { return "Cette liste d'h�ritage est, autant que possible, "
	"class�e par ordre alphab�tique"; }

    /*! This is an introduction to the list with all files. */
    QCString trFileListDescription(bool extractAll)
    {
      QCString result="Liste de tous les fichiers ";
      if (!extractAll) result+="document�s ";
      result+="avec une br�ve description :";
      return result;
    }

    /*! This is an introduction to the annotated compound list. */
    QCString trCompoundListDescription()
    { return "Liste des classes, des strutures et des unions "
	"avec une br�ve description :"; 
    }

    /*! This is an introduction to the page with all class members. */
    QCString trCompoundMembersDescription(bool extractAll)
    {
      QCString result="Liste de tous les membres de classe ";
      if (!extractAll) result+="document�s ";
      result+="avec les liens vers ";
      if (extractAll) result+="la documentation de la classe correspondante :";
      else result+="les classes auxquelles ils appartiennent :";
      return result;
    }

    /*! This is an introduction to the page with all file members. */
    QCString trFileMembersDescription(bool extractAll)
    {
      QCString result="Liste de toutes les d�clarations";
      if (!extractAll) result+="document�es ";
      result+="avec liens sur ";
      if (extractAll) result+="la documentation du fichier correspondant "
			"pour chacune :";
      else result+="les fichiers dans lesquels elles sont d�finies :";
      return result;
    }

    /*! This is an introduction to the page with the list of all header files. */
    QCString trHeaderFilesDescription()
    { return "Liste de tous les fichiers d'en-t�te constituant "
	"l'interface de programmation :"; }

    /*! This is an introduction to the page with the list of all examples */
    QCString trExamplesDescription()
    { return "Liste de tous les exemples :"; }

    /*! This is an introduction to the page with the list of related pages */
    QCString trRelatedPagesDescription()
    { return "Liste de toutes les pages de documentation associ�es :"; }

    /*! This is an introduction to the page with the list of class/file groups */
    QCString trModulesDescription()
    { return "Liste de tous les modules"; }

    /*! This sentences is used in the annotated class/file lists if no brief
     * description is given. 
     */
    QCString trNoDescriptionAvailable()
    { return "Aucune description n'est disponible"; }
    
    // index titles (the project name is prepended for these) 


    /*! This is used in HTML as the title of index.html. */
    QCString trDocumentation()
    { return "Documentation"; }

    /*! This is used in LaTeX as the title of the chapter with the 
     * index of all groups.
     */
    QCString trModuleIndex()
    { return "Index des modules"; }

    /*! This is used in LaTeX as the title of the chapter with the 
     * class hierarchy.
     */
    QCString trHierarchicalIndex()
    { return "Index hi�rarchique"; }

    /*! This is used in LaTeX as the title of the chapter with the 
     * annotated compound index.
     */
    QCString trCompoundIndex()
    { return "Index des composants"; }

    /*! This is used in LaTeX as the title of the chapter with the
     * list of all files.
     */
    QCString trFileIndex() 
    { return "Index des fichiers"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all groups.
     */
    QCString trModuleDocumentation()
    { return "Documentation du module"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all classes, structs and unions.
     */
    QCString trClassDocumentation()
    { return "Documentation de la classe"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all files.
     */
    QCString trFileDocumentation()
    { return "Documentation du fichier"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all examples.
     */
    QCString trExampleDocumentation()
    { return "Documentation de l'exemple"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all related pages.
     */
    QCString trPageDocumentation()
    { return "Documentation de la page"; }

    /*! This is used in LaTeX as the title of the document */
    QCString trReferenceManual()
    { return "Manuel de r�f�rence"; }
    
    /*! This is used in the documentation of a file as a header before the 
     *  list of defines
     */
    QCString trDefines()
    { return "D�finitions des macros"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of function prototypes
     */
    QCString trFuncProtos()
    { return "Prototypes des fonctions"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of typedefs
     */
    QCString trTypedefs()
    { return "D�finitions des types"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of enumerations
     */
    QCString trEnumerations()
    { return "�num�rations"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) functions
     */
    QCString trFunctions()
    { return "Fonctions"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) variables
     */
    QCString trVariables()
    { return "Variables"; }

    /*! This is used in the documentation of a file as a header before the 
     *  list of (global) variables
     */
    QCString trEnumerationValues()
    { return "�l�ments �num�r�s"; }
    
    /*! This is used in man pages as the author section. */
    QCString trAuthor()
    { return "Auteur"; }

    /*! This is used in the documentation of a file before the list of
     *  documentation blocks for defines
     */
    QCString trDefineDocumentation()
    { return "Documentation de la macro"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for function prototypes
     */
    QCString trFunctionPrototypeDocumentation()
    { return "Documentation du prototype de la fonction"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for typedefs
     */
    QCString trTypedefDocumentation()
    { return "Documentation du type"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for enumeration types
     */
    QCString trEnumerationTypeDocumentation()
    { return "Documentation du type de l'�numeration"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for enumeration values
     */
    QCString trEnumerationValueDocumentation()
    { return "Documentation de l'�l�ment de l'�numeration"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for functions
     */
    QCString trFunctionDocumentation()
    { return "Documentation de la fonction"; }

    /*! This is used in the documentation of a file/namespace before the list 
     *  of documentation blocks for variables
     */
    QCString trVariableDocumentation()
    { return "Documentation de la variable"; }

    /*! This is used in the documentation of a file/namespace/group before 
     *  the list of links to documented compounds
     */
    QCString trCompounds()
    { return "Composants"; }

    /*! This is used in the documentation of a group before the list of 
     *  links to documented files
     */
    QCString trFiles()
    { return "Fichiers"; }

    /*! This is used in the standard footer of each page and indicates when 
     *  the page was generated 
     */
    QCString trGeneratedAt(const char *date,const char *projName)
    { 
      QCString result=(QCString)"G�n�r� le "+date;
      if (projName) result+=(QCString)" pour "+projName;
      result+=(QCString)" par ";
      return result;
    }
    /*! This is part of the sentence used in the standard footer of each page.
     */
    QCString trWrittenBy()
    {
      return "�crit par";
    }

    /*! this text is put before a class diagram */
    QCString trClassDiagram(const char *clName)
    {
      return (QCString)"Graphe d'h�ritage de la classe "+clName;
    }
    
    /*! this text is generated when the \internal command is used. */
    QCString trForInternalUseOnly()
    { return "� usage interne uniquement."; }

    /*! this text is generated when the \reimp command is used. */
    QCString trReimplementedForInternalReasons()
    { return "Red�fini pour des raisons internes; "
             "l'interface n'est pas modifi�e"; 
    }

    /*! this text is generated when the \warning command is used. */
    QCString trWarning()
    { return "Avertissement"; }

    /*! this text is generated when the \bug command is used. */
    QCString trBugsAndLimitations()
    { return "Bogues et limitations"; }

    /*! this text is generated when the \version command is used. */
    QCString trVersion()
    { return "Version"; }

    /*! this text is generated when the \date command is used. */
    QCString trDate()
    { return "Date"; }

    /*! this text is generated when the \author command is used. */
    QCString trAuthors()
    { return "Auteur(s)"; }

    /*! this text is generated when the \return command is used. */
    QCString trReturns()
    { return "Renvoie"; }

    /*! this text is generated when the \sa command is used. */
    QCString trSeeAlso()
    { return "Voir �galement"; }

    /*! this text is generated when the \param command is used. */
    QCString trParameters()
    { return "Param�tres"; }

    /*! this text is generated when the \exception command is used. */
    QCString trExceptions()
    { return "Exceptions"; }
    
    /*! this text is used in the title page of a LaTeX document. */
    QCString trGeneratedBy()
    { return "G�n�r� par"; }

    // new since 0.49-990307
    
    virtual QCString trNamespaceList()
    { return "Liste des namespaces"; }

    /*! used as an introduction to the namespace list */
    virtual QCString trNamespaceListDescription(bool extractAll)
    {
      QCString result="Liste de tous les namespaces ";
      if (!extractAll) result+="document�s ";
      result+="avec une br�ve description :";
      return result;
    }

    /*! used in the class documentation as a header before the list of all
     *  friends of a class
     */
    virtual QCString trFriends()
    { return "Amis (friends)"; }
    
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990405
//////////////////////////////////////////////////////////////////////////
    
    /*! used in the class documentation as a header before the list of all
     * related classes 
     */
    virtual QCString trRelatedFunctionDocumentation()
    { return "Documentation des fonctions amies et associ�es"; }
    
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990425
//////////////////////////////////////////////////////////////////////////

    /*! used as the title of the HTML page of a class/struct/union */
    virtual QCString trCompoundReference(const char *clName,
                                    ClassDef::CompoundType compType,
                                    bool /*isTemplate*/)
    {
      QCString result="R�f�rence de ";
      switch(compType)
      {
        case ClassDef::Class:      result+="la classe "; break;
        case ClassDef::Struct:     result+="la structure "; break;
        case ClassDef::Union:      result+="l'union "; break;
        case ClassDef::Interface:  result+="l'interface "; break;
        case ClassDef::Exception:  result+="l'exception "; break;
      }

      result+=(QCString)clName;
      return result;
    }

    /*! used as the title of the HTML page of a file */
    virtual QCString trFileReference(const char *fileName)
    {
      QCString result= "R�f�rence du fichier ";
      result += fileName;
      return result;
    }

    /*! used as the title of the HTML page of a namespace */
    virtual QCString trNamespaceReference(const char *namespaceName)
    {
      QCString result= "R�f�rence du namespace ";
      result += namespaceName;
      return result;
    }
    
    /*! \mgroup Class sections
     *  these are for the member sections of a class, struct or union 
     */
    virtual QCString trPublicMembers()
    { return "Membres publics"; }
    virtual QCString trPublicSlots()
    { return "Connecteurs publics"; }
    virtual QCString trSignals()
    { return "Signaux"; }
    virtual QCString trStaticPublicMembers()
    { return "Membres publics statiques"; }
    virtual QCString trProtectedMembers()
    { return "Membres prot�g�s"; }
    virtual QCString trProtectedSlots()
    { return "Connecteurs prot�g�s"; }
    virtual QCString trStaticProtectedMembers()
    { return "Membres prot�g�s statiques"; }
    virtual QCString trPrivateMembers()
    { return "Membres priv�s"; }
    virtual QCString trPrivateSlots()
    { return "Connecteurs priv�s"; }
    virtual QCString trStaticPrivateMembers()
    { return "Membres priv�s statiques"; }
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
            result+=", et ";
        }
      }
      return result; 
    }
    
    /*! used in class documentation to produce a list of base classes,
     *  if class diagrams are disabled.
     */
    virtual QCString trInheritsList(int numEntries)
    {
      return "Est d�riv�e de "+trWriteList(numEntries)+".";
    }

    /*! used in class documentation to produce a list of super classes,
     *  if class diagrams are disabled.
     */
    virtual QCString trInheritedByList(int numEntries)
    {
      return "D�riv�e par "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of 
     *  members that are hidden by this one.
     */
    virtual QCString trReimplementedFromList(int numEntries)
    {
      return "Red�finie � partir de "+trWriteList(numEntries)+".";
    }

    /*! used in member documentation blocks to produce a list of
     *  all member that overwrite the implementation of this member.
     */
    virtual QCString trReimplementedInList(int numEntries)
    {
      return "Red�finie dans "+trWriteList(numEntries)+".";
    }

    /*! This is put above each page as a link to all members of namespaces. */
    virtual QCString trNamespaceMembers()
    { return "Membres des namespaces"; }

    /*! This is an introduction to the page with all namespace members */
    virtual QCString trNamespaceMemberDescription(bool extractAll)
    { 
      QCString result="Voici une liste de tous les membres de namespace";
      if (!extractAll) result+="document�s ";
      result+=" avec liens vers ";
      if (extractAll) 
        result+="les documentations des namespaces associ�s :";
      else 
        result+="les namespaces auxquels ils appartiennent :";
      return result;
    }
    /*! This is used in LaTeX as the title of the chapter with the 
     *  index of all namespaces.
     */
    virtual QCString trNamespaceIndex()
    { return "Index des namespaces"; }

    /*! This is used in LaTeX as the title of the chapter containing
     *  the documentation of all namespaces.
     */
    virtual QCString trNamespaceDocumentation()
    { return "Documentation des namespaces"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990522
//////////////////////////////////////////////////////////////////////////

    /*! This is used in the documentation before the list of all
     *  namespaces in a file.
     */
    virtual QCString trNamespaces()
    { return "Espaces de nommage (namespaces)"; }

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
      QCString result=(QCString)"La documentation associ�e � cette ";
      switch(compType)
      {
        case ClassDef::Class:      result+="classe"; break;
        case ClassDef::Struct:     result+="structure"; break;
        case ClassDef::Union:      result+="union"; break;
        case ClassDef::Interface:  result+="interface"; break;
        case ClassDef::Exception:  result+="exception"; break;
      }
      result+=" a �t� g�n�r�e � partir ";
      if (single) result+=" du fichier suivant :"; 
      else result+="des fichiers suivants :";
      return result;
    }

    /*! This is in the (quick) index as a link to the alphabetical compound
     * list.
     */
    virtual QCString trAlphabeticalList()
    {
      return "Liste par ordre alphab�tique";
    }


//////////////////////////////////////////////////////////////////////////
// new since 0.49-990901
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the heading text for the retval command. */
    virtual QCString trReturnValues()
    { return "Valeurs retourn�es"; }

    /*! This is in the (quick) index as a link to the main page (index.html)
     */
    virtual QCString trMainPage()
    { return "Page principale"; }

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
      return "Sources";
    }
    virtual QCString trDefinedAtLineInSourceFile()
    {
      return "D�finition � la ligne @0 du fichier @1.";
    }
    virtual QCString trDefinedInSourceFile()
    {
      return "D�finition dans le fichier @0.";
    }
};

#endif
