

#include "huaweicloud/codeartspipeline/v2/model/DeleteBasicPluginRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeleteBasicPluginRequest::DeleteBasicPluginRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    pluginName_ = "";
    pluginNameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

DeleteBasicPluginRequest::~DeleteBasicPluginRequest() = default;

void DeleteBasicPluginRequest::validate()
{
}

web::json::value DeleteBasicPluginRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool DeleteBasicPluginRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


std::string DeleteBasicPluginRequest::getDomainId() const
{
    return domainId_;
}

void DeleteBasicPluginRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool DeleteBasicPluginRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void DeleteBasicPluginRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string DeleteBasicPluginRequest::getPluginName() const
{
    return pluginName_;
}

void DeleteBasicPluginRequest::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool DeleteBasicPluginRequest::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void DeleteBasicPluginRequest::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string DeleteBasicPluginRequest::getType() const
{
    return type_;
}

void DeleteBasicPluginRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DeleteBasicPluginRequest::typeIsSet() const
{
    return typeIsSet_;
}

void DeleteBasicPluginRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string DeleteBasicPluginRequest::getVersion() const
{
    return version_;
}

void DeleteBasicPluginRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool DeleteBasicPluginRequest::versionIsSet() const
{
    return versionIsSet_;
}

void DeleteBasicPluginRequest::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


