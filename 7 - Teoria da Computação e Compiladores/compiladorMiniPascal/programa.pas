PROGRAM programa;
INT
    B, C, D;
BOOLEAN
    A;
PROCEDURE A
    VAR A: a;
    BEGIN
        A := B;
    END;
BEGIN
    A := true;
    B := 5;
    C := 1;
    D := B + C;
    IF (D > 7) THEN A:=1
    ELSE IF (D = 10) THEN B:=2;
    WHILE (B < 5)
    DO B:=B+1;
    READ(A);
    WRITE('a');
END.