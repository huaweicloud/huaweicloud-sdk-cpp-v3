

#include "huaweicloud/codeartsartifact/v2/model/DeleteRepositoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




DeleteRepositoryResponse::DeleteRepositoryResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

DeleteRepositoryResponse::~DeleteRepositoryResponse() = default;

void DeleteRepositoryResponse::validate()
{
}

web::json::value DeleteRepositoryResponse::toJson() const
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
bool DeleteRepositoryResponse::fromJson(const web::json::value& val)
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


std::string DeleteRepositoryResponse::getStatus() const
{
    return status_;
}

void DeleteRepositoryResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteRepositoryResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteRepositoryResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DeleteRepositoryResponse::getTraceId() const
{
    return traceId_;
}

void DeleteRepositoryResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool DeleteRepositoryResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void DeleteRepositoryResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

Object DeleteRepositoryResponse::getResult() const
{
    return result_;
}

void DeleteRepositoryResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteRepositoryResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteRepositoryResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


