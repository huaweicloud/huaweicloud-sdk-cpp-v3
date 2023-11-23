

#include "huaweicloud/dds/v3/model/ListLtsErrorLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListLtsErrorLogsResponse::ListLtsErrorLogsResponse()
{
    errorLogsIsSet_ = false;
}

ListLtsErrorLogsResponse::~ListLtsErrorLogsResponse() = default;

void ListLtsErrorLogsResponse::validate()
{
}

web::json::value ListLtsErrorLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorLogsIsSet_) {
        val[utility::conversions::to_string_t("error_logs")] = ModelBase::toJson(errorLogs_);
    }

    return val;
}
bool ListLtsErrorLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_logs"));
        if(!fieldValue.is_null())
        {
            std::vector<ErrorLogDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorLogs(refVal);
        }
    }
    return ok;
}


std::vector<ErrorLogDetail>& ListLtsErrorLogsResponse::getErrorLogs()
{
    return errorLogs_;
}

void ListLtsErrorLogsResponse::setErrorLogs(const std::vector<ErrorLogDetail>& value)
{
    errorLogs_ = value;
    errorLogsIsSet_ = true;
}

bool ListLtsErrorLogsResponse::errorLogsIsSet() const
{
    return errorLogsIsSet_;
}

void ListLtsErrorLogsResponse::unseterrorLogs()
{
    errorLogsIsSet_ = false;
}

}
}
}
}
}


