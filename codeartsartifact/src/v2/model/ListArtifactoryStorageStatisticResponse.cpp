

#include "huaweicloud/codeartsartifact/v2/model/ListArtifactoryStorageStatisticResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListArtifactoryStorageStatisticResponse::ListArtifactoryStorageStatisticResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ListArtifactoryStorageStatisticResponse::~ListArtifactoryStorageStatisticResponse() = default;

void ListArtifactoryStorageStatisticResponse::validate()
{
}

web::json::value ListArtifactoryStorageStatisticResponse::toJson() const
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
bool ListArtifactoryStorageStatisticResponse::fromJson(const web::json::value& val)
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


std::string ListArtifactoryStorageStatisticResponse::getStatus() const
{
    return status_;
}

void ListArtifactoryStorageStatisticResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListArtifactoryStorageStatisticResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListArtifactoryStorageStatisticResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListArtifactoryStorageStatisticResponse::getTraceId() const
{
    return traceId_;
}

void ListArtifactoryStorageStatisticResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListArtifactoryStorageStatisticResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListArtifactoryStorageStatisticResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

Object ListArtifactoryStorageStatisticResponse::getResult() const
{
    return result_;
}

void ListArtifactoryStorageStatisticResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListArtifactoryStorageStatisticResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListArtifactoryStorageStatisticResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


