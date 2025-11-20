

#include "huaweicloud/aad/v2/model/ListGlobalConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListGlobalConfigResponse::ListGlobalConfigResponse()
{
    supportTlsIsSet_ = false;
    cipherIsSet_ = false;
}

ListGlobalConfigResponse::~ListGlobalConfigResponse() = default;

void ListGlobalConfigResponse::validate()
{
}

web::json::value ListGlobalConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(supportTlsIsSet_) {
        val[utility::conversions::to_string_t("support_tls")] = ModelBase::toJson(supportTls_);
    }
    if(cipherIsSet_) {
        val[utility::conversions::to_string_t("cipher")] = ModelBase::toJson(cipher_);
    }

    return val;
}
bool ListGlobalConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("support_tls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_tls"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportTls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cipher"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cipher"));
        if(!fieldValue.is_null())
        {
            std::vector<CipherInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCipher(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListGlobalConfigResponse::getSupportTls()
{
    return supportTls_;
}

void ListGlobalConfigResponse::setSupportTls(const std::vector<std::string>& value)
{
    supportTls_ = value;
    supportTlsIsSet_ = true;
}

bool ListGlobalConfigResponse::supportTlsIsSet() const
{
    return supportTlsIsSet_;
}

void ListGlobalConfigResponse::unsetsupportTls()
{
    supportTlsIsSet_ = false;
}

std::vector<CipherInfo>& ListGlobalConfigResponse::getCipher()
{
    return cipher_;
}

void ListGlobalConfigResponse::setCipher(const std::vector<CipherInfo>& value)
{
    cipher_ = value;
    cipherIsSet_ = true;
}

bool ListGlobalConfigResponse::cipherIsSet() const
{
    return cipherIsSet_;
}

void ListGlobalConfigResponse::unsetcipher()
{
    cipherIsSet_ = false;
}

}
}
}
}
}


