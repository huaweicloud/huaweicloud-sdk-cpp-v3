

#include "huaweicloud/projectman/v4/model/BatchUpdateBaselineResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchUpdateBaselineResponse::BatchUpdateBaselineResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

BatchUpdateBaselineResponse::~BatchUpdateBaselineResponse() = default;

void BatchUpdateBaselineResponse::validate()
{
}

web::json::value BatchUpdateBaselineResponse::toJson() const
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
bool BatchUpdateBaselineResponse::fromJson(const web::json::value& val)
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
            BatchResultVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string BatchUpdateBaselineResponse::getStatus() const
{
    return status_;
}

void BatchUpdateBaselineResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchUpdateBaselineResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchUpdateBaselineResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string BatchUpdateBaselineResponse::getMessage() const
{
    return message_;
}

void BatchUpdateBaselineResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool BatchUpdateBaselineResponse::messageIsSet() const
{
    return messageIsSet_;
}

void BatchUpdateBaselineResponse::unsetmessage()
{
    messageIsSet_ = false;
}

BatchResultVO BatchUpdateBaselineResponse::getResult() const
{
    return result_;
}

void BatchUpdateBaselineResponse::setResult(const BatchResultVO& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchUpdateBaselineResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchUpdateBaselineResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


