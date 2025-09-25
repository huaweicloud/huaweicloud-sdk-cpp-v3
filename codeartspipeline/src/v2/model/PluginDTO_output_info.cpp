

#include "huaweicloud/codeartspipeline/v2/model/PluginDTO_output_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PluginDTO_output_info::PluginDTO_output_info()
{
    name_ = "";
    nameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

PluginDTO_output_info::~PluginDTO_output_info() = default;

void PluginDTO_output_info::validate()
{
}

web::json::value PluginDTO_output_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool PluginDTO_output_info::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
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
    return ok;
}


std::string PluginDTO_output_info::getName() const
{
    return name_;
}

void PluginDTO_output_info::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PluginDTO_output_info::nameIsSet() const
{
    return nameIsSet_;
}

void PluginDTO_output_info::unsetname()
{
    nameIsSet_ = false;
}

std::string PluginDTO_output_info::getVersion() const
{
    return version_;
}

void PluginDTO_output_info::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool PluginDTO_output_info::versionIsSet() const
{
    return versionIsSet_;
}

void PluginDTO_output_info::unsetversion()
{
    versionIsSet_ = false;
}

std::string PluginDTO_output_info::getDescription() const
{
    return description_;
}

void PluginDTO_output_info::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PluginDTO_output_info::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PluginDTO_output_info::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PluginDTO_output_info::getSource() const
{
    return source_;
}

void PluginDTO_output_info::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool PluginDTO_output_info::sourceIsSet() const
{
    return sourceIsSet_;
}

void PluginDTO_output_info::unsetsource()
{
    sourceIsSet_ = false;
}

std::string PluginDTO_output_info::getType() const
{
    return type_;
}

void PluginDTO_output_info::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PluginDTO_output_info::typeIsSet() const
{
    return typeIsSet_;
}

void PluginDTO_output_info::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


