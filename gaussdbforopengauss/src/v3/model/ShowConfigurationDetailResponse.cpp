

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowConfigurationDetailResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
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
    engineVersion_ = "";
    engineVersionIsSet_ = false;
    instanceMode_ = "";
    instanceModeIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
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
    if(engineVersionIsSet_) {
        val[utility::conversions::to_string_t("engine_version")] = ModelBase::toJson(engineVersion_);
    }
    if(instanceModeIsSet_) {
        val[utility::conversions::to_string_t("instance_mode")] = ModelBase::toJson(instanceMode_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
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
    if(val.has_field(utility::conversions::to_string_t("engine_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("configuration_parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<ParaGroupParameterResult> refVal;
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

std::string ShowConfigurationDetailResponse::getEngineVersion() const
{
    return engineVersion_;
}

void ShowConfigurationDetailResponse::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool ShowConfigurationDetailResponse::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void ShowConfigurationDetailResponse::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string ShowConfigurationDetailResponse::getInstanceMode() const
{
    return instanceMode_;
}

void ShowConfigurationDetailResponse::setInstanceMode(const std::string& value)
{
    instanceMode_ = value;
    instanceModeIsSet_ = true;
}

bool ShowConfigurationDetailResponse::instanceModeIsSet() const
{
    return instanceModeIsSet_;
}

void ShowConfigurationDetailResponse::unsetinstanceMode()
{
    instanceModeIsSet_ = false;
}

std::string ShowConfigurationDetailResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowConfigurationDetailResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowConfigurationDetailResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowConfigurationDetailResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowConfigurationDetailResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowConfigurationDetailResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowConfigurationDetailResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowConfigurationDetailResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::vector<ParaGroupParameterResult>& ShowConfigurationDetailResponse::getConfigurationParameters()
{
    return configurationParameters_;
}

void ShowConfigurationDetailResponse::setConfigurationParameters(const std::vector<ParaGroupParameterResult>& value)
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


