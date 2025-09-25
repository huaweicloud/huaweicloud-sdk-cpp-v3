

#include "huaweicloud/codeartspipeline/v2/model/UpdatePluginBaseInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UpdatePluginBaseInfoRequest::UpdatePluginBaseInfoRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePluginBaseInfoRequest::~UpdatePluginBaseInfoRequest() = default;

void UpdatePluginBaseInfoRequest::validate()
{
}

web::json::value UpdatePluginBaseInfoRequest::toJson() const
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
bool UpdatePluginBaseInfoRequest::fromJson(const web::json::value& val)
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


std::string UpdatePluginBaseInfoRequest::getDomainId() const
{
    return domainId_;
}

void UpdatePluginBaseInfoRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdatePluginBaseInfoRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdatePluginBaseInfoRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

PluginBasicDTO UpdatePluginBaseInfoRequest::getBody() const
{
    return body_;
}

void UpdatePluginBaseInfoRequest::setBody(const PluginBasicDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePluginBaseInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePluginBaseInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


