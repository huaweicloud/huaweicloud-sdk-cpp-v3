

#include "huaweicloud/gaussdbforopengauss/v3/model/ListInstanceErrorLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListInstanceErrorLogsResponse::ListInstanceErrorLogsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    logFilesIsSet_ = false;
}

ListInstanceErrorLogsResponse::~ListInstanceErrorLogsResponse() = default;

void ListInstanceErrorLogsResponse::validate()
{
}

web::json::value ListInstanceErrorLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(logFilesIsSet_) {
        val[utility::conversions::to_string_t("log_files")] = ModelBase::toJson(logFiles_);
    }

    return val;
}
bool ListInstanceErrorLogsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("log_files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_files"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceLogFile> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogFiles(refVal);
        }
    }
    return ok;
}


int32_t ListInstanceErrorLogsResponse::getTotal() const
{
    return total_;
}

void ListInstanceErrorLogsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListInstanceErrorLogsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListInstanceErrorLogsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<InstanceLogFile>& ListInstanceErrorLogsResponse::getLogFiles()
{
    return logFiles_;
}

void ListInstanceErrorLogsResponse::setLogFiles(const std::vector<InstanceLogFile>& value)
{
    logFiles_ = value;
    logFilesIsSet_ = true;
}

bool ListInstanceErrorLogsResponse::logFilesIsSet() const
{
    return logFilesIsSet_;
}

void ListInstanceErrorLogsResponse::unsetlogFiles()
{
    logFilesIsSet_ = false;
}

}
}
}
}
}


