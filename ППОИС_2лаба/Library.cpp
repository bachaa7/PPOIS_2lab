#include </�����/�����/����/�����_2����/�����_2����/Library.h>



void Library::addMedia(AudioContent* media) {
    mediaCollection.push_back(media);
    cout << "��������� " << media->getTitle() << " �������� � ����������.\n";
}

void Library::removeMedia(const string& title) {
    for (auto it = mediaCollection.begin(); it != mediaCollection.end(); ++it) {
        if ((*it)->getTitle() == title) {
            cout << "��������� " << title << " ������ �� ����������.\n";
            mediaCollection.erase(it);
            return;
        }
    }
    cout << "��������� � ��������� " << title << " �� ������ � ����������.\n";
}

AudioContent* Library::findMedia(const string& title) {
    for (auto& media : mediaCollection) {
        if (media->getTitle() == title) {
            return media;
        }
    }
    cout << "��������� � ��������� " << title << " �� ������.\n";
    return nullptr;
}

void Library::displayAllMedia() const {
    cout << "������ ���� ����������� � ����������:\n";
    for (const auto& media : mediaCollection) {
        cout << "- " << media->getTitle() << endl;
    }
}
