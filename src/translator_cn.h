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

#ifndef TRANSLATOR_CN_H
#define TRANSLATOR_CN_H

#include "translator.h"

/*!
   If you want insert a space whenever Chinese meets English charactors, set
   CN_SPC to " ", else null.
*/
#define CN_SPC

class TranslatorChinese : public Translator
{
  public:
    QCString idLanguage()
    { return "chinese"; }
    QCString idLanguageCharset()
    { return "gb2312"; }
    QCString latexBabelPackage()
    { return "chinese"; }
    QCString trRelatedFunctions()
    { return "��غ���"; }
    QCString trRelatedSubscript()
    { return "��ע�⣺��Щ���ǳ�Ա������"; }
    QCString trDetailedDescription()
    { return "��Ϥ����"; }
    QCString trMemberTypedefDocumentation()
    { return "��Ա���Ͷ����ĵ�"; }
    QCString trMemberEnumerationDocumentation()
    { return "��Աö�������ĵ�"; }
    QCString trEnumerationValueDocumentation()
    { return "��Աö��ֵ�ĵ�"; }
    QCString trMemberFunctionDocumentation()
    { return "��Ա�����ĵ�"; }
    QCString trMemberDataDocumentation()
    { return "��Ա�����ĵ�"; }
    QCString trMore()
    { return "����..."; }
    QCString trListOfAllMembers()
    { return "���г�Ա���б�"; }
    QCString trMemberList()
    { return "��Ա�б�"; }
    QCString trThisIsTheListOfAllMembers()
    { return "��Ա�������б���Щ��Ա����"CN_SPC; }
    QCString trIncludingInheritedMembers()
    { return "���������м̳ж����ĳ�Ա"; }
    QCString trGeneratedAutomatically(const char *s)
    { QCString result;
      if (s) result=(QCString)"Ϊ"CN_SPC+s+"��";
      result+="��"CN_SPC"Doyxgen"CN_SPC"ͨ������Դ�����Զ����ɡ�"; 
      return result;
    }
    QCString trEnumName()
    { return "ö������"; }
    QCString trEnumValue()
    { return "ö��ֵ"; }
    QCString trDefinedIn()
    { return "������"CN_SPC; }
    QCString trVerbatimText(const char *f)
    { return (QCString)"����ͷ�ļ�"CN_SPC+f+CN_SPC"��Դ���롣"; }
    QCString trModules()
    { return "ģ��"; }
    QCString trClassHierarchy()
    { return "��̳й�ϵ"; }
    QCString trCompoundList()
    { return "��������б�"; }
    QCString trFileList()
    { return "�ļ��б�"; }
    QCString trHeaderFiles()
    { return "ͷ�ļ�"; }
    QCString trCompoundMembers()
    { return "������ͳ�Ա"; }
    QCString trFileMembers()
    { return "�ļ���Ա"; }
    QCString trRelatedPages()
    { return "���ҳ��"; }
    QCString trExamples()
    { return "ʾ��"; }
    QCString trSearch()
    { return "����"; }
    QCString trClassHierarchyDescription()
    { return "���б�������ֵ�˳������"; }
    QCString trFileListDescription(bool extractAll)
    {
      QCString result="�����г�����";
      if (!extractAll) result+="�ĵ�����";
      result+="�ļ���������Ҫ˵����";
      return result;
    }
    QCString trCompoundListDescription()
    { return "�����г������ࡢ�ṹ�������Լ��ӿڶ��壬������Ҫ˵����"; 
    }
    QCString trCompoundMembersDescription(bool extractAll)
    {
      QCString result="�����г�����";
      if (!extractAll) result+="�ĵ�����";
      result+="���Ա������";
      if (extractAll) result+="��������ĵ������ӣ�";
      else result+="����������ӣ�";
      return result;
    }
    QCString trFileMembersDescription(bool extractAll)
    {
      QCString result="�����г�����";
      if (!extractAll) result+="�ĵ�����";
      result+="�ļ���Ա������";
      if (extractAll) result+="�����ļ����ĵ������ӣ�";
      else result+="�����ļ������ӣ�";
      return result;
    }
    QCString trHeaderFilesDescription()
    { return "�����г����API��ͷ�ļ���"; }
    QCString trExamplesDescription()
    { return "�����г�����ʾ����"; }
    QCString trRelatedPagesDescription()
    { return "�����г�������ص�ҳ�棺"; }
    QCString trModulesDescription()
    { return "�����г�����ģ��"; }
    QCString trNoDescriptionAvailable()
    { return "�޿����ĵ�"; }

    QCString trDocumentation()
    { return "�ĵ�"; }
    QCString trModuleIndex()
    { return "ģ������"; }
    QCString trHierarchicalIndex()
    { return "�̳й�ϵ����"; }
    QCString trCompoundIndex()
    { return "�����������"; }
    QCString trFileIndex() 
    { return "�ļ�����"; }
    QCString trModuleDocumentation()
    { return "ģ���ĵ�"; }
    QCString trClassDocumentation()
    { return "���ĵ�"; }
    QCString trFileDocumentation()
    { return "�ļ��ĵ�"; }
    QCString trExampleDocumentation()
    { return "ʾ���ĵ�"; }
    QCString trPageDocumentation()
    { return "ҳ���ĵ�"; }
    QCString trReferenceManual()
    { return "�ο��ֲ�"; }

    QCString trDefines()
    { return "�궨��"; }
    QCString trFuncProtos()
    { return "����ԭ��"; }
    QCString trTypedefs()
    { return "���Ͷ���"; }
    QCString trEnumerations()
    { return "ö��"; }
    QCString trFunctions()
    { return "����"; }
    QCString trVariables()
    { return "����"; }
    QCString trEnumerationValues()
    { return "ö��ֵ"; }
    QCString trAuthor()
    { return "����"; }
    QCString trDefineDocumentation()
    { return "�궨���ĵ�"; }
    QCString trFunctionPrototypeDocumentation()
    { return "����ԭ���ĵ�"; }
    QCString trTypedefDocumentation()
    { return "���Ͷ����ĵ�"; }
    QCString trEnumerationTypeDocumentation()
    { return "ö�������ĵ�"; }
    QCString trFunctionDocumentation()
    { return "�����ĵ�"; }
    QCString trVariableDocumentation()
    { return "�����ĵ�"; }
    QCString trCompounds()
    { return "�������"; }
    QCString trFiles()
    { return "�ļ�"; }
    QCString trGeneratedAt(const char *date,const char *projName)
    { 
      QCString result=(QCString)"Generated at "+date;
      if (projName) result+=(QCString)" for "+projName;
      result+=(QCString)" by";
      return result;
    }
    QCString trWrittenBy()
    {
      return "written by";
    }
    QCString trClassDiagram(const char *clName)
    {
      return (QCString)"�̳�ͼ����"CN_SPC+clName;
    }
    QCString trForInternalUseOnly()
    { return "�����ڲ�ʹ�á�"; }
    QCString trReimplementedForInternalReasons()
    { return "�����ڲ�ԭ�����أ�����Ӱ��API"; 
    }
    QCString trWarning()
    { return "����"; }
    QCString trBugsAndLimitations()
    { return "BUG"CN_SPC"�����"; }
    QCString trVersion()
    { return "�汾"; }
    QCString trDate()
    { return "����"; }
    QCString trAuthors()
    { return "����"; }
    QCString trReturns()
    { return "����"; }
    QCString trSeeAlso()
    { return "�μ�"; }
    QCString trParameters()
    { return "����"; }
    QCString trExceptions()
    { return "�쳣"; }
    QCString trGeneratedBy()
    { return "������"; }
    
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990307 
//////////////////////////////////////////////////////////////////////////
    
    QCString trNamespaceList()
    { return "�����ռ��б�"; }
    QCString trNamespaceListDescription(bool extractAll)
    {
      QCString result="�����г�����";
      if (!extractAll) result+="�ĵ�����";
      result+="�����ռ䶨�壬������Ҫ˵����";
      return result;
    }
    QCString trFriends()
    { return "��Ԫ"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990405
//////////////////////////////////////////////////////////////////////////
    
    QCString trRelatedFunctionDocumentation()
    { return "��Ԫ����غ����ĵ�"; }
    
//////////////////////////////////////////////////////////////////////////
// new since 0.49-990425
//////////////////////////////////////////////////////////////////////////

    QCString trCompoundReference(const char *clName,
                                 ClassDef::CompoundType compType,
                                 bool isTemplate)
      // used as the title of the HTML page of a class/struct/union
    {
      QCString result=(QCString)clName;
      if (isTemplate) result+=CN_SPC"ģ��";
      switch(compType)
      {
        case ClassDef::Class:  result+="��"; break;
        case ClassDef::Struct: result+="�ṹ"; break;
        case ClassDef::Union:  result+="����"; break;
        case ClassDef::Interface:  result+="�ӿ�"; break;
        case ClassDef::Exception:  result+="�쳣"; break;
      }
      result+="�ο�";
      return result;
    }
    QCString trFileReference(const char *fileName)
      // used as the title of the HTML page of a file
    {
      QCString result=fileName;
      result+=CN_SPC"�ļ��ο�"; 
      return result;
    }
    QCString trNamespaceReference(const char *namespaceName)
      // used as the title of the HTML page of a namespace
    {
      QCString result=namespaceName;
      result+=CN_SPC"�����ռ�ο�";
      return result;
    }
    
    // these are for the member sections of a class, struct or union 
    QCString trPublicMembers()
    { return "���г�Ա"; }
    QCString trPublicSlots()
    { return "���в�"; }
    QCString trSignals()
    { return "�ź�"; }
    QCString trStaticPublicMembers()
    { return "��̬���г�Ա"; }
    QCString trProtectedMembers()
    { return "������Ա"; }
    QCString trProtectedSlots()
    { return "������"; }
    QCString trStaticProtectedMembers()
    { return "��̬������Ա"; }
    QCString trPrivateMembers()
    { return "˽�г�Ա"; }
    QCString trPrivateSlots()
    { return "˽�в�"; }
    QCString trStaticPrivateMembers()
    { return "��̬˽�г�Ա"; }
    // end of member sections 
    
    QCString trWriteList(int numEntries)
    {
      // this function is used to produce a comma-separated list of items.
      // use generateMarker(i) to indicate where item i should be put.
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
            result+="��";
          else                // the fore last entry
            result+=CN_SPC"��"CN_SPC;
        }
      }
      return result; 
    }
    
    QCString trInheritsList(int numEntries)
      // used in class documentation to produce a list of base classes,
      // if class diagrams are disabled.
    {
      return "�̳���"CN_SPC+trWriteList(numEntries)+"��";
    }
    QCString trInheritedByList(int numEntries)
      // used in class documentation to produce a list of super classes,
      // if class diagrams are disabled.
    {
      return "��"CN_SPC+trWriteList(numEntries)+CN_SPC"�̳�.";
    }
    QCString trReimplementedFromList(int numEntries)
      // used in member documentation blocks to produce a list of 
      // members that are hidden by this one.
    {
      return "����"CN_SPC+trWriteList(numEntries)+"��";
    }
    QCString trReimplementedInList(int numEntries)
    {
      // used in member documentation blocks to produce a list of
      // all member that overwrite the implementation of this member.
      return "��"CN_SPC+trWriteList(numEntries)+CN_SPC"���ء�";
    }

    QCString trNamespaceMembers()
      // This is put above each page as a link to all members of namespaces.
    { return "�����ռ��Ա"; }
    QCString trNamespaceMemberDescription(bool extractAll)
      // This is an introduction to the page with all namespace members
    { 
      QCString result="�����г�������";
      if (!extractAll) result+="�ĵ�����";
      result+="�����ռ��Ա������";
      if (extractAll) 
        result+="��������ĵ������ӣ�";
      else 
        result+="����������ӣ�";
      return result;
    }
    QCString trNamespaceIndex()
      // This is used in LaTeX as the title of the chapter with the 
      // index of all namespaces.
    { return "�����ռ�����"; }
    QCString trNamespaceDocumentation()
      // This is used in LaTeX as the title of the chapter containing
      // the documentation of all namespaces.
    { return "�����ռ��ĵ�"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990728
//////////////////////////////////////////////////////////////////////////

    /*! This is put at the bottom of a class documentation page and is
     *  followed by a list of files that were used to generate the page.
     */
    QCString trGeneratedFromFiles(ClassDef::CompoundType compType,
        bool)
    { // here s is one of " Class", " Struct" or " Union"
      // single is true implies a single file
      QCString result=(QCString)"��";
      switch(compType)
      {
        case ClassDef::Class:      result+="��"; break;
        case ClassDef::Struct:     result+="�ṹ"; break;
        case ClassDef::Union:      result+="����"; break;
        case ClassDef::Interface:  result+="�ӿ�"; break;
        case ClassDef::Exception:  result+="�쳣"; break;
      }
      result+="���ĵ��������ļ����ɣ�";
      return result;
    }

    /*! This is in the (quick) index as a link to the alphabetical compound
     * list.
     */
    QCString trAlphabeticalList()
    { return "���ֵ�˳��������б�"; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-990901
//////////////////////////////////////////////////////////////////////////

    /*! This is used as the heading text for the retval command. */
    QCString trReturnValues()
    { return "����ֵ"; }

    /*! This is in the (quick) index as a link to the main page (index.html)
     */
    QCString trMainPage()
    { return "��ҳ"; }

    /*! This is used in references to page that are put in the LaTeX 
     *  documentation. It should be an abbreviation of the word page.
     */
    QCString trPageAbbreviation()
    { return "p."; }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991106
//////////////////////////////////////////////////////////////////////////

    QCString trSources()
    {
      return "Դ����";
    }
    QCString trDefinedAtLineInSourceFile()
    {
      return "���ļ�"CN_SPC"@1"CN_SPC"��"CN_SPC"@0"CN_SPC"�ж��塣";
    }
    QCString trDefinedInSourceFile()
    {
      return "���ļ�"CN_SPC"@0"CN_SPC"�ж��塣";
    }

//////////////////////////////////////////////////////////////////////////
// new since 0.49-991205
//////////////////////////////////////////////////////////////////////////

    QCString trDeprecated()
    {
      return "Deprecated";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.0.0
//////////////////////////////////////////////////////////////////////////

    /*! this text is put before a collaboration diagram */
    QCString trCollaborationDiagram(const char *clName)
    {
      return (QCString)clName+CN_SPC"����ͼ��";
    }
    /*! this text is put before an include dependency graph */
    QCString trInclDepGraph(const char *fName)
    {
      return (QCString)fName+CN_SPC"����/������ϵͼ��";
    }
    /*! header that is put before the list of constructor/destructors. */
    QCString trConstructorDocumentation()
    {
      return "���켰���������ĵ�"; 
    }
    /*! Used in the file documentation to point to the corresponding sources. */
    QCString trGotoSourceCode()
    {
      return "������ļ���Դ���롣";
    }
    /*! Used in the file sources to point to the corresponding documentation. */
    QCString trGotoDocumentation()
    {
      return "������ļ����ĵ���";
    }
    /*! Text for the \pre command */
    QCString trPrecondition()
    {
      return "ǰ������";
    }
    /*! Text for the \post command */
    QCString trPostcondition()
    {
      return "Postcondition";
    }
    /*! Text for the \invariant command */
    QCString trInvariant()
    {
      return "Invariant";
    }
    /*! Text shown before a multi-line variable/enum initialization */
    QCString trInitialValue()
    {
      return "��ʼ�����У�";
    }
    /*! Text used the source code in the file index */
    QCString trCode()
    {
      return "����";
    }
    QCString trGraphicalHierarchy()
    {
      return "��̳й�ϵͼ";
    }
    QCString trGotoGraphicalHierarchy()
    {
      return "�����̳й�ϵͼ";
    }
    QCString trGotoTextualHierarchy()
    {
      return "�����̳й�ϵ��";
    }
    QCString trPageIndex()
    {
      return "ҳ������";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.0
//////////////////////////////////////////////////////////////////////////
    
    QCString trNote()
    {
      return "ע��";
    }
    QCString trPublicTypes()
    {
      return "��������";
    }
    QCString trPublicAttribs()
    {
      return "��������";
    }
    QCString trStaticPublicAttribs()
    {
      return "��̬��������";
    }
    QCString trProtectedTypes()
    {
      return "��������";
    }
    QCString trProtectedAttribs()
    {
      return "��������";
    }
    QCString trStaticProtectedAttribs()
    {
      return "��̬��������";
    }
    QCString trPrivateTypes()
    {
      return "˽������";
    }
    QCString trPrivateAttribs()
    {
      return "˽������";
    }
    QCString trStaticPrivateAttribs()
    {
      return "��̬˽������";
    }


//////////////////////////////////////////////////////////////////////////
// new since 1.1.3
//////////////////////////////////////////////////////////////////////////

    /*! Used as a marker that is put before a todo item */
    QCString trTodo()
    {
      return "TODO";
    }
    /*! Used as the header of the todo list */
    QCString trTodoList()
    {
      return "TODO"CN_SPC"�б�";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.1.4
//////////////////////////////////////////////////////////////////////////

    QCString trReferencedBy()
    {
      return "�ο���";
    }
    QCString trRemarks()
    {
      return "����";
    }
    QCString trAttention()
    {
      return "ע��";
    }
    QCString trInclByDepGraph()
    {
      return "��ͼչʾֱ�ӻ��Ӱ������ļ����ļ���";
    }
    QCString trSince()
    {
      return "�Դ�";
    }
    
//////////////////////////////////////////////////////////////////////////
// new since 1.1.5
//////////////////////////////////////////////////////////////////////////

    /*! title of the graph legend page */
    QCString trLegendTitle()
    {
      return "ͼ��";
    }
    /*! page explaining how the dot graph's should be interpreted */
    QCString trLegendDocs()
    {
      return 
        "��ҳ����չʾ��������"CN_SPC"Doxygen"CN_SPC"���ɵ�ͼ�Ρ�<p>\n"
        "�뿼������ʾ����\n"
        "\\code\n"
        "/*! ���ڽ�ȡ��ʹ���಻�ɼ� */\n"
        "class Invisible { };\n\n"
        "/*! ����ȡ���࣬�̳й�ϵ������������ */\n"
        "class Truncated : public Invisible { };\n\n"
        "/* û�б�"CN_SPC"doxygen"CN_SPC"��ע���ĵ������� */\n"
        "class Undocumented { };\n\n"
        "/*! �����м̳е��� */\n"
        "class PublicBase : public Truncated { };\n\n"
        "/*! �������̳е��� */\n"
        "class ProtectedBase { };\n\n"
        "/*! ��˽�м̳е��� */\n"
        "class PrivateBase { };\n\n"
        "/*! ��ʹ�õ��� */\n"
        "class Used { };\n\n"
        "/*! �̳���������������� */\n"
        "class Inherited : public PublicBase,\n"
        "                  protected ProtectedBase,\n"
        "                  private PrivateBase,\n"
        "                  public Undocumented\n"
        "{\n"
        "  private:\n"
        "    Used *m_usedClass;\n"
        "};\n"
        "\\endcode\n"
        "����������ļ���ָ����"CN_SPC"MAX_DOT_GRAPH_HEIGHT"CN_SPC"��ֵΪ200��"
        "��Doxygen���������µ�ͼ�Σ�"
        "<p><center><img src=\"graph_legend.gif\"></center>\n"
        "<p>\n"
        "����ͼ���еľ��������µĺ��壺\n"
        "<ul>\n"
        "<li>����ɫ���ľ��δ���ǰ�����ṹ��\n"
        "<li>��ɫ�߿�ľ��δ���<i>�ĵ���</i>�����ṹ��\n"
        "<li>��ɫ�߿�ľ��δ���û��<i>�ĵ���</i>�����ṹ��\n"
        "<li>��ɫ�߿�ľ��δ���̳�/������ϵû�б�������ʾ�������ṹ�����һ��ͼ��ĳ�"
        "�����ָ���ߴ磬��������ȡ��"
        "</ul>\n"
        "������ͷ�����µĺ��壺\n"
        "<ul>\n"
        "<li>����ɫ�ļ�ͷ������ʾ������֮��Ĺ��м̳й�ϵ��\n"
        "<li>����ɫ�ļ�ͷ������ʾ�����̳й�ϵ��\n"
        "<li>���ɫ�ļ�ͷ������ʾ˽�м̳й�ϵ��\n"
        "<li>��ɫ��״�����ļ�ͷ������ʾ������֮���������ʹ�õĹ�ϵ��ͨ����ͷ�Աߵı�������"
        "���ʵ���ͷ��ָ�����ṹ��\n"
        "</ul>\n";
    }
    /*! text for the link to the legend page */
    QCString trLegend()
    {
      return "ͼ��";
    }

//////////////////////////////////////////////////////////////////////////
// new since 1.2.0
//////////////////////////////////////////////////////////////////////////
    
    /*! Used as a marker that is put before a test item */
    virtual QCString trTest()
    {
      return "����";
    }
    /*! Used as the header of the test list */
    virtual QCString trTestList()
    {
      return "�����б�";
    }

};

#endif
