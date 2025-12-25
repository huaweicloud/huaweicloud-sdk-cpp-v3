

#include "huaweicloud/codeartsartifact/v2/model/ShowFileDetailByFullNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowFileDetailByFullNameResponse::ShowFileDetailByFullNameResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    resultIsSet_ = false;
}

ShowFileDetailByFullNameResponse::~ShowFileDetailByFullNameResponse() = default;

void ShowFileDetailByFullNameResponse::validate()
{
}

web::json::value ShowFileDetailByFullNameResponse::toJson() const
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
bool ShowFileDetailByFullNameResponse::fromJson(const web::json::value& val)
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
            RepoFileDOV5 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowFileDetailByFullNameResponse::getStatus() const
{
    return status_;
}

void ShowFileDetailByFullNameResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowFileDetailByFullNameResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowFileDetailByFullNameResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowFileDetailByFullNameResponse::getTraceId() const
{
    return traceId_;
}

void ShowFileDetailByFullNameResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ShowFileDetailByFullNameResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ShowFileDetailByFullNameResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

RepoFileDOV5 ShowFileDetailByFullNameResponse::getResult() const
{
    return result_;
}

void ShowFileDetailByFullNameResponse::setResult(const RepoFileDOV5& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowFileDetailByFullNameResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowFileDetailByFullNameResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


