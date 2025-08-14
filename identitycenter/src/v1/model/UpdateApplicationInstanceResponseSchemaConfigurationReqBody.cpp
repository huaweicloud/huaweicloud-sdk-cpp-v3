

#include "huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceResponseSchemaConfigurationReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




UpdateApplicationInstanceResponseSchemaConfigurationReqBody::UpdateApplicationInstanceResponseSchemaConfigurationReqBody()
{
    responseSchemaConfigIsSet_ = false;
}

UpdateApplicationInstanceResponseSchemaConfigurationReqBody::~UpdateApplicationInstanceResponseSchemaConfigurationReqBody() = default;

void UpdateApplicationInstanceResponseSchemaConfigurationReqBody::validate()
{
}

web::json::value UpdateApplicationInstanceResponseSchemaConfigurationReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(responseSchemaConfigIsSet_) {
        val[utility::conversions::to_string_t("response_schema_config")] = ModelBase::toJson(responseSchemaConfig_);
    }

    return val;
}
bool UpdateApplicationInstanceResponseSchemaConfigurationReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("response_schema_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response_schema_config"));
        if(!fieldValue.is_null())
        {
            ResponseSchemaConfigDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseSchemaConfig(refVal);
        }
    }
    return ok;
}


ResponseSchemaConfigDto UpdateApplicationInstanceResponseSchemaConfigurationReqBody::getResponseSchemaConfig() const
{
    return responseSchemaConfig_;
}

void UpdateApplicationInstanceResponseSchemaConfigurationReqBody::setResponseSchemaConfig(const ResponseSchemaConfigDto& value)
{
    responseSchemaConfig_ = value;
    responseSchemaConfigIsSet_ = true;
}

bool UpdateApplicationInstanceResponseSchemaConfigurationReqBody::responseSchemaConfigIsSet() const
{
    return responseSchemaConfigIsSet_;
}

void UpdateApplicationInstanceResponseSchemaConfigurationReqBody::unsetresponseSchemaConfig()
{
    responseSchemaConfigIsSet_ = false;
}

}
}
}
}
}


