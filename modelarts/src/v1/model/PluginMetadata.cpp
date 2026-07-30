

#include "huaweicloud/modelarts/v1/model/PluginMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PluginMetadata::PluginMetadata()
{
    name_ = "";
    nameIsSet_ = false;
    creationTimestamp_ = "";
    creationTimestampIsSet_ = false;
}

PluginMetadata::~PluginMetadata() = default;

void PluginMetadata::validate()
{
}

web::json::value PluginMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(creationTimestampIsSet_) {
        val[utility::conversions::to_string_t("creationTimestamp")] = ModelBase::toJson(creationTimestamp_);
    }

    return val;
}
bool PluginMetadata::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("creationTimestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creationTimestamp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationTimestamp(refVal);
        }
    }
    return ok;
}


std::string PluginMetadata::getName() const
{
    return name_;
}

void PluginMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PluginMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void PluginMetadata::unsetname()
{
    nameIsSet_ = false;
}

std::string PluginMetadata::getCreationTimestamp() const
{
    return creationTimestamp_;
}

void PluginMetadata::setCreationTimestamp(const std::string& value)
{
    creationTimestamp_ = value;
    creationTimestampIsSet_ = true;
}

bool PluginMetadata::creationTimestampIsSet() const
{
    return creationTimestampIsSet_;
}

void PluginMetadata::unsetcreationTimestamp()
{
    creationTimestampIsSet_ = false;
}

}
}
}
}
}


