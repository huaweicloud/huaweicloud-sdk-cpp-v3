

#include "huaweicloud/ecs/v2/model/LaunchTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




LaunchTemplate::LaunchTemplate()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    defaultVersion_ = 0;
    defaultVersionIsSet_ = false;
    latestVersion_ = 0;
    latestVersionIsSet_ = false;
}

LaunchTemplate::~LaunchTemplate() = default;

void LaunchTemplate::validate()
{
}

web::json::value LaunchTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(defaultVersionIsSet_) {
        val[utility::conversions::to_string_t("default_version")] = ModelBase::toJson(defaultVersion_);
    }
    if(latestVersionIsSet_) {
        val[utility::conversions::to_string_t("latest_version")] = ModelBase::toJson(latestVersion_);
    }

    return val;
}
bool LaunchTemplate::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latest_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latest_version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatestVersion(refVal);
        }
    }
    return ok;
}


std::string LaunchTemplate::getId() const
{
    return id_;
}

void LaunchTemplate::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool LaunchTemplate::idIsSet() const
{
    return idIsSet_;
}

void LaunchTemplate::unsetid()
{
    idIsSet_ = false;
}

std::string LaunchTemplate::getName() const
{
    return name_;
}

void LaunchTemplate::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool LaunchTemplate::nameIsSet() const
{
    return nameIsSet_;
}

void LaunchTemplate::unsetname()
{
    nameIsSet_ = false;
}

std::string LaunchTemplate::getDescription() const
{
    return description_;
}

void LaunchTemplate::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool LaunchTemplate::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void LaunchTemplate::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string LaunchTemplate::getCreatedAt() const
{
    return createdAt_;
}

void LaunchTemplate::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool LaunchTemplate::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void LaunchTemplate::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string LaunchTemplate::getUpdatedAt() const
{
    return updatedAt_;
}

void LaunchTemplate::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool LaunchTemplate::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void LaunchTemplate::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

int32_t LaunchTemplate::getDefaultVersion() const
{
    return defaultVersion_;
}

void LaunchTemplate::setDefaultVersion(int32_t value)
{
    defaultVersion_ = value;
    defaultVersionIsSet_ = true;
}

bool LaunchTemplate::defaultVersionIsSet() const
{
    return defaultVersionIsSet_;
}

void LaunchTemplate::unsetdefaultVersion()
{
    defaultVersionIsSet_ = false;
}

int32_t LaunchTemplate::getLatestVersion() const
{
    return latestVersion_;
}

void LaunchTemplate::setLatestVersion(int32_t value)
{
    latestVersion_ = value;
    latestVersionIsSet_ = true;
}

bool LaunchTemplate::latestVersionIsSet() const
{
    return latestVersionIsSet_;
}

void LaunchTemplate::unsetlatestVersion()
{
    latestVersionIsSet_ = false;
}

}
}
}
}
}


