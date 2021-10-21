"""
Time：2021/10/13 16:38
Author: Qi Chengwen(BUAA)
Version: V1.0
File: WordDocProcess.py
IDE:Jetbrains PyCharm
Description: 用于word文件的创建搜索和处理
"""

from docx import Document
from docx.shared import Pt
from docx.oxml.ns import qn
from docx.shared import Inches
import time
import os


# doc=Document("C:\\Users\\huawei\\iCloudDrive\\EngineeringRecords\\工程记录管理测试.docx")
# for p in doc.paragraphs:
#     for j in p.text:
#         if j == "一":
#             print(1)

def createEngineeringDoc(title, author, contacts, tags, content, filepath, filename):
    document = Document()
    document.add_heading(title, 0)
    authorParagraph = document.add_paragraph('Author：')  # 添加作者信息
    authorRun = authorParagraph.add_run(author)
    authorRun.font.name = u'楷体'
    authorr = authorRun._element
    authorr.rPr.rFonts.set(qn('w:eastAsia'), u'楷体')
    today = time.strftime("%Y-%m-%d", time.localtime())
    document.add_paragraph('Time：' + today)  # 添加时间信息
    document.add_paragraph('Contacts：' + contacts)  # 添加联系方式信息
    tagParagraph = document.add_paragraph('TAGs：')  # 添加Tag
    tagRun = tagParagraph.add_run(tags)
    tagRun.font.name = u'楷体'
    tagrr = tagRun._element
    tagrr.rPr.rFonts.set(qn('w:eastAsia'), u'楷体')
    document.add_heading(time.strftime("%Y-%m-%d---%H:%M:%S", time.localtime()), 1)  # 添加当前时间

    paragraph = document.add_paragraph()
    run = paragraph.add_run(content)
    run.font.name = u'宋体'
    run.font.size = Pt(12)
    r = run._element
    r.rPr.rFonts.set(qn('w:eastAsia'), u'宋体')

    # # 增加分页
    # document.add_page_break()

    # 保存文件
    if not os.path.exists(filepath):
        os.makedirs(filepath)
    document.save(filepath + '\\' + filename + '.docx')
    return 1.0



#createEngineeringDoc('测试功能', '齐承文-BUAA', 'Chengwen_qi@outlook.com', '测试', '本文件用于测试创建的功能',
#                     'D:\\testCreate\\testMultiDir')
# 参考https://www.jianshu.com/p/1f60cdd9655a
