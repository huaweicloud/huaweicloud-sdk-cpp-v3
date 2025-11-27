

#include "huaweicloud/cdn/v2/model/CnameStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CnameStatus::CnameStatus()
{
    status_ = 0;
    statusIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
}

CnameStatus::~CnameStatus() = default;

void CnameStatus::validate()
{
}

web::json::value CnameStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }

    return val;
}
bool CnameStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    return ok;
}


int32_t CnameStatus::getStatus() const
{
    return status_;
}

void CnameStatus::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CnameStatus::statusIsSet() const
{
    return statusIsSet_;
}

void CnameStatus::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CnameStatus::getDomainName() const
{
    return domainName_;
}

void CnameStatus::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool CnameStatus::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void CnameStatus::unsetdomainName()
{
    domainNameIsSet_ = false;
}

}
}
}
}
}


