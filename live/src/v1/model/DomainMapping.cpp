

#include "huaweicloud/live/v1/model/DomainMapping.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DomainMapping::DomainMapping()
{
    pullDomain_ = "";
    pullDomainIsSet_ = false;
    pushDomain_ = "";
    pushDomainIsSet_ = false;
}

DomainMapping::~DomainMapping() = default;

void DomainMapping::validate()
{
}

web::json::value DomainMapping::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pullDomainIsSet_) {
        val[utility::conversions::to_string_t("pull_domain")] = ModelBase::toJson(pullDomain_);
    }
    if(pushDomainIsSet_) {
        val[utility::conversions::to_string_t("push_domain")] = ModelBase::toJson(pushDomain_);
    }

    return val;
}

bool DomainMapping::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pull_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pull_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPullDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("push_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("push_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPushDomain(refVal);
        }
    }
    return ok;
}


std::string DomainMapping::getPullDomain() const
{
    return pullDomain_;
}

void DomainMapping::setPullDomain(const std::string& value)
{
    pullDomain_ = value;
    pullDomainIsSet_ = true;
}

bool DomainMapping::pullDomainIsSet() const
{
    return pullDomainIsSet_;
}

void DomainMapping::unsetpullDomain()
{
    pullDomainIsSet_ = false;
}

std::string DomainMapping::getPushDomain() const
{
    return pushDomain_;
}

void DomainMapping::setPushDomain(const std::string& value)
{
    pushDomain_ = value;
    pushDomainIsSet_ = true;
}

bool DomainMapping::pushDomainIsSet() const
{
    return pushDomainIsSet_;
}

void DomainMapping::unsetpushDomain()
{
    pushDomainIsSet_ = false;
}

}
}
}
}
}


