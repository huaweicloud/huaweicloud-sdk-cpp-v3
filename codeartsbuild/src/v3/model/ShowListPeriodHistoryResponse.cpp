

#include "huaweicloud/codeartsbuild/v3/model/ShowListPeriodHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowListPeriodHistoryResponse::ShowListPeriodHistoryResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    historyRecordsIsSet_ = false;
}

ShowListPeriodHistoryResponse::~ShowListPeriodHistoryResponse() = default;

void ShowListPeriodHistoryResponse::validate()
{
}

web::json::value ShowListPeriodHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(historyRecordsIsSet_) {
        val[utility::conversions::to_string_t("history_records")] = ModelBase::toJson(historyRecords_);
    }

    return val;
}
bool ShowListPeriodHistoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("history_records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("history_records"));
        if(!fieldValue.is_null())
        {
            std::vector<HistoryRecord_1> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistoryRecords(refVal);
        }
    }
    return ok;
}


int32_t ShowListPeriodHistoryResponse::getTotal() const
{
    return total_;
}

void ShowListPeriodHistoryResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowListPeriodHistoryResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowListPeriodHistoryResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<HistoryRecord_1>& ShowListPeriodHistoryResponse::getHistoryRecords()
{
    return historyRecords_;
}

void ShowListPeriodHistoryResponse::setHistoryRecords(const std::vector<HistoryRecord_1>& value)
{
    historyRecords_ = value;
    historyRecordsIsSet_ = true;
}

bool ShowListPeriodHistoryResponse::historyRecordsIsSet() const
{
    return historyRecordsIsSet_;
}

void ShowListPeriodHistoryResponse::unsethistoryRecords()
{
    historyRecordsIsSet_ = false;
}

}
}
}
}
}


