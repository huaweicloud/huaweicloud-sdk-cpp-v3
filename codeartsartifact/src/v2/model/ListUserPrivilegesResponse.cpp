

#include "huaweicloud/codeartsartifact/v2/model/ListUserPrivilegesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListUserPrivilegesResponse::ListUserPrivilegesResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ListUserPrivilegesResponse::~ListUserPrivilegesResponse() = default;

void ListUserPrivilegesResponse::validate()
{
}

web::json::value ListUserPrivilegesResponse::toJson() const
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
bool ListUserPrivilegesResponse::fromJson(const web::json::value& val)
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
            PrivilegesResponseV5_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListUserPrivilegesResponse::getStatus() const
{
    return status_;
}

void ListUserPrivilegesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListUserPrivilegesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListUserPrivilegesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListUserPrivilegesResponse::getTraceId() const
{
    return traceId_;
}

void ListUserPrivilegesResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListUserPrivilegesResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListUserPrivilegesResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

PrivilegesResponseV5_result ListUserPrivilegesResponse::getResult() const
{
    return result_;
}

void ListUserPrivilegesResponse::setResult(const PrivilegesResponseV5_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListUserPrivilegesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListUserPrivilegesResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


