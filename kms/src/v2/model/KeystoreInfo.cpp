

#include "huaweicloud/kms/v2/model/KeystoreInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




KeystoreInfo::KeystoreInfo()
{
    keystoreId_ = "";
    keystoreIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
}

KeystoreInfo::~KeystoreInfo() = default;

void KeystoreInfo::validate()
{
}

web::json::value KeystoreInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keystoreIdIsSet_) {
        val[utility::conversions::to_string_t("keystore_id")] = ModelBase::toJson(keystoreId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}

bool KeystoreInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keystore_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keystore_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeystoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    return ok;
}

std::string KeystoreInfo::getKeystoreId() const
{
    return keystoreId_;
}

void KeystoreInfo::setKeystoreId(const std::string& value)
{
    keystoreId_ = value;
    keystoreIdIsSet_ = true;
}

bool KeystoreInfo::keystoreIdIsSet() const
{
    return keystoreIdIsSet_;
}

void KeystoreInfo::unsetkeystoreId()
{
    keystoreIdIsSet_ = false;
}

std::string KeystoreInfo::getDomainId() const
{
    return domainId_;
}

void KeystoreInfo::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool KeystoreInfo::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void KeystoreInfo::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


