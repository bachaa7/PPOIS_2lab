#include </Учеба/ППОИС/Лабы/ППОИС_2лаба/ППОИС_2лаба/Library.h>



void Library::addMedia(AudioContent* media) {
    mediaCollection.push_back(media);
    cout << "Медиафайл " << media->getTitle() << " добавлен в библиотеку.\n";
}

void Library::removeMedia(const string& title) {
    for (auto it = mediaCollection.begin(); it != mediaCollection.end(); ++it) {
        if ((*it)->getTitle() == title) {
            cout << "Медиафайл " << title << " удален из библиотеки.\n";
            mediaCollection.erase(it);
            return;
        }
    }
    cout << "Медиафайл с названием " << title << " не найден в библиотеке.\n";
}

AudioContent* Library::findMedia(const string& title) {
    for (auto& media : mediaCollection) {
        if (media->getTitle() == title) {
            return media;
        }
    }
    cout << "Медиафайл с названием " << title << " не найден.\n";
    return nullptr;
}

void Library::displayAllMedia() const {
    cout << "Список всех медиафайлов в библиотеке:\n";
    for (const auto& media : mediaCollection) {
        cout << "- " << media->getTitle() << endl;
    }
}
