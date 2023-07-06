

#include "huaweicloud/sdrs/v1/model/ListDisasterRecoveryDrillsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ListDisasterRecoveryDrillsResponse::ListDisasterRecoveryDrillsResponse()
{
    disasterRecoveryDrillsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

ListDisasterRecoveryDrillsResponse::~ListDisasterRecoveryDrillsResponse() = default;

void ListDisasterRecoveryDrillsResponse::validate()
{
}

web::json::value ListDisasterRecoveryDrillsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(disasterRecoveryDrillsIsSet_) {
        val[utility::conversions::to_string_t("disaster_recovery_drills")] = ModelBase::toJson(disasterRecoveryDrills_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}

bool ListDisasterRecoveryDrillsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("disaster_recovery_drills"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disaster_recovery_drills"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowDisasterRecoveryDrillParams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisasterRecoveryDrills(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}

std::vector<ShowDisasterRecoveryDrillParams>& ListDisasterRecoveryDrillsResponse::getDisasterRecoveryDrills()
{
    return disasterRecoveryDrills_;
}

void ListDisasterRecoveryDrillsResponse::setDisasterRecoveryDrills(const std::vector<ShowDisasterRecoveryDrillParams>& value)
{
    disasterRecoveryDrills_ = value;
    disasterRecoveryDrillsIsSet_ = true;
}

bool ListDisasterRecoveryDrillsResponse::disasterRecoveryDrillsIsSet() const
{
    return disasterRecoveryDrillsIsSet_;
}

void ListDisasterRecoveryDrillsResponse::unsetdisasterRecoveryDrills()
{
    disasterRecoveryDrillsIsSet_ = false;
}

int32_t ListDisasterRecoveryDrillsResponse::getCount() const
{
    return count_;
}

void ListDisasterRecoveryDrillsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListDisasterRecoveryDrillsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListDisasterRecoveryDrillsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


