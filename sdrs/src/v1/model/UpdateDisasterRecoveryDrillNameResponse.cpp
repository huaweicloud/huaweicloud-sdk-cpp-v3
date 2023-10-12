

#include "huaweicloud/sdrs/v1/model/UpdateDisasterRecoveryDrillNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




UpdateDisasterRecoveryDrillNameResponse::UpdateDisasterRecoveryDrillNameResponse()
{
    disasterRecoveryDrillIsSet_ = false;
}

UpdateDisasterRecoveryDrillNameResponse::~UpdateDisasterRecoveryDrillNameResponse() = default;

void UpdateDisasterRecoveryDrillNameResponse::validate()
{
}

web::json::value UpdateDisasterRecoveryDrillNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disasterRecoveryDrillIsSet_) {
        val[utility::conversions::to_string_t("disaster_recovery_drill")] = ModelBase::toJson(disasterRecoveryDrill_);
    }

    return val;
}
bool UpdateDisasterRecoveryDrillNameResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disaster_recovery_drill"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disaster_recovery_drill"));
        if(!fieldValue.is_null())
        {
            ShowDisasterRecoveryDrillParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisasterRecoveryDrill(refVal);
        }
    }
    return ok;
}


ShowDisasterRecoveryDrillParams UpdateDisasterRecoveryDrillNameResponse::getDisasterRecoveryDrill() const
{
    return disasterRecoveryDrill_;
}

void UpdateDisasterRecoveryDrillNameResponse::setDisasterRecoveryDrill(const ShowDisasterRecoveryDrillParams& value)
{
    disasterRecoveryDrill_ = value;
    disasterRecoveryDrillIsSet_ = true;
}

bool UpdateDisasterRecoveryDrillNameResponse::disasterRecoveryDrillIsSet() const
{
    return disasterRecoveryDrillIsSet_;
}

void UpdateDisasterRecoveryDrillNameResponse::unsetdisasterRecoveryDrill()
{
    disasterRecoveryDrillIsSet_ = false;
}

}
}
}
}
}


