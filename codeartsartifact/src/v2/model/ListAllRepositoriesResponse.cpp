

#include "huaweicloud/codeartsartifact/v2/model/ListAllRepositoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListAllRepositoriesResponse::ListAllRepositoriesResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ListAllRepositoriesResponse::~ListAllRepositoriesResponse() = default;

void ListAllRepositoriesResponse::validate()
{
}

web::json::value ListAllRepositoriesResponse::toJson() const
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
bool ListAllRepositoriesResponse::fromJson(const web::json::value& val)
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
            ListAllRepositoriesResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListAllRepositoriesResponse::getStatus() const
{
    return status_;
}

void ListAllRepositoriesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAllRepositoriesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListAllRepositoriesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListAllRepositoriesResponse::getTraceId() const
{
    return traceId_;
}

void ListAllRepositoriesResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListAllRepositoriesResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListAllRepositoriesResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

ListAllRepositoriesResult ListAllRepositoriesResponse::getResult() const
{
    return result_;
}

void ListAllRepositoriesResponse::setResult(const ListAllRepositoriesResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListAllRepositoriesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListAllRepositoriesResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


