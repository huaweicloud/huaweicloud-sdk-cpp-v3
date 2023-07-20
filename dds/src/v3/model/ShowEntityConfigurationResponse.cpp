

#include "huaweicloud/dds/v3/model/ShowEntityConfigurationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowEntityConfigurationResponse::ShowEntityConfigurationResponse()
{
    datastoreVersion_ = "";
    datastoreVersionIsSet_ = false;
    datastoreName_ = "";
    datastoreNameIsSet_ = false;
    created_ = "";
    createdIsSet_ = false;
    updated_ = "";
    updatedIsSet_ = false;
    parametersIsSet_ = false;
}

ShowEntityConfigurationResponse::~ShowEntityConfigurationResponse() = default;

void ShowEntityConfigurationResponse::validate()
{
}

web::json::value ShowEntityConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(datastoreVersionIsSet_) {
        val[utility::conversions::to_string_t("datastore_version")] = ModelBase::toJson(datastoreVersion_);
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
    if(parametersIsSet_) {
        val[utility::conversions::to_string_t("parameters")] = ModelBase::toJson(parameters_);
    }

    return val;
}

bool ShowEntityConfigurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            std::vector<EntityConfigurationParametersResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameters(refVal);
        }
    }
    return ok;
}

std::string ShowEntityConfigurationResponse::getDatastoreVersion() const
{
    return datastoreVersion_;
}

void ShowEntityConfigurationResponse::setDatastoreVersion(const std::string& value)
{
    datastoreVersion_ = value;
    datastoreVersionIsSet_ = true;
}

bool ShowEntityConfigurationResponse::datastoreVersionIsSet() const
{
    return datastoreVersionIsSet_;
}

void ShowEntityConfigurationResponse::unsetdatastoreVersion()
{
    datastoreVersionIsSet_ = false;
}

std::string ShowEntityConfigurationResponse::getDatastoreName() const
{
    return datastoreName_;
}

void ShowEntityConfigurationResponse::setDatastoreName(const std::string& value)
{
    datastoreName_ = value;
    datastoreNameIsSet_ = true;
}

bool ShowEntityConfigurationResponse::datastoreNameIsSet() const
{
    return datastoreNameIsSet_;
}

void ShowEntityConfigurationResponse::unsetdatastoreName()
{
    datastoreNameIsSet_ = false;
}

std::string ShowEntityConfigurationResponse::getCreated() const
{
    return created_;
}

void ShowEntityConfigurationResponse::setCreated(const std::string& value)
{
    created_ = value;
    createdIsSet_ = true;
}

bool ShowEntityConfigurationResponse::createdIsSet() const
{
    return createdIsSet_;
}

void ShowEntityConfigurationResponse::unsetcreated()
{
    createdIsSet_ = false;
}

std::string ShowEntityConfigurationResponse::getUpdated() const
{
    return updated_;
}

void ShowEntityConfigurationResponse::setUpdated(const std::string& value)
{
    updated_ = value;
    updatedIsSet_ = true;
}

bool ShowEntityConfigurationResponse::updatedIsSet() const
{
    return updatedIsSet_;
}

void ShowEntityConfigurationResponse::unsetupdated()
{
    updatedIsSet_ = false;
}

std::vector<EntityConfigurationParametersResult>& ShowEntityConfigurationResponse::getParameters()
{
    return parameters_;
}

void ShowEntityConfigurationResponse::setParameters(const std::vector<EntityConfigurationParametersResult>& value)
{
    parameters_ = value;
    parametersIsSet_ = true;
}

bool ShowEntityConfigurationResponse::parametersIsSet() const
{
    return parametersIsSet_;
}

void ShowEntityConfigurationResponse::unsetparameters()
{
    parametersIsSet_ = false;
}

}
}
}
}
}


