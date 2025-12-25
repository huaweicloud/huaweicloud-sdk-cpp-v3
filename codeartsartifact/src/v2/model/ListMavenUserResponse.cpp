

#include "huaweicloud/codeartsartifact/v2/model/ListMavenUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListMavenUserResponse::ListMavenUserResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ListMavenUserResponse::~ListMavenUserResponse() = default;

void ListMavenUserResponse::validate()
{
}

web::json::value ListMavenUserResponse::toJson() const
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
bool ListMavenUserResponse::fromJson(const web::json::value& val)
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
            DevcloudUserDOV5Page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListMavenUserResponse::getStatus() const
{
    return status_;
}

void ListMavenUserResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListMavenUserResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListMavenUserResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListMavenUserResponse::getTraceId() const
{
    return traceId_;
}

void ListMavenUserResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListMavenUserResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListMavenUserResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

DevcloudUserDOV5Page ListMavenUserResponse::getResult() const
{
    return result_;
}

void ListMavenUserResponse::setResult(const DevcloudUserDOV5Page& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListMavenUserResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListMavenUserResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


