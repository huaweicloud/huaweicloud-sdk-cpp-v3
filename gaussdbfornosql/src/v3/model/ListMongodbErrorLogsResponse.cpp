

#include "huaweicloud/gaussdbfornosql/v3/model/ListMongodbErrorLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListMongodbErrorLogsResponse::ListMongodbErrorLogsResponse()
{
    errorLogsIsSet_ = false;
}

ListMongodbErrorLogsResponse::~ListMongodbErrorLogsResponse() = default;

void ListMongodbErrorLogsResponse::validate()
{
}

web::json::value ListMongodbErrorLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorLogsIsSet_) {
        val[utility::conversions::to_string_t("error_logs")] = ModelBase::toJson(errorLogs_);
    }

    return val;
}
bool ListMongodbErrorLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_logs"));
        if(!fieldValue.is_null())
        {
            std::vector<MongodbErrorLogDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorLogs(refVal);
        }
    }
    return ok;
}


std::vector<MongodbErrorLogDetail>& ListMongodbErrorLogsResponse::getErrorLogs()
{
    return errorLogs_;
}

void ListMongodbErrorLogsResponse::setErrorLogs(const std::vector<MongodbErrorLogDetail>& value)
{
    errorLogs_ = value;
    errorLogsIsSet_ = true;
}

bool ListMongodbErrorLogsResponse::errorLogsIsSet() const
{
    return errorLogsIsSet_;
}

void ListMongodbErrorLogsResponse::unseterrorLogs()
{
    errorLogsIsSet_ = false;
}

}
}
}
}
}


