

#include "huaweicloud/codeartsartifact/v2/model/ShowPackageInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowPackageInfoResponse::ShowPackageInfoResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ShowPackageInfoResponse::~ShowPackageInfoResponse() = default;

void ShowPackageInfoResponse::validate()
{
}

web::json::value ShowPackageInfoResponse::toJson() const
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
bool ShowPackageInfoResponse::fromJson(const web::json::value& val)
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


std::string ShowPackageInfoResponse::getStatus() const
{
    return status_;
}

void ShowPackageInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowPackageInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowPackageInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowPackageInfoResponse::getTraceId() const
{
    return traceId_;
}

void ShowPackageInfoResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ShowPackageInfoResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ShowPackageInfoResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

Object ShowPackageInfoResponse::getResult() const
{
    return result_;
}

void ShowPackageInfoResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowPackageInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowPackageInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


