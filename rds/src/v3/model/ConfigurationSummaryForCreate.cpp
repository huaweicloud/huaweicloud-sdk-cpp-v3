

#include "huaweicloud/rds/v3/model/ConfigurationSummaryForCreate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ConfigurationSummaryForCreate::ConfigurationSummaryForCreate()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    datastoreVersionName_ = "";
    datastoreVersionNameIsSet_ = false;
    datastoreName_ = "";
    datastoreNameIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
}

ConfigurationSummaryForCreate::~ConfigurationSummaryForCreate() = default;

void ConfigurationSummaryForCreate::validate()
{
}

web::json::value ConfigurationSummaryForCreate::toJson() const
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
    if(datastoreVersionNameIsSet_) {
        val[utility::conversions::to_string_t("datastore_version_name")] = ModelBase::toJson(datastoreVersionName_);
    }
    if(datastoreNameIsSet_) {
        val[utility::conversions::to_string_t("datastore_name")] = ModelBase::toJson(datastoreName_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }

    return val;
}

bool ConfigurationSummaryForCreate::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("datastore_version_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("datastore_version_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatastoreVersionName(refVal);
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
    return ok;
}

std::string ConfigurationSummaryForCreate::getId() const
{
    return id_;
}

void ConfigurationSummaryForCreate::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ConfigurationSummaryForCreate::idIsSet() const
{
    return idIsSet_;
}

void ConfigurationSummaryForCreate::unsetid()
{
    idIsSet_ = false;
}

std::string ConfigurationSummaryForCreate::getName() const
{
    return name_;
}

void ConfigurationSummaryForCreate::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ConfigurationSummaryForCreate::nameIsSet() const
{
    return nameIsSet_;
}

void ConfigurationSummaryForCreate::unsetname()
{
    nameIsSet_ = false;
}

std::string ConfigurationSummaryForCreate::getDescription() const
{
    return description_;
}

void ConfigurationSummaryForCreate::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ConfigurationSummaryForCreate::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ConfigurationSummaryForCreate::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ConfigurationSummaryForCreate::getDatastoreVersionName() const
{
    return datastoreVersionName_;
}

void ConfigurationSummaryForCreate::setDatastoreVersionName(const std::string& value)
{
    datastoreVersionName_ = value;
    datastoreVersionNameIsSet_ = true;
}

bool ConfigurationSummaryForCreate::datastoreVersionNameIsSet() const
{
    return datastoreVersionNameIsSet_;
}

void ConfigurationSummaryForCreate::unsetdatastoreVersionName()
{
    datastoreVersionNameIsSet_ = false;
}

std::string ConfigurationSummaryForCreate::getDatastoreName() const
{
    return datastoreName_;
}

void ConfigurationSummaryForCreate::setDatastoreName(const std::string& value)
{
    datastoreName_ = value;
    datastoreNameIsSet_ = true;
}

bool ConfigurationSummaryForCreate::datastoreNameIsSet() const
{
    return datastoreNameIsSet_;
}

void ConfigurationSummaryForCreate::unsetdatastoreName()
{
    datastoreNameIsSet_ = false;
}

std::string ConfigurationSummaryForCreate::getCreated() const
{
    return created_;
}

void ConfigurationSummaryForCreate::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ConfigurationSummaryForCreate::createdIsSet() const
{
    return createdIsSet_;
}

void ConfigurationSummaryForCreate::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ConfigurationSummaryForCreate::getUpdated() const
{
    return updated_;
}

void ConfigurationSummaryForCreate::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ConfigurationSummaryForCreate::updatedIsSet() const
{
    return updatedIsSet_;
}

void ConfigurationSummaryForCreate::unsetupdated()
{
    updatedIsSet_ = false;
}

}
}
}
}
}


