import xlsxwriter

workbook = xlsxwriter.Workbook('UserDetails.xlsx')
worksheet = workbook.add_worksheet()

head = ('First Name','Last Name','Date of Birth','City')

row = 0
col = 0

for item in (head):
    worksheet.write(row, col, item)
    col += 1
row+=1
for i in range(10):
    col=0
    fn = raw_input("Enter First Name: ")
    worksheet.write(row, col, fn)
    col += 1
    ln = raw_input("Enter Last Name: ")
    worksheet.write(row, col, ln)
    col += 1
    dob = raw_input("Enter Date Of Birth: ")
    worksheet.write(row, col, dob)
    col += 1
    city = raw_input("Enter City: ")
    worksheet.write(row, col, city)
    row +=1

workbook.close()