

#include "huaweicloud/cce/v3/model/ListAutopilotAddonTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAutopilotAddonTemplatesRequest::ListAutopilotAddonTemplatesRequest()
{
    addonTemplateName_ = "";
    addonTemplateNameIsSet_ = false;
    baseUpdateAddonVersion_ = "";
    baseUpdateAddonVersionIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    newest_ = "";
    newestIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

ListAutopilotAddonTemplatesRequest::~ListAutopilotAddonTemplatesRequest() = default;

void ListAutopilotAddonTemplatesRequest::validate()
{
}

web::json::value ListAutopilotAddonTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addonTemplateNameIsSet_) {
        val[utility::conversions::to_string_t("addon_template_name")] = ModelBase::toJson(addonTemplateName_);
    }
    if(baseUpdateAddonVersionIsSet_) {
        val[utility::conversions::to_string_t("base_update_addon_version")] = ModelBase::toJson(baseUpdateAddonVersion_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(newestIsSet_) {
        val[utility::conversions::to_string_t("newest")] = ModelBase::toJson(newest_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool ListAutopilotAddonTemplatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("addon_template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addon_template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddonTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("base_update_addon_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base_update_addon_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseUpdateAddonVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("newest"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("newest"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewest(refVal);
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


std::string ListAutopilotAddonTemplatesRequest::getAddonTemplateName() const
{
    return addonTemplateName_;
}

void ListAutopilotAddonTemplatesRequest::setAddonTemplateName(const std::string& value)
{
    addonTemplateName_ = value;
    addonTemplateNameIsSet_ = true;
}

bool ListAutopilotAddonTemplatesRequest::addonTemplateNameIsSet() const
{
    return addonTemplateNameIsSet_;
}

void ListAutopilotAddonTemplatesRequest::unsetaddonTemplateName()
{
    addonTemplateNameIsSet_ = false;
}

std::string ListAutopilotAddonTemplatesRequest::getBaseUpdateAddonVersion() const
{
    return baseUpdateAddonVersion_;
}

void ListAutopilotAddonTemplatesRequest::setBaseUpdateAddonVersion(const std::string& value)
{
    baseUpdateAddonVersion_ = value;
    baseUpdateAddonVersionIsSet_ = true;
}

bool ListAutopilotAddonTemplatesRequest::baseUpdateAddonVersionIsSet() const
{
    return baseUpdateAddonVersionIsSet_;
}

void ListAutopilotAddonTemplatesRequest::unsetbaseUpdateAddonVersion()
{
    baseUpdateAddonVersionIsSet_ = false;
}

std::string ListAutopilotAddonTemplatesRequest::getClusterId() const
{
    return clusterId_;
}

void ListAutopilotAddonTemplatesRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListAutopilotAddonTemplatesRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListAutopilotAddonTemplatesRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ListAutopilotAddonTemplatesRequest::getNewest() const
{
    return newest_;
}

void ListAutopilotAddonTemplatesRequest::setNewest(const std::string& value)
{
    newest_ = value;
    newestIsSet_ = true;
}

bool ListAutopilotAddonTemplatesRequest::newestIsSet() const
{
    return newestIsSet_;
}

void ListAutopilotAddonTemplatesRequest::unsetnewest()
{
    newestIsSet_ = false;
}

std::string ListAutopilotAddonTemplatesRequest::getVersion() const
{
    return version_;
}

void ListAutopilotAddonTemplatesRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListAutopilotAddonTemplatesRequest::versionIsSet() const
{
    return versionIsSet_;
}

void ListAutopilotAddonTemplatesRequest::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


