def generate_sentences(words, current_sentence, index, result):
    if index == len(words):
        result.append(current_sentence)
        return

    # Include the current word in the sentence
    generate_sentences(words, current_sentence + words[index] + ' ', index + 1, result)

    # Skip the current word
    generate_sentences(words, current_sentence, index + 1, result)

def main():
    input_string = input("Enter a string of arbitrary length: ")
    words = input_string.split()

    result = []
    generate_sentences(words, '', 0, result)

    for sentence in result:
        print(sentence)

if __name__ == "__main__":
    main()






