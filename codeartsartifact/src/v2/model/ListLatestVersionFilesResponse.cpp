

#include "huaweicloud/codeartsartifact/v2/model/ListLatestVersionFilesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListLatestVersionFilesResponse::ListLatestVersionFilesResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ListLatestVersionFilesResponse::~ListLatestVersionFilesResponse() = default;

void ListLatestVersionFilesResponse::validate()
{
}

web::json::value ListLatestVersionFilesResponse::toJson() const
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
bool ListLatestVersionFilesResponse::fromJson(const web::json::value& val)
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
            std::vector<VersionViewVoV5> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListLatestVersionFilesResponse::getStatus() const
{
    return status_;
}

void ListLatestVersionFilesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListLatestVersionFilesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListLatestVersionFilesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListLatestVersionFilesResponse::getTraceId() const
{
    return traceId_;
}

void ListLatestVersionFilesResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListLatestVersionFilesResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListLatestVersionFilesResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

std::vector<VersionViewVoV5>& ListLatestVersionFilesResponse::getResult()
{
    return result_;
}

void ListLatestVersionFilesResponse::setResult(const std::vector<VersionViewVoV5>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListLatestVersionFilesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListLatestVersionFilesResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


