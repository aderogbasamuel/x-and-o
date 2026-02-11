START
Initialize board
Set currentPlayer to X

WHILE game not over
    Display board
    Get player move
    IF move is invalid
        Ask for another move
    ELSE
        Place symbol
        IF player wins
            Display winner
            END GAME
        ELSE IF board is full
            Display draw
            END GAME
        ELSE
            Switch player
        END IF
    END IF
END WHILE
END
