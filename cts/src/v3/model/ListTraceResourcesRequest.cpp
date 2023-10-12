

#include "huaweicloud/cts/v3/model/ListTraceResourcesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




ListTraceResourcesRequest::ListTraceResourcesRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
}

ListTraceResourcesRequest::~ListTraceResourcesRequest() = default;

void ListTraceResourcesRequest::validate()
{
}

web::json::value ListTraceResourcesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool ListTraceResourcesRequest::fromJson(const web::json::value& val)
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


std::string ListTraceResourcesRequest::getDomainId() const
{
    return domainId_;
}

void ListTraceResourcesRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListTraceResourcesRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListTraceResourcesRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


