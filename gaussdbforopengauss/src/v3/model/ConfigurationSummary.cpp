

#include "huaweicloud/gaussdbforopengauss/v3/model/ConfigurationSummary.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ConfigurationSummary::ConfigurationSummary()
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

ConfigurationSummary::~ConfigurationSummary() = default;

void ConfigurationSummary::validate()
{
}

web::json::value ConfigurationSummary::toJson() const
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

bool ConfigurationSummary::fromJson(const web::json::value& val)
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

std::string ConfigurationSummary::getId() const
{
    return id_;
}

void ConfigurationSummary::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ConfigurationSummary::idIsSet() const
{
    return idIsSet_;
}

void ConfigurationSummary::unsetid()
{
    idIsSet_ = false;
}

std::string ConfigurationSummary::getName() const
{
    return name_;
}

void ConfigurationSummary::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ConfigurationSummary::nameIsSet() const
{
    return nameIsSet_;
}

void ConfigurationSummary::unsetname()
{
    nameIsSet_ = false;
}

std::string ConfigurationSummary::getDescription() const
{
    return description_;
}

void ConfigurationSummary::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ConfigurationSummary::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ConfigurationSummary::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ConfigurationSummary::getDatastoreVersion() const
{
    return datastoreVersion_;
}

void ConfigurationSummary::setDatastoreVersion(const std::string& value)
{
    datastoreVersion_ = value;
    datastoreVersionIsSet_ = true;
}

bool ConfigurationSummary::datastoreVersionIsSet() const
{
    return datastoreVersionIsSet_;
}

void ConfigurationSummary::unsetdatastoreVersion()
{
    datastoreVersionIsSet_ = false;
}

std::string ConfigurationSummary::getDatastoreName() const
{
    return datastoreName_;
}

void ConfigurationSummary::setDatastoreName(const std::string& value)
{
    datastoreName_ = value;
    datastoreNameIsSet_ = true;
}

bool ConfigurationSummary::datastoreNameIsSet() const
{
    return datastoreNameIsSet_;
}

void ConfigurationSummary::unsetdatastoreName()
{
    datastoreNameIsSet_ = false;
}

std::string ConfigurationSummary::getHaMode() const
{
    return haMode_;
}

void ConfigurationSummary::setHaMode(const std::string& value)
{
    haMode_ = value;
    haModeIsSet_ = true;
}

bool ConfigurationSummary::haModeIsSet() const
{
    return haModeIsSet_;
}

void ConfigurationSummary::unsethaMode()
{
    haModeIsSet_ = false;
}

std::string ConfigurationSummary::getCreated() const
{
    return created_;
}

void ConfigurationSummary::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ConfigurationSummary::createdIsSet() const
{
    return createdIsSet_;
}

void ConfigurationSummary::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ConfigurationSummary::getUpdated() const
{
    return updated_;
}

void ConfigurationSummary::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ConfigurationSummary::updatedIsSet() const
{
    return updatedIsSet_;
}

void ConfigurationSummary::unsetupdated()
{
    updatedIsSet_ = false;
}

bool ConfigurationSummary::isUserDefined() const
{
    return userDefined_;
}

void ConfigurationSummary::setUserDefined(bool value)
{
    userDefined_ = value;
    userDefinedIsSet_ = true;
}

bool ConfigurationSummary::userDefinedIsSet() const
{
    return userDefinedIsSet_;
}

void ConfigurationSummary::unsetuserDefined()
{
    userDefinedIsSet_ = false;
}

}
}
}
}
}


