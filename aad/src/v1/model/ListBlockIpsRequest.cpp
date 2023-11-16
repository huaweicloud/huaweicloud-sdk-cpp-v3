

#include "huaweicloud/aad/v1/model/ListBlockIpsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ListBlockIpsRequest::ListBlockIpsRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
}

ListBlockIpsRequest::~ListBlockIpsRequest() = default;

void ListBlockIpsRequest::validate()
{
}

web::json::value ListBlockIpsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool ListBlockIpsRequest::fromJson(const web::json::value& val)
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


std::string ListBlockIpsRequest::getDomainId() const
{
    return domainId_;
}

void ListBlockIpsRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListBlockIpsRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListBlockIpsRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


