function run(fruits) {
    var result;

    switch (fruits) {
        case "Banana":
            result = "This is a Banana";
        case "Apple":
            result = "This is an Apple";
            break;
        default:
            result = "No fruits";
    }

    return result;
}