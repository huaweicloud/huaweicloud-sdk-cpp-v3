

#include "huaweicloud/codeartsartifact/v2/model/ShowOpenSourceEnabledResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowOpenSourceEnabledResponse::ShowOpenSourceEnabledResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    result_ = false;
    resultIsSet_ = false;
}

ShowOpenSourceEnabledResponse::~ShowOpenSourceEnabledResponse() = default;

void ShowOpenSourceEnabledResponse::validate()
{
}

web::json::value ShowOpenSourceEnabledResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(traceIdIsSet_) {
        val[utility::conversions::to_string_t("trace_id")] = ModelBase::toJson(traceId_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowOpenSourceEnabledResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("trace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowOpenSourceEnabledResponse::getStatus() const
{
    return status_;
}

void ShowOpenSourceEnabledResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowOpenSourceEnabledResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowOpenSourceEnabledResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowOpenSourceEnabledResponse::getTraceId() const
{
    return traceId_;
}

void ShowOpenSourceEnabledResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ShowOpenSourceEnabledResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ShowOpenSourceEnabledResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

bool ShowOpenSourceEnabledResponse::isResult() const
{
    return result_;
}

void ShowOpenSourceEnabledResponse::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowOpenSourceEnabledResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowOpenSourceEnabledResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


