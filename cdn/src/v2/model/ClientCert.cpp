

#include "huaweicloud/cdn/v2/model/ClientCert.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ClientCert::ClientCert()
{
    validation_ = 0;
    validationIsSet_ = false;
    trustedCert_ = "";
    trustedCertIsSet_ = false;
    hosts_ = "";
    hostsIsSet_ = false;
}

ClientCert::~ClientCert() = default;

void ClientCert::validate()
{
}

web::json::value ClientCert::toJson() const
{
    web::json::value val = web::json::value::object();

    if(validationIsSet_) {
        val[utility::conversions::to_string_t("validation")] = ModelBase::toJson(validation_);
    }
    if(trustedCertIsSet_) {
        val[utility::conversions::to_string_t("trusted_cert")] = ModelBase::toJson(trustedCert_);
    }
    if(hostsIsSet_) {
        val[utility::conversions::to_string_t("hosts")] = ModelBase::toJson(hosts_);
    }

    return val;
}
bool ClientCert::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("validation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validation"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trusted_cert"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trusted_cert"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrustedCert(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hosts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hosts"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHosts(refVal);
        }
    }
    return ok;
}


int32_t ClientCert::getValidation() const
{
    return validation_;
}

void ClientCert::setValidation(int32_t value)
{
    validation_ = value;
    validationIsSet_ = true;
}

bool ClientCert::validationIsSet() const
{
    return validationIsSet_;
}

void ClientCert::unsetvalidation()
{
    validationIsSet_ = false;
}

std::string ClientCert::getTrustedCert() const
{
    return trustedCert_;
}

void ClientCert::setTrustedCert(const std::string& value)
{
    trustedCert_ = value;
    trustedCertIsSet_ = true;
}

bool ClientCert::trustedCertIsSet() const
{
    return trustedCertIsSet_;
}

void ClientCert::unsettrustedCert()
{
    trustedCertIsSet_ = false;
}

std::string ClientCert::getHosts() const
{
    return hosts_;
}

void ClientCert::setHosts(const std::string& value)
{
    hosts_ = value;
    hostsIsSet_ = true;
}

bool ClientCert::hostsIsSet() const
{
    return hostsIsSet_;
}

void ClientCert::unsethosts()
{
    hostsIsSet_ = false;
}

}
}
}
}
}


