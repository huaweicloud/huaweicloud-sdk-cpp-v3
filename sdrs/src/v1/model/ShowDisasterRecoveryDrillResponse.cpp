

#include "huaweicloud/sdrs/v1/model/ShowDisasterRecoveryDrillResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ShowDisasterRecoveryDrillResponse::ShowDisasterRecoveryDrillResponse()
{
    disasterRecoveryDrillIsSet_ = false;
}

ShowDisasterRecoveryDrillResponse::~ShowDisasterRecoveryDrillResponse() = default;

void ShowDisasterRecoveryDrillResponse::validate()
{
}

web::json::value ShowDisasterRecoveryDrillResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disasterRecoveryDrillIsSet_) {
        val[utility::conversions::to_string_t("disaster_recovery_drill")] = ModelBase::toJson(disasterRecoveryDrill_);
    }

    return val;
}

bool ShowDisasterRecoveryDrillResponse::fromJson(const web::json::value& val)
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

ShowDisasterRecoveryDrillParams ShowDisasterRecoveryDrillResponse::getDisasterRecoveryDrill() const
{
    return disasterRecoveryDrill_;
}

void ShowDisasterRecoveryDrillResponse::setDisasterRecoveryDrill(const ShowDisasterRecoveryDrillParams& value)
{
    disasterRecoveryDrill_ = value;
    disasterRecoveryDrillIsSet_ = true;
}

bool ShowDisasterRecoveryDrillResponse::disasterRecoveryDrillIsSet() const
{
    return disasterRecoveryDrillIsSet_;
}

void ShowDisasterRecoveryDrillResponse::unsetdisasterRecoveryDrill()
{
    disasterRecoveryDrillIsSet_ = false;
}

}
}
}
}
}


