# 16Byte input Two-Dimensional-Parity-Check

two dimensional parity check is Error detection code      
more detailed explain : https://thecsemonk.com/two-dimensional-parity/    

# Input example :    

FIRST :     
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1

SECONDE :     
1 1 1 1   
1 1 1 1   
1 1 1 1   
1 1 1 1   

# Failed Input example : 

FIRST :      
1111111111111111

SECONDE :    
1111   
1111   
1111  
1111  

# Input example at changing arr value    
1 1 1(The program will print 'correct!')
      
# Failed Input example        
-1 1 1 : Failed offset ( right offset range 0 ~ 4)    
1 -1 1 : Failed offset ( right offset range 0 ~ 4)           
1 1 -1 : Failed Value ( Value must be greather than or equal to 0 and less than 10 )
