

#include "huaweicloud/gaussdb/v3/model/UpdateSlowlogSensitiveStatusRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateSlowlogSensitiveStatusRequestBody::UpdateSlowlogSensitiveStatusRequestBody()
{
    openSlowLogSwitch_ = false;
    openSlowLogSwitchIsSet_ = false;
}

UpdateSlowlogSensitiveStatusRequestBody::~UpdateSlowlogSensitiveStatusRequestBody() = default;

void UpdateSlowlogSensitiveStatusRequestBody::validate()
{
}

web::json::value UpdateSlowlogSensitiveStatusRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(openSlowLogSwitchIsSet_) {
        val[utility::conversions::to_string_t("open_slow_log_switch")] = ModelBase::toJson(openSlowLogSwitch_);
    }

    return val;
}
bool UpdateSlowlogSensitiveStatusRequestBody::fromJson(const web::json::value& val)
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


bool UpdateSlowlogSensitiveStatusRequestBody::isOpenSlowLogSwitch() const
{
    return openSlowLogSwitch_;
}

void UpdateSlowlogSensitiveStatusRequestBody::setOpenSlowLogSwitch(bool value)
{
    openSlowLogSwitch_ = value;
    openSlowLogSwitchIsSet_ = true;
}

bool UpdateSlowlogSensitiveStatusRequestBody::openSlowLogSwitchIsSet() const
{
    return openSlowLogSwitchIsSet_;
}

void UpdateSlowlogSensitiveStatusRequestBody::unsetopenSlowLogSwitch()
{
    openSlowLogSwitchIsSet_ = false;
}

}
}
}
}
}


