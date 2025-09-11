

#include "huaweicloud/functiongraph/v2/model/NodeExecution.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




NodeExecution::NodeExecution()
{
    status_ = "";
    statusIsSet_ = false;
    inputIsSet_ = false;
    outputIsSet_ = false;
    beginTime_ = 0L;
    beginTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    errorMessageIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

NodeExecution::~NodeExecution() = default;

void NodeExecution::validate()
{
}

web::json::value NodeExecution::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool NodeExecution::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


std::string NodeExecution::getStatus() const
{
    return status_;
}

void NodeExecution::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NodeExecution::statusIsSet() const
{
    return statusIsSet_;
}

void NodeExecution::unsetstatus()
{
    statusIsSet_ = false;
}

Object NodeExecution::getInput() const
{
    return input_;
}

void NodeExecution::setInput(const Object& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool NodeExecution::inputIsSet() const
{
    return inputIsSet_;
}

void NodeExecution::unsetinput()
{
    inputIsSet_ = false;
}

Object NodeExecution::getOutput() const
{
    return output_;
}

void NodeExecution::setOutput(const Object& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool NodeExecution::outputIsSet() const
{
    return outputIsSet_;
}

void NodeExecution::unsetoutput()
{
    outputIsSet_ = false;
}

int64_t NodeExecution::getBeginTime() const
{
    return beginTime_;
}

void NodeExecution::setBeginTime(int64_t value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool NodeExecution::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void NodeExecution::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

int64_t NodeExecution::getEndTime() const
{
    return endTime_;
}

void NodeExecution::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool NodeExecution::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void NodeExecution::unsetendTime()
{
    endTimeIsSet_ = false;
}

Object NodeExecution::getErrorMessage() const
{
    return errorMessage_;
}

void NodeExecution::setErrorMessage(const Object& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool NodeExecution::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void NodeExecution::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

std::string NodeExecution::getRequestId() const
{
    return requestId_;
}

void NodeExecution::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool NodeExecution::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void NodeExecution::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


