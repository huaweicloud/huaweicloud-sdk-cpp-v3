

#include "huaweicloud/codeartsartifact/v2/model/ShowMultiRolesUserPermissionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowMultiRolesUserPermissionsResponse::ShowMultiRolesUserPermissionsResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ShowMultiRolesUserPermissionsResponse::~ShowMultiRolesUserPermissionsResponse() = default;

void ShowMultiRolesUserPermissionsResponse::validate()
{
}

web::json::value ShowMultiRolesUserPermissionsResponse::toJson() const
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
bool ShowMultiRolesUserPermissionsResponse::fromJson(const web::json::value& val)
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
            ProjectRolePermissionDo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowMultiRolesUserPermissionsResponse::getStatus() const
{
    return status_;
}

void ShowMultiRolesUserPermissionsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowMultiRolesUserPermissionsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowMultiRolesUserPermissionsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowMultiRolesUserPermissionsResponse::getTraceId() const
{
    return traceId_;
}

void ShowMultiRolesUserPermissionsResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ShowMultiRolesUserPermissionsResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ShowMultiRolesUserPermissionsResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

ProjectRolePermissionDo ShowMultiRolesUserPermissionsResponse::getResult() const
{
    return result_;
}

void ShowMultiRolesUserPermissionsResponse::setResult(const ProjectRolePermissionDo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowMultiRolesUserPermissionsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowMultiRolesUserPermissionsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


