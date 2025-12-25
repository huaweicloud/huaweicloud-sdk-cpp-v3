

#include "huaweicloud/codeartsartifact/v2/model/ShowLatestVersionFilesCountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowLatestVersionFilesCountResponse::ShowLatestVersionFilesCountResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ShowLatestVersionFilesCountResponse::~ShowLatestVersionFilesCountResponse() = default;

void ShowLatestVersionFilesCountResponse::validate()
{
}

web::json::value ShowLatestVersionFilesCountResponse::toJson() const
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
bool ShowLatestVersionFilesCountResponse::fromJson(const web::json::value& val)
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
            LatestVersionFilesCount refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowLatestVersionFilesCountResponse::getStatus() const
{
    return status_;
}

void ShowLatestVersionFilesCountResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowLatestVersionFilesCountResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowLatestVersionFilesCountResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowLatestVersionFilesCountResponse::getTraceId() const
{
    return traceId_;
}

void ShowLatestVersionFilesCountResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ShowLatestVersionFilesCountResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ShowLatestVersionFilesCountResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

LatestVersionFilesCount ShowLatestVersionFilesCountResponse::getResult() const
{
    return result_;
}

void ShowLatestVersionFilesCountResponse::setResult(const LatestVersionFilesCount& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowLatestVersionFilesCountResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowLatestVersionFilesCountResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


