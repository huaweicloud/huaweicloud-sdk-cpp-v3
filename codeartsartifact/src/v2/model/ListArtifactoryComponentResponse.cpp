

#include "huaweicloud/codeartsartifact/v2/model/ListArtifactoryComponentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListArtifactoryComponentResponse::ListArtifactoryComponentResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ListArtifactoryComponentResponse::~ListArtifactoryComponentResponse() = default;

void ListArtifactoryComponentResponse::validate()
{
}

web::json::value ListArtifactoryComponentResponse::toJson() const
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
bool ListArtifactoryComponentResponse::fromJson(const web::json::value& val)
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


std::string ListArtifactoryComponentResponse::getStatus() const
{
    return status_;
}

void ListArtifactoryComponentResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListArtifactoryComponentResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListArtifactoryComponentResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListArtifactoryComponentResponse::getTraceId() const
{
    return traceId_;
}

void ListArtifactoryComponentResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListArtifactoryComponentResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListArtifactoryComponentResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

Object ListArtifactoryComponentResponse::getResult() const
{
    return result_;
}

void ListArtifactoryComponentResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListArtifactoryComponentResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListArtifactoryComponentResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


