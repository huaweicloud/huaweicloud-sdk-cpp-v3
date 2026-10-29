

#include "huaweicloud/codeartscheck/v2/model/ProcessInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ProcessInfo::ProcessInfo()
{
    exeTime_ = "";
    exeTimeIsSet_ = false;
    executeTime_ = "";
    executeTimeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    process_ = "";
    processIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ProcessInfo::~ProcessInfo() = default;

void ProcessInfo::validate()
{
}

web::json::value ProcessInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(exeTimeIsSet_) {
        val[utility::conversions::to_string_t("exeTime")] = ModelBase::toJson(exeTime_);
    }
    if(executeTimeIsSet_) {
        val[utility::conversions::to_string_t("executeTime")] = ModelBase::toJson(executeTime_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(processIsSet_) {
        val[utility::conversions::to_string_t("process")] = ModelBase::toJson(process_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ProcessInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("exeTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exeTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExeTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executeTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executeTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ProcessInfo::getExeTime() const
{
    return exeTime_;
}

void ProcessInfo::setExeTime(const std::string& value)
{
    exeTime_ = value;
    exeTimeIsSet_ = true;
}

bool ProcessInfo::exeTimeIsSet() const
{
    return exeTimeIsSet_;
}

void ProcessInfo::unsetexeTime()
{
    exeTimeIsSet_ = false;
}

std::string ProcessInfo::getExecuteTime() const
{
    return executeTime_;
}

void ProcessInfo::setExecuteTime(const std::string& value)
{
    executeTime_ = value;
    executeTimeIsSet_ = true;
}

bool ProcessInfo::executeTimeIsSet() const
{
    return executeTimeIsSet_;
}

void ProcessInfo::unsetexecuteTime()
{
    executeTimeIsSet_ = false;
}

std::string ProcessInfo::getMessage() const
{
    return message_;
}

void ProcessInfo::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ProcessInfo::messageIsSet() const
{
    return messageIsSet_;
}

void ProcessInfo::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ProcessInfo::getProcess() const
{
    return process_;
}

void ProcessInfo::setProcess(const std::string& value)
{
    process_ = value;
    processIsSet_ = true;
}

bool ProcessInfo::processIsSet() const
{
    return processIsSet_;
}

void ProcessInfo::unsetprocess()
{
    processIsSet_ = false;
}

std::string ProcessInfo::getStatus() const
{
    return status_;
}

void ProcessInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ProcessInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ProcessInfo::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


