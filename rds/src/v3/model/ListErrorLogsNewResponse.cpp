

#include "huaweicloud/rds/v3/model/ListErrorLogsNewResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListErrorLogsNewResponse::ListErrorLogsNewResponse()
{
    errorLogListIsSet_ = false;
    totalRecord_ = 0;
    totalRecordIsSet_ = false;
}

ListErrorLogsNewResponse::~ListErrorLogsNewResponse() = default;

void ListErrorLogsNewResponse::validate()
{
}

web::json::value ListErrorLogsNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorLogListIsSet_) {
        val[utility::conversions::to_string_t("error_log_list")] = ModelBase::toJson(errorLogList_);
    }
    if(totalRecordIsSet_) {
        val[utility::conversions::to_string_t("total_record")] = ModelBase::toJson(totalRecord_);
    }

    return val;
}

bool ListErrorLogsNewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_log_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_log_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ErrorLog> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorLogList(refVal);
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

std::vector<ErrorLog>& ListErrorLogsNewResponse::getErrorLogList()
{
    return errorLogList_;
}

void ListErrorLogsNewResponse::setErrorLogList(const std::vector<ErrorLog>& value)
{
    errorLogList_ = value;
    errorLogListIsSet_ = true;
}

bool ListErrorLogsNewResponse::errorLogListIsSet() const
{
    return errorLogListIsSet_;
}

void ListErrorLogsNewResponse::unseterrorLogList()
{
    errorLogListIsSet_ = false;
}

int32_t ListErrorLogsNewResponse::getTotalRecord() const
{
    return totalRecord_;
}

void ListErrorLogsNewResponse::setTotalRecord(int32_t value)
{
    totalRecord_ = value;
    totalRecordIsSet_ = true;
}

bool ListErrorLogsNewResponse::totalRecordIsSet() const
{
    return totalRecordIsSet_;
}

void ListErrorLogsNewResponse::unsettotalRecord()
{
    totalRecordIsSet_ = false;
}

}
}
}
}
}


