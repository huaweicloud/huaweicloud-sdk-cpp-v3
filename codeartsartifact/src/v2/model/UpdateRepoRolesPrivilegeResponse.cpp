

#include "huaweicloud/codeartsartifact/v2/model/UpdateRepoRolesPrivilegeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




UpdateRepoRolesPrivilegeResponse::UpdateRepoRolesPrivilegeResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

UpdateRepoRolesPrivilegeResponse::~UpdateRepoRolesPrivilegeResponse() = default;

void UpdateRepoRolesPrivilegeResponse::validate()
{
}

web::json::value UpdateRepoRolesPrivilegeResponse::toJson() const
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
bool UpdateRepoRolesPrivilegeResponse::fromJson(const web::json::value& val)
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
            std::vector<Privilege> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string UpdateRepoRolesPrivilegeResponse::getStatus() const
{
    return status_;
}

void UpdateRepoRolesPrivilegeResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateRepoRolesPrivilegeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateRepoRolesPrivilegeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateRepoRolesPrivilegeResponse::getTraceId() const
{
    return traceId_;
}

void UpdateRepoRolesPrivilegeResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool UpdateRepoRolesPrivilegeResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void UpdateRepoRolesPrivilegeResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

std::vector<Privilege>& UpdateRepoRolesPrivilegeResponse::getResult()
{
    return result_;
}

void UpdateRepoRolesPrivilegeResponse::setResult(const std::vector<Privilege>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateRepoRolesPrivilegeResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateRepoRolesPrivilegeResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


