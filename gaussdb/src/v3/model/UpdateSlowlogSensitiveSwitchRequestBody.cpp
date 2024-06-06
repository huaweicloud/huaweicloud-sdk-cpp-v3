

#include "huaweicloud/gaussdb/v3/model/UpdateSlowlogSensitiveSwitchRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateSlowlogSensitiveSwitchRequestBody::UpdateSlowlogSensitiveSwitchRequestBody()
{
    openSlowLogSwitch_ = false;
    openSlowLogSwitchIsSet_ = false;
}

UpdateSlowlogSensitiveSwitchRequestBody::~UpdateSlowlogSensitiveSwitchRequestBody() = default;

void UpdateSlowlogSensitiveSwitchRequestBody::validate()
{
}

web::json::value UpdateSlowlogSensitiveSwitchRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(openSlowLogSwitchIsSet_) {
        val[utility::conversions::to_string_t("open_slow_log_switch")] = ModelBase::toJson(openSlowLogSwitch_);
    }

    return val;
}
bool UpdateSlowlogSensitiveSwitchRequestBody::fromJson(const web::json::value& val)
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


bool UpdateSlowlogSensitiveSwitchRequestBody::isOpenSlowLogSwitch() const
{
    return openSlowLogSwitch_;
}

void UpdateSlowlogSensitiveSwitchRequestBody::setOpenSlowLogSwitch(bool value)
{
    openSlowLogSwitch_ = value;
    openSlowLogSwitchIsSet_ = true;
}

bool UpdateSlowlogSensitiveSwitchRequestBody::openSlowLogSwitchIsSet() const
{
    return openSlowLogSwitchIsSet_;
}

void UpdateSlowlogSensitiveSwitchRequestBody::unsetopenSlowLogSwitch()
{
    openSlowLogSwitchIsSet_ = false;
}

}
}
}
}
}


