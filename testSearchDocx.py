# This Python file uses the following encoding: utf-8

# if __name__ == "__main__":
#     pass
from docx import Document
def searchWord(a):
    count = 1
    flag = 0
    doc=Document("C:\\Users\\huawei\\iCloudDrive\\EngineeringRecords\\工程记录管理测试.docx")
    for p in doc.paragraphs:
        for j in p.text:
            if j == "一":
                flag = 1
                break
        if flag == 1:
            break
    path = "C:\\Users\\huawei\\iCloudDrive\\EngineeringRecords\\工程记录管理测试.docx"
    return 'path=', path

