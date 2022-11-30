

#include "huaweicloud/csms/v1/model/DeleteSecretForScheduleRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




DeleteSecretForScheduleRequestBody::DeleteSecretForScheduleRequestBody()
{
    recoveryWindowInDays_ = 0;
    recoveryWindowInDaysIsSet_ = false;
}

DeleteSecretForScheduleRequestBody::~DeleteSecretForScheduleRequestBody() = default;

void DeleteSecretForScheduleRequestBody::validate()
{
}

web::json::value DeleteSecretForScheduleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recoveryWindowInDaysIsSet_) {
        val[utility::conversions::to_string_t("recovery_window_in_days")] = ModelBase::toJson(recoveryWindowInDays_);
    }

    return val;
}

bool DeleteSecretForScheduleRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("recovery_window_in_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recovery_window_in_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecoveryWindowInDays(refVal);
        }
    }
    return ok;
}


int32_t DeleteSecretForScheduleRequestBody::getRecoveryWindowInDays() const
{
    return recoveryWindowInDays_;
}

void DeleteSecretForScheduleRequestBody::setRecoveryWindowInDays(int32_t value)
{
    recoveryWindowInDays_ = value;
    recoveryWindowInDaysIsSet_ = true;
}

bool DeleteSecretForScheduleRequestBody::recoveryWindowInDaysIsSet() const
{
    return recoveryWindowInDaysIsSet_;
}

void DeleteSecretForScheduleRequestBody::unsetrecoveryWindowInDays()
{
    recoveryWindowInDaysIsSet_ = false;
}

}
}
}
}
}


