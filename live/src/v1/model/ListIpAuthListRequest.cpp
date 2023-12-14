

#include "huaweicloud/live/v1/model/ListIpAuthListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListIpAuthListRequest::ListIpAuthListRequest()
{
    domain_ = "";
    domainIsSet_ = false;
}

ListIpAuthListRequest::~ListIpAuthListRequest() = default;

void ListIpAuthListRequest::validate()
{
}

web::json::value ListIpAuthListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}
bool ListIpAuthListRequest::fromJson(const web::json::value& val)
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


std::string ListIpAuthListRequest::getDomain() const
{
    return domain_;
}

void ListIpAuthListRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ListIpAuthListRequest::domainIsSet() const
{
    return domainIsSet_;
}

void ListIpAuthListRequest::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


