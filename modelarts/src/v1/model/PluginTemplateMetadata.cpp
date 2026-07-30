

#include "huaweicloud/modelarts/v1/model/PluginTemplateMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




PluginTemplateMetadata::PluginTemplateMetadata()
{
    name_ = "";
    nameIsSet_ = false;
    annotationsIsSet_ = false;
}

PluginTemplateMetadata::~PluginTemplateMetadata() = default;

void PluginTemplateMetadata::validate()
{
}

web::json::value PluginTemplateMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(annotationsIsSet_) {
        val[utility::conversions::to_string_t("annotations")] = ModelBase::toJson(annotations_);
    }

    return val;
}
bool PluginTemplateMetadata::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("annotations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("annotations"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnnotations(refVal);
        }
    }
    return ok;
}


std::string PluginTemplateMetadata::getName() const
{
    return name_;
}

void PluginTemplateMetadata::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PluginTemplateMetadata::nameIsSet() const
{
    return nameIsSet_;
}

void PluginTemplateMetadata::unsetname()
{
    nameIsSet_ = false;
}

std::map<std::string, std::string>& PluginTemplateMetadata::getAnnotations()
{
    return annotations_;
}

void PluginTemplateMetadata::setAnnotations(const std::map<std::string, std::string>& value)
{
    annotations_ = value;
    annotationsIsSet_ = true;
}

bool PluginTemplateMetadata::annotationsIsSet() const
{
    return annotationsIsSet_;
}

void PluginTemplateMetadata::unsetannotations()
{
    annotationsIsSet_ = false;
}

}
}
}
}
}


