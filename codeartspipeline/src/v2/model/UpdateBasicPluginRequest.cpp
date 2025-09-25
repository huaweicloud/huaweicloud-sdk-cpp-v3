

#include "huaweicloud/codeartspipeline/v2/model/UpdateBasicPluginRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UpdateBasicPluginRequest::UpdateBasicPluginRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateBasicPluginRequest::~UpdateBasicPluginRequest() = default;

void UpdateBasicPluginRequest::validate()
{
}

web::json::value UpdateBasicPluginRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateBasicPluginRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            PluginBasicDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateBasicPluginRequest::getDomainId() const
{
    return domainId_;
}

void UpdateBasicPluginRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateBasicPluginRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateBasicPluginRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

PluginBasicDTO UpdateBasicPluginRequest::getBody() const
{
    return body_;
}

void UpdateBasicPluginRequest::setBody(const PluginBasicDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateBasicPluginRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateBasicPluginRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


