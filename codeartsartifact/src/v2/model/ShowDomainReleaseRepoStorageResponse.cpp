

#include "huaweicloud/codeartsartifact/v2/model/ShowDomainReleaseRepoStorageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowDomainReleaseRepoStorageResponse::ShowDomainReleaseRepoStorageResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ShowDomainReleaseRepoStorageResponse::~ShowDomainReleaseRepoStorageResponse() = default;

void ShowDomainReleaseRepoStorageResponse::validate()
{
}

web::json::value ShowDomainReleaseRepoStorageResponse::toJson() const
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
bool ShowDomainReleaseRepoStorageResponse::fromJson(const web::json::value& val)
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
            ReleaseStorageVOV5 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowDomainReleaseRepoStorageResponse::getStatus() const
{
    return status_;
}

void ShowDomainReleaseRepoStorageResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDomainReleaseRepoStorageResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDomainReleaseRepoStorageResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowDomainReleaseRepoStorageResponse::getTraceId() const
{
    return traceId_;
}

void ShowDomainReleaseRepoStorageResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ShowDomainReleaseRepoStorageResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ShowDomainReleaseRepoStorageResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

ReleaseStorageVOV5 ShowDomainReleaseRepoStorageResponse::getResult() const
{
    return result_;
}

void ShowDomainReleaseRepoStorageResponse::setResult(const ReleaseStorageVOV5& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowDomainReleaseRepoStorageResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowDomainReleaseRepoStorageResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


