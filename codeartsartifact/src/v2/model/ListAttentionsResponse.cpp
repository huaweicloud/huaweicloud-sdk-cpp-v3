

#include "huaweicloud/codeartsartifact/v2/model/ListAttentionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListAttentionsResponse::ListAttentionsResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ListAttentionsResponse::~ListAttentionsResponse() = default;

void ListAttentionsResponse::validate()
{
}

web::json::value ListAttentionsResponse::toJson() const
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
bool ListAttentionsResponse::fromJson(const web::json::value& val)
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


std::string ListAttentionsResponse::getStatus() const
{
    return status_;
}

void ListAttentionsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAttentionsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListAttentionsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListAttentionsResponse::getTraceId() const
{
    return traceId_;
}

void ListAttentionsResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListAttentionsResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListAttentionsResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

Object ListAttentionsResponse::getResult() const
{
    return result_;
}

void ListAttentionsResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListAttentionsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListAttentionsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


