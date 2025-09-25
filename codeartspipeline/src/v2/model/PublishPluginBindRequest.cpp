

#include "huaweicloud/codeartspipeline/v2/model/PublishPluginBindRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PublishPluginBindRequest::PublishPluginBindRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

PublishPluginBindRequest::~PublishPluginBindRequest() = default;

void PublishPluginBindRequest::validate()
{
}

web::json::value PublishPluginBindRequest::toJson() const
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
bool PublishPluginBindRequest::fromJson(const web::json::value& val)
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


std::string PublishPluginBindRequest::getDomainId() const
{
    return domainId_;
}

void PublishPluginBindRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool PublishPluginBindRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void PublishPluginBindRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

PublishPluginDTO PublishPluginBindRequest::getBody() const
{
    return body_;
}

void PublishPluginBindRequest::setBody(const PublishPluginDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool PublishPluginBindRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void PublishPluginBindRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


