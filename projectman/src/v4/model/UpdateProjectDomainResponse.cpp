

#include "huaweicloud/projectman/v4/model/UpdateProjectDomainResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateProjectDomainResponse::UpdateProjectDomainResponse()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
}

UpdateProjectDomainResponse::~UpdateProjectDomainResponse() = default;

void UpdateProjectDomainResponse::validate()
{
}

web::json::value UpdateProjectDomainResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool UpdateProjectDomainResponse::fromJson(const web::json::value& val)
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


std::string UpdateProjectDomainResponse::getDomainName() const
{
    return domainName_;
}

void UpdateProjectDomainResponse::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool UpdateProjectDomainResponse::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void UpdateProjectDomainResponse::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string UpdateProjectDomainResponse::getDomainId() const
{
    return domainId_;
}

void UpdateProjectDomainResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateProjectDomainResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateProjectDomainResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


