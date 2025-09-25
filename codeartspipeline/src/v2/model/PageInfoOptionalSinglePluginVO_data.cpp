

#include "huaweicloud/codeartspipeline/v2/model/PageInfoOptionalSinglePluginVO_data.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PageInfoOptionalSinglePluginVO_data::PageInfoOptionalSinglePluginVO_data()
{
    name_ = "";
    nameIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
    pluginAttribution_ = "";
    pluginAttributionIsSet_ = false;
    iconUrl_ = "";
    iconUrlIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    publisherId_ = "";
    publisherIdIsSet_ = false;
    manifestVersion_ = "";
    manifestVersionIsSet_ = false;
}

PageInfoOptionalSinglePluginVO_data::~PageInfoOptionalSinglePluginVO_data() = default;

void PageInfoOptionalSinglePluginVO_data::validate()
{
}

web::json::value PageInfoOptionalSinglePluginVO_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }
    if(pluginAttributionIsSet_) {
        val[utility::conversions::to_string_t("plugin_attribution")] = ModelBase::toJson(pluginAttribution_);
    }
    if(iconUrlIsSet_) {
        val[utility::conversions::to_string_t("icon_url")] = ModelBase::toJson(iconUrl_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(publisherIdIsSet_) {
        val[utility::conversions::to_string_t("publisher_id")] = ModelBase::toJson(publisherId_);
    }
    if(manifestVersionIsSet_) {
        val[utility::conversions::to_string_t("manifest_version")] = ModelBase::toJson(manifestVersion_);
    }

    return val;
}
bool PageInfoOptionalSinglePluginVO_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plugin_attribution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_attribution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginAttribution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("icon_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("icon_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIconUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publisher_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publisher_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublisherId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manifest_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manifest_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManifestVersion(refVal);
        }
    }
    return ok;
}


std::string PageInfoOptionalSinglePluginVO_data::getName() const
{
    return name_;
}

void PageInfoOptionalSinglePluginVO_data::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PageInfoOptionalSinglePluginVO_data::nameIsSet() const
{
    return nameIsSet_;
}

void PageInfoOptionalSinglePluginVO_data::unsetname()
{
    nameIsSet_ = false;
}

std::string PageInfoOptionalSinglePluginVO_data::getDisplayName() const
{
    return displayName_;
}

void PageInfoOptionalSinglePluginVO_data::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool PageInfoOptionalSinglePluginVO_data::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void PageInfoOptionalSinglePluginVO_data::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string PageInfoOptionalSinglePluginVO_data::getPluginAttribution() const
{
    return pluginAttribution_;
}

void PageInfoOptionalSinglePluginVO_data::setPluginAttribution(const std::string& value)
{
    pluginAttribution_ = value;
    pluginAttributionIsSet_ = true;
}

bool PageInfoOptionalSinglePluginVO_data::pluginAttributionIsSet() const
{
    return pluginAttributionIsSet_;
}

void PageInfoOptionalSinglePluginVO_data::unsetpluginAttribution()
{
    pluginAttributionIsSet_ = false;
}

std::string PageInfoOptionalSinglePluginVO_data::getIconUrl() const
{
    return iconUrl_;
}

void PageInfoOptionalSinglePluginVO_data::setIconUrl(const std::string& value)
{
    iconUrl_ = value;
    iconUrlIsSet_ = true;
}

bool PageInfoOptionalSinglePluginVO_data::iconUrlIsSet() const
{
    return iconUrlIsSet_;
}

void PageInfoOptionalSinglePluginVO_data::unseticonUrl()
{
    iconUrlIsSet_ = false;
}

std::string PageInfoOptionalSinglePluginVO_data::getDescription() const
{
    return description_;
}

void PageInfoOptionalSinglePluginVO_data::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PageInfoOptionalSinglePluginVO_data::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PageInfoOptionalSinglePluginVO_data::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PageInfoOptionalSinglePluginVO_data::getPublisherId() const
{
    return publisherId_;
}

void PageInfoOptionalSinglePluginVO_data::setPublisherId(const std::string& value)
{
    publisherId_ = value;
    publisherIdIsSet_ = true;
}

bool PageInfoOptionalSinglePluginVO_data::publisherIdIsSet() const
{
    return publisherIdIsSet_;
}

void PageInfoOptionalSinglePluginVO_data::unsetpublisherId()
{
    publisherIdIsSet_ = false;
}

std::string PageInfoOptionalSinglePluginVO_data::getManifestVersion() const
{
    return manifestVersion_;
}

void PageInfoOptionalSinglePluginVO_data::setManifestVersion(const std::string& value)
{
    manifestVersion_ = value;
    manifestVersionIsSet_ = true;
}

bool PageInfoOptionalSinglePluginVO_data::manifestVersionIsSet() const
{
    return manifestVersionIsSet_;
}

void PageInfoOptionalSinglePluginVO_data::unsetmanifestVersion()
{
    manifestVersionIsSet_ = false;
}

}
}
}
}
}


