

#include "huaweicloud/rds/v3/model/ShowAuditlogPolicyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowAuditlogPolicyResponse::ShowAuditlogPolicyResponse()
{
    keepDays_ = 0;
    keepDaysIsSet_ = false;
}

ShowAuditlogPolicyResponse::~ShowAuditlogPolicyResponse() = default;

void ShowAuditlogPolicyResponse::validate()
{
}

web::json::value ShowAuditlogPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }

    return val;
}

bool ShowAuditlogPolicyResponse::fromJson(const web::json::value& val)
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
    return ok;
}

int32_t ShowAuditlogPolicyResponse::getKeepDays() const
{
    return keepDays_;
}

void ShowAuditlogPolicyResponse::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool ShowAuditlogPolicyResponse::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void ShowAuditlogPolicyResponse::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

}
}
}
}
}


