import PyPDF2
pdfFileObj = open('9678-2014.pdf','rb')
pdfReader = PyPDF2.PdfFileReader(pdfFileObj)
pageObj = pdfReader.getPage(0)
out = open('9678-2014.txt', 'w')
out.write(pageObj.extractText())
out.close()
