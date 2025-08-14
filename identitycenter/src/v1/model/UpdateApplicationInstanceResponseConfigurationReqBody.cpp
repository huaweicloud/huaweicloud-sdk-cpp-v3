

#include "huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceResponseConfigurationReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




UpdateApplicationInstanceResponseConfigurationReqBody::UpdateApplicationInstanceResponseConfigurationReqBody()
{
    responseConfigIsSet_ = false;
}

UpdateApplicationInstanceResponseConfigurationReqBody::~UpdateApplicationInstanceResponseConfigurationReqBody() = default;

void UpdateApplicationInstanceResponseConfigurationReqBody::validate()
{
}

web::json::value UpdateApplicationInstanceResponseConfigurationReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(responseConfigIsSet_) {
        val[utility::conversions::to_string_t("response_config")] = ModelBase::toJson(responseConfig_);
    }

    return val;
}
bool UpdateApplicationInstanceResponseConfigurationReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("response_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("response_config"));
        if(!fieldValue.is_null())
        {
            ResponseConfigDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResponseConfig(refVal);
        }
    }
    return ok;
}


ResponseConfigDto UpdateApplicationInstanceResponseConfigurationReqBody::getResponseConfig() const
{
    return responseConfig_;
}

void UpdateApplicationInstanceResponseConfigurationReqBody::setResponseConfig(const ResponseConfigDto& value)
{
    responseConfig_ = value;
    responseConfigIsSet_ = true;
}

bool UpdateApplicationInstanceResponseConfigurationReqBody::responseConfigIsSet() const
{
    return responseConfigIsSet_;
}

void UpdateApplicationInstanceResponseConfigurationReqBody::unsetresponseConfig()
{
    responseConfigIsSet_ = false;
}

}
}
}
}
}


