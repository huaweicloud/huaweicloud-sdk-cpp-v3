

#include "huaweicloud/codeartsartifact/v2/model/ListSecGuardListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListSecGuardListResponse::ListSecGuardListResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ListSecGuardListResponse::~ListSecGuardListResponse() = default;

void ListSecGuardListResponse::validate()
{
}

web::json::value ListSecGuardListResponse::toJson() const
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
bool ListSecGuardListResponse::fromJson(const web::json::value& val)
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
            SecGuardTaskCount refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListSecGuardListResponse::getStatus() const
{
    return status_;
}

void ListSecGuardListResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListSecGuardListResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListSecGuardListResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListSecGuardListResponse::getTraceId() const
{
    return traceId_;
}

void ListSecGuardListResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListSecGuardListResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListSecGuardListResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

SecGuardTaskCount ListSecGuardListResponse::getResult() const
{
    return result_;
}

void ListSecGuardListResponse::setResult(const SecGuardTaskCount& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListSecGuardListResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListSecGuardListResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


