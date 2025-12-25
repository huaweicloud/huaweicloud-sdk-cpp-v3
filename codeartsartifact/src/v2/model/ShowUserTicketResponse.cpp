

#include "huaweicloud/codeartsartifact/v2/model/ShowUserTicketResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ShowUserTicketResponse::ShowUserTicketResponse()
{
    status_ = "";
    statusIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
}

ShowUserTicketResponse::~ShowUserTicketResponse() = default;

void ShowUserTicketResponse::validate()
{
}

web::json::value ShowUserTicketResponse::toJson() const
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
bool ShowUserTicketResponse::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowUserTicketResponse::getStatus() const
{
    return status_;
}

void ShowUserTicketResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowUserTicketResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowUserTicketResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowUserTicketResponse::getTraceId() const
{
    return traceId_;
}

void ShowUserTicketResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ShowUserTicketResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ShowUserTicketResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

std::string ShowUserTicketResponse::getResult() const
{
    return result_;
}

void ShowUserTicketResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowUserTicketResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowUserTicketResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


