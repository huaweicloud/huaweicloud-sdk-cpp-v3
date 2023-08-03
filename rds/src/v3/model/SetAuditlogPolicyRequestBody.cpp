

#include "huaweicloud/rds/v3/model/SetAuditlogPolicyRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetAuditlogPolicyRequestBody::SetAuditlogPolicyRequestBody()
{
    keepDays_ = 0;
    keepDaysIsSet_ = false;
    reserveAuditlogs_ = false;
    reserveAuditlogsIsSet_ = false;
}

SetAuditlogPolicyRequestBody::~SetAuditlogPolicyRequestBody() = default;

void SetAuditlogPolicyRequestBody::validate()
{
}

web::json::value SetAuditlogPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }
    if(reserveAuditlogsIsSet_) {
        val[utility::conversions::to_string_t("reserve_auditlogs")] = ModelBase::toJson(reserveAuditlogs_);
    }

    return val;
}

bool SetAuditlogPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keep_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reserve_auditlogs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserve_auditlogs"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReserveAuditlogs(refVal);
        }
    }
    return ok;
}

int32_t SetAuditlogPolicyRequestBody::getKeepDays() const
{
    return keepDays_;
}

void SetAuditlogPolicyRequestBody::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool SetAuditlogPolicyRequestBody::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void SetAuditlogPolicyRequestBody::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

bool SetAuditlogPolicyRequestBody::isReserveAuditlogs() const
{
    return reserveAuditlogs_;
}

void SetAuditlogPolicyRequestBody::setReserveAuditlogs(bool value)
{
    reserveAuditlogs_ = value;
    reserveAuditlogsIsSet_ = true;
}

bool SetAuditlogPolicyRequestBody::reserveAuditlogsIsSet() const
{
    return reserveAuditlogsIsSet_;
}

void SetAuditlogPolicyRequestBody::unsetreserveAuditlogs()
{
    reserveAuditlogsIsSet_ = false;
}

}
}
}
}
}


