

#include "huaweicloud/dbss/v1/model/ListAuditAlarmLogNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditAlarmLogNewResponse::ListAuditAlarmLogNewResponse()
{
    totalNum_ = 0;
    totalNumIsSet_ = false;
    alarmLogIsSet_ = false;
}

ListAuditAlarmLogNewResponse::~ListAuditAlarmLogNewResponse() = default;

void ListAuditAlarmLogNewResponse::validate()
{
}

web::json::value ListAuditAlarmLogNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalNumIsSet_) {
        val[utility::conversions::to_string_t("total_num")] = ModelBase::toJson(totalNum_);
    }
    if(alarmLogIsSet_) {
        val[utility::conversions::to_string_t("alarm_log")] = ModelBase::toJson(alarmLog_);
    }

    return val;
}
bool ListAuditAlarmLogNewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_log"));
        if(!fieldValue.is_null())
        {
            std::vector<AlarmLogResponseNew_alarm_log> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmLog(refVal);
        }
    }
    return ok;
}


int32_t ListAuditAlarmLogNewResponse::getTotalNum() const
{
    return totalNum_;
}

void ListAuditAlarmLogNewResponse::setTotalNum(int32_t value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool ListAuditAlarmLogNewResponse::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void ListAuditAlarmLogNewResponse::unsettotalNum()
{
    totalNumIsSet_ = false;
}

std::vector<AlarmLogResponseNew_alarm_log>& ListAuditAlarmLogNewResponse::getAlarmLog()
{
    return alarmLog_;
}

void ListAuditAlarmLogNewResponse::setAlarmLog(const std::vector<AlarmLogResponseNew_alarm_log>& value)
{
    alarmLog_ = value;
    alarmLogIsSet_ = true;
}

bool ListAuditAlarmLogNewResponse::alarmLogIsSet() const
{
    return alarmLogIsSet_;
}

void ListAuditAlarmLogNewResponse::unsetalarmLog()
{
    alarmLogIsSet_ = false;
}

}
}
}
}
}


