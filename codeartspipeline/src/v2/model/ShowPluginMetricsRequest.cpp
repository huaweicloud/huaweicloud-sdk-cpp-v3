

#include "huaweicloud/codeartspipeline/v2/model/ShowPluginMetricsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPluginMetricsRequest::ShowPluginMetricsRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowPluginMetricsRequest::~ShowPluginMetricsRequest() = default;

void ShowPluginMetricsRequest::validate()
{
}

web::json::value ShowPluginMetricsRequest::toJson() const
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
bool ShowPluginMetricsRequest::fromJson(const web::json::value& val)
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
            std::vector<PluginPartQueryDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowPluginMetricsRequest::getDomainId() const
{
    return domainId_;
}

void ShowPluginMetricsRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowPluginMetricsRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowPluginMetricsRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::vector<PluginPartQueryDTO>& ShowPluginMetricsRequest::getBody()
{
    return body_;
}

void ShowPluginMetricsRequest::setBody(const std::vector<PluginPartQueryDTO>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowPluginMetricsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowPluginMetricsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


