

#include "huaweicloud/live/v1/model/ListPublishTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListPublishTemplateRequest::ListPublishTemplateRequest()
{
    domain_ = "";
    domainIsSet_ = false;
}

ListPublishTemplateRequest::~ListPublishTemplateRequest() = default;

void ListPublishTemplateRequest::validate()
{
}

web::json::value ListPublishTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}
bool ListPublishTemplateRequest::fromJson(const web::json::value& val)
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


std::string ListPublishTemplateRequest::getDomain() const
{
    return domain_;
}

void ListPublishTemplateRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ListPublishTemplateRequest::domainIsSet() const
{
    return domainIsSet_;
}

void ListPublishTemplateRequest::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


