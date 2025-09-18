

#include "huaweicloud/codeartsartifact/v2/model/CreateArtifactoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




CreateArtifactoryResponse::CreateArtifactoryResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

CreateArtifactoryResponse::~CreateArtifactoryResponse() = default;

void CreateArtifactoryResponse::validate()
{
}

web::json::value CreateArtifactoryResponse::toJson() const
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
bool CreateArtifactoryResponse::fromJson(const web::json::value& val)
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


std::string CreateArtifactoryResponse::getStatus() const
{
    return status_;
}

void CreateArtifactoryResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateArtifactoryResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CreateArtifactoryResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CreateArtifactoryResponse::getTraceId() const
{
    return traceId_;
}

void CreateArtifactoryResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool CreateArtifactoryResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void CreateArtifactoryResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

Object CreateArtifactoryResponse::getResult() const
{
    return result_;
}

void CreateArtifactoryResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool CreateArtifactoryResponse::resultIsSet() const
{
    return resultIsSet_;
}

void CreateArtifactoryResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


