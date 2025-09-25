

#include "huaweicloud/codeartspipeline/v2/model/ListAvailablePublisherRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListAvailablePublisherRequest::ListAvailablePublisherRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
}

ListAvailablePublisherRequest::~ListAvailablePublisherRequest() = default;

void ListAvailablePublisherRequest::validate()
{
}

web::json::value ListAvailablePublisherRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool ListAvailablePublisherRequest::fromJson(const web::json::value& val)
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


std::string ListAvailablePublisherRequest::getDomainId() const
{
    return domainId_;
}

void ListAvailablePublisherRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListAvailablePublisherRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListAvailablePublisherRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


