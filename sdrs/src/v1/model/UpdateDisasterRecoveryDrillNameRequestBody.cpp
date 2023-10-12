

#include "huaweicloud/sdrs/v1/model/UpdateDisasterRecoveryDrillNameRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




UpdateDisasterRecoveryDrillNameRequestBody::UpdateDisasterRecoveryDrillNameRequestBody()
{
    disasterRecoveryDrillIsSet_ = false;
}

UpdateDisasterRecoveryDrillNameRequestBody::~UpdateDisasterRecoveryDrillNameRequestBody() = default;

void UpdateDisasterRecoveryDrillNameRequestBody::validate()
{
}

web::json::value UpdateDisasterRecoveryDrillNameRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disasterRecoveryDrillIsSet_) {
        val[utility::conversions::to_string_t("disaster_recovery_drill")] = ModelBase::toJson(disasterRecoveryDrill_);
    }

    return val;
}
bool UpdateDisasterRecoveryDrillNameRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disaster_recovery_drill"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disaster_recovery_drill"));
        if(!fieldValue.is_null())
        {
            UpdateDisasterRecoveryDrillNameRequestParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisasterRecoveryDrill(refVal);
        }
    }
    return ok;
}


UpdateDisasterRecoveryDrillNameRequestParams UpdateDisasterRecoveryDrillNameRequestBody::getDisasterRecoveryDrill() const
{
    return disasterRecoveryDrill_;
}

void UpdateDisasterRecoveryDrillNameRequestBody::setDisasterRecoveryDrill(const UpdateDisasterRecoveryDrillNameRequestParams& value)
{
    disasterRecoveryDrill_ = value;
    disasterRecoveryDrillIsSet_ = true;
}

bool UpdateDisasterRecoveryDrillNameRequestBody::disasterRecoveryDrillIsSet() const
{
    return disasterRecoveryDrillIsSet_;
}

void UpdateDisasterRecoveryDrillNameRequestBody::unsetdisasterRecoveryDrill()
{
    disasterRecoveryDrillIsSet_ = false;
}

}
}
}
}
}


