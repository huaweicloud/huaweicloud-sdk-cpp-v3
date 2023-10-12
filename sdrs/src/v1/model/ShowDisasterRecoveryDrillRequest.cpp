

#include "huaweicloud/sdrs/v1/model/ShowDisasterRecoveryDrillRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ShowDisasterRecoveryDrillRequest::ShowDisasterRecoveryDrillRequest()
{
    disasterRecoveryDrillId_ = "";
    disasterRecoveryDrillIdIsSet_ = false;
}

ShowDisasterRecoveryDrillRequest::~ShowDisasterRecoveryDrillRequest() = default;

void ShowDisasterRecoveryDrillRequest::validate()
{
}

web::json::value ShowDisasterRecoveryDrillRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disasterRecoveryDrillIdIsSet_) {
        val[utility::conversions::to_string_t("disaster_recovery_drill_id")] = ModelBase::toJson(disasterRecoveryDrillId_);
    }

    return val;
}
bool ShowDisasterRecoveryDrillRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disaster_recovery_drill_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disaster_recovery_drill_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisasterRecoveryDrillId(refVal);
        }
    }
    return ok;
}


std::string ShowDisasterRecoveryDrillRequest::getDisasterRecoveryDrillId() const
{
    return disasterRecoveryDrillId_;
}

void ShowDisasterRecoveryDrillRequest::setDisasterRecoveryDrillId(const std::string& value)
{
    disasterRecoveryDrillId_ = value;
    disasterRecoveryDrillIdIsSet_ = true;
}

bool ShowDisasterRecoveryDrillRequest::disasterRecoveryDrillIdIsSet() const
{
    return disasterRecoveryDrillIdIsSet_;
}

void ShowDisasterRecoveryDrillRequest::unsetdisasterRecoveryDrillId()
{
    disasterRecoveryDrillIdIsSet_ = false;
}

}
}
}
}
}


