

#include "huaweicloud/cce/v3/model/ListAddonTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAddonTemplatesRequest::ListAddonTemplatesRequest()
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

ListAddonTemplatesRequest::~ListAddonTemplatesRequest() = default;

void ListAddonTemplatesRequest::validate()
{
}

web::json::value ListAddonTemplatesRequest::toJson() const
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
bool ListAddonTemplatesRequest::fromJson(const web::json::value& val)
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


std::string ListAddonTemplatesRequest::getAddonTemplateName() const
{
    return addonTemplateName_;
}

void ListAddonTemplatesRequest::setAddonTemplateName(const std::string& value)
{
    addonTemplateName_ = value;
    addonTemplateNameIsSet_ = true;
}

bool ListAddonTemplatesRequest::addonTemplateNameIsSet() const
{
    return addonTemplateNameIsSet_;
}

void ListAddonTemplatesRequest::unsetaddonTemplateName()
{
    addonTemplateNameIsSet_ = false;
}

std::string ListAddonTemplatesRequest::getBaseUpdateAddonVersion() const
{
    return baseUpdateAddonVersion_;
}

void ListAddonTemplatesRequest::setBaseUpdateAddonVersion(const std::string& value)
{
    baseUpdateAddonVersion_ = value;
    baseUpdateAddonVersionIsSet_ = true;
}

bool ListAddonTemplatesRequest::baseUpdateAddonVersionIsSet() const
{
    return baseUpdateAddonVersionIsSet_;
}

void ListAddonTemplatesRequest::unsetbaseUpdateAddonVersion()
{
    baseUpdateAddonVersionIsSet_ = false;
}

std::string ListAddonTemplatesRequest::getClusterId() const
{
    return clusterId_;
}

void ListAddonTemplatesRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool ListAddonTemplatesRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void ListAddonTemplatesRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string ListAddonTemplatesRequest::getNewest() const
{
    return newest_;
}

void ListAddonTemplatesRequest::setNewest(const std::string& value)
{
    newest_ = value;
    newestIsSet_ = true;
}

bool ListAddonTemplatesRequest::newestIsSet() const
{
    return newestIsSet_;
}

void ListAddonTemplatesRequest::unsetnewest()
{
    newestIsSet_ = false;
}

std::string ListAddonTemplatesRequest::getVersion() const
{
    return version_;
}

void ListAddonTemplatesRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListAddonTemplatesRequest::versionIsSet() const
{
    return versionIsSet_;
}

void ListAddonTemplatesRequest::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


