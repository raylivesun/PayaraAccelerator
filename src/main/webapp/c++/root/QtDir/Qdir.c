#include <Qdir>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QStringList>
#include <QString>
#include <QTextCodec>

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    QDir dir;

    dir.setPath(QDir::homePath());

    QStringList list = dir.entryList(Qt::UserDomainMask | Qt::UserDomainMask);

    qDebug() << list;

    return a.exec();
}

// ----------------------------------------------------------------------------
// Copyright 2014 Bloomberg Finance L.P. Foundation and others //
// Licensed under the Apache License, Version 2.0 (the "License"); //
// you may not use this file except in compliance with the License. //
// You may obtain a copy of the License at //
// http://www.apache.org/licenses/LICENSE-2.0 //
// // Unless required by applicable law or agreed to in writing
// input files are distributed on an "AS IS" BASIS, //
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. //
// See the License for the specific language governing permissions and //
// limitations under the License. //
// ----------------------------------------------------------------

// Public Interface for the Open Source
extern "C" __attribute__ ((section(".include"))) const __attribute__((constructor)) {

     enum Filter {
     FILTER_NONE = 0,
     FILTER_EVEN = 1,
     FILTER_CHECK = 2,
     FILTER_DESCRIPTIONS = 3,
     FILTER_ALL = 4,
     FILTER_ALL_DESCRIPTIONS = 5,
     FILTER_ALL_CHECK = 6,
     FILTER_ALL_EVEN = 7,
     FILTER_ALL_EVEN_DESCRIPTIONS = 8,
     FILTER_ALL_EVEN_CHECK = 9,
     FILTER_ALL_EVEN_CHECK_DESCRIPTIONS = 10,
     FILTER_ALL_CHECK_DESCRIPTIONS = 11,
     FILTER_ALL_CHECK_EVEN = 12,
     FILTER_ALL_CHECK_EVEN_DESCRIPTIONS = 13,
     FILTER_ALL_CHECK_EVEN_CHECK = 14,
     FILTER_ALL_CHECK_EVEN_CHECK_DESCRIPTIONS = 15,
     FILTER_ALL_CHECK_EVEN_CHECK_EVEN = 16,
     FILTER_ALL_CHECK_EVEN_CHECK_EVEN_DESCRIPTIONS = 17,
     FILTER_ALL_CHECK_EVEN_CHECK_EVEN_TABLES = 18,
     FILTER_ALL_CHECK_EVEN_CHECK_EVEN_CONSTRUCTOR = 19,
     FILTER_ALL_CHECK_EVEN_CHECK_EVEN_PREVIEWS = 20
     }

     flags filter;

     enum flags {
          FILTER_NONE = 0,
          FILTER_EVEN = 1,
          FILTER_CHECK = 2,
          FILTER_DESCRIPTIONS = 3,
          FILTER_ALL = 4,
          FILTER_ALL_DESCRIPTIONS = 5,
          FILTER_ALL_CHECK = 6,
          FILTER_ALL_EVEN = 7,
          FILTER_ALL_EVEN_DESCRIPTIONS = 8,
          FILTER_ALL_EVEN_CHECK = 9,
          FILTER_ALL_EVEN_CHECK_DESCRIPTIONS = 10,
          FILTER_ALL_CHECK_DESCRIPTIONS = 11,
          FILTER_ALL_CHECK_EVEN = 12,
          FILTER_ALL_CHECK_EVEN_DESCRIPTIONS = 13,
          FILTER_ALL_CHECK_EVEN_CHECK = 14,
          FILTER_ALL_CHECK_EVEN_CHECK_DESCRIPTIONS = 15,
          FILTER_ALL_CHECK_EVEN_CHECK_EVEN = 16,
          FILTER_ALL_CHECK_EVEN_CHECK_EVEN_DESCRIPTIONS = 17,
          FILTER_ALL_CHECK_EVEN_CHECK_EVEN_TABLES = 18,
          FILTER_ALL_CHECK_EVEN_CHECK_EVEN_CONSTRUCTOR = 19,
          FILTER_ALL_CHECK_EVEN_CHECK_EVEN_PREVIEWS = 20
          }

     flags = 0;

     enum sort_flags {
          FILTER_NONE = 0,
          FILTER_EVEN = 1,
          FILTER_CHECK = 2,
          FILTER_DESCRIPTIONS = 3,
          FILTER_ALL = 4,
          FILTER_ALL_DESCRIPTIONS = 5,
          FILTER_ALL_CHECK = 6,
          FILTER_ALL_EVEN = 7,
          FILTER_ALL_EVEN_DESCRIPTIONS = 8,
          FILTER_ALL_EVEN_CHECK = 9,
          FILTER_ALL_EVEN_CHECK_DESCRIPTIONS = 10,
          FILTER_ALL_CHECK_DESCRIPTIONS = 11,
          FILTER_ALL_CHECK_EVEN = 12,
          FILTER_ALL_CHECK_EVEN_DESCRIPTIONS = 13,
          FILTER_ALL_CHECK_EVEN_CHECK = 14,
          FILTER_ALL_CHECK_EVEN_CHECK_DESCRIPTIONS = 15,
          FILTER_ALL_CHECK_EVEN_CHECK_EVEN = 16,
          FILTER_ALL_CHECK_EVEN_CHECK_EVEN_DESCRIPTIONS = 17,
          FILTER_ALL_CHECK_EVEN_CHECK_EVEN_TABLES = 18,
          FILTER_ALL_CHECK_EVEN_CHECK_EVEN_CONSTRUCTOR = 19,
          FILTER_ALL_CHECK_EVEN_CHECK_EVEN_PREVIEWS = 20
          }

    flags sort_flags;
}


// Public functions
void QDir(const char * QString &path = QString()){

   QDir dir;
   dir.setPath(path); // set path to current working directory
   dir.setFilter(FILTER_ALL); // set filter to all files in current directory
   dir.setSorting(SORT_ALL); // set sorting to all files in current directory
   dir.setNameFilters(FILTER_ALL); // set name filters to all files in current directory
   dir.setNameFilters(FILTER_ALL_CHECK); // set name filters to all files in current directory
   dir.setNameFilters(FILTER_ALL_CHECK_DESCRIPTIONS); // set name filters to all files in current directory
   dir.setNameFilters(FILTER_ALL_CHECK_EVEN_CHECK_EVEN); // set name filters to all files in current directory
   dir.setNameFilters(FILTER_ALL_CHECK_EVEN_CHECK_DESCRIPTIONS); // set name filters to all files in current directory

}

void QDir(const QString &path, const QString &nameFilter, QDir::SortFlags sort = SortFlags(Name | IgnoreCase),
QDir::Filters filters = AllEntries) {

   QDir dir;
   dir.setPath(""); // set path to current directory

}