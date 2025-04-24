

#include "huaweicloud/cdn/v2/model/UpdateDomainMultiCertificatesResponseBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




UpdateDomainMultiCertificatesResponseBody_result::UpdateDomainMultiCertificatesResponseBody_result()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
}

UpdateDomainMultiCertificatesResponseBody_result::~UpdateDomainMultiCertificatesResponseBody_result() = default;

void UpdateDomainMultiCertificatesResponseBody_result::validate()
{
}

web::json::value UpdateDomainMultiCertificatesResponseBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }

    return val;
}
bool UpdateDomainMultiCertificatesResponseBody_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    return ok;
}


std::string UpdateDomainMultiCertificatesResponseBody_result::getDomainName() const
{
    return domainName_;
}

void UpdateDomainMultiCertificatesResponseBody_result::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool UpdateDomainMultiCertificatesResponseBody_result::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void UpdateDomainMultiCertificatesResponseBody_result::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string UpdateDomainMultiCertificatesResponseBody_result::getStatus() const
{
    return status_;
}

void UpdateDomainMultiCertificatesResponseBody_result::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateDomainMultiCertificatesResponseBody_result::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateDomainMultiCertificatesResponseBody_result::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateDomainMultiCertificatesResponseBody_result::getReason() const
{
    return reason_;
}

void UpdateDomainMultiCertificatesResponseBody_result::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool UpdateDomainMultiCertificatesResponseBody_result::reasonIsSet() const
{
    return reasonIsSet_;
}

void UpdateDomainMultiCertificatesResponseBody_result::unsetreason()
{
    reasonIsSet_ = false;
}

}
}
}
}
}


