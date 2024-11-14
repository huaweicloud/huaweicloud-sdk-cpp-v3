

#include "huaweicloud/gaussdbfornosql/v3/model/ModifyInstanceOpsWindowV3Req.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ModifyInstanceOpsWindowV3Req::ModifyInstanceOpsWindowV3Req()
{
    startTime_ = "";
    startTimeIsSet_ = false;
}

ModifyInstanceOpsWindowV3Req::~ModifyInstanceOpsWindowV3Req() = default;

void ModifyInstanceOpsWindowV3Req::validate()
{
}

web::json::value ModifyInstanceOpsWindowV3Req::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }

    return val;
}
bool ModifyInstanceOpsWindowV3Req::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    return ok;
}


std::string ModifyInstanceOpsWindowV3Req::getStartTime() const
{
    return startTime_;
}

void ModifyInstanceOpsWindowV3Req::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ModifyInstanceOpsWindowV3Req::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ModifyInstanceOpsWindowV3Req::unsetstartTime()
{
    startTimeIsSet_ = false;
}

}
}
}
}
}


