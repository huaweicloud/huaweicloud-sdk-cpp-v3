

#include "huaweicloud/codeartspipeline/v2/model/DeletePluginDraftRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




DeletePluginDraftRequest::DeletePluginDraftRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    pluginName_ = "";
    pluginNameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

DeletePluginDraftRequest::~DeletePluginDraftRequest() = default;

void DeletePluginDraftRequest::validate()
{
}

web::json::value DeletePluginDraftRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool DeletePluginDraftRequest::fromJson(const web::json::value& val)
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


std::string DeletePluginDraftRequest::getDomainId() const
{
    return domainId_;
}

void DeletePluginDraftRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool DeletePluginDraftRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void DeletePluginDraftRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string DeletePluginDraftRequest::getPluginName() const
{
    return pluginName_;
}

void DeletePluginDraftRequest::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool DeletePluginDraftRequest::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void DeletePluginDraftRequest::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string DeletePluginDraftRequest::getVersion() const
{
    return version_;
}

void DeletePluginDraftRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool DeletePluginDraftRequest::versionIsSet() const
{
    return versionIsSet_;
}

void DeletePluginDraftRequest::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


