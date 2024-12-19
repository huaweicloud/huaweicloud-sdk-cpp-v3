

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowParameterGroupDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowParameterGroupDetailResponse::ShowParameterGroupDetailResponse()
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

ShowParameterGroupDetailResponse::~ShowParameterGroupDetailResponse() = default;

void ShowParameterGroupDetailResponse::validate()
{
}

web::json::value ShowParameterGroupDetailResponse::toJson() const
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
bool ShowParameterGroupDetailResponse::fromJson(const web::json::value& val)
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


std::string ShowParameterGroupDetailResponse::getId() const
{
    return id_;
}

void ShowParameterGroupDetailResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowParameterGroupDetailResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowParameterGroupDetailResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowParameterGroupDetailResponse::getName() const
{
    return name_;
}

void ShowParameterGroupDetailResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowParameterGroupDetailResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowParameterGroupDetailResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowParameterGroupDetailResponse::getDescription() const
{
    return description_;
}

void ShowParameterGroupDetailResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowParameterGroupDetailResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowParameterGroupDetailResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowParameterGroupDetailResponse::getEngineVersion() const
{
    return engineVersion_;
}

void ShowParameterGroupDetailResponse::setEngineVersion(const std::string& value)
{
    engineVersion_ = value;
    engineVersionIsSet_ = true;
}

bool ShowParameterGroupDetailResponse::engineVersionIsSet() const
{
    return engineVersionIsSet_;
}

void ShowParameterGroupDetailResponse::unsetengineVersion()
{
    engineVersionIsSet_ = false;
}

std::string ShowParameterGroupDetailResponse::getInstanceMode() const
{
    return instanceMode_;
}

void ShowParameterGroupDetailResponse::setInstanceMode(const std::string& value)
{
    instanceMode_ = value;
    instanceModeIsSet_ = true;
}

bool ShowParameterGroupDetailResponse::instanceModeIsSet() const
{
    return instanceModeIsSet_;
}

void ShowParameterGroupDetailResponse::unsetinstanceMode()
{
    instanceModeIsSet_ = false;
}

std::string ShowParameterGroupDetailResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowParameterGroupDetailResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowParameterGroupDetailResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowParameterGroupDetailResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowParameterGroupDetailResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowParameterGroupDetailResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowParameterGroupDetailResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowParameterGroupDetailResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::vector<ParaGroupParameterResult>& ShowParameterGroupDetailResponse::getConfigurationParameters()
{
    return configurationParameters_;
}

void ShowParameterGroupDetailResponse::setConfigurationParameters(const std::vector<ParaGroupParameterResult>& value)
{
    configurationParameters_ = value;
    configurationParametersIsSet_ = true;
}

bool ShowParameterGroupDetailResponse::configurationParametersIsSet() const
{
    return configurationParametersIsSet_;
}

void ShowParameterGroupDetailResponse::unsetconfigurationParameters()
{
    configurationParametersIsSet_ = false;
}

}
}
}
}
}


