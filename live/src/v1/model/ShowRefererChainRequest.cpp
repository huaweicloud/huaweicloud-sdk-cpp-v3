

#include "huaweicloud/live/v1/model/ShowRefererChainRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowRefererChainRequest::ShowRefererChainRequest()
{
    domain_ = "";
    domainIsSet_ = false;
}

ShowRefererChainRequest::~ShowRefererChainRequest() = default;

void ShowRefererChainRequest::validate()
{
}

web::json::value ShowRefererChainRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}
bool ShowRefererChainRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowRefererChainRequest::getDomain() const
{
    return domain_;
}

void ShowRefererChainRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ShowRefererChainRequest::domainIsSet() const
{
    return domainIsSet_;
}

void ShowRefererChainRequest::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


