

#include "huaweicloud/codeartsartifact/v2/model/ShowUserPrivilegesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowUserPrivilegesResponse::ShowUserPrivilegesResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ShowUserPrivilegesResponse::~ShowUserPrivilegesResponse() = default;

void ShowUserPrivilegesResponse::validate()
{
}

web::json::value ShowUserPrivilegesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(traceIdIsSet_) {
        val[utility::conversions::to_string_t("traceId")] = ModelBase::toJson(traceId_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowUserPrivilegesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("traceId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traceId"));
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
            PrivilegesResponse_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowUserPrivilegesResponse::getStatus() const
{
    return status_;
}

void ShowUserPrivilegesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowUserPrivilegesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowUserPrivilegesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowUserPrivilegesResponse::getTraceId() const
{
    return traceId_;
}

void ShowUserPrivilegesResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ShowUserPrivilegesResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ShowUserPrivilegesResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

PrivilegesResponse_result ShowUserPrivilegesResponse::getResult() const
{
    return result_;
}

void ShowUserPrivilegesResponse::setResult(const PrivilegesResponse_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowUserPrivilegesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowUserPrivilegesResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


