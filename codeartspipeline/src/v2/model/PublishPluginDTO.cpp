

#include "huaweicloud/codeartspipeline/v2/model/PublishPluginDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PublishPluginDTO::PublishPluginDTO()
{
    pluginName_ = "";
    pluginNameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    publisherUniqueId_ = "";
    publisherUniqueIdIsSet_ = false;
}

PublishPluginDTO::~PublishPluginDTO() = default;

void PublishPluginDTO::validate()
{
}

web::json::value PublishPluginDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(publisherUniqueIdIsSet_) {
        val[utility::conversions::to_string_t("publisher_unique_id")] = ModelBase::toJson(publisherUniqueId_);
    }

    return val;
}
bool PublishPluginDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("publisher_unique_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publisher_unique_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublisherUniqueId(refVal);
        }
    }
    return ok;
}


std::string PublishPluginDTO::getPluginName() const
{
    return pluginName_;
}

void PublishPluginDTO::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool PublishPluginDTO::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void PublishPluginDTO::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

std::string PublishPluginDTO::getVersion() const
{
    return version_;
}

void PublishPluginDTO::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool PublishPluginDTO::versionIsSet() const
{
    return versionIsSet_;
}

void PublishPluginDTO::unsetversion()
{
    versionIsSet_ = false;
}

std::string PublishPluginDTO::getPublisherUniqueId() const
{
    return publisherUniqueId_;
}

void PublishPluginDTO::setPublisherUniqueId(const std::string& value)
{
    publisherUniqueId_ = value;
    publisherUniqueIdIsSet_ = true;
}

bool PublishPluginDTO::publisherUniqueIdIsSet() const
{
    return publisherUniqueIdIsSet_;
}

void PublishPluginDTO::unsetpublisherUniqueId()
{
    publisherUniqueIdIsSet_ = false;
}

}
}
}
}
}


