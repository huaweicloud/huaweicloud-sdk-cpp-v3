

#include "huaweicloud/metastudio/v1/model/DefaultPluginInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DefaultPluginInfo::DefaultPluginInfo()
{
    pluginTypeIsSet_ = false;
    supportDefault_ = false;
    supportDefaultIsSet_ = false;
}

DefaultPluginInfo::~DefaultPluginInfo() = default;

void DefaultPluginInfo::validate()
{
}

web::json::value DefaultPluginInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pluginTypeIsSet_) {
        val[utility::conversions::to_string_t("plugin_type")] = ModelBase::toJson(pluginType_);
    }
    if(supportDefaultIsSet_) {
        val[utility::conversions::to_string_t("support_default")] = ModelBase::toJson(supportDefault_);
    }

    return val;
}
bool DefaultPluginInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("plugin_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_type"));
        if(!fieldValue.is_null())
        {
            PluginTypeEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_default"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportDefault(refVal);
        }
    }
    return ok;
}


PluginTypeEnum DefaultPluginInfo::getPluginType() const
{
    return pluginType_;
}

void DefaultPluginInfo::setPluginType(const PluginTypeEnum& value)
{
    pluginType_ = value;
    pluginTypeIsSet_ = true;
}

bool DefaultPluginInfo::pluginTypeIsSet() const
{
    return pluginTypeIsSet_;
}

void DefaultPluginInfo::unsetpluginType()
{
    pluginTypeIsSet_ = false;
}

bool DefaultPluginInfo::isSupportDefault() const
{
    return supportDefault_;
}

void DefaultPluginInfo::setSupportDefault(bool value)
{
    supportDefault_ = value;
    supportDefaultIsSet_ = true;
}

bool DefaultPluginInfo::supportDefaultIsSet() const
{
    return supportDefaultIsSet_;
}

void DefaultPluginInfo::unsetsupportDefault()
{
    supportDefaultIsSet_ = false;
}

}
}
}
}
}


