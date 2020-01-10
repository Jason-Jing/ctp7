#include <iostream>
#include "CMdSpi.h"
#include "CTdApi.h"
#include "ctp7.h"

Ctp7::Ctp7() : m_spi(nullptr), m_api(nullptr){
}

void Ctp7::ConnectToCtp(){
    if(nullptr == m_spi){
        m_spi = new CMdSpi();
    }

    if(nullptr == m_api){
        m_api = new CTdApi();
    }
}

void Ctp7::DisconnectFromCtp(){

}

Ctp7::~Ctp7(){
    if(nullptr == m_spi){
        delete m_spi;
    }

    if(nullptr == m_api){
        delete m_api;
    }
}
