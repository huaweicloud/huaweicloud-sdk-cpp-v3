

#include "huaweicloud/dbss/v1/model/ListAuditAlarmLogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditAlarmLogResponse::ListAuditAlarmLogResponse()
{
    totalNum_ = 0;
    totalNumIsSet_ = false;
    alarmLogIsSet_ = false;
}

ListAuditAlarmLogResponse::~ListAuditAlarmLogResponse() = default;

void ListAuditAlarmLogResponse::validate()
{
}

web::json::value ListAuditAlarmLogResponse::toJson() const
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
bool ListAuditAlarmLogResponse::fromJson(const web::json::value& val)
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
            std::vector<AlarmLogResponse_alarm_log> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmLog(refVal);
        }
    }
    return ok;
}


int32_t ListAuditAlarmLogResponse::getTotalNum() const
{
    return totalNum_;
}

void ListAuditAlarmLogResponse::setTotalNum(int32_t value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool ListAuditAlarmLogResponse::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void ListAuditAlarmLogResponse::unsettotalNum()
{
    totalNumIsSet_ = false;
}

std::vector<AlarmLogResponse_alarm_log>& ListAuditAlarmLogResponse::getAlarmLog()
{
    return alarmLog_;
}

void ListAuditAlarmLogResponse::setAlarmLog(const std::vector<AlarmLogResponse_alarm_log>& value)
{
    alarmLog_ = value;
    alarmLogIsSet_ = true;
}

bool ListAuditAlarmLogResponse::alarmLogIsSet() const
{
    return alarmLogIsSet_;
}

void ListAuditAlarmLogResponse::unsetalarmLog()
{
    alarmLogIsSet_ = false;
}

}
}
}
}
}


