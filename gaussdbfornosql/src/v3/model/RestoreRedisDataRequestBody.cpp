

#include "huaweicloud/gaussdbfornosql/v3/model/RestoreRedisDataRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RestoreRedisDataRequestBody::RestoreRedisDataRequestBody()
{
    recoveryInfoIsSet_ = false;
}

RestoreRedisDataRequestBody::~RestoreRedisDataRequestBody() = default;

void RestoreRedisDataRequestBody::validate()
{
}

web::json::value RestoreRedisDataRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recoveryInfoIsSet_) {
        val[utility::conversions::to_string_t("recovery_info")] = ModelBase::toJson(recoveryInfo_);
    }

    return val;
}
bool RestoreRedisDataRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("recovery_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recovery_info"));
        if(!fieldValue.is_null())
        {
            RecoveryInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecoveryInfo(refVal);
        }
    }
    return ok;
}


RecoveryInfo RestoreRedisDataRequestBody::getRecoveryInfo() const
{
    return recoveryInfo_;
}

void RestoreRedisDataRequestBody::setRecoveryInfo(const RecoveryInfo& value)
{
    recoveryInfo_ = value;
    recoveryInfoIsSet_ = true;
}

bool RestoreRedisDataRequestBody::recoveryInfoIsSet() const
{
    return recoveryInfoIsSet_;
}

void RestoreRedisDataRequestBody::unsetrecoveryInfo()
{
    recoveryInfoIsSet_ = false;
}

}
}
}
}
}


