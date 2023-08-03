

#include "huaweicloud/rds/v3/model/UpdateInstanceConfigurationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateInstanceConfigurationResponse::UpdateInstanceConfigurationResponse()
{
    restartRequired_ = false;
    restartRequiredIsSet_ = false;
}

UpdateInstanceConfigurationResponse::~UpdateInstanceConfigurationResponse() = default;

void UpdateInstanceConfigurationResponse::validate()
{
}

web::json::value UpdateInstanceConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restartRequiredIsSet_) {
        val[utility::conversions::to_string_t("restart_required")] = ModelBase::toJson(restartRequired_);
    }

    return val;
}

bool UpdateInstanceConfigurationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("restart_required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restart_required"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestartRequired(refVal);
        }
    }
    return ok;
}

bool UpdateInstanceConfigurationResponse::isRestartRequired() const
{
    return restartRequired_;
}

void UpdateInstanceConfigurationResponse::setRestartRequired(bool value)
{
    restartRequired_ = value;
    restartRequiredIsSet_ = true;
}

bool UpdateInstanceConfigurationResponse::restartRequiredIsSet() const
{
    return restartRequiredIsSet_;
}

void UpdateInstanceConfigurationResponse::unsetrestartRequired()
{
    restartRequiredIsSet_ = false;
}

}
}
}
}
}


