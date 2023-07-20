

#include "huaweicloud/dds/v3/model/ShowConfigurationParameterResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowConfigurationParameterResponse::ShowConfigurationParameterResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    datastoreVersion_ = "";
    datastoreVersionIsSet_ = false;
    datastoreName_ = "";
    datastoreNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    parametersIsSet_ = false;
}

ShowConfigurationParameterResponse::~ShowConfigurationParameterResponse() = default;

void ShowConfigurationParameterResponse::validate()
{
}

web::json::value ShowConfigurationParameterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(datastoreVersionIsSet_) {
        val[utility::conversions::to_string_t("datastore_version")] = ModelBase::toJson(datastoreVersion_);
    }
    if(datastoreNameIsSet_) {
        val[utility::conversions::to_string_t("datastore_name")] = ModelBase::toJson(datastoreName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createdIsSet_) {
        val[utility::conversions::to_string_t("created")] = ModelBase::toJson(created_);
    }
    if(updatedIsSet_) {
        val[utility::conversions::to_string_t("updated")] = ModelBase::toJson(updated_);
    }
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }

    return val;
}

bool ShowConfigurationParameterResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<ConfigurationParametersResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    return ok;
}

std::string ShowConfigurationParameterResponse::getId() const
{
    return id_;
}

void ShowConfigurationParameterResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowConfigurationParameterResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowConfigurationParameterResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowConfigurationParameterResponse::getName() const
{
    return name_;
}

void ShowConfigurationParameterResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowConfigurationParameterResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowConfigurationParameterResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowConfigurationParameterResponse::getDatastoreVersion() const
{
    return datastoreVersion_;
}

void ShowConfigurationParameterResponse::setDatastoreVersion(const std::string& value)
{
    datastoreVersion_ = value;
    datastoreVersionIsSet_ = true;
}

bool ShowConfigurationParameterResponse::datastoreVersionIsSet() const
{
    return datastoreVersionIsSet_;
}

void ShowConfigurationParameterResponse::unsetdatastoreVersion()
{
    datastoreVersionIsSet_ = false;
}

std::string ShowConfigurationParameterResponse::getDatastoreName() const
{
    return datastoreName_;
}

void ShowConfigurationParameterResponse::setDatastoreName(const std::string& value)
{
    datastoreName_ = value;
    datastoreNameIsSet_ = true;
}

bool ShowConfigurationParameterResponse::datastoreNameIsSet() const
{
    return datastoreNameIsSet_;
}

void ShowConfigurationParameterResponse::unsetdatastoreName()
{
    datastoreNameIsSet_ = false;
}

std::string ShowConfigurationParameterResponse::getDescription() const
{
    return description_;
}

void ShowConfigurationParameterResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowConfigurationParameterResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowConfigurationParameterResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowConfigurationParameterResponse::getCreated() const
{
    return created_;
}

void ShowConfigurationParameterResponse::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ShowConfigurationParameterResponse::createdIsSet() const
{
    return createdIsSet_;
}

void ShowConfigurationParameterResponse::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ShowConfigurationParameterResponse::getUpdated() const
{
    return updated_;
}

void ShowConfigurationParameterResponse::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ShowConfigurationParameterResponse::updatedIsSet() const
{
    return updatedIsSet_;
}

void ShowConfigurationParameterResponse::unsetupdated()
{
    updatedIsSet_ = false;
}

std::vector<ConfigurationParametersResult>& ShowConfigurationParameterResponse::getParameters()
{
    return parameters_;
}

void ShowConfigurationParameterResponse::setParameters(const std::vector<ConfigurationParametersResult>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool ShowConfigurationParameterResponse::parametersIsSet() const
{
    return parametersIsSet_;
}

void ShowConfigurationParameterResponse::unsetparameters()
{
    parametersIsSet_ = false;
}

}
}
}
}
}


