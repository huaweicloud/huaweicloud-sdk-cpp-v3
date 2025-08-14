

#include "huaweicloud/iotda/v5/model/TaskDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




TaskDetail::TaskDetail()
{
    target_ = "";
    targetIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    output_ = "";
    outputIsSet_ = false;
    errorIsSet_ = false;
}

TaskDetail::~TaskDetail() = default;

void TaskDetail::validate()
{
}

web::json::value TaskDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetIsSet_) {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(target_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }

    return val;
}
bool TaskDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarget(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            ErrorInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    return ok;
}


std::string TaskDetail::getTarget() const
{
    return target_;
}

void TaskDetail::setTarget(const std::string& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool TaskDetail::targetIsSet() const
{
    return targetIsSet_;
}

void TaskDetail::unsettarget()
{
    targetIsSet_ = false;
}

std::string TaskDetail::getStatus() const
{
    return status_;
}

void TaskDetail::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TaskDetail::statusIsSet() const
{
    return statusIsSet_;
}

void TaskDetail::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TaskDetail::getOutput() const
{
    return output_;
}

void TaskDetail::setOutput(const std::string& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool TaskDetail::outputIsSet() const
{
    return outputIsSet_;
}

void TaskDetail::unsetoutput()
{
    outputIsSet_ = false;
}

ErrorInfo TaskDetail::getError() const
{
    return error_;
}

void TaskDetail::setError(const ErrorInfo& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool TaskDetail::errorIsSet() const
{
    return errorIsSet_;
}

void TaskDetail::unseterror()
{
    errorIsSet_ = false;
}

}
}
}
}
}


