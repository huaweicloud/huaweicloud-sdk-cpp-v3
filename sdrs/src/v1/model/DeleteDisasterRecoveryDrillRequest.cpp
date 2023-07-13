

#include "huaweicloud/sdrs/v1/model/DeleteDisasterRecoveryDrillRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




DeleteDisasterRecoveryDrillRequest::DeleteDisasterRecoveryDrillRequest()
{
    disasterRecoveryDrillId_ = "";
    disasterRecoveryDrillIdIsSet_ = false;
}

DeleteDisasterRecoveryDrillRequest::~DeleteDisasterRecoveryDrillRequest() = default;

void DeleteDisasterRecoveryDrillRequest::validate()
{
}

web::json::value DeleteDisasterRecoveryDrillRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disasterRecoveryDrillIdIsSet_) {
        val[utility::conversions::to_string_t("disaster_recovery_drill_id")] = ModelBase::toJson(disasterRecoveryDrillId_);
    }

    return val;
}

bool DeleteDisasterRecoveryDrillRequest::fromJson(const web::json::value& val)
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

std::string DeleteDisasterRecoveryDrillRequest::getDisasterRecoveryDrillId() const
{
    return disasterRecoveryDrillId_;
}

void DeleteDisasterRecoveryDrillRequest::setDisasterRecoveryDrillId(const std::string& value)
{
    disasterRecoveryDrillId_ = value;
    disasterRecoveryDrillIdIsSet_ = true;
}

bool DeleteDisasterRecoveryDrillRequest::disasterRecoveryDrillIdIsSet() const
{
    return disasterRecoveryDrillIdIsSet_;
}

void DeleteDisasterRecoveryDrillRequest::unsetdisasterRecoveryDrillId()
{
    disasterRecoveryDrillIdIsSet_ = false;
}

}
}
}
}
}


