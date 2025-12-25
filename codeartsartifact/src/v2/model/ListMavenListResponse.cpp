

#include "huaweicloud/codeartsartifact/v2/model/ListMavenListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListMavenListResponse::ListMavenListResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ListMavenListResponse::~ListMavenListResponse() = default;

void ListMavenListResponse::validate()
{
}

web::json::value ListMavenListResponse::toJson() const
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
bool ListMavenListResponse::fromJson(const web::json::value& val)
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
            std::vector<RepositoryDOV5> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListMavenListResponse::getStatus() const
{
    return status_;
}

void ListMavenListResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListMavenListResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListMavenListResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListMavenListResponse::getTraceId() const
{
    return traceId_;
}

void ListMavenListResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListMavenListResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListMavenListResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

std::vector<RepositoryDOV5>& ListMavenListResponse::getResult()
{
    return result_;
}

void ListMavenListResponse::setResult(const std::vector<RepositoryDOV5>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListMavenListResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListMavenListResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


