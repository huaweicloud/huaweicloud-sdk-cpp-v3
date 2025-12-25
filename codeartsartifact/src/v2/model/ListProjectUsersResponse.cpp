

#include "huaweicloud/codeartsartifact/v2/model/ListProjectUsersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListProjectUsersResponse::ListProjectUsersResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ListProjectUsersResponse::~ListProjectUsersResponse() = default;

void ListProjectUsersResponse::validate()
{
}

web::json::value ListProjectUsersResponse::toJson() const
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
bool ListProjectUsersResponse::fromJson(const web::json::value& val)
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
            RepoUserPrivilegeResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListProjectUsersResponse::getStatus() const
{
    return status_;
}

void ListProjectUsersResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListProjectUsersResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListProjectUsersResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListProjectUsersResponse::getTraceId() const
{
    return traceId_;
}

void ListProjectUsersResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListProjectUsersResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListProjectUsersResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

RepoUserPrivilegeResult ListProjectUsersResponse::getResult() const
{
    return result_;
}

void ListProjectUsersResponse::setResult(const RepoUserPrivilegeResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListProjectUsersResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListProjectUsersResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


