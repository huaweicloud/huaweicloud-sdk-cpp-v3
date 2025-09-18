

#include "huaweicloud/codeartsartifact/v2/model/CreateMavenRepoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




CreateMavenRepoResponse::CreateMavenRepoResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

CreateMavenRepoResponse::~CreateMavenRepoResponse() = default;

void CreateMavenRepoResponse::validate()
{
}

web::json::value CreateMavenRepoResponse::toJson() const
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
bool CreateMavenRepoResponse::fromJson(const web::json::value& val)
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


std::string CreateMavenRepoResponse::getStatus() const
{
    return status_;
}

void CreateMavenRepoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateMavenRepoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateMavenRepoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateMavenRepoResponse::getTraceId() const
{
    return traceId_;
}

void CreateMavenRepoResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool CreateMavenRepoResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void CreateMavenRepoResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

Object CreateMavenRepoResponse::getResult() const
{
    return result_;
}

void CreateMavenRepoResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateMavenRepoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateMavenRepoResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


