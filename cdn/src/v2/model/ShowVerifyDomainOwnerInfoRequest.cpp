

#include "huaweicloud/cdn/v2/model/ShowVerifyDomainOwnerInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowVerifyDomainOwnerInfoRequest::ShowVerifyDomainOwnerInfoRequest()
{
    domainName_ = "";
    domainNameIsSet_ = false;
}

ShowVerifyDomainOwnerInfoRequest::~ShowVerifyDomainOwnerInfoRequest() = default;

void ShowVerifyDomainOwnerInfoRequest::validate()
{
}

web::json::value ShowVerifyDomainOwnerInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }

    return val;
}
bool ShowVerifyDomainOwnerInfoRequest::fromJson(const web::json::value& val)
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


std::string ShowVerifyDomainOwnerInfoRequest::getDomainName() const
{
    return domainName_;
}

void ShowVerifyDomainOwnerInfoRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowVerifyDomainOwnerInfoRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowVerifyDomainOwnerInfoRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

}
}
}
}
}


