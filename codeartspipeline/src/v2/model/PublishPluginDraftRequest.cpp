

#include "huaweicloud/codeartspipeline/v2/model/PublishPluginDraftRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PublishPluginDraftRequest::PublishPluginDraftRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

PublishPluginDraftRequest::~PublishPluginDraftRequest() = default;

void PublishPluginDraftRequest::validate()
{
}

web::json::value PublishPluginDraftRequest::toJson() const
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
bool PublishPluginDraftRequest::fromJson(const web::json::value& val)
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
            PluginPartQueryDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string PublishPluginDraftRequest::getDomainId() const
{
    return domainId_;
}

void PublishPluginDraftRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool PublishPluginDraftRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void PublishPluginDraftRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

PluginPartQueryDTO PublishPluginDraftRequest::getBody() const
{
    return body_;
}

void PublishPluginDraftRequest::setBody(const PluginPartQueryDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PublishPluginDraftRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PublishPluginDraftRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


