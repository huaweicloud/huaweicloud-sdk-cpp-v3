

#include "huaweicloud/aad/v1/model/ListInstanceIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ListInstanceIdRequest::ListInstanceIdRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
}

ListInstanceIdRequest::~ListInstanceIdRequest() = default;

void ListInstanceIdRequest::validate()
{
}

web::json::value ListInstanceIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool ListInstanceIdRequest::fromJson(const web::json::value& val)
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


std::string ListInstanceIdRequest::getDomainId() const
{
    return domainId_;
}

void ListInstanceIdRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListInstanceIdRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListInstanceIdRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


