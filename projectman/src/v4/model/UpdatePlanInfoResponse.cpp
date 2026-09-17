

#include "huaweicloud/projectman/v4/model/UpdatePlanInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdatePlanInfoResponse::UpdatePlanInfoResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

UpdatePlanInfoResponse::~UpdatePlanInfoResponse() = default;

void UpdatePlanInfoResponse::validate()
{
}

web::json::value UpdatePlanInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool UpdatePlanInfoResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            PlanResponseResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string UpdatePlanInfoResponse::getStatus() const
{
    return status_;
}

void UpdatePlanInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdatePlanInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdatePlanInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdatePlanInfoResponse::getMessage() const
{
    return message_;
}

void UpdatePlanInfoResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool UpdatePlanInfoResponse::messageIsSet() const
{
    return messageIsSet_;
}

void UpdatePlanInfoResponse::unsetmessage()
{
    messageIsSet_ = false;
}

PlanResponseResult UpdatePlanInfoResponse::getResult() const
{
    return result_;
}

void UpdatePlanInfoResponse::setResult(const PlanResponseResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdatePlanInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdatePlanInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


