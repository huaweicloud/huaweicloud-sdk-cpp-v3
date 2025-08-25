

#include "huaweicloud/cce/v3/model/ConfigurationMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ConfigurationMetadata::ConfigurationMetadata()
{
    name_ = "";
    nameIsSet_ = false;
    labelsIsSet_ = false;
}

ConfigurationMetadata::~ConfigurationMetadata() = default;

void ConfigurationMetadata::validate()
{
}

web::json::value ConfigurationMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }

    return val;
}
bool ConfigurationMetadata::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    return ok;
}


std::string ConfigurationMetadata::getName() const
{
    return name_;
}

void ConfigurationMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ConfigurationMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void ConfigurationMetadata::unsetname()
{
    nameIsSet_ = false;
}

std::map<std::string, std::string>& ConfigurationMetadata::getLabels()
{
    return labels_;
}

void ConfigurationMetadata::setLabels(const std::map<std::string, std::string>& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool ConfigurationMetadata::labelsIsSet() const
{
    return labelsIsSet_;
}

void ConfigurationMetadata::unsetlabels()
{
    labelsIsSet_ = false;
}

}
}
}
}
}


