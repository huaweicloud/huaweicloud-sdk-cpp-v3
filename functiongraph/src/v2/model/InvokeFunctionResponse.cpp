

#include "huaweicloud/functiongraph/v2/model/InvokeFunctionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




InvokeFunctionResponse::InvokeFunctionResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    log_ = "";
    logIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    xCffRequestId_ = "";
    xCffRequestIdIsSet_ = false;
}

InvokeFunctionResponse::~InvokeFunctionResponse() = default;

void InvokeFunctionResponse::validate()
{
}

web::json::value InvokeFunctionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(logIsSet_) {
        val[utility::conversions::to_string_t("log")] = ModelBase::toJson(log_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(xCffRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Cff-Request-Id")] = ModelBase::toJson(xCffRequestId_);
    }

    return val;
}
bool InvokeFunctionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLog(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Cff-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Cff-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXCffRequestId(refVal);
        }
    }
    return ok;
}


std::string InvokeFunctionResponse::getRequestId() const
{
    return requestId_;
}

void InvokeFunctionResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool InvokeFunctionResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void InvokeFunctionResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::string InvokeFunctionResponse::getResult() const
{
    return result_;
}

void InvokeFunctionResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool InvokeFunctionResponse::resultIsSet() const
{
    return resultIsSet_;
}

void InvokeFunctionResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string InvokeFunctionResponse::getLog() const
{
    return log_;
}

void InvokeFunctionResponse::setLog(const std::string& value)
{
    log_ = value;
    logIsSet_ = true;
}

bool InvokeFunctionResponse::logIsSet() const
{
    return logIsSet_;
}

void InvokeFunctionResponse::unsetlog()
{
    logIsSet_ = false;
}

int32_t InvokeFunctionResponse::getStatus() const
{
    return status_;
}

void InvokeFunctionResponse::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool InvokeFunctionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void InvokeFunctionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string InvokeFunctionResponse::getXCffRequestId() const
{
    return xCffRequestId_;
}

void InvokeFunctionResponse::setXCffRequestId(const std::string& value)
{
    xCffRequestId_ = value;
    xCffRequestIdIsSet_ = true;
}

bool InvokeFunctionResponse::xCffRequestIdIsSet() const
{
    return xCffRequestIdIsSet_;
}

void InvokeFunctionResponse::unsetxCffRequestId()
{
    xCffRequestIdIsSet_ = false;
}

}
}
}
}
}


