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

#ifndef TRANSLATOR_RU_H
#define TRANSLATOR_RU_H

#include "translator.h"

class TranslatorRussian : public Translator
{
  public:
    QCString latexBabelPackage()
    { return "russian"; }
    QCString trRelatedFunctions()
    {
	return "��������� �������";
    }
    QCString trRelatedSubscript()
    {
	return "(�������� ��������, ��� ��� ������� �� ����� ������)";
    }
    QCString trDetailedDescription()
    {
	return "��������� ��������";
    }
    QCString trMemberTypedefDocumentation()
    {
	return "�������� ������ typedef";
    }
    QCString trMemberEnumerationDocumentation()
    {
	return "�������� ������ ������������� ����";
    }
    QCString trMemberFunctionDocumentation()
    {
	return "�������� ������� �����";
    }
    QCString trMemberDataDocumentation()
    {
	return "�������� ������ �����";
    }
    QCString trMore()
    {
	return "���...";
    }
    QCString trListOfAllMembers()
    {
	return "C����� ���� ������ ������";
    }
    QCString trMemberList()
    {
	return "������ ������";
    }
    QCString trThisIsTheListOfAllMembers()
    {
	return "��� ������ ������ ������ ";
    }
    QCString trIncludeIncludingInheritedMembers()
    {
	return ", ������� ��� �������������� ������.";
    }
    QCString trGeneratedAutomatically(const char *s)
    { QCString result="������������� ������� �������� Doxygen";
      if (s) result+=(QCString)" ��� "+s;
      result+=" �� ��������� ������."; 
      return result;
    }
    QCString trEnumName()
    {
	return "��� ������������";
    }
    QCString trEnumValue()
    {
	return "�������� ������������";
    }
    QCString trDefinedIn()
    {
	return "���������� �";
    }
    QCString trVerbatimText(const char* f)
    {
	return (QCString)"��� ������ ������� ������ �� "+f+"����������� �����";
    }
    QCString trModules()
    {
	return "������";
    }
    QCString trClassHierarchy()
    {
	return "�������� �������";
    }
    QCString trCompoundList()
    {
	return "��������� ������ (compound list)";
    }
    QCString trFileList()
    {
	return "������ ������";
    }
    QCString trHeaderFiles()
    {
	return "������ ������������ ������";
    }
    QCString trCompoundMembers()
    {
	return "��������� ����� (compound members)";
    }
    QCString trFileMembers()
    {
	return "����� �����";
    }
    QCString trRelatedPages()
    {
	return "��������� ��������";
    }
    QCString trExamples()
    {
	return "�������";
    }
    QCString trSearch()
    {
	return "�����";
    }
    QCString trClassHierarchyDescription()
    {
	return "���� ������ (inheritance) ���� ������������, ����� �� ��������";
    }
    
};

#endif
