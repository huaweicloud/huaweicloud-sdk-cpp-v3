

#include "huaweicloud/live/v1/model/DeletePublishTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeletePublishTemplateRequest::DeletePublishTemplateRequest()
{
    domain_ = "";
    domainIsSet_ = false;
}

DeletePublishTemplateRequest::~DeletePublishTemplateRequest() = default;

void DeletePublishTemplateRequest::validate()
{
}

web::json::value DeletePublishTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }

    return val;
}
bool DeletePublishTemplateRequest::fromJson(const web::json::value& val)
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


std::string DeletePublishTemplateRequest::getDomain() const
{
    return domain_;
}

void DeletePublishTemplateRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool DeletePublishTemplateRequest::domainIsSet() const
{
    return domainIsSet_;
}

void DeletePublishTemplateRequest::unsetdomain()
{
    domainIsSet_ = false;
}

}
}
}
}
}


