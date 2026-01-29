

#include "huaweicloud/codeartsartifact/v2/model/ShowProjectVersionsCountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowProjectVersionsCountResponse::ShowProjectVersionsCountResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ShowProjectVersionsCountResponse::~ShowProjectVersionsCountResponse() = default;

void ShowProjectVersionsCountResponse::validate()
{
}

web::json::value ShowProjectVersionsCountResponse::toJson() const
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
bool ShowProjectVersionsCountResponse::fromJson(const web::json::value& val)
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
            ResultCount refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowProjectVersionsCountResponse::getStatus() const
{
    return status_;
}

void ShowProjectVersionsCountResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowProjectVersionsCountResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowProjectVersionsCountResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowProjectVersionsCountResponse::getTraceId() const
{
    return traceId_;
}

void ShowProjectVersionsCountResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ShowProjectVersionsCountResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ShowProjectVersionsCountResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

ResultCount ShowProjectVersionsCountResponse::getResult() const
{
    return result_;
}

void ShowProjectVersionsCountResponse::setResult(const ResultCount& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowProjectVersionsCountResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowProjectVersionsCountResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


