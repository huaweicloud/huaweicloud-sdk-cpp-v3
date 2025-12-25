

#include "huaweicloud/codeartsartifact/v2/model/ListFilesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListFilesResponse::ListFilesResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ListFilesResponse::~ListFilesResponse() = default;

void ListFilesResponse::validate()
{
}

web::json::value ListFilesResponse::toJson() const
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
bool ListFilesResponse::fromJson(const web::json::value& val)
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
            RepoFileDOV5Page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListFilesResponse::getStatus() const
{
    return status_;
}

void ListFilesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListFilesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListFilesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListFilesResponse::getTraceId() const
{
    return traceId_;
}

void ListFilesResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListFilesResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListFilesResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

RepoFileDOV5Page ListFilesResponse::getResult() const
{
    return result_;
}

void ListFilesResponse::setResult(const RepoFileDOV5Page& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListFilesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListFilesResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


