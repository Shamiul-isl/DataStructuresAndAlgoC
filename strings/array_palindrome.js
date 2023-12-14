// given an array of string, return the array sorted by the number of palindromes
// in each string

let phrases = ["Kayak rotator peep nice", "Hello noon", "what did the racecar level", "man child"]

function isPalindrome(phrase) {
    let p1 = 0;
    let p2 = phrase.length - 1;

    while (p2 > p1) {
        if (phrase[p1].toLowerCase() === phrase[p2].toLowerCase()) {
            p1++;
            p2--;
        } else {
            return false
        }
    }

    return true
}

function sortPalindromes(phrases)
{
    let numPal = new Map();
    for (let i = 0; i < phrases.length; i++)
    {
        let pCount = 0;
        let words = phrases[i].split(" ");
        
        for (let j = 0; j < words.length; j++)
        {
            if (isPalindrome(words[j]))
            {
                pCount++;
            }
        }
        console.log(`${phrases[i]}: ${pCount}`)
        numPal.set(phrases[i], pCount);
    }

    phrases.sort((a, b) => numPal.get(a) < numPal.get(b) ? 1 : numPal.get(a) > numPal.get(b) ? -1 : 0);
    return phrases;
}

// console.log(isPalindrome("level"));
console.log(sortPalindromes(phrases));
