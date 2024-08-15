

#include "huaweicloud/lts/v2/model/ListLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListLogsResponse::ListLogsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    logsIsSet_ = false;
    isQueryComplete_ = false;
    isQueryCompleteIsSet_ = false;
    analysisLogsIsSet_ = false;
}

ListLogsResponse::~ListLogsResponse() = default;

void ListLogsResponse::validate()
{
}

web::json::value ListLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(logsIsSet_) {
        val[utility::conversions::to_string_t("logs")] = ModelBase::toJson(logs_);
    }
    if(isQueryCompleteIsSet_) {
        val[utility::conversions::to_string_t("isQueryComplete")] = ModelBase::toJson(isQueryComplete_);
    }
    if(analysisLogsIsSet_) {
        val[utility::conversions::to_string_t("analysisLogs")] = ModelBase::toJson(analysisLogs_);
    }

    return val;
}
bool ListLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logs"));
        if(!fieldValue.is_null())
        {
            std::vector<LogContents> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isQueryComplete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isQueryComplete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsQueryComplete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("analysisLogs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("analysisLogs"));
        if(!fieldValue.is_null())
        {
            std::vector<std::map<std::string, std::string>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnalysisLogs(refVal);
        }
    }
    return ok;
}


int32_t ListLogsResponse::getCount() const
{
    return count_;
}

void ListLogsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListLogsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListLogsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<LogContents>& ListLogsResponse::getLogs()
{
    return logs_;
}

void ListLogsResponse::setLogs(const std::vector<LogContents>& value)
{
    logs_ = value;
    logsIsSet_ = true;
}

bool ListLogsResponse::logsIsSet() const
{
    return logsIsSet_;
}

void ListLogsResponse::unsetlogs()
{
    logsIsSet_ = false;
}

bool ListLogsResponse::isIsQueryComplete() const
{
    return isQueryComplete_;
}

void ListLogsResponse::setIsQueryComplete(bool value)
{
    isQueryComplete_ = value;
    isQueryCompleteIsSet_ = true;
}

bool ListLogsResponse::isQueryCompleteIsSet() const
{
    return isQueryCompleteIsSet_;
}

void ListLogsResponse::unsetisQueryComplete()
{
    isQueryCompleteIsSet_ = false;
}

std::vector<std::map<std::string, std::string>>& ListLogsResponse::getAnalysisLogs()
{
    return analysisLogs_;
}

void ListLogsResponse::setAnalysisLogs(const std::vector<std::map<std::string, std::string>>& value)
{
    analysisLogs_ = value;
    analysisLogsIsSet_ = true;
}

bool ListLogsResponse::analysisLogsIsSet() const
{
    return analysisLogsIsSet_;
}

void ListLogsResponse::unsetanalysisLogs()
{
    analysisLogsIsSet_ = false;
}

}
}
}
}
}


