

#include "huaweicloud/gaussdbforopengauss/v3/model/ConfigurationResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ConfigurationResult::ConfigurationResult()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    datastoreVersion_ = "";
    datastoreVersionIsSet_ = false;
    datastoreName_ = "";
    datastoreNameIsSet_ = false;
    haMode_ = "";
    haModeIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    userDefined_ = false;
    userDefinedIsSet_ = false;
}

ConfigurationResult::~ConfigurationResult() = default;

void ConfigurationResult::validate()
{
}

web::json::value ConfigurationResult::toJson() const
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
    if(datastoreVersionIsSet_) {
        val[utility::conversions::to_string_t("datastore_version")] = ModelBase::toJson(datastoreVersion_);
    }
    if(datastoreNameIsSet_) {
        val[utility::conversions::to_string_t("datastore_name")] = ModelBase::toJson(datastoreName_);
    }
    if(haModeIsSet_) {
        val[utility::conversions::to_string_t("ha_mode")] = ModelBase::toJson(haMode_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(userDefinedIsSet_) {
        val[utility::conversions::to_string_t("user_defined")] = ModelBase::toJson(userDefined_);
    }

    return val;
}
bool ConfigurationResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("datastore_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastoreVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("datastore_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastoreName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ha_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ha_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHaMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_defined"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_defined"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserDefined(refVal);
        }
    }
    return ok;
}


std::string ConfigurationResult::getId() const
{
    return id_;
}

void ConfigurationResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ConfigurationResult::idIsSet() const
{
    return idIsSet_;
}

void ConfigurationResult::unsetid()
{
    idIsSet_ = false;
}

std::string ConfigurationResult::getName() const
{
    return name_;
}

void ConfigurationResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ConfigurationResult::nameIsSet() const
{
    return nameIsSet_;
}

void ConfigurationResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ConfigurationResult::getDescription() const
{
    return description_;
}

void ConfigurationResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ConfigurationResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ConfigurationResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ConfigurationResult::getDatastoreVersion() const
{
    return datastoreVersion_;
}

void ConfigurationResult::setDatastoreVersion(const std::string& value)
{
    datastoreVersion_ = value;
    datastoreVersionIsSet_ = true;
}

bool ConfigurationResult::datastoreVersionIsSet() const
{
    return datastoreVersionIsSet_;
}

void ConfigurationResult::unsetdatastoreVersion()
{
    datastoreVersionIsSet_ = false;
}

std::string ConfigurationResult::getDatastoreName() const
{
    return datastoreName_;
}

void ConfigurationResult::setDatastoreName(const std::string& value)
{
    datastoreName_ = value;
    datastoreNameIsSet_ = true;
}

bool ConfigurationResult::datastoreNameIsSet() const
{
    return datastoreNameIsSet_;
}

void ConfigurationResult::unsetdatastoreName()
{
    datastoreNameIsSet_ = false;
}

std::string ConfigurationResult::getHaMode() const
{
    return haMode_;
}

void ConfigurationResult::setHaMode(const std::string& value)
{
    haMode_ = value;
    haModeIsSet_ = true;
}

bool ConfigurationResult::haModeIsSet() const
{
    return haModeIsSet_;
}

void ConfigurationResult::unsethaMode()
{
    haModeIsSet_ = false;
}

std::string ConfigurationResult::getCreated() const
{
    return created_;
}

void ConfigurationResult::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ConfigurationResult::createdIsSet() const
{
    return createdIsSet_;
}

void ConfigurationResult::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ConfigurationResult::getUpdated() const
{
    return updated_;
}

void ConfigurationResult::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ConfigurationResult::updatedIsSet() const
{
    return updatedIsSet_;
}

void ConfigurationResult::unsetupdated()
{
    updatedIsSet_ = false;
}

bool ConfigurationResult::isUserDefined() const
{
    return userDefined_;
}

void ConfigurationResult::setUserDefined(bool value)
{
    userDefined_ = value;
    userDefinedIsSet_ = true;
}

bool ConfigurationResult::userDefinedIsSet() const
{
    return userDefinedIsSet_;
}

void ConfigurationResult::unsetuserDefined()
{
    userDefinedIsSet_ = false;
}

}
}
}
}
}


