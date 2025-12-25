

#include "huaweicloud/codeartsartifact/v2/model/ListNetProxyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListNetProxyResponse::ListNetProxyResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ListNetProxyResponse::~ListNetProxyResponse() = default;

void ListNetProxyResponse::validate()
{
}

web::json::value ListNetProxyResponse::toJson() const
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
bool ListNetProxyResponse::fromJson(const web::json::value& val)
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
            std::vector<NetProxyModelV5> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListNetProxyResponse::getStatus() const
{
    return status_;
}

void ListNetProxyResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListNetProxyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListNetProxyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListNetProxyResponse::getTraceId() const
{
    return traceId_;
}

void ListNetProxyResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListNetProxyResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListNetProxyResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

std::vector<NetProxyModelV5>& ListNetProxyResponse::getResult()
{
    return result_;
}

void ListNetProxyResponse::setResult(const std::vector<NetProxyModelV5>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListNetProxyResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListNetProxyResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


