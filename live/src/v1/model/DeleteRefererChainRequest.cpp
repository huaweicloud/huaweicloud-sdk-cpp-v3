

#include "huaweicloud/live/v1/model/DeleteRefererChainRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteRefererChainRequest::DeleteRefererChainRequest()
{
    domain_ = "";
    domainIsSet_ = false;
}

DeleteRefererChainRequest::~DeleteRefererChainRequest() = default;

void DeleteRefererChainRequest::validate()
{
}

web::json::value DeleteRefererChainRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}
bool DeleteRefererChainRequest::fromJson(const web::json::value& val)
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


std::string DeleteRefererChainRequest::getDomain() const
{
    return domain_;
}

void DeleteRefererChainRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool DeleteRefererChainRequest::domainIsSet() const
{
    return domainIsSet_;
}

void DeleteRefererChainRequest::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


