# this programme is for multiplication of two matrices
# n=0
# total_matrices=[]
# while n<2:
#     size_row=int(input("enter no of rows for matrix"))
#     size_col=int(input("enter no of columns for matrix"))
#     Matrix_a=[]
#     for i in range(size_row):
#         a=[]
#         for j in range(size_col):
#             b=int(input())
#             a.append(b)
#         Matrix_a.append(a)
            
#     print(Matrix_a)
#     n+=1       
#     total_matrices.append(Matrix_a)
# print(total_matrices)    

matrix_1=[[1,2],
          [3,4]]
matrix_2=[[5,6],
           [7,8]] 
mul_matrix=[]
for i in range(2):                      #0 1
    for j in range(2):
        e=[]
        for k in range(2):
            m=0
            m+=matrix_1[i][k]*matrix_2[j][k]
            e.append(m)
        mul_matrix.append(e)
print(mul_matrix)                     
                                       


    