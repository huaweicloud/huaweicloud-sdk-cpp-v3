

#include "huaweicloud/gaussdb/v3/model/UpdateClickHouseSlowLogSensitiveStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateClickHouseSlowLogSensitiveStatusResponse::UpdateClickHouseSlowLogSensitiveStatusResponse()
{
    openSlowLogSwitch_ = "";
    openSlowLogSwitchIsSet_ = false;
}

UpdateClickHouseSlowLogSensitiveStatusResponse::~UpdateClickHouseSlowLogSensitiveStatusResponse() = default;

void UpdateClickHouseSlowLogSensitiveStatusResponse::validate()
{
}

web::json::value UpdateClickHouseSlowLogSensitiveStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(openSlowLogSwitchIsSet_) {
        val[utility::conversions::to_string_t("open_slow_log_switch")] = ModelBase::toJson(openSlowLogSwitch_);
    }

    return val;
}
bool UpdateClickHouseSlowLogSensitiveStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("open_slow_log_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("open_slow_log_switch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenSlowLogSwitch(refVal);
        }
    }
    return ok;
}


std::string UpdateClickHouseSlowLogSensitiveStatusResponse::getOpenSlowLogSwitch() const
{
    return openSlowLogSwitch_;
}

void UpdateClickHouseSlowLogSensitiveStatusResponse::setOpenSlowLogSwitch(const std::string& value)
{
    openSlowLogSwitch_ = value;
    openSlowLogSwitchIsSet_ = true;
}

bool UpdateClickHouseSlowLogSensitiveStatusResponse::openSlowLogSwitchIsSet() const
{
    return openSlowLogSwitchIsSet_;
}

void UpdateClickHouseSlowLogSensitiveStatusResponse::unsetopenSlowLogSwitch()
{
    openSlowLogSwitchIsSet_ = false;
}

}
}
}
}
}


