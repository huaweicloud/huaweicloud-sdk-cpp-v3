

#include "huaweicloud/codeartspipeline/v2/model/NewExtension_outputs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




NewExtension_outputs::NewExtension_outputs()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    propIsSet_ = false;
}

NewExtension_outputs::~NewExtension_outputs() = default;

void NewExtension_outputs::validate()
{
}

web::json::value NewExtension_outputs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(propIsSet_) {
        val[utility::conversions::to_string_t("prop")] = ModelBase::toJson(prop_);
    }

    return val;
}
bool NewExtension_outputs::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("prop"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prop"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProp(refVal);
        }
    }
    return ok;
}


std::string NewExtension_outputs::getName() const
{
    return name_;
}

void NewExtension_outputs::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NewExtension_outputs::nameIsSet() const
{
    return nameIsSet_;
}

void NewExtension_outputs::unsetname()
{
    nameIsSet_ = false;
}

std::string NewExtension_outputs::getType() const
{
    return type_;
}

void NewExtension_outputs::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool NewExtension_outputs::typeIsSet() const
{
    return typeIsSet_;
}

void NewExtension_outputs::unsettype()
{
    typeIsSet_ = false;
}

std::string NewExtension_outputs::getDescription() const
{
    return description_;
}

void NewExtension_outputs::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NewExtension_outputs::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NewExtension_outputs::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::map<std::string, std::string>& NewExtension_outputs::getProp()
{
    return prop_;
}

void NewExtension_outputs::setProp(const std::map<std::string, std::string>& value)
{
    prop_ = value;
    propIsSet_ = true;
}

bool NewExtension_outputs::propIsSet() const
{
    return propIsSet_;
}

void NewExtension_outputs::unsetprop()
{
    propIsSet_ = false;
}

}
}
}
}
}


