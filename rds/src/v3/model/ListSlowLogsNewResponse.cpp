

#include "huaweicloud/rds/v3/model/ListSlowLogsNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSlowLogsNewResponse::ListSlowLogsNewResponse()
{
    slowLogListIsSet_ = false;
    totalRecord_ = 0;
    totalRecordIsSet_ = false;
}

ListSlowLogsNewResponse::~ListSlowLogsNewResponse() = default;

void ListSlowLogsNewResponse::validate()
{
}

web::json::value ListSlowLogsNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(slowLogListIsSet_) {
        val[utility::conversions::to_string_t("slow_log_list")] = ModelBase::toJson(slowLogList_);
    }
    if(totalRecordIsSet_) {
        val[utility::conversions::to_string_t("total_record")] = ModelBase::toJson(totalRecord_);
    }

    return val;
}
bool ListSlowLogsNewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("slow_log_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_log_list"));
        if(!fieldValue.is_null())
        {
            std::vector<SlowLog> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowLogList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_record"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_record"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRecord(refVal);
        }
    }
    return ok;
}


std::vector<SlowLog>& ListSlowLogsNewResponse::getSlowLogList()
{
    return slowLogList_;
}

void ListSlowLogsNewResponse::setSlowLogList(const std::vector<SlowLog>& value)
{
    slowLogList_ = value;
    slowLogListIsSet_ = true;
}

bool ListSlowLogsNewResponse::slowLogListIsSet() const
{
    return slowLogListIsSet_;
}

void ListSlowLogsNewResponse::unsetslowLogList()
{
    slowLogListIsSet_ = false;
}

int32_t ListSlowLogsNewResponse::getTotalRecord() const
{
    return totalRecord_;
}

void ListSlowLogsNewResponse::setTotalRecord(int32_t value)
{
    totalRecord_ = value;
    totalRecordIsSet_ = true;
}

bool ListSlowLogsNewResponse::totalRecordIsSet() const
{
    return totalRecordIsSet_;
}

void ListSlowLogsNewResponse::unsettotalRecord()
{
    totalRecordIsSet_ = false;
}

}
}
}
}
}


