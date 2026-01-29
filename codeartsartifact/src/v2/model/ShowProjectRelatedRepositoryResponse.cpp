

#include "huaweicloud/codeartsartifact/v2/model/ShowProjectRelatedRepositoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowProjectRelatedRepositoryResponse::ShowProjectRelatedRepositoryResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ShowProjectRelatedRepositoryResponse::~ShowProjectRelatedRepositoryResponse() = default;

void ShowProjectRelatedRepositoryResponse::validate()
{
}

web::json::value ShowProjectRelatedRepositoryResponse::toJson() const
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
bool ShowProjectRelatedRepositoryResponse::fromJson(const web::json::value& val)
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
            PrivilegeProjectInfoV5 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowProjectRelatedRepositoryResponse::getStatus() const
{
    return status_;
}

void ShowProjectRelatedRepositoryResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowProjectRelatedRepositoryResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowProjectRelatedRepositoryResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowProjectRelatedRepositoryResponse::getTraceId() const
{
    return traceId_;
}

void ShowProjectRelatedRepositoryResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ShowProjectRelatedRepositoryResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ShowProjectRelatedRepositoryResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

PrivilegeProjectInfoV5 ShowProjectRelatedRepositoryResponse::getResult() const
{
    return result_;
}

void ShowProjectRelatedRepositoryResponse::setResult(const PrivilegeProjectInfoV5& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowProjectRelatedRepositoryResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowProjectRelatedRepositoryResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


