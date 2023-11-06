#include <stdio.h>
#include <strings.h>

int placeholderFunction();

int main() {
    int room, totalCost = 0, roomCost = 0, boardType, boardCost = 0, dailyNewspaper, mainUserAge, guestAges[4], numberOfGuests, discountAmount;
    float dailyNewspaperCost;
    char bookingID[20], mainGuestName[50];

    // getting required information, placeholder functions while I wait for database stuff to be done
    boardType = placeholderFunction();
    numberOfGuests = placeholderFunction();
    room = placeholderFunction();
    dailyNewspaper = placeholderFunction();

    if (room == 1 || room == 2){
        roomCost = 100;
    }
    else if (room == 3){
        roomCost = 85;
    }
    else if (room == 4 || room == 5){
        roomCost = 75;
    }
    else{
        roomCost = 60;
    }

    if (boardType == 1){
        boardCost = numberOfGuests * 20;
    }
    else if (boardType == 2){
        boardCost = numberOfGuests * 15;
    }
    else{
        boardCost = numberOfGuests * 5;
    }

    if (dailyNewspaper == 1){
        dailyNewspaperCost = 5.5;
    }



    printf("Booking ID: %s\nGuest Name: %s\n\nRoom Cost: £%d\nBoard Cost: £%d\nNewspaper Cost: £%d\nDiscount Amount: -£%d\n\nTotal Cost: %d", );
}

int placeholderFunction(){
    return 1;
}
