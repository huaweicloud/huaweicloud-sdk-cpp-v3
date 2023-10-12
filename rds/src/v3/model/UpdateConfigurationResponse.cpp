

#include "huaweicloud/rds/v3/model/UpdateConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateConfigurationResponse::UpdateConfigurationResponse()
{
    configurationIsSet_ = false;
}

UpdateConfigurationResponse::~UpdateConfigurationResponse() = default;

void UpdateConfigurationResponse::validate()
{
}

web::json::value UpdateConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configurationIsSet_) {
        val[utility::conversions::to_string_t("configuration")] = ModelBase::toJson(configuration_);
    }

    return val;
}
bool UpdateConfigurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configuration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration"));
        if(!fieldValue.is_null())
        {
            UpdateConfigurationRsp_configuration refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfiguration(refVal);
        }
    }
    return ok;
}


UpdateConfigurationRsp_configuration UpdateConfigurationResponse::getConfiguration() const
{
    return configuration_;
}

void UpdateConfigurationResponse::setConfiguration(const UpdateConfigurationRsp_configuration& value)
{
    configuration_ = value;
    configurationIsSet_ = true;
}

bool UpdateConfigurationResponse::configurationIsSet() const
{
    return configurationIsSet_;
}

void UpdateConfigurationResponse::unsetconfiguration()
{
    configurationIsSet_ = false;
}

}
}
}
}
}


