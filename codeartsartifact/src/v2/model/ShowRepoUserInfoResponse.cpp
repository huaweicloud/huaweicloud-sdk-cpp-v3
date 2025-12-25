

#include "huaweicloud/codeartsartifact/v2/model/ShowRepoUserInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowRepoUserInfoResponse::ShowRepoUserInfoResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ShowRepoUserInfoResponse::~ShowRepoUserInfoResponse() = default;

void ShowRepoUserInfoResponse::validate()
{
}

web::json::value ShowRepoUserInfoResponse::toJson() const
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
bool ShowRepoUserInfoResponse::fromJson(const web::json::value& val)
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
            RepositoryUserDO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowRepoUserInfoResponse::getStatus() const
{
    return status_;
}

void ShowRepoUserInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowRepoUserInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowRepoUserInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowRepoUserInfoResponse::getTraceId() const
{
    return traceId_;
}

void ShowRepoUserInfoResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ShowRepoUserInfoResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ShowRepoUserInfoResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

RepositoryUserDO ShowRepoUserInfoResponse::getResult() const
{
    return result_;
}

void ShowRepoUserInfoResponse::setResult(const RepositoryUserDO& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowRepoUserInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowRepoUserInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


