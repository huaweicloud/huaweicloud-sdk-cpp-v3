

#include "huaweicloud/codeartsartifact/v2/model/ListProjectRolePermissionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListProjectRolePermissionsResponse::ListProjectRolePermissionsResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ListProjectRolePermissionsResponse::~ListProjectRolePermissionsResponse() = default;

void ListProjectRolePermissionsResponse::validate()
{
}

web::json::value ListProjectRolePermissionsResponse::toJson() const
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
bool ListProjectRolePermissionsResponse::fromJson(const web::json::value& val)
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
            std::vector<ProjectRolePermissionDo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListProjectRolePermissionsResponse::getStatus() const
{
    return status_;
}

void ListProjectRolePermissionsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListProjectRolePermissionsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListProjectRolePermissionsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListProjectRolePermissionsResponse::getTraceId() const
{
    return traceId_;
}

void ListProjectRolePermissionsResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListProjectRolePermissionsResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListProjectRolePermissionsResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

std::vector<ProjectRolePermissionDo>& ListProjectRolePermissionsResponse::getResult()
{
    return result_;
}

void ListProjectRolePermissionsResponse::setResult(const std::vector<ProjectRolePermissionDo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListProjectRolePermissionsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListProjectRolePermissionsResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


