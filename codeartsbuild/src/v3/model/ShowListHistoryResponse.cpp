

#include "huaweicloud/codeartsbuild/v3/model/ShowListHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowListHistoryResponse::ShowListHistoryResponse()
{
    historyRecordsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ShowListHistoryResponse::~ShowListHistoryResponse() = default;

void ShowListHistoryResponse::validate()
{
}

web::json::value ShowListHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(historyRecordsIsSet_) {
        val[utility::conversions::to_string_t("history_records")] = ModelBase::toJson(historyRecords_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ShowListHistoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("history_records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("history_records"));
        if(!fieldValue.is_null())
        {
            std::vector<HistoryRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistoryRecords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<HistoryRecord>& ShowListHistoryResponse::getHistoryRecords()
{
    return historyRecords_;
}

void ShowListHistoryResponse::setHistoryRecords(const std::vector<HistoryRecord>& value)
{
    historyRecords_ = value;
    historyRecordsIsSet_ = true;
}

bool ShowListHistoryResponse::historyRecordsIsSet() const
{
    return historyRecordsIsSet_;
}

void ShowListHistoryResponse::unsethistoryRecords()
{
    historyRecordsIsSet_ = false;
}

int32_t ShowListHistoryResponse::getTotal() const
{
    return total_;
}

void ShowListHistoryResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowListHistoryResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowListHistoryResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


