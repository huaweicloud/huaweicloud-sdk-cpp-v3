

#include "huaweicloud/codeartspipeline/v2/model/CreateBasicPluginRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreateBasicPluginRequest::CreateBasicPluginRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateBasicPluginRequest::~CreateBasicPluginRequest() = default;

void CreateBasicPluginRequest::validate()
{
}

web::json::value CreateBasicPluginRequest::toJson() const
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
bool CreateBasicPluginRequest::fromJson(const web::json::value& val)
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


std::string CreateBasicPluginRequest::getDomainId() const
{
    return domainId_;
}

void CreateBasicPluginRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateBasicPluginRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateBasicPluginRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

PluginBasicDTO CreateBasicPluginRequest::getBody() const
{
    return body_;
}

void CreateBasicPluginRequest::setBody(const PluginBasicDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateBasicPluginRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateBasicPluginRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


