

#include "huaweicloud/codeartspipeline/v2/model/ShowPluginInputsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPluginInputsRequest::ShowPluginInputsRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowPluginInputsRequest::~ShowPluginInputsRequest() = default;

void ShowPluginInputsRequest::validate()
{
}

web::json::value ShowPluginInputsRequest::toJson() const
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
bool ShowPluginInputsRequest::fromJson(const web::json::value& val)
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


std::string ShowPluginInputsRequest::getDomainId() const
{
    return domainId_;
}

void ShowPluginInputsRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowPluginInputsRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowPluginInputsRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::vector<PluginPartQueryDTO>& ShowPluginInputsRequest::getBody()
{
    return body_;
}

void ShowPluginInputsRequest::setBody(const std::vector<PluginPartQueryDTO>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowPluginInputsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowPluginInputsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


