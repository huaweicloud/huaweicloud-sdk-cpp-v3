

#include "huaweicloud/codeartsbuild/v3/model/Params.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




Params::Params()
{
    name_ = "";
    nameIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    required_ = false;
    requiredIsSet_ = false;
    constraintsIsSet_ = false;
    deletion_ = false;
    deletionIsSet_ = false;
    defaults_ = false;
    defaultsIsSet_ = false;
}

Params::~Params() = default;

void Params::validate()
{
}

web::json::value Params::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(requiredIsSet_) {
        val[utility::conversions::to_string_t("required")] = ModelBase::toJson(required_);
    }
    if(constraintsIsSet_) {
        val[utility::conversions::to_string_t("constraints")] = ModelBase::toJson(constraints_);
    }
    if(deletionIsSet_) {
        val[utility::conversions::to_string_t("deletion")] = ModelBase::toJson(deletion_);
    }
    if(defaultsIsSet_) {
        val[utility::conversions::to_string_t("defaults")] = ModelBase::toJson(defaults_);
    }

    return val;
}
bool Params::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("required"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequired(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("constraints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("constraints"));
        if(!fieldValue.is_null())
        {
            std::vector<Constraints> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConstraints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deletion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deletion"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaults"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaults"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaults(refVal);
        }
    }
    return ok;
}


std::string Params::getName() const
{
    return name_;
}

void Params::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Params::nameIsSet() const
{
    return nameIsSet_;
}

void Params::unsetname()
{
    nameIsSet_ = false;
}

std::string Params::getTitle() const
{
    return title_;
}

void Params::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool Params::titleIsSet() const
{
    return titleIsSet_;
}

void Params::unsettitle()
{
    titleIsSet_ = false;
}

std::string Params::getType() const
{
    return type_;
}

void Params::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Params::typeIsSet() const
{
    return typeIsSet_;
}

void Params::unsettype()
{
    typeIsSet_ = false;
}

bool Params::isRequired() const
{
    return required_;
}

void Params::setRequired(bool value)
{
    required_ = value;
    requiredIsSet_ = true;
}

bool Params::requiredIsSet() const
{
    return requiredIsSet_;
}

void Params::unsetrequired()
{
    requiredIsSet_ = false;
}

std::vector<Constraints>& Params::getConstraints()
{
    return constraints_;
}

void Params::setConstraints(const std::vector<Constraints>& value)
{
    constraints_ = value;
    constraintsIsSet_ = true;
}

bool Params::constraintsIsSet() const
{
    return constraintsIsSet_;
}

void Params::unsetconstraints()
{
    constraintsIsSet_ = false;
}

bool Params::isDeletion() const
{
    return deletion_;
}

void Params::setDeletion(bool value)
{
    deletion_ = value;
    deletionIsSet_ = true;
}

bool Params::deletionIsSet() const
{
    return deletionIsSet_;
}

void Params::unsetdeletion()
{
    deletionIsSet_ = false;
}

bool Params::isDefaults() const
{
    return defaults_;
}

void Params::setDefaults(bool value)
{
    defaults_ = value;
    defaultsIsSet_ = true;
}

bool Params::defaultsIsSet() const
{
    return defaultsIsSet_;
}

void Params::unsetdefaults()
{
    defaultsIsSet_ = false;
}

}
}
}
}
}


