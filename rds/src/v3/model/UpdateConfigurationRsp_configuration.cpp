

#include "huaweicloud/rds/v3/model/UpdateConfigurationRsp_configuration.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateConfigurationRsp_configuration::UpdateConfigurationRsp_configuration()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    ignoredParamsIsSet_ = false;
}

UpdateConfigurationRsp_configuration::~UpdateConfigurationRsp_configuration() = default;

void UpdateConfigurationRsp_configuration::validate()
{
}

web::json::value UpdateConfigurationRsp_configuration::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(ignoredParamsIsSet_) {
        val[utility::conversions::to_string_t("ignored_params")] = ModelBase::toJson(ignoredParams_);
    }

    return val;
}

bool UpdateConfigurationRsp_configuration::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ignored_params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ignored_params"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIgnoredParams(refVal);
        }
    }
    return ok;
}

std::string UpdateConfigurationRsp_configuration::getId() const
{
    return id_;
}

void UpdateConfigurationRsp_configuration::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateConfigurationRsp_configuration::idIsSet() const
{
    return idIsSet_;
}

void UpdateConfigurationRsp_configuration::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateConfigurationRsp_configuration::getName() const
{
    return name_;
}

void UpdateConfigurationRsp_configuration::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateConfigurationRsp_configuration::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateConfigurationRsp_configuration::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& UpdateConfigurationRsp_configuration::getIgnoredParams()
{
    return ignoredParams_;
}

void UpdateConfigurationRsp_configuration::setIgnoredParams(const std::vector<std::string>& value)
{
    ignoredParams_ = value;
    ignoredParamsIsSet_ = true;
}

bool UpdateConfigurationRsp_configuration::ignoredParamsIsSet() const
{
    return ignoredParamsIsSet_;
}

void UpdateConfigurationRsp_configuration::unsetignoredParams()
{
    ignoredParamsIsSet_ = false;
}

}
}
}
}
}


