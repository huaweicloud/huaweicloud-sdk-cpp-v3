

#include "huaweicloud/codeartsartifact/v2/model/ShowAutoDeleteJobSettingsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowAutoDeleteJobSettingsResponse::ShowAutoDeleteJobSettingsResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ShowAutoDeleteJobSettingsResponse::~ShowAutoDeleteJobSettingsResponse() = default;

void ShowAutoDeleteJobSettingsResponse::validate()
{
}

web::json::value ShowAutoDeleteJobSettingsResponse::toJson() const
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
bool ShowAutoDeleteJobSettingsResponse::fromJson(const web::json::value& val)
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
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowAutoDeleteJobSettingsResponse::getStatus() const
{
    return status_;
}

void ShowAutoDeleteJobSettingsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowAutoDeleteJobSettingsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowAutoDeleteJobSettingsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowAutoDeleteJobSettingsResponse::getTraceId() const
{
    return traceId_;
}

void ShowAutoDeleteJobSettingsResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ShowAutoDeleteJobSettingsResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ShowAutoDeleteJobSettingsResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

Object ShowAutoDeleteJobSettingsResponse::getResult() const
{
    return result_;
}

void ShowAutoDeleteJobSettingsResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowAutoDeleteJobSettingsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowAutoDeleteJobSettingsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


