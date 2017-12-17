///////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2017 Edouard Griffiths, F4EXB.                                  //
//                                                                               //
// Swagger server adapter interface                                              //
//                                                                               //
// This program is free software; you can redistribute it and/or modify          //
// it under the terms of the GNU General Public License as published by          //
// the Free Software Foundation as version 3 of the License, or                  //
//                                                                               //
// This program is distributed in the hope that it will be useful,               //
// but WITHOUT ANY WARRANTY; without even the implied warranty of                //
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the                  //
// GNU General Public License V3 for more details.                               //
//                                                                               //
// You should have received a copy of the GNU General Public License             //
// along with this program. If not, see <http://www.gnu.org/licenses/>.          //
///////////////////////////////////////////////////////////////////////////////////

#ifndef SDRSRV_WEBAPI_WEBAPIADAPTERSRV_H_
#define SDRSRV_WEBAPI_WEBAPIADAPTERSRV_H_

#include <QtGlobal>

#include "webapi/webapiadapterinterface.h"

class MainCore;

class WebAPIAdapterSrv: public WebAPIAdapterInterface
{
public:
    WebAPIAdapterSrv(MainCore& mainCore);
    virtual ~WebAPIAdapterSrv();

private:
    MainCore& m_mainCore;
};

#endif /* SDRSRV_WEBAPI_WEBAPIADAPTERSRV_H_ */