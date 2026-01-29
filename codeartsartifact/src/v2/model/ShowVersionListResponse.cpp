

#include "huaweicloud/codeartsartifact/v2/model/ShowVersionListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowVersionListResponse::ShowVersionListResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ShowVersionListResponse::~ShowVersionListResponse() = default;

void ShowVersionListResponse::validate()
{
}

web::json::value ShowVersionListResponse::toJson() const
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
bool ShowVersionListResponse::fromJson(const web::json::value& val)
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
            std::vector<VersionListViewV5> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowVersionListResponse::getStatus() const
{
    return status_;
}

void ShowVersionListResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowVersionListResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowVersionListResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowVersionListResponse::getTraceId() const
{
    return traceId_;
}

void ShowVersionListResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ShowVersionListResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ShowVersionListResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

std::vector<VersionListViewV5>& ShowVersionListResponse::getResult()
{
    return result_;
}

void ShowVersionListResponse::setResult(const std::vector<VersionListViewV5>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowVersionListResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowVersionListResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


