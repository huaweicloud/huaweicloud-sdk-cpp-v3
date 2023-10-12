

#include "huaweicloud/rds/v3/model/ListSlowLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSlowLogsResponse::ListSlowLogsResponse()
{
    slowLogListIsSet_ = false;
    totalRecord_ = 0;
    totalRecordIsSet_ = false;
}

ListSlowLogsResponse::~ListSlowLogsResponse() = default;

void ListSlowLogsResponse::validate()
{
}

web::json::value ListSlowLogsResponse::toJson() const
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
bool ListSlowLogsResponse::fromJson(const web::json::value& val)
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


std::vector<SlowLog>& ListSlowLogsResponse::getSlowLogList()
{
    return slowLogList_;
}

void ListSlowLogsResponse::setSlowLogList(const std::vector<SlowLog>& value)
{
    slowLogList_ = value;
    slowLogListIsSet_ = true;
}

bool ListSlowLogsResponse::slowLogListIsSet() const
{
    return slowLogListIsSet_;
}

void ListSlowLogsResponse::unsetslowLogList()
{
    slowLogListIsSet_ = false;
}

int32_t ListSlowLogsResponse::getTotalRecord() const
{
    return totalRecord_;
}

void ListSlowLogsResponse::setTotalRecord(int32_t value)
{
    totalRecord_ = value;
    totalRecordIsSet_ = true;
}

bool ListSlowLogsResponse::totalRecordIsSet() const
{
    return totalRecordIsSet_;
}

void ListSlowLogsResponse::unsettotalRecord()
{
    totalRecordIsSet_ = false;
}

}
}
}
}
}


