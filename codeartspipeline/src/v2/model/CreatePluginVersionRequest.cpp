

#include "huaweicloud/codeartspipeline/v2/model/CreatePluginVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreatePluginVersionRequest::CreatePluginVersionRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePluginVersionRequest::~CreatePluginVersionRequest() = default;

void CreatePluginVersionRequest::validate()
{
}

web::json::value CreatePluginVersionRequest::toJson() const
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
bool CreatePluginVersionRequest::fromJson(const web::json::value& val)
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
            PluginDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreatePluginVersionRequest::getDomainId() const
{
    return domainId_;
}

void CreatePluginVersionRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreatePluginVersionRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreatePluginVersionRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

PluginDTO CreatePluginVersionRequest::getBody() const
{
    return body_;
}

void CreatePluginVersionRequest::setBody(const PluginDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePluginVersionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePluginVersionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


