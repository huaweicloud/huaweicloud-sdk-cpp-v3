

#include "huaweicloud/codeartspipeline/v2/model/PublishPluginRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PublishPluginRequest::PublishPluginRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

PublishPluginRequest::~PublishPluginRequest() = default;

void PublishPluginRequest::validate()
{
}

web::json::value PublishPluginRequest::toJson() const
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
bool PublishPluginRequest::fromJson(const web::json::value& val)
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
            PublishPluginDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string PublishPluginRequest::getDomainId() const
{
    return domainId_;
}

void PublishPluginRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool PublishPluginRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void PublishPluginRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

PublishPluginDTO PublishPluginRequest::getBody() const
{
    return body_;
}

void PublishPluginRequest::setBody(const PublishPluginDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PublishPluginRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PublishPluginRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


