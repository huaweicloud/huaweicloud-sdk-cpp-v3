

#include "huaweicloud/codeartsartifact/v2/model/CreateDockerRepositoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




CreateDockerRepositoriesResponse::CreateDockerRepositoriesResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

CreateDockerRepositoriesResponse::~CreateDockerRepositoriesResponse() = default;

void CreateDockerRepositoriesResponse::validate()
{
}

web::json::value CreateDockerRepositoriesResponse::toJson() const
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
bool CreateDockerRepositoriesResponse::fromJson(const web::json::value& val)
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


std::string CreateDockerRepositoriesResponse::getStatus() const
{
    return status_;
}

void CreateDockerRepositoriesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateDockerRepositoriesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateDockerRepositoriesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateDockerRepositoriesResponse::getTraceId() const
{
    return traceId_;
}

void CreateDockerRepositoriesResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool CreateDockerRepositoriesResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void CreateDockerRepositoriesResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

Object CreateDockerRepositoriesResponse::getResult() const
{
    return result_;
}

void CreateDockerRepositoriesResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateDockerRepositoriesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateDockerRepositoriesResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


