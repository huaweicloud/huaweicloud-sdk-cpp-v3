

#include "huaweicloud/codeartsartifact/v2/model/ListChildProxyRepositoriesListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListChildProxyRepositoriesListResponse::ListChildProxyRepositoriesListResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ListChildProxyRepositoriesListResponse::~ListChildProxyRepositoriesListResponse() = default;

void ListChildProxyRepositoriesListResponse::validate()
{
}

web::json::value ListChildProxyRepositoriesListResponse::toJson() const
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
bool ListChildProxyRepositoriesListResponse::fromJson(const web::json::value& val)
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


std::string ListChildProxyRepositoriesListResponse::getStatus() const
{
    return status_;
}

void ListChildProxyRepositoriesListResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListChildProxyRepositoriesListResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListChildProxyRepositoriesListResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListChildProxyRepositoriesListResponse::getTraceId() const
{
    return traceId_;
}

void ListChildProxyRepositoriesListResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListChildProxyRepositoriesListResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListChildProxyRepositoriesListResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

std::vector<RepositoryDOV5>& ListChildProxyRepositoriesListResponse::getResult()
{
    return result_;
}

void ListChildProxyRepositoriesListResponse::setResult(const std::vector<RepositoryDOV5>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListChildProxyRepositoriesListResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListChildProxyRepositoriesListResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


