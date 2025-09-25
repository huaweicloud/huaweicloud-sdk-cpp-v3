

#include "huaweicloud/codeartspipeline/v2/model/UploadBasicPluginRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




UploadBasicPluginRequest::UploadBasicPluginRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    pluginName_ = "";
    pluginNameIsSet_ = false;
    businessType_ = "";
    businessTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UploadBasicPluginRequest::~UploadBasicPluginRequest() = default;

void UploadBasicPluginRequest::validate()
{
}

web::json::value UploadBasicPluginRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(businessTypeIsSet_) {
        val[utility::conversions::to_string_t("business_type")] = ModelBase::toJson(businessType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UploadBasicPluginRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UploadBasicPluginRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UploadBasicPluginRequest::getDomainId() const
{
    return domainId_;
}

void UploadBasicPluginRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UploadBasicPluginRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UploadBasicPluginRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UploadBasicPluginRequest::getPluginName() const
{
    return pluginName_;
}

void UploadBasicPluginRequest::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool UploadBasicPluginRequest::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void UploadBasicPluginRequest::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string UploadBasicPluginRequest::getBusinessType() const
{
    return businessType_;
}

void UploadBasicPluginRequest::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool UploadBasicPluginRequest::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void UploadBasicPluginRequest::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

UploadBasicPluginRequestBody UploadBasicPluginRequest::getBody() const
{
    return body_;
}

void UploadBasicPluginRequest::setBody(const UploadBasicPluginRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UploadBasicPluginRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UploadBasicPluginRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


