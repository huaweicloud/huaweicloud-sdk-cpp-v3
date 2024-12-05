

#include "huaweicloud/gaussdbfornosql/v3/model/SetDisasterRecoverySettingsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SetDisasterRecoverySettingsRequestBody::SetDisasterRecoverySettingsRequestBody()
{
    disasterRecoverySettingsIsSet_ = false;
}

SetDisasterRecoverySettingsRequestBody::~SetDisasterRecoverySettingsRequestBody() = default;

void SetDisasterRecoverySettingsRequestBody::validate()
{
}

web::json::value SetDisasterRecoverySettingsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disasterRecoverySettingsIsSet_) {
        val[utility::conversions::to_string_t("disaster_recovery_settings")] = ModelBase::toJson(disasterRecoverySettings_);
    }

    return val;
}
bool SetDisasterRecoverySettingsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disaster_recovery_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disaster_recovery_settings"));
        if(!fieldValue.is_null())
        {
            std::vector<SwitchoverRatioInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisasterRecoverySettings(refVal);
        }
    }
    return ok;
}


std::vector<SwitchoverRatioInfo>& SetDisasterRecoverySettingsRequestBody::getDisasterRecoverySettings()
{
    return disasterRecoverySettings_;
}

void SetDisasterRecoverySettingsRequestBody::setDisasterRecoverySettings(const std::vector<SwitchoverRatioInfo>& value)
{
    disasterRecoverySettings_ = value;
    disasterRecoverySettingsIsSet_ = true;
}

bool SetDisasterRecoverySettingsRequestBody::disasterRecoverySettingsIsSet() const
{
    return disasterRecoverySettingsIsSet_;
}

void SetDisasterRecoverySettingsRequestBody::unsetdisasterRecoverySettings()
{
    disasterRecoverySettingsIsSet_ = false;
}

}
}
}
}
}


