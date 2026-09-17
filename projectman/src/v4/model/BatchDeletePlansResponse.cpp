

#include "huaweicloud/projectman/v4/model/BatchDeletePlansResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchDeletePlansResponse::BatchDeletePlansResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

BatchDeletePlansResponse::~BatchDeletePlansResponse() = default;

void BatchDeletePlansResponse::validate()
{
}

web::json::value BatchDeletePlansResponse::toJson() const
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
bool BatchDeletePlansResponse::fromJson(const web::json::value& val)
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


std::string BatchDeletePlansResponse::getStatus() const
{
    return status_;
}

void BatchDeletePlansResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchDeletePlansResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchDeletePlansResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string BatchDeletePlansResponse::getMessage() const
{
    return message_;
}

void BatchDeletePlansResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool BatchDeletePlansResponse::messageIsSet() const
{
    return messageIsSet_;
}

void BatchDeletePlansResponse::unsetmessage()
{
    messageIsSet_ = false;
}

BatchResultVO BatchDeletePlansResponse::getResult() const
{
    return result_;
}

void BatchDeletePlansResponse::setResult(const BatchResultVO& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchDeletePlansResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchDeletePlansResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


