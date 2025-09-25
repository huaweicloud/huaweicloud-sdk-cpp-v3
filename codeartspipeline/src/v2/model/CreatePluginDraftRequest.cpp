

#include "huaweicloud/codeartspipeline/v2/model/CreatePluginDraftRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreatePluginDraftRequest::CreatePluginDraftRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreatePluginDraftRequest::~CreatePluginDraftRequest() = default;

void CreatePluginDraftRequest::validate()
{
}

web::json::value CreatePluginDraftRequest::toJson() const
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
bool CreatePluginDraftRequest::fromJson(const web::json::value& val)
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


std::string CreatePluginDraftRequest::getDomainId() const
{
    return domainId_;
}

void CreatePluginDraftRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreatePluginDraftRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreatePluginDraftRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

PluginDTO CreatePluginDraftRequest::getBody() const
{
    return body_;
}

void CreatePluginDraftRequest::setBody(const PluginDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePluginDraftRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePluginDraftRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


