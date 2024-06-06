

#include "huaweicloud/gaussdb/v3/model/ShowSlowlogSensitiveStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowSlowlogSensitiveStatusResponse::ShowSlowlogSensitiveStatusResponse()
{
    openSlowLogSwitch_ = false;
    openSlowLogSwitchIsSet_ = false;
}

ShowSlowlogSensitiveStatusResponse::~ShowSlowlogSensitiveStatusResponse() = default;

void ShowSlowlogSensitiveStatusResponse::validate()
{
}

web::json::value ShowSlowlogSensitiveStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(openSlowLogSwitchIsSet_) {
        val[utility::conversions::to_string_t("open_slow_log_switch")] = ModelBase::toJson(openSlowLogSwitch_);
    }

    return val;
}
bool ShowSlowlogSensitiveStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("open_slow_log_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("open_slow_log_switch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenSlowLogSwitch(refVal);
        }
    }
    return ok;
}


bool ShowSlowlogSensitiveStatusResponse::isOpenSlowLogSwitch() const
{
    return openSlowLogSwitch_;
}

void ShowSlowlogSensitiveStatusResponse::setOpenSlowLogSwitch(bool value)
{
    openSlowLogSwitch_ = value;
    openSlowLogSwitchIsSet_ = true;
}

bool ShowSlowlogSensitiveStatusResponse::openSlowLogSwitchIsSet() const
{
    return openSlowLogSwitchIsSet_;
}

void ShowSlowlogSensitiveStatusResponse::unsetopenSlowLogSwitch()
{
    openSlowLogSwitchIsSet_ = false;
}

}
}
}
}
}


