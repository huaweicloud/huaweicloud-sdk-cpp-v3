

#include "huaweicloud/rds/v3/model/CreateConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateConfigurationResponse::CreateConfigurationResponse()
{
    configurationIsSet_ = false;
}

CreateConfigurationResponse::~CreateConfigurationResponse() = default;

void CreateConfigurationResponse::validate()
{
}

web::json::value CreateConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configurationIsSet_) {
        val[utility::conversions::to_string_t("configuration")] = ModelBase::toJson(configuration_);
    }

    return val;
}
bool CreateConfigurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configuration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration"));
        if(!fieldValue.is_null())
        {
            ConfigurationSummaryForCreate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfiguration(refVal);
        }
    }
    return ok;
}


ConfigurationSummaryForCreate CreateConfigurationResponse::getConfiguration() const
{
    return configuration_;
}

void CreateConfigurationResponse::setConfiguration(const ConfigurationSummaryForCreate& value)
{
    configuration_ = value;
    configurationIsSet_ = true;
}

bool CreateConfigurationResponse::configurationIsSet() const
{
    return configurationIsSet_;
}

void CreateConfigurationResponse::unsetconfiguration()
{
    configurationIsSet_ = false;
}

}
}
}
}
}


