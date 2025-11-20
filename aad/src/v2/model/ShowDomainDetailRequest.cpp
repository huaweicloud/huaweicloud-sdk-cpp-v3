

#include "huaweicloud/aad/v2/model/ShowDomainDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ShowDomainDetailRequest::ShowDomainDetailRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
}

ShowDomainDetailRequest::~ShowDomainDetailRequest() = default;

void ShowDomainDetailRequest::validate()
{
}

web::json::value ShowDomainDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool ShowDomainDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ShowDomainDetailRequest::getDomainId() const
{
    return domainId_;
}

void ShowDomainDetailRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowDomainDetailRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowDomainDetailRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


