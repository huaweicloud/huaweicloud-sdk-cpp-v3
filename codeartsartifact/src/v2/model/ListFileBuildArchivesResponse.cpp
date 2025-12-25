

#include "huaweicloud/codeartsartifact/v2/model/ListFileBuildArchivesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ListFileBuildArchivesResponse::ListFileBuildArchivesResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ListFileBuildArchivesResponse::~ListFileBuildArchivesResponse() = default;

void ListFileBuildArchivesResponse::validate()
{
}

web::json::value ListFileBuildArchivesResponse::toJson() const
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
bool ListFileBuildArchivesResponse::fromJson(const web::json::value& val)
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
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ListFileBuildArchivesResponse::getStatus() const
{
    return status_;
}

void ListFileBuildArchivesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListFileBuildArchivesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListFileBuildArchivesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListFileBuildArchivesResponse::getTraceId() const
{
    return traceId_;
}

void ListFileBuildArchivesResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListFileBuildArchivesResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListFileBuildArchivesResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

Object ListFileBuildArchivesResponse::getResult() const
{
    return result_;
}

void ListFileBuildArchivesResponse::setResult(const Object& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListFileBuildArchivesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListFileBuildArchivesResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


