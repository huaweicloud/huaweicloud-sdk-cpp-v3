

#include "huaweicloud/gaussdb/v3/model/DeleteGaussMySqlConfigurationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteGaussMySqlConfigurationResponse::DeleteGaussMySqlConfigurationResponse()
{
    configurationId_ = "";
    configurationIdIsSet_ = false;
    configurationName_ = "";
    configurationNameIsSet_ = false;
}

DeleteGaussMySqlConfigurationResponse::~DeleteGaussMySqlConfigurationResponse() = default;

void DeleteGaussMySqlConfigurationResponse::validate()
{
}

web::json::value DeleteGaussMySqlConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }
    if(configurationNameIsSet_) {
        val[utility::conversions::to_string_t("configuration_name")] = ModelBase::toJson(configurationName_);
    }

    return val;
}

bool DeleteGaussMySqlConfigurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configuration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configuration_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationName(refVal);
        }
    }
    return ok;
}

std::string DeleteGaussMySqlConfigurationResponse::getConfigurationId() const
{
    return configurationId_;
}

void DeleteGaussMySqlConfigurationResponse::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool DeleteGaussMySqlConfigurationResponse::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void DeleteGaussMySqlConfigurationResponse::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

std::string DeleteGaussMySqlConfigurationResponse::getConfigurationName() const
{
    return configurationName_;
}

void DeleteGaussMySqlConfigurationResponse::setConfigurationName(const std::string& value)
{
    configurationName_ = value;
    configurationNameIsSet_ = true;
}

bool DeleteGaussMySqlConfigurationResponse::configurationNameIsSet() const
{
    return configurationNameIsSet_;
}

void DeleteGaussMySqlConfigurationResponse::unsetconfigurationName()
{
    configurationNameIsSet_ = false;
}

}
}
}
}
}


