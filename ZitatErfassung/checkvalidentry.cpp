#include "checkvalidentry.h"

CheckValidEntry::CheckValidEntry()
{

}

bool CheckValidEntry::CheckValidName(QString p_entry)
{
    for (int i =0; i<p_entry.size(); i++)
    {
        if (!p_entry[i].isLetterOrNumber())
            this->isValid = false;
    }
    //iteriert durch string und prüft auf alphanumerische characters.
    //gibt false zurück bei anderen zeichen

    return this->isValid;
}

bool CheckValidEntry::CheckValidPasswrd(QString p_entry)
{
    if (p_entry.contains(" "))
        this->isValid = false;
    if (p_entry.size()<8)
        this->isValid = false;

    return this->isValid;
}

bool CheckValidEntry::CheckValidZitat(p_entry)
{
    if (this->entry.contains("/") || this->entry.contains("*"))
        this->isValid = false;

    return this->isValid;
}
