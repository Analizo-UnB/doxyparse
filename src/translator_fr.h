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
 * The translation into French was provided by
 *   Christophe Bordeux (bordeux@lig.di.epfl.ch)
 */

#ifndef TRANSLATOR_FR_H
#define TRANSLATOR_FR_H

#include "translator.h"

class TranslatorFrench : public Translator
{
  public:
    QCString latexBabelPackage()
    { return "french"; }
    QCString trInherits()
    { return "H�rite de"; }
    QCString trAnd()
    { return "et"; }
    QCString trInheritedBy()
    { return "D�riv�e par"; }
    QCString trRelatedFunctions()
    { return "Fonctions associ�es"; }
    QCString trRelatedSubscript()
    { return "(Noter que ces fonctions ne sont pas des m�thodes de la classe)"; }
    QCString trDetailedDescription()
    { return "Description d�taill�e"; }
    QCString trMemberTypedefDocumentation()
    { return "Documentation des types imbriqu�s"; }
    QCString trMemberEnumerationDocumentation()
    { return "Documentation des �num�rations imbriqu�s"; }
    QCString trMemberFunctionDocumentation()
    { return "Documentation des m�thodes"; }
    QCString trMemberDataDocumentation()
    { return "Documentation des donn�es imbriqu�s"; }
    QCString trGeneratedFrom(const char *s,bool single)
    { 
      QCString result=(QCString)"La documentation pour cette"+s+
                     " a �t� g�n�r�e � partir ";
      if (single) result+="du fichier suivant:";   
      else result+="des fichiers suivants:";
      return result;
    }
    QCString trMore()
    { return "Plus de d�tails..."; }
    QCString trReference()
    { return "R�f�rence"; }
    QCString trListOfAllMembers()
    { return "Liste de tous les membres"; }
    QCString trMemberList()
    { return "Liste des membres"; }
    QCString trThisIsTheListOfAllMembers()
    { return "Ceci est la liste compl�te des membres de"; }
    QCString trIncludingInheritedMembers()
    { return "y compris des membres des classes h�rit�es."; }
    QCString trGeneratedAutomatically(const char *s)
    { QCString result="G�n�r� automatiquement par Doxygen"; 
      if (s) result+=(QCString)" pour "+s;
      result+=" � partir du code source."; 
      return result;
    }
    QCString trEnumName()
    { return "�num�ration"; }
    QCString trEnumValue()
    { return "�l�ment d'une �num�ration"; }
    QCString trDefinedIn()
    { return "d�fini dans"; }
    QCString trIncludeFile()
    { return "Fichier inclu"; }
    QCString trVerbatimText(const char *f)
    { return (QCString)"Ce texte provient du fichier inclu "+f+"."; }


    QCString trModules()
    { return "Modules"; }
    QCString trClassHierarchy()
    { return "Hi�rarchie des classes"; }
    QCString trCompoundList()
    { return "Liste des composants"; }
    QCString trFileList()
    { return "Liste des fichiers"; }
    QCString trHeaderFiles()
    { return "Fichiers d'ent�te"; }
    QCString trCompoundMembers()
    { return "Composants"; }
    QCString trFileMembers()
    { return "D�clarations"; }
    QCString trRelatedPages()
    { return "Pages associ�es"; }
    QCString trExamples()
    { return "Exemples"; }
    QCString trSearch()
    { return "Recherche"; }
    QCString trClassHierarchyDescription()
    { return "Cette liste d'h�ritage est, autant que possible, "
	"class�e par ordre alphab�tique"; }
    QCString trFileListDescription(bool extractAll)
    {
      QCString result="Liste de tous les fichiers ";
      if (!extractAll) result+="document�s ";
      result+="avec une br�ve description :";
      return result;
    }
    QCString trCompoundListDescription()
    { return "Liste des classes, des strutures et des unions "
	"avec une br�ve description :"; 
    }
    QCString trCompoundMembersDescription(bool extractAll)
    {
      QCString result="Liste de tous les membres de classe ";
      if (!extractAll) result+="document�s ";
      result+="avec les liens vers ";
      if (extractAll) result+="la documentation de la classe correspondante :";
      else result+="les classes auxquelles ils appartiennent :";
      return result;
    }
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
    QCString trHeaderFilesDescription()
    { return "Liste de tous les fichiers d'ent�te constituant "
	"l'interface de programmation :"; }
    QCString trExamplesDescription()
    { return "Liste de tous les exemples :"; }
    QCString trRelatedPagesDescription()
    { return "Liste de toutes les pages de documentation associ�es :"; }
    QCString trModulesDescription()
    { return "Liste de tous les modules"; }
    QCString trNoDescriptionAvailable()
    { return "Aucune description n'est disponible"; }

    QCString trDocumentation()
    { return "Documentation"; }
    QCString trModuleIndex()
    { return "Index des modules"; }
    QCString trHierarchicalIndex()
    { return "Index hi�rarchique"; }
    QCString trCompoundIndex()
    { return "Index des composants"; }
    QCString trFileIndex() 
    { return "Index des fichiers"; }
    QCString trModuleDocumentation()
    { return "Documentation du module"; }
    QCString trClassDocumentation()
    { return "Documentation de la classe"; }
    QCString trFileDocumentation()
    { return "Documentation du fichier"; }
    QCString trExampleDocumentation()
    { return "Documentation de l'exemple"; }
    QCString trPageDocumentation()
    { return "Documentation de la page"; }
    QCString trReferenceManual()
    { return "Manuel de r�f�rence"; }

    QCString trDefines()
    { return "D�finitions des macros"; }
    QCString trFuncProtos()
    { return "Prototypes des fonctions"; }
    QCString trTypedefs()
    { return "D�finitions des types"; }
    QCString trEnumerations()
    { return "Enum�rations"; }
    QCString trFunctions()
    { return "Fonctions"; }
    QCString trVariables()
    { return "Variables"; }
    QCString trEnumerationValues()
    { return "El�ments �num�r�s"; }
    QCString trReimplementedFrom()
    { return "Red�fini � partir de"; }
    QCString trReimplementedIn()
    { return "Red�fini dans"; }
    QCString trAuthor()
    { return "Auteur"; }
    QCString trDefineDocumentation()
    { return "Documentation de la macro"; }
    QCString trFunctionPrototypeDocumentation()
    { return "Documentation du prototype de la fonction"; }
    QCString trTypedefDocumentation()
    { return "Documentation du type"; }
    QCString trEnumerationTypeDocumentation()
    { return "Documentation du type de l'�numeration"; }
    QCString trEnumerationValueDocumentation()
    { return "Documentation de l'�l�ment de l'�numeration"; }
    QCString trFunctionDocumentation()
    { return "Documentation de la fonction"; }
    QCString trVariableDocumentation()
    { return "Documentation de la variable"; }
    QCString trCompounds()
    { return "Composants"; }
    QCString trFiles()
    { return "Fichiers"; }
    QCString trGeneratedAt(const char *date,const char *projName)
    { 
      QCString result=(QCString)"G�n�r� le "+date;
      if (projName) result+=(QCString)" pour "+projName;
      result+=(QCString)" par ";
      return result;
    }
    QCString trWrittenBy()
    {
      return "�crit par";
    }
    QCString trClassDiagram(const char *clName)
    {
      return (QCString)"Graphe d'h�ritage de la classe "+clName;
    }
    QCString trForInternalUseOnly()
    { return "A usage interne uniquement."; }
    QCString trReimplementedForInternalReasons()
    { return "Red�fini pour des raisons internes; "
             "l'interface n'est pas modifi�e"; 
    }
    QCString trWarning()
    { return "Avertissement"; }
    QCString trBugsAndLimitations()
    { return "Bogues et limitations"; }
    QCString trVersion()
    { return "Version"; }
    QCString trDate()
    { return "Date"; }
    QCString trAuthors()
    { return "Auteur(s)"; }
    QCString trReturns()
    { return "Renvoie"; }
    QCString trSeeAlso()
    { return "Voir �galement"; }
    QCString trParameters()
    { return "Param�tres"; }
    QCString trExceptions()
    { return "Exceptions"; }
    QCString trGeneratedBy()
    { return "G�n�r� par"; }

    // new since 0.49-990307
    
    virtual QCString trNamespaces()
    { return "Namespaces"; }
    virtual QCString trNamespaceList()
    { return "Liste des Namespaces"; }
    virtual QCString trNamespaceListDescription(bool extractAll)
    {
      QCString result="Liste de tous les namespaces ";
      if (!extractAll) result+="document�s ";
      result+="avec une br�ve description :";
      return result;
    }
    virtual QCString trFriends()
    { return "Friends"; }
    
    // new since 0.49-990405
    
    virtual QCString trRelatedFunctionDocumentation()
    { return "Documentation des fonctions amies et associ�es"; }
};

#endif
