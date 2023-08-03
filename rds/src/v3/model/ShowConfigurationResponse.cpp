

#include "huaweicloud/rds/v3/model/ShowConfigurationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowConfigurationResponse::ShowConfigurationResponse()
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
    configurationParametersIsSet_ = false;
}

ShowConfigurationResponse::~ShowConfigurationResponse() = default;

void ShowConfigurationResponse::validate()
{
}

web::json::value ShowConfigurationResponse::toJson() const
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
    if(configurationParametersIsSet_) {
        val[utility::conversions::to_string_t("configuration_parameters")] = ModelBase::toJson(configurationParameters_);
    }

    return val;
}

bool ShowConfigurationResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("configuration_parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<ConfigurationParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationParameters(refVal);
        }
    }
    return ok;
}

std::string ShowConfigurationResponse::getId() const
{
    return id_;
}

void ShowConfigurationResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowConfigurationResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowConfigurationResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowConfigurationResponse::getName() const
{
    return name_;
}

void ShowConfigurationResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowConfigurationResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowConfigurationResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowConfigurationResponse::getDescription() const
{
    return description_;
}

void ShowConfigurationResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowConfigurationResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowConfigurationResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowConfigurationResponse::getDatastoreVersionName() const
{
    return datastoreVersionName_;
}

void ShowConfigurationResponse::setDatastoreVersionName(const std::string& value)
{
    datastoreVersionName_ = value;
    datastoreVersionNameIsSet_ = true;
}

bool ShowConfigurationResponse::datastoreVersionNameIsSet() const
{
    return datastoreVersionNameIsSet_;
}

void ShowConfigurationResponse::unsetdatastoreVersionName()
{
    datastoreVersionNameIsSet_ = false;
}

std::string ShowConfigurationResponse::getDatastoreName() const
{
    return datastoreName_;
}

void ShowConfigurationResponse::setDatastoreName(const std::string& value)
{
    datastoreName_ = value;
    datastoreNameIsSet_ = true;
}

bool ShowConfigurationResponse::datastoreNameIsSet() const
{
    return datastoreNameIsSet_;
}

void ShowConfigurationResponse::unsetdatastoreName()
{
    datastoreNameIsSet_ = false;
}

std::string ShowConfigurationResponse::getCreated() const
{
    return created_;
}

void ShowConfigurationResponse::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ShowConfigurationResponse::createdIsSet() const
{
    return createdIsSet_;
}

void ShowConfigurationResponse::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ShowConfigurationResponse::getUpdated() const
{
    return updated_;
}

void ShowConfigurationResponse::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ShowConfigurationResponse::updatedIsSet() const
{
    return updatedIsSet_;
}

void ShowConfigurationResponse::unsetupdated()
{
    updatedIsSet_ = false;
}

std::vector<ConfigurationParameter>& ShowConfigurationResponse::getConfigurationParameters()
{
    return configurationParameters_;
}

void ShowConfigurationResponse::setConfigurationParameters(const std::vector<ConfigurationParameter>& value)
{
    configurationParameters_ = value;
    configurationParametersIsSet_ = true;
}

bool ShowConfigurationResponse::configurationParametersIsSet() const
{
    return configurationParametersIsSet_;
}

void ShowConfigurationResponse::unsetconfigurationParameters()
{
    configurationParametersIsSet_ = false;
}

}
}
}
}
}


