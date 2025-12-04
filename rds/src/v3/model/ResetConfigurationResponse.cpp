

#include "huaweicloud/rds/v3/model/ResetConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ResetConfigurationResponse::ResetConfigurationResponse()
{
    configName_ = "";
    configNameIsSet_ = false;
    needRestart_ = false;
    needRestartIsSet_ = false;
}

ResetConfigurationResponse::~ResetConfigurationResponse() = default;

void ResetConfigurationResponse::validate()
{
}

web::json::value ResetConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configNameIsSet_) {
        val[utility::conversions::to_string_t("config_name")] = ModelBase::toJson(configName_);
    }
    if(needRestartIsSet_) {
        val[utility::conversions::to_string_t("need_restart")] = ModelBase::toJson(needRestart_);
    }

    return val;
}
bool ResetConfigurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_restart"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_restart"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedRestart(refVal);
        }
    }
    return ok;
}


std::string ResetConfigurationResponse::getConfigName() const
{
    return configName_;
}

void ResetConfigurationResponse::setConfigName(const std::string& value)
{
    configName_ = value;
    configNameIsSet_ = true;
}

bool ResetConfigurationResponse::configNameIsSet() const
{
    return configNameIsSet_;
}

void ResetConfigurationResponse::unsetconfigName()
{
    configNameIsSet_ = false;
}

bool ResetConfigurationResponse::isNeedRestart() const
{
    return needRestart_;
}

void ResetConfigurationResponse::setNeedRestart(bool value)
{
    needRestart_ = value;
    needRestartIsSet_ = true;
}

bool ResetConfigurationResponse::needRestartIsSet() const
{
    return needRestartIsSet_;
}

void ResetConfigurationResponse::unsetneedRestart()
{
    needRestartIsSet_ = false;
}

}
}
}
}
}


