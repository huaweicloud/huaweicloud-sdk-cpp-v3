

#include "huaweicloud/codeartspipeline/v2/model/ShowPluginOutputsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPluginOutputsRequest::ShowPluginOutputsRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowPluginOutputsRequest::~ShowPluginOutputsRequest() = default;

void ShowPluginOutputsRequest::validate()
{
}

web::json::value ShowPluginOutputsRequest::toJson() const
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
bool ShowPluginOutputsRequest::fromJson(const web::json::value& val)
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


std::string ShowPluginOutputsRequest::getDomainId() const
{
    return domainId_;
}

void ShowPluginOutputsRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowPluginOutputsRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowPluginOutputsRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::vector<PluginPartQueryDTO>& ShowPluginOutputsRequest::getBody()
{
    return body_;
}

void ShowPluginOutputsRequest::setBody(const std::vector<PluginPartQueryDTO>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowPluginOutputsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowPluginOutputsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


