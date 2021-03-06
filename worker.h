/*
 * Copyright (C) 2013 Gauvain Pocentek <gauvain@pocentek.net>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef WORKER_H
#define WORKER_H

#include <QLabel>
#include <QImage>
#include <QTimer>
#include <QFileInfoList>

class Worker : public QLabel
{
    Q_OBJECT

public:
    Worker();

public slots:
    void start();
    void stop();

private:
    QTimer m_timer;
    QFileInfoList m_files;
    int m_idx;

    void buildFilesList();
    bool setImage(QString &path);

private slots:
    void showNext();

signals:
    void stopped();
};

#endif
