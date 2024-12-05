

#include "huaweicloud/gaussdbfornosql/v3/model/ShowDisasterRecoverySettingsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowDisasterRecoverySettingsResponse::ShowDisasterRecoverySettingsResponse()
{
    disasterRecoverySettingsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowDisasterRecoverySettingsResponse::~ShowDisasterRecoverySettingsResponse() = default;

void ShowDisasterRecoverySettingsResponse::validate()
{
}

web::json::value ShowDisasterRecoverySettingsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disasterRecoverySettingsIsSet_) {
        val[utility::conversions::to_string_t("disaster_recovery_settings")] = ModelBase::toJson(disasterRecoverySettings_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowDisasterRecoverySettingsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<SwitchoverRatioInfo>& ShowDisasterRecoverySettingsResponse::getDisasterRecoverySettings()
{
    return disasterRecoverySettings_;
}

void ShowDisasterRecoverySettingsResponse::setDisasterRecoverySettings(const std::vector<SwitchoverRatioInfo>& value)
{
    disasterRecoverySettings_ = value;
    disasterRecoverySettingsIsSet_ = true;
}

bool ShowDisasterRecoverySettingsResponse::disasterRecoverySettingsIsSet() const
{
    return disasterRecoverySettingsIsSet_;
}

void ShowDisasterRecoverySettingsResponse::unsetdisasterRecoverySettings()
{
    disasterRecoverySettingsIsSet_ = false;
}

int32_t ShowDisasterRecoverySettingsResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowDisasterRecoverySettingsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowDisasterRecoverySettingsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowDisasterRecoverySettingsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


