

#include "huaweicloud/cce/v3/model/AuthenticatingProxy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AuthenticatingProxy::AuthenticatingProxy()
{
    ca_ = "";
    caIsSet_ = false;
    cert_ = "";
    certIsSet_ = false;
    privateKey_ = "";
    privateKeyIsSet_ = false;
}

AuthenticatingProxy::~AuthenticatingProxy() = default;

void AuthenticatingProxy::validate()
{
}

web::json::value AuthenticatingProxy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(caIsSet_) {
        val[utility::conversions::to_string_t("ca")] = ModelBase::toJson(ca_);
    }
    if(certIsSet_) {
        val[utility::conversions::to_string_t("cert")] = ModelBase::toJson(cert_);
    }
    if(privateKeyIsSet_) {
        val[utility::conversions::to_string_t("privateKey")] = ModelBase::toJson(privateKey_);
    }

    return val;
}
bool AuthenticatingProxy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ca"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ca"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCa(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cert"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cert"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCert(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("privateKey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privateKey"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateKey(refVal);
        }
    }
    return ok;
}


std::string AuthenticatingProxy::getCa() const
{
    return ca_;
}

void AuthenticatingProxy::setCa(const std::string& value)
{
    ca_ = value;
    caIsSet_ = true;
}

bool AuthenticatingProxy::caIsSet() const
{
    return caIsSet_;
}

void AuthenticatingProxy::unsetca()
{
    caIsSet_ = false;
}

std::string AuthenticatingProxy::getCert() const
{
    return cert_;
}

void AuthenticatingProxy::setCert(const std::string& value)
{
    cert_ = value;
    certIsSet_ = true;
}

bool AuthenticatingProxy::certIsSet() const
{
    return certIsSet_;
}

void AuthenticatingProxy::unsetcert()
{
    certIsSet_ = false;
}

std::string AuthenticatingProxy::getPrivateKey() const
{
    return privateKey_;
}

void AuthenticatingProxy::setPrivateKey(const std::string& value)
{
    privateKey_ = value;
    privateKeyIsSet_ = true;
}

bool AuthenticatingProxy::privateKeyIsSet() const
{
    return privateKeyIsSet_;
}

void AuthenticatingProxy::unsetprivateKey()
{
    privateKeyIsSet_ = false;
}

}
}
}
}
}


