

#include "huaweicloud/projectman/v4/model/CreateProjectDomainRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateProjectDomainRequestBody::CreateProjectDomainRequestBody()
{
    domainName_ = "";
    domainNameIsSet_ = false;
}

CreateProjectDomainRequestBody::~CreateProjectDomainRequestBody() = default;

void CreateProjectDomainRequestBody::validate()
{
}

web::json::value CreateProjectDomainRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }

    return val;
}
bool CreateProjectDomainRequestBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateProjectDomainRequestBody::getDomainName() const
{
    return domainName_;
}

void CreateProjectDomainRequestBody::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool CreateProjectDomainRequestBody::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void CreateProjectDomainRequestBody::unsetdomainName()
{
    domainNameIsSet_ = false;
}

}
}
}
}
}


