

#include "huaweicloud/codeartsartifact/v2/model/ShowRepositoryRolesPrivilegeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowRepositoryRolesPrivilegeResponse::ShowRepositoryRolesPrivilegeResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ShowRepositoryRolesPrivilegeResponse::~ShowRepositoryRolesPrivilegeResponse() = default;

void ShowRepositoryRolesPrivilegeResponse::validate()
{
}

web::json::value ShowRepositoryRolesPrivilegeResponse::toJson() const
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
bool ShowRepositoryRolesPrivilegeResponse::fromJson(const web::json::value& val)
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


std::string ShowRepositoryRolesPrivilegeResponse::getStatus() const
{
    return status_;
}

void ShowRepositoryRolesPrivilegeResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowRepositoryRolesPrivilegeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowRepositoryRolesPrivilegeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowRepositoryRolesPrivilegeResponse::getTraceId() const
{
    return traceId_;
}

void ShowRepositoryRolesPrivilegeResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ShowRepositoryRolesPrivilegeResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ShowRepositoryRolesPrivilegeResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

Object ShowRepositoryRolesPrivilegeResponse::getResult() const
{
    return result_;
}

void ShowRepositoryRolesPrivilegeResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowRepositoryRolesPrivilegeResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowRepositoryRolesPrivilegeResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


