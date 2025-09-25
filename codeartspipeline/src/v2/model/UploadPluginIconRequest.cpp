

#include "huaweicloud/codeartspipeline/v2/model/UploadPluginIconRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UploadPluginIconRequest::UploadPluginIconRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    pluginName_ = "";
    pluginNameIsSet_ = false;
    bodyIsSet_ = false;
}

UploadPluginIconRequest::~UploadPluginIconRequest() = default;

void UploadPluginIconRequest::validate()
{
}

web::json::value UploadPluginIconRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UploadPluginIconRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("plugin_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UploadPluginIconRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UploadPluginIconRequest::getDomainId() const
{
    return domainId_;
}

void UploadPluginIconRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UploadPluginIconRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UploadPluginIconRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UploadPluginIconRequest::getPluginName() const
{
    return pluginName_;
}

void UploadPluginIconRequest::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool UploadPluginIconRequest::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void UploadPluginIconRequest::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

UploadPluginIconRequestBody UploadPluginIconRequest::getBody() const
{
    return body_;
}

void UploadPluginIconRequest::setBody(const UploadPluginIconRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadPluginIconRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadPluginIconRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


