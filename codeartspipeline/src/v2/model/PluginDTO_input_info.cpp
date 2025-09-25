

#include "huaweicloud/codeartspipeline/v2/model/PluginDTO_input_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PluginDTO_input_info::PluginDTO_input_info()
{
    name_ = "";
    nameIsSet_ = false;
    defaultValue_ = "";
    defaultValueIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    validation_ = "";
    validationIsSet_ = false;
    layoutContent_ = "";
    layoutContentIsSet_ = false;
}

PluginDTO_input_info::~PluginDTO_input_info() = default;

void PluginDTO_input_info::validate()
{
}

web::json::value PluginDTO_input_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(defaultValueIsSet_) {
        val[utility::conversions::to_string_t("default_value")] = ModelBase::toJson(defaultValue_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(validationIsSet_) {
        val[utility::conversions::to_string_t("validation")] = ModelBase::toJson(validation_);
    }
    if(layoutContentIsSet_) {
        val[utility::conversions::to_string_t("layout_content")] = ModelBase::toJson(layoutContent_);
    }

    return val;
}
bool PluginDTO_input_info::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("default_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultValue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("validation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("layout_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("layout_content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLayoutContent(refVal);
        }
    }
    return ok;
}


std::string PluginDTO_input_info::getName() const
{
    return name_;
}

void PluginDTO_input_info::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PluginDTO_input_info::nameIsSet() const
{
    return nameIsSet_;
}

void PluginDTO_input_info::unsetname()
{
    nameIsSet_ = false;
}

std::string PluginDTO_input_info::getDefaultValue() const
{
    return defaultValue_;
}

void PluginDTO_input_info::setDefaultValue(const std::string& value)
{
    defaultValue_ = value;
    defaultValueIsSet_ = true;
}

bool PluginDTO_input_info::defaultValueIsSet() const
{
    return defaultValueIsSet_;
}

void PluginDTO_input_info::unsetdefaultValue()
{
    defaultValueIsSet_ = false;
}

std::string PluginDTO_input_info::getType() const
{
    return type_;
}

void PluginDTO_input_info::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PluginDTO_input_info::typeIsSet() const
{
    return typeIsSet_;
}

void PluginDTO_input_info::unsettype()
{
    typeIsSet_ = false;
}

std::string PluginDTO_input_info::getValidation() const
{
    return validation_;
}

void PluginDTO_input_info::setValidation(const std::string& value)
{
    validation_ = value;
    validationIsSet_ = true;
}

bool PluginDTO_input_info::validationIsSet() const
{
    return validationIsSet_;
}

void PluginDTO_input_info::unsetvalidation()
{
    validationIsSet_ = false;
}

std::string PluginDTO_input_info::getLayoutContent() const
{
    return layoutContent_;
}

void PluginDTO_input_info::setLayoutContent(const std::string& value)
{
    layoutContent_ = value;
    layoutContentIsSet_ = true;
}

bool PluginDTO_input_info::layoutContentIsSet() const
{
    return layoutContentIsSet_;
}

void PluginDTO_input_info::unsetlayoutContent()
{
    layoutContentIsSet_ = false;
}

}
}
}
}
}


