

#include "huaweicloud/live/v1/model/CheckDomainVerificationInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CheckDomainVerificationInfo::CheckDomainVerificationInfo()
{
    domain_ = "";
    domainIsSet_ = false;
    verifyType_ = "";
    verifyTypeIsSet_ = false;
}

CheckDomainVerificationInfo::~CheckDomainVerificationInfo() = default;

void CheckDomainVerificationInfo::validate()
{
}

web::json::value CheckDomainVerificationInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(verifyTypeIsSet_) {
        val[utility::conversions::to_string_t("verify_type")] = ModelBase::toJson(verifyType_);
    }

    return val;
}
bool CheckDomainVerificationInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verify_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verify_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerifyType(refVal);
        }
    }
    return ok;
}


std::string CheckDomainVerificationInfo::getDomain() const
{
    return domain_;
}

void CheckDomainVerificationInfo::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool CheckDomainVerificationInfo::domainIsSet() const
{
    return domainIsSet_;
}

void CheckDomainVerificationInfo::unsetdomain()
{
    domainIsSet_ = false;
}

std::string CheckDomainVerificationInfo::getVerifyType() const
{
    return verifyType_;
}

void CheckDomainVerificationInfo::setVerifyType(const std::string& value)
{
    verifyType_ = value;
    verifyTypeIsSet_ = true;
}

bool CheckDomainVerificationInfo::verifyTypeIsSet() const
{
    return verifyTypeIsSet_;
}

void CheckDomainVerificationInfo::unsetverifyType()
{
    verifyTypeIsSet_ = false;
}

}
}
}
}
}


