

#include "huaweicloud/codeartspipeline/v2/model/ParamTypeLimits.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ParamTypeLimits::ParamTypeLimits()
{
    disable_ = "";
    disableIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    displayname_ = "";
    displaynameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
}

ParamTypeLimits::~ParamTypeLimits() = default;

void ParamTypeLimits::validate()
{
}

web::json::value ParamTypeLimits::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disableIsSet_) {
        val[utility::conversions::to_string_t("disable")] = ModelBase::toJson(disable_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(displaynameIsSet_) {
        val[utility::conversions::to_string_t("displayname")] = ModelBase::toJson(displayname_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool ParamTypeLimits::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("displayname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("displayname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    return ok;
}


std::string ParamTypeLimits::getDisable() const
{
    return disable_;
}

void ParamTypeLimits::setDisable(const std::string& value)
{
    disable_ = value;
    disableIsSet_ = true;
}

bool ParamTypeLimits::disableIsSet() const
{
    return disableIsSet_;
}

void ParamTypeLimits::unsetdisable()
{
    disableIsSet_ = false;
}

std::string ParamTypeLimits::getName() const
{
    return name_;
}

void ParamTypeLimits::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ParamTypeLimits::nameIsSet() const
{
    return nameIsSet_;
}

void ParamTypeLimits::unsetname()
{
    nameIsSet_ = false;
}

std::string ParamTypeLimits::getDisplayname() const
{
    return displayname_;
}

void ParamTypeLimits::setDisplayname(const std::string& value)
{
    displayname_ = value;
    displaynameIsSet_ = true;
}

bool ParamTypeLimits::displaynameIsSet() const
{
    return displaynameIsSet_;
}

void ParamTypeLimits::unsetdisplayname()
{
    displaynameIsSet_ = false;
}

std::string ParamTypeLimits::getId() const
{
    return id_;
}

void ParamTypeLimits::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ParamTypeLimits::idIsSet() const
{
    return idIsSet_;
}

void ParamTypeLimits::unsetid()
{
    idIsSet_ = false;
}

std::string ParamTypeLimits::getLanguage() const
{
    return language_;
}

void ParamTypeLimits::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ParamTypeLimits::languageIsSet() const
{
    return languageIsSet_;
}

void ParamTypeLimits::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


