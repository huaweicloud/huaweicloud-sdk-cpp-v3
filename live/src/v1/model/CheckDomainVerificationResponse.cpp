

#include "huaweicloud/live/v1/model/CheckDomainVerificationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CheckDomainVerificationResponse::CheckDomainVerificationResponse()
{
    domain_ = "";
    domainIsSet_ = false;
    verifyContent_ = "";
    verifyContentIsSet_ = false;
    verifyResult_ = false;
    verifyResultIsSet_ = false;
}

CheckDomainVerificationResponse::~CheckDomainVerificationResponse() = default;

void CheckDomainVerificationResponse::validate()
{
}

web::json::value CheckDomainVerificationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(verifyContentIsSet_) {
        val[utility::conversions::to_string_t("verify_content")] = ModelBase::toJson(verifyContent_);
    }
    if(verifyResultIsSet_) {
        val[utility::conversions::to_string_t("verify_result")] = ModelBase::toJson(verifyResult_);
    }

    return val;
}
bool CheckDomainVerificationResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("verify_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verify_content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerifyContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verify_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verify_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerifyResult(refVal);
        }
    }
    return ok;
}


std::string CheckDomainVerificationResponse::getDomain() const
{
    return domain_;
}

void CheckDomainVerificationResponse::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool CheckDomainVerificationResponse::domainIsSet() const
{
    return domainIsSet_;
}

void CheckDomainVerificationResponse::unsetdomain()
{
    domainIsSet_ = false;
}

std::string CheckDomainVerificationResponse::getVerifyContent() const
{
    return verifyContent_;
}

void CheckDomainVerificationResponse::setVerifyContent(const std::string& value)
{
    verifyContent_ = value;
    verifyContentIsSet_ = true;
}

bool CheckDomainVerificationResponse::verifyContentIsSet() const
{
    return verifyContentIsSet_;
}

void CheckDomainVerificationResponse::unsetverifyContent()
{
    verifyContentIsSet_ = false;
}

bool CheckDomainVerificationResponse::isVerifyResult() const
{
    return verifyResult_;
}

void CheckDomainVerificationResponse::setVerifyResult(bool value)
{
    verifyResult_ = value;
    verifyResultIsSet_ = true;
}

bool CheckDomainVerificationResponse::verifyResultIsSet() const
{
    return verifyResultIsSet_;
}

void CheckDomainVerificationResponse::unsetverifyResult()
{
    verifyResultIsSet_ = false;
}

}
}
}
}
}


