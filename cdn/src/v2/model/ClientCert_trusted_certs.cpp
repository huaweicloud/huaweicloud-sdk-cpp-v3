

#include "huaweicloud/cdn/v2/model/ClientCert_trusted_certs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ClientCert_trusted_certs::ClientCert_trusted_certs()
{
    trustedCert_ = "";
    trustedCertIsSet_ = false;
}

ClientCert_trusted_certs::~ClientCert_trusted_certs() = default;

void ClientCert_trusted_certs::validate()
{
}

web::json::value ClientCert_trusted_certs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trustedCertIsSet_) {
        val[utility::conversions::to_string_t("trusted_cert")] = ModelBase::toJson(trustedCert_);
    }

    return val;
}
bool ClientCert_trusted_certs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("trusted_cert"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trusted_cert"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrustedCert(refVal);
        }
    }
    return ok;
}


std::string ClientCert_trusted_certs::getTrustedCert() const
{
    return trustedCert_;
}

void ClientCert_trusted_certs::setTrustedCert(const std::string& value)
{
    trustedCert_ = value;
    trustedCertIsSet_ = true;
}

bool ClientCert_trusted_certs::trustedCertIsSet() const
{
    return trustedCertIsSet_;
}

void ClientCert_trusted_certs::unsettrustedCert()
{
    trustedCertIsSet_ = false;
}

}
}
}
}
}


