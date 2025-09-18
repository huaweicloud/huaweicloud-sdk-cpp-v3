

#include "huaweicloud/projectman/v4/model/CreateProjectDomainResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateProjectDomainResponse::CreateProjectDomainResponse()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
}

CreateProjectDomainResponse::~CreateProjectDomainResponse() = default;

void CreateProjectDomainResponse::validate()
{
}

web::json::value CreateProjectDomainResponse::toJson() const
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
bool CreateProjectDomainResponse::fromJson(const web::json::value& val)
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


std::string CreateProjectDomainResponse::getDomainName() const
{
    return domainName_;
}

void CreateProjectDomainResponse::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool CreateProjectDomainResponse::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void CreateProjectDomainResponse::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string CreateProjectDomainResponse::getDomainId() const
{
    return domainId_;
}

void CreateProjectDomainResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateProjectDomainResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateProjectDomainResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


