

#include "huaweicloud/gaussdb/v3/model/ShowClickHouseSlowLogSensitiveStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowClickHouseSlowLogSensitiveStatusResponse::ShowClickHouseSlowLogSensitiveStatusResponse()
{
    openSlowLogSwitch_ = "";
    openSlowLogSwitchIsSet_ = false;
}

ShowClickHouseSlowLogSensitiveStatusResponse::~ShowClickHouseSlowLogSensitiveStatusResponse() = default;

void ShowClickHouseSlowLogSensitiveStatusResponse::validate()
{
}

web::json::value ShowClickHouseSlowLogSensitiveStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(openSlowLogSwitchIsSet_) {
        val[utility::conversions::to_string_t("open_slow_log_switch")] = ModelBase::toJson(openSlowLogSwitch_);
    }

    return val;
}
bool ShowClickHouseSlowLogSensitiveStatusResponse::fromJson(const web::json::value& val)
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


std::string ShowClickHouseSlowLogSensitiveStatusResponse::getOpenSlowLogSwitch() const
{
    return openSlowLogSwitch_;
}

void ShowClickHouseSlowLogSensitiveStatusResponse::setOpenSlowLogSwitch(const std::string& value)
{
    openSlowLogSwitch_ = value;
    openSlowLogSwitchIsSet_ = true;
}

bool ShowClickHouseSlowLogSensitiveStatusResponse::openSlowLogSwitchIsSet() const
{
    return openSlowLogSwitchIsSet_;
}

void ShowClickHouseSlowLogSensitiveStatusResponse::unsetopenSlowLogSwitch()
{
    openSlowLogSwitchIsSet_ = false;
}

}
}
}
}
}


