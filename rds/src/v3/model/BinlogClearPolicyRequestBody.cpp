

#include "huaweicloud/rds/v3/model/BinlogClearPolicyRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BinlogClearPolicyRequestBody::BinlogClearPolicyRequestBody()
{
    binlogRetentionHours_ = 0L;
    binlogRetentionHoursIsSet_ = false;
}

BinlogClearPolicyRequestBody::~BinlogClearPolicyRequestBody() = default;

void BinlogClearPolicyRequestBody::validate()
{
}

web::json::value BinlogClearPolicyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(binlogRetentionHoursIsSet_) {
        val[utility::conversions::to_string_t("binlog_retention_hours")] = ModelBase::toJson(binlogRetentionHours_);
    }

    return val;
}

bool BinlogClearPolicyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("binlog_retention_hours"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("binlog_retention_hours"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBinlogRetentionHours(refVal);
        }
    }
    return ok;
}

int64_t BinlogClearPolicyRequestBody::getBinlogRetentionHours() const
{
    return binlogRetentionHours_;
}

void BinlogClearPolicyRequestBody::setBinlogRetentionHours(int64_t value)
{
    binlogRetentionHours_ = value;
    binlogRetentionHoursIsSet_ = true;
}

bool BinlogClearPolicyRequestBody::binlogRetentionHoursIsSet() const
{
    return binlogRetentionHoursIsSet_;
}

void BinlogClearPolicyRequestBody::unsetbinlogRetentionHours()
{
    binlogRetentionHoursIsSet_ = false;
}

}
}
}
}
}


