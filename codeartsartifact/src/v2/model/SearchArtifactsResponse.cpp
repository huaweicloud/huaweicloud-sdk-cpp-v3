

#include "huaweicloud/codeartsartifact/v2/model/SearchArtifactsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




SearchArtifactsResponse::SearchArtifactsResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

SearchArtifactsResponse::~SearchArtifactsResponse() = default;

void SearchArtifactsResponse::validate()
{
}

web::json::value SearchArtifactsResponse::toJson() const
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
bool SearchArtifactsResponse::fromJson(const web::json::value& val)
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


std::string SearchArtifactsResponse::getStatus() const
{
    return status_;
}

void SearchArtifactsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SearchArtifactsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SearchArtifactsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SearchArtifactsResponse::getTraceId() const
{
    return traceId_;
}

void SearchArtifactsResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool SearchArtifactsResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void SearchArtifactsResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

Object SearchArtifactsResponse::getResult() const
{
    return result_;
}

void SearchArtifactsResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool SearchArtifactsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void SearchArtifactsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


