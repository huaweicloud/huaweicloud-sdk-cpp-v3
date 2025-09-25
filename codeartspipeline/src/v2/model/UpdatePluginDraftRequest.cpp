

#include "huaweicloud/codeartspipeline/v2/model/UpdatePluginDraftRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UpdatePluginDraftRequest::UpdatePluginDraftRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdatePluginDraftRequest::~UpdatePluginDraftRequest() = default;

void UpdatePluginDraftRequest::validate()
{
}

web::json::value UpdatePluginDraftRequest::toJson() const
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
bool UpdatePluginDraftRequest::fromJson(const web::json::value& val)
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


std::string UpdatePluginDraftRequest::getDomainId() const
{
    return domainId_;
}

void UpdatePluginDraftRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdatePluginDraftRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdatePluginDraftRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

PluginDTO UpdatePluginDraftRequest::getBody() const
{
    return body_;
}

void UpdatePluginDraftRequest::setBody(const PluginDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePluginDraftRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePluginDraftRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


