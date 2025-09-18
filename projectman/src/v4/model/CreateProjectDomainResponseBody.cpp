

#include "huaweicloud/projectman/v4/model/CreateProjectDomainResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateProjectDomainResponseBody::CreateProjectDomainResponseBody()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
}

CreateProjectDomainResponseBody::~CreateProjectDomainResponseBody() = default;

void CreateProjectDomainResponseBody::validate()
{
}

web::json::value CreateProjectDomainResponseBody::toJson() const
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
bool CreateProjectDomainResponseBody::fromJson(const web::json::value& val)
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


std::string CreateProjectDomainResponseBody::getDomainName() const
{
    return domainName_;
}

void CreateProjectDomainResponseBody::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool CreateProjectDomainResponseBody::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void CreateProjectDomainResponseBody::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string CreateProjectDomainResponseBody::getDomainId() const
{
    return domainId_;
}

void CreateProjectDomainResponseBody::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateProjectDomainResponseBody::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateProjectDomainResponseBody::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


