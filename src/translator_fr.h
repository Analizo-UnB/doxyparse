/******************************************************************************
 *
 * $Id$
 *
 * Copyright (C) 1997-1999 by Dimitri van Heesch.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation under the terms of the GNU General Public License is hereby 
 * granted. No representations are made about the suitability of this software 
 * for any purpose. It is provided "as is" without express or implied warranty.
 * See the GNU General Public License for more details.
 *
 * All output generated with Doxygen is not covered by this license.
 *
 */

#ifndef TRANSLATOR_FR_H
#define TRANSLATOR_FR_H

#include <qstring.h>

class TranslatorFrench : public Translator
{
  public:
    QString latexBabelPackage()
    { return "french"; }
    QString trInherits()
    { return "H�rite de"; }
    QString trAnd()
    { return "et"; }
    QString trInheritedBy()
    { return "D�riv�e par"; }
    QString trRelatedFunctions()
    { return "Fonctions associ�es"; }
    QString trRelatedSubscript()
    { return "(Noter que ces fonctions ne sont pas des m�thodes de la classe)"; }
    QString trDetailedDescription()
    { return "Description d�taill�e"; }
    QString trMemberTypedefDocumentation()
    { return "Documentation des types imbriqu�s"; }
    QString trMemberEnumerationDocumentation()
    { return "Documentation des �num�rations imbriqu�s"; }
    QString trMemberFunctionDocumentation()
    { return "Documentation des m�thodes"; }
    QString trMemberDataDocumentation()
    { return "Documentation des donn�es imbriqu�s"; }
    QString trGeneratedFrom(const char *s,bool single)
    { 
      QString result=(QString)"La documentation pour cette"+s+
                     " a �t� g�n�r�e � partir ";
      if (single) result+="du fichier suivant:";   
      else result+="des fichiers suivants:";
      return result;
    }
    QString trMore()
    { return "Plus de d�tails..."; }
    QString trReference()
    { return "R�f�rence"; }
    QString trListOfAllMembers()
    { return "Liste de tous les membres"; }
    QString trMemberList()
    { return "Liste des membres"; }
    QString trThisIsTheListOfAllMembers()
    { return "Ceci est la liste compl�te des membres de"; }
    QString trIncludingInheritedMembers()
    { return "y compris des membres des classes h�rit�es."; }
    QString trGeneratedAutomatically(const char *s)
    { QString result="G�n�r� automatiquement par Doxygen"; 
      if (s) result+=(QString)" pour "+s;
      result+=" � partir du code source."; 
      return result;
    }
    QString trEnumName()
    { return "�num�ration"; }
    QString trEnumValue()
    { return "�l�ment d'une �num�ration"; }
    QString trDefinedIn()
    { return "d�fini dans"; }
    QString trIncludeFile()
    { return "Fichier inclu"; }
    QString trVerbatimText(const char *f)
    { return (QString)"Ce texte provient du fichier inclu "+f+"."; }


    QString trModules()
    { return "Modules"; }
    QString trClassHierarchy()
    { return "Hi�rarchie des classes"; }
    QString trCompoundList()
    { return "Liste des composants"; }
    QString trFileList()
    { return "Liste des fichiers"; }
    QString trHeaderFiles()
    { return "Fichiers d'ent�te"; }
    QString trCompoundMembers()
    { return "Composants"; }
    QString trFileMembers()
    { return "D�clarations"; }
    QString trRelatedPages()
    { return "Pages associ�es"; }
    QString trExamples()
    { return "Exemples"; }
    QString trSearch()
    { return "Recherche"; }
    QString trClassHierarchyDescription()
    { return "Cette liste d'h�ritage est, autant que possible, "
	"class�e par ordre alphab�tique"; }
    QString trFileListDescription(bool extractAll)
    {
      QString result="Liste de tous les fichiers ";
      if (!extractAll) result+="document�s ";
      result+="avec une br�ve description :";
      return result;
    }
    QString trCompoundListDescription()
    { return "Liste des classes, des strutures et des unions "
	"avec une br�ve description :"; 
    }
    QString trCompoundMembersDescription(bool extractAll)
    {
      QString result="Liste de tous les membres de classe ";
      if (!extractAll) result+="document�s ";
      result+="avec les liens vers ";
      if (extractAll) result+="la documentation de la classe correspondante :";
      else result+="les classes auxquelles ils appartiennent :";
      return result;
    }
    QString trFileMembersDescription(bool extractAll)
    {
      QString result="Liste de toutes les d�clarations";
      if (!extractAll) result+="document�es ";
      result+="avec liens sur ";
      if (extractAll) result+="la documentation du fichier correspondant "
			"pour chacune :";
      else result+="les fichiers dans lesquels elles sont d�finies :";
      return result;
    }
    QString trHeaderFilesDescription()
    { return "Liste de tous les fichiers d'ent�te constituant "
	"l'interface de programmation :"; }
    QString trExamplesDescription()
    { return "Liste de tous les exemples :"; }
    QString trRelatedPagesDescription()
    { return "Liste de toutes les pages de documentation associ�es :"; }
    QString trModulesDescription()
    { return "Liste de tous les modules"; }
    QString trNoDescriptionAvailable()
    { return "Aucune description n'est disponible"; }

    QString trDocumentation()
    { return "Documentation"; }
    QString trModuleIndex()
    { return "Index des modules"; }
    QString trHierarchicalIndex()
    { return "Index hi�rarchique"; }
    QString trCompoundIndex()
    { return "Index des composants"; }
    QString trFileIndex() 
    { return "Index des fichiers"; }
    QString trModuleDocumentation()
    { return "Documentation du module"; }
    QString trClassDocumentation()
    { return "Documentation de la classe"; }
    QString trFileDocumentation()
    { return "Documentation du fichier"; }
    QString trExampleDocumentation()
    { return "Documentation de l'exemple"; }
    QString trPageDocumentation()
    { return "Documentation de la page"; }
    QString trReferenceManual()
    { return "Manuel de r�f�rence"; }

    QString trDefines()
    { return "D�finitions des macros"; }
    QString trFuncProtos()
    { return "Prototypes des fonctions"; }
    QString trTypedefs()
    { return "D�finitions des types"; }
    QString trEnumerations()
    { return "Enum�rations"; }
    QString trFunctions()
    { return "Fonctions"; }
    QString trVariables()
    { return "Variables"; }
    QString trEnumerationValues()
    { return "El�ments �num�r�s"; }
    QString trReimplementedFrom()
    { return "Red�fini � partir de"; }
    QString trReimplementedIn()
    { return "Red�fini dans"; }
    QString trAuthor()
    { return "Auteur"; }
    QString trDefineDocumentation()
    { return "Documentation de la macro"; }
    QString trFunctionPrototypeDocumentation()
    { return "Documentation du prototype de la fonction"; }
    QString trTypedefDocumentation()
    { return "Documentation du type"; }
    QString trEnumerationTypeDocumentation()
    { return "Documentation du type de l'�numeration"; }
    QString trEnumerationValueDocumentation()
    { return "Documentation de l'�l�ment de l'�numeration"; }
    QString trFunctionDocumentation()
    { return "Documentation de la fonction"; }
    QString trVariableDocumentation()
    { return "Documentation de la variable"; }
    QString trCompounds()
    { return "Composants"; }
    QString trFiles()
    { return "Fichiers"; }
    QString trGeneratedAt(const char *date,const char *projName)
    { 
      QString result=(QString)"G�n�r� le "+date;
      if (projName) result+=(QString)" pour "+projName;
      result+=(QString)" par ";
      return result;
    }
    QString trWrittenBy()
    {
      return "�crit par";
    }
    QString trClassDiagram(const char *clName)
    {
      return (QString)"Graphe d'h�ritage de la classe "+clName;
    }
    QString trForInternalUseOnly()
    { return "A usage interne uniquement."; }
    QString trReimplementedForInternalReasons()
    { return "Red�fini pour des raisons internes; "
             "l'interface n'est pas modifi�e"; 
    }
    QString trWarning()
    { return "Avertissement"; }
    QString trBugsAndLimitations()
    { return "Bogues et limitations"; }
    QString trVersion()
    { return "Version"; }
    QString trDate()
    { return "Date"; }
    QString trAuthors()
    { return "Auteur(s)"; }
    QString trReturns()
    { return "Renvoie"; }
    QString trSeeAlso()
    { return "Voir �galement"; }
    QString trParameters()
    { return "Param�tres"; }
    QString trExceptions()
    { return "Exceptions"; }
    QString trGeneratedBy()
    { return "G�n�r� par"; }

    // new since 0.49-990307
    
    virtual QString trNamespaces()
    { return "Namespaces"; }
    virtual QString trNamespaceList()
    { return "Liste des Namespaces"; }
    virtual QString trNamespaceListDescription(bool extractAll)
    {
      QString result="Liste de tous les namespaces ";
      if (!extractAll) result+="document�s ";
      result+="avec une br�ve description :";
      return result;
    }
    virtual QString trFriends()
    { return "Friends"; }
    
    // new since 0.49-990405
    
    virtual QString trRelatedFunctionDocumentation()
    { return "Documentation des fonctions amies et associ�es"; }
};

#endif
