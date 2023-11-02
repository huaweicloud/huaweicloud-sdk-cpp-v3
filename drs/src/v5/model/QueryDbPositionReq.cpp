

#include "huaweicloud/drs/v5/model/QueryDbPositionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QueryDbPositionReq::QueryDbPositionReq()
{
    resetPositionTime_ = "";
    resetPositionTimeIsSet_ = false;
}

QueryDbPositionReq::~QueryDbPositionReq() = default;

void QueryDbPositionReq::validate()
{
}

web::json::value QueryDbPositionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resetPositionTimeIsSet_) {
        val[utility::conversions::to_string_t("reset_position_time")] = ModelBase::toJson(resetPositionTime_);
    }

    return val;
}
bool QueryDbPositionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("reset_position_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reset_position_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResetPositionTime(refVal);
        }
    }
    return ok;
}


std::string QueryDbPositionReq::getResetPositionTime() const
{
    return resetPositionTime_;
}

void QueryDbPositionReq::setResetPositionTime(const std::string& value)
{
    resetPositionTime_ = value;
    resetPositionTimeIsSet_ = true;
}

bool QueryDbPositionReq::resetPositionTimeIsSet() const
{
    return resetPositionTimeIsSet_;
}

void QueryDbPositionReq::unsetresetPositionTime()
{
    resetPositionTimeIsSet_ = false;
}

}
}
}
}
}


