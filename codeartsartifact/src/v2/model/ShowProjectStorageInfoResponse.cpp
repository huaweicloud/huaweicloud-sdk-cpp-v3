

#include "huaweicloud/codeartsartifact/v2/model/ShowProjectStorageInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowProjectStorageInfoResponse::ShowProjectStorageInfoResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ShowProjectStorageInfoResponse::~ShowProjectStorageInfoResponse() = default;

void ShowProjectStorageInfoResponse::validate()
{
}

web::json::value ShowProjectStorageInfoResponse::toJson() const
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
bool ShowProjectStorageInfoResponse::fromJson(const web::json::value& val)
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
            StorageInfoDOV5 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowProjectStorageInfoResponse::getStatus() const
{
    return status_;
}

void ShowProjectStorageInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowProjectStorageInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowProjectStorageInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowProjectStorageInfoResponse::getTraceId() const
{
    return traceId_;
}

void ShowProjectStorageInfoResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ShowProjectStorageInfoResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ShowProjectStorageInfoResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

StorageInfoDOV5 ShowProjectStorageInfoResponse::getResult() const
{
    return result_;
}

void ShowProjectStorageInfoResponse::setResult(const StorageInfoDOV5& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowProjectStorageInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowProjectStorageInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


