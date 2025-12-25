

#include "huaweicloud/codeartsartifact/v2/model/ListDomainIpConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListDomainIpConfigResponse::ListDomainIpConfigResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ListDomainIpConfigResponse::~ListDomainIpConfigResponse() = default;

void ListDomainIpConfigResponse::validate()
{
}

web::json::value ListDomainIpConfigResponse::toJson() const
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
bool ListDomainIpConfigResponse::fromJson(const web::json::value& val)
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
            DomainIPWhiteListModelPage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListDomainIpConfigResponse::getStatus() const
{
    return status_;
}

void ListDomainIpConfigResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListDomainIpConfigResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListDomainIpConfigResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListDomainIpConfigResponse::getTraceId() const
{
    return traceId_;
}

void ListDomainIpConfigResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListDomainIpConfigResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListDomainIpConfigResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

DomainIPWhiteListModelPage ListDomainIpConfigResponse::getResult() const
{
    return result_;
}

void ListDomainIpConfigResponse::setResult(const DomainIPWhiteListModelPage& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListDomainIpConfigResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListDomainIpConfigResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


