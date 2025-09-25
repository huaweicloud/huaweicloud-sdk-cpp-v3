

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowAlarmHistoryRecordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowAlarmHistoryRecordResponse::ShowAlarmHistoryRecordResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    historyRecordsIsSet_ = false;
}

ShowAlarmHistoryRecordResponse::~ShowAlarmHistoryRecordResponse() = default;

void ShowAlarmHistoryRecordResponse::validate()
{
}

web::json::value ShowAlarmHistoryRecordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(historyRecordsIsSet_) {
        val[utility::conversions::to_string_t("history_records")] = ModelBase::toJson(historyRecords_);
    }

    return val;
}
bool ShowAlarmHistoryRecordResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("history_records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("history_records"));
        if(!fieldValue.is_null())
        {
            std::vector<AlarmHistoryRecordResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistoryRecords(refVal);
        }
    }
    return ok;
}


int32_t ShowAlarmHistoryRecordResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowAlarmHistoryRecordResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowAlarmHistoryRecordResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowAlarmHistoryRecordResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<AlarmHistoryRecordResult>& ShowAlarmHistoryRecordResponse::getHistoryRecords()
{
    return historyRecords_;
}

void ShowAlarmHistoryRecordResponse::setHistoryRecords(const std::vector<AlarmHistoryRecordResult>& value)
{
    historyRecords_ = value;
    historyRecordsIsSet_ = true;
}

bool ShowAlarmHistoryRecordResponse::historyRecordsIsSet() const
{
    return historyRecordsIsSet_;
}

void ShowAlarmHistoryRecordResponse::unsethistoryRecords()
{
    historyRecordsIsSet_ = false;
}

}
}
}
}
}


