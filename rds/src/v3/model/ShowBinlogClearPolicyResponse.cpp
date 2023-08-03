

#include "huaweicloud/rds/v3/model/ShowBinlogClearPolicyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowBinlogClearPolicyResponse::ShowBinlogClearPolicyResponse()
{
    binlogRetentionHours_ = 0;
    binlogRetentionHoursIsSet_ = false;
}

ShowBinlogClearPolicyResponse::~ShowBinlogClearPolicyResponse() = default;

void ShowBinlogClearPolicyResponse::validate()
{
}

web::json::value ShowBinlogClearPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(binlogRetentionHoursIsSet_) {
        val[utility::conversions::to_string_t("binlog_retention_hours")] = ModelBase::toJson(binlogRetentionHours_);
    }

    return val;
}

bool ShowBinlogClearPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("binlog_retention_hours"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binlog_retention_hours"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBinlogRetentionHours(refVal);
        }
    }
    return ok;
}

int32_t ShowBinlogClearPolicyResponse::getBinlogRetentionHours() const
{
    return binlogRetentionHours_;
}

void ShowBinlogClearPolicyResponse::setBinlogRetentionHours(int32_t value)
{
    binlogRetentionHours_ = value;
    binlogRetentionHoursIsSet_ = true;
}

bool ShowBinlogClearPolicyResponse::binlogRetentionHoursIsSet() const
{
    return binlogRetentionHoursIsSet_;
}

void ShowBinlogClearPolicyResponse::unsetbinlogRetentionHours()
{
    binlogRetentionHoursIsSet_ = false;
}

}
}
}
}
}


