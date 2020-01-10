#ifndef CTP7_H
#define CTP7_H

class CMdSpi;
class CTdApi;

class Ctp7 {
public:
    Ctp7();

    /// Connect to Ctp：
    void ConnectToCtp();
    void DisconnectFromCtp();
    virtual ~ Ctp7();

private:
    CMdSpi* m_spi;
    CTdApi* m_api;
};

#endif // CTP7_H
