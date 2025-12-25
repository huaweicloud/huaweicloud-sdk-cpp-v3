

#include "huaweicloud/codeartsartifact/v2/model/ModifyRepositoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ModifyRepositoryResponse::ModifyRepositoryResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ModifyRepositoryResponse::~ModifyRepositoryResponse() = default;

void ModifyRepositoryResponse::validate()
{
}

web::json::value ModifyRepositoryResponse::toJson() const
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
bool ModifyRepositoryResponse::fromJson(const web::json::value& val)
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
            MavenTabRepo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ModifyRepositoryResponse::getStatus() const
{
    return status_;
}

void ModifyRepositoryResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ModifyRepositoryResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ModifyRepositoryResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ModifyRepositoryResponse::getTraceId() const
{
    return traceId_;
}

void ModifyRepositoryResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ModifyRepositoryResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ModifyRepositoryResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

MavenTabRepo ModifyRepositoryResponse::getResult() const
{
    return result_;
}

void ModifyRepositoryResponse::setResult(const MavenTabRepo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ModifyRepositoryResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ModifyRepositoryResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


