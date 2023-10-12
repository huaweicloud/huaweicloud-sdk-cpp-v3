

#include "huaweicloud/gaussdbfornosql/v3/model/ShowInstanceConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowInstanceConfigurationResponse::ShowInstanceConfigurationResponse()
{
    datastoreVersionName_ = "";
    datastoreVersionNameIsSet_ = false;
    datastoreName_ = "";
    datastoreNameIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    configurationParametersIsSet_ = false;
}

ShowInstanceConfigurationResponse::~ShowInstanceConfigurationResponse() = default;

void ShowInstanceConfigurationResponse::validate()
{
}

web::json::value ShowInstanceConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(configurationParametersIsSet_) {
        val[utility::conversions::to_string_t("configuration_parameters")] = ModelBase::toJson(configurationParameters_);
    }

    return val;
}
bool ShowInstanceConfigurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
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


std::string ShowInstanceConfigurationResponse::getDatastoreVersionName() const
{
    return datastoreVersionName_;
}

void ShowInstanceConfigurationResponse::setDatastoreVersionName(const std::string& value)
{
    datastoreVersionName_ = value;
    datastoreVersionNameIsSet_ = true;
}

bool ShowInstanceConfigurationResponse::datastoreVersionNameIsSet() const
{
    return datastoreVersionNameIsSet_;
}

void ShowInstanceConfigurationResponse::unsetdatastoreVersionName()
{
    datastoreVersionNameIsSet_ = false;
}

std::string ShowInstanceConfigurationResponse::getDatastoreName() const
{
    return datastoreName_;
}

void ShowInstanceConfigurationResponse::setDatastoreName(const std::string& value)
{
    datastoreName_ = value;
    datastoreNameIsSet_ = true;
}

bool ShowInstanceConfigurationResponse::datastoreNameIsSet() const
{
    return datastoreNameIsSet_;
}

void ShowInstanceConfigurationResponse::unsetdatastoreName()
{
    datastoreNameIsSet_ = false;
}

std::string ShowInstanceConfigurationResponse::getCreated() const
{
    return created_;
}

void ShowInstanceConfigurationResponse::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ShowInstanceConfigurationResponse::createdIsSet() const
{
    return createdIsSet_;
}

void ShowInstanceConfigurationResponse::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ShowInstanceConfigurationResponse::getUpdated() const
{
    return updated_;
}

void ShowInstanceConfigurationResponse::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ShowInstanceConfigurationResponse::updatedIsSet() const
{
    return updatedIsSet_;
}

void ShowInstanceConfigurationResponse::unsetupdated()
{
    updatedIsSet_ = false;
}

std::string ShowInstanceConfigurationResponse::getId() const
{
    return id_;
}

void ShowInstanceConfigurationResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowInstanceConfigurationResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowInstanceConfigurationResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowInstanceConfigurationResponse::getMode() const
{
    return mode_;
}

void ShowInstanceConfigurationResponse::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ShowInstanceConfigurationResponse::modeIsSet() const
{
    return modeIsSet_;
}

void ShowInstanceConfigurationResponse::unsetmode()
{
    modeIsSet_ = false;
}

std::vector<ConfigurationParameterResult>& ShowInstanceConfigurationResponse::getConfigurationParameters()
{
    return configurationParameters_;
}

void ShowInstanceConfigurationResponse::setConfigurationParameters(const std::vector<ConfigurationParameterResult>& value)
{
    configurationParameters_ = value;
    configurationParametersIsSet_ = true;
}

bool ShowInstanceConfigurationResponse::configurationParametersIsSet() const
{
    return configurationParametersIsSet_;
}

void ShowInstanceConfigurationResponse::unsetconfigurationParameters()
{
    configurationParametersIsSet_ = false;
}

}
}
}
}
}


