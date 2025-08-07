

#include "huaweicloud/rds/v3/model/Agreement.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Agreement::Agreement()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    provisionUrl_ = "";
    provisionUrlIsSet_ = false;
}

Agreement::~Agreement() = default;

void Agreement::validate()
{
}

web::json::value Agreement::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(provisionUrlIsSet_) {
        val[utility::conversions::to_string_t("provision_url")] = ModelBase::toJson(provisionUrl_);
    }

    return val;
}
bool Agreement::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("provision_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provision_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvisionUrl(refVal);
        }
    }
    return ok;
}


std::string Agreement::getId() const
{
    return id_;
}

void Agreement::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Agreement::idIsSet() const
{
    return idIsSet_;
}

void Agreement::unsetid()
{
    idIsSet_ = false;
}

std::string Agreement::getName() const
{
    return name_;
}

void Agreement::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Agreement::nameIsSet() const
{
    return nameIsSet_;
}

void Agreement::unsetname()
{
    nameIsSet_ = false;
}

std::string Agreement::getLanguage() const
{
    return language_;
}

void Agreement::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool Agreement::languageIsSet() const
{
    return languageIsSet_;
}

void Agreement::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string Agreement::getVersion() const
{
    return version_;
}

void Agreement::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool Agreement::versionIsSet() const
{
    return versionIsSet_;
}

void Agreement::unsetversion()
{
    versionIsSet_ = false;
}

std::string Agreement::getProvisionUrl() const
{
    return provisionUrl_;
}

void Agreement::setProvisionUrl(const std::string& value)
{
    provisionUrl_ = value;
    provisionUrlIsSet_ = true;
}

bool Agreement::provisionUrlIsSet() const
{
    return provisionUrlIsSet_;
}

void Agreement::unsetprovisionUrl()
{
    provisionUrlIsSet_ = false;
}

}
}
}
}
}


