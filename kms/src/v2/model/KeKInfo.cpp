

#include "huaweicloud/kms/v2/model/KeKInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




KeKInfo::KeKInfo()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
}

KeKInfo::~KeKInfo() = default;

void KeKInfo::validate()
{
}

web::json::value KeKInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool KeKInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
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


std::string KeKInfo::getKeyId() const
{
    return keyId_;
}

void KeKInfo::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool KeKInfo::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void KeKInfo::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string KeKInfo::getDomainId() const
{
    return domainId_;
}

void KeKInfo::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool KeKInfo::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void KeKInfo::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


