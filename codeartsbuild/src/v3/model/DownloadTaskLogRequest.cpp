

#include "huaweicloud/codeartsbuild/v3/model/DownloadTaskLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DownloadTaskLogRequest::DownloadTaskLogRequest()
{
    recordId_ = "";
    recordIdIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    logLevel_ = "";
    logLevelIsSet_ = false;
}

DownloadTaskLogRequest::~DownloadTaskLogRequest() = default;

void DownloadTaskLogRequest::validate()
{
}

web::json::value DownloadTaskLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(recordIdIsSet_) {
        val[utility::conversions::to_string_t("record_id")] = ModelBase::toJson(recordId_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(logLevelIsSet_) {
        val[utility::conversions::to_string_t("log_level")] = ModelBase::toJson(logLevel_);
    }

    return val;
}
bool DownloadTaskLogRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogLevel(refVal);
        }
    }
    return ok;
}


std::string DownloadTaskLogRequest::getRecordId() const
{
    return recordId_;
}

void DownloadTaskLogRequest::setRecordId(const std::string& value)
{
    recordId_ = value;
    recordIdIsSet_ = true;
}

bool DownloadTaskLogRequest::recordIdIsSet() const
{
    return recordIdIsSet_;
}

void DownloadTaskLogRequest::unsetrecordId()
{
    recordIdIsSet_ = false;
}

std::string DownloadTaskLogRequest::getTaskName() const
{
    return taskName_;
}

void DownloadTaskLogRequest::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool DownloadTaskLogRequest::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void DownloadTaskLogRequest::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string DownloadTaskLogRequest::getLogLevel() const
{
    return logLevel_;
}

void DownloadTaskLogRequest::setLogLevel(const std::string& value)
{
    logLevel_ = value;
    logLevelIsSet_ = true;
}

bool DownloadTaskLogRequest::logLevelIsSet() const
{
    return logLevelIsSet_;
}

void DownloadTaskLogRequest::unsetlogLevel()
{
    logLevelIsSet_ = false;
}

}
}
}
}
}


