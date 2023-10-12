

#include "huaweicloud/gaussdb/v3/model/CreateGaussMySqlConfigurationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateGaussMySqlConfigurationResponse::CreateGaussMySqlConfigurationResponse()
{
    configurationsIsSet_ = false;
}

CreateGaussMySqlConfigurationResponse::~CreateGaussMySqlConfigurationResponse() = default;

void CreateGaussMySqlConfigurationResponse::validate()
{
}

web::json::value CreateGaussMySqlConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configurationsIsSet_) {
        val[utility::conversions::to_string_t("configurations")] = ModelBase::toJson(configurations_);
    }

    return val;
}
bool CreateGaussMySqlConfigurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configurations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configurations"));
        if(!fieldValue.is_null())
        {
            ConfigurationSummary2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurations(refVal);
        }
    }
    return ok;
}


ConfigurationSummary2 CreateGaussMySqlConfigurationResponse::getConfigurations() const
{
    return configurations_;
}

void CreateGaussMySqlConfigurationResponse::setConfigurations(const ConfigurationSummary2& value)
{
    configurations_ = value;
    configurationsIsSet_ = true;
}

bool CreateGaussMySqlConfigurationResponse::configurationsIsSet() const
{
    return configurationsIsSet_;
}

void CreateGaussMySqlConfigurationResponse::unsetconfigurations()
{
    configurationsIsSet_ = false;
}

}
}
}
}
}


