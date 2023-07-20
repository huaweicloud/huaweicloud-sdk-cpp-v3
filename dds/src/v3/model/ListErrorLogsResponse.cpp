

#include "huaweicloud/dds/v3/model/ListErrorLogsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListErrorLogsResponse::ListErrorLogsResponse()
{
    errorLogListIsSet_ = false;
    totalRecord_ = 0;
    totalRecordIsSet_ = false;
}

ListErrorLogsResponse::~ListErrorLogsResponse() = default;

void ListErrorLogsResponse::validate()
{
}

web::json::value ListErrorLogsResponse::toJson() const
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

bool ListErrorLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_log_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_log_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ErrorlogResult> refVal;
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

std::vector<ErrorlogResult>& ListErrorLogsResponse::getErrorLogList()
{
    return errorLogList_;
}

void ListErrorLogsResponse::setErrorLogList(const std::vector<ErrorlogResult>& value)
{
    errorLogList_ = value;
    errorLogListIsSet_ = true;
}

bool ListErrorLogsResponse::errorLogListIsSet() const
{
    return errorLogListIsSet_;
}

void ListErrorLogsResponse::unseterrorLogList()
{
    errorLogListIsSet_ = false;
}

int32_t ListErrorLogsResponse::getTotalRecord() const
{
    return totalRecord_;
}

void ListErrorLogsResponse::setTotalRecord(int32_t value)
{
    totalRecord_ = value;
    totalRecordIsSet_ = true;
}

bool ListErrorLogsResponse::totalRecordIsSet() const
{
    return totalRecordIsSet_;
}

void ListErrorLogsResponse::unsettotalRecord()
{
    totalRecordIsSet_ = false;
}

}
}
}
}
}


