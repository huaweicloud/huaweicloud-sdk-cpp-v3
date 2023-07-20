

#include "huaweicloud/gaussdbfornosql/v3/model/ShowConfigurationDetailResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowConfigurationDetailResponse::ShowConfigurationDetailResponse()
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

ShowConfigurationDetailResponse::~ShowConfigurationDetailResponse() = default;

void ShowConfigurationDetailResponse::validate()
{
}

web::json::value ShowConfigurationDetailResponse::toJson() const
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

bool ShowConfigurationDetailResponse::fromJson(const web::json::value& val)
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
            std::vector<ConfigurationParameterResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationParameters(refVal);
        }
    }
    return ok;
}

std::string ShowConfigurationDetailResponse::getId() const
{
    return id_;
}

void ShowConfigurationDetailResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowConfigurationDetailResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowConfigurationDetailResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowConfigurationDetailResponse::getName() const
{
    return name_;
}

void ShowConfigurationDetailResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowConfigurationDetailResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowConfigurationDetailResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowConfigurationDetailResponse::getDescription() const
{
    return description_;
}

void ShowConfigurationDetailResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowConfigurationDetailResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowConfigurationDetailResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowConfigurationDetailResponse::getDatastoreVersionName() const
{
    return datastoreVersionName_;
}

void ShowConfigurationDetailResponse::setDatastoreVersionName(const std::string& value)
{
    datastoreVersionName_ = value;
    datastoreVersionNameIsSet_ = true;
}

bool ShowConfigurationDetailResponse::datastoreVersionNameIsSet() const
{
    return datastoreVersionNameIsSet_;
}

void ShowConfigurationDetailResponse::unsetdatastoreVersionName()
{
    datastoreVersionNameIsSet_ = false;
}

std::string ShowConfigurationDetailResponse::getDatastoreName() const
{
    return datastoreName_;
}

void ShowConfigurationDetailResponse::setDatastoreName(const std::string& value)
{
    datastoreName_ = value;
    datastoreNameIsSet_ = true;
}

bool ShowConfigurationDetailResponse::datastoreNameIsSet() const
{
    return datastoreNameIsSet_;
}

void ShowConfigurationDetailResponse::unsetdatastoreName()
{
    datastoreNameIsSet_ = false;
}

std::string ShowConfigurationDetailResponse::getCreated() const
{
    return created_;
}

void ShowConfigurationDetailResponse::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ShowConfigurationDetailResponse::createdIsSet() const
{
    return createdIsSet_;
}

void ShowConfigurationDetailResponse::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ShowConfigurationDetailResponse::getUpdated() const
{
    return updated_;
}

void ShowConfigurationDetailResponse::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ShowConfigurationDetailResponse::updatedIsSet() const
{
    return updatedIsSet_;
}

void ShowConfigurationDetailResponse::unsetupdated()
{
    updatedIsSet_ = false;
}

std::vector<ConfigurationParameterResult>& ShowConfigurationDetailResponse::getConfigurationParameters()
{
    return configurationParameters_;
}

void ShowConfigurationDetailResponse::setConfigurationParameters(const std::vector<ConfigurationParameterResult>& value)
{
    configurationParameters_ = value;
    configurationParametersIsSet_ = true;
}

bool ShowConfigurationDetailResponse::configurationParametersIsSet() const
{
    return configurationParametersIsSet_;
}

void ShowConfigurationDetailResponse::unsetconfigurationParameters()
{
    configurationParametersIsSet_ = false;
}

}
}
}
}
}


