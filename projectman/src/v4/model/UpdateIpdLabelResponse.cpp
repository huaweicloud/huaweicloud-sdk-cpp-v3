

#include "huaweicloud/projectman/v4/model/UpdateIpdLabelResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UpdateIpdLabelResponse::UpdateIpdLabelResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

UpdateIpdLabelResponse::~UpdateIpdLabelResponse() = default;

void UpdateIpdLabelResponse::validate()
{
}

web::json::value UpdateIpdLabelResponse::toJson() const
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
bool UpdateIpdLabelResponse::fromJson(const web::json::value& val)
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
            LabelUpdateResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string UpdateIpdLabelResponse::getStatus() const
{
    return status_;
}

void UpdateIpdLabelResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateIpdLabelResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateIpdLabelResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateIpdLabelResponse::getMessage() const
{
    return message_;
}

void UpdateIpdLabelResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool UpdateIpdLabelResponse::messageIsSet() const
{
    return messageIsSet_;
}

void UpdateIpdLabelResponse::unsetmessage()
{
    messageIsSet_ = false;
}

LabelUpdateResult UpdateIpdLabelResponse::getResult() const
{
    return result_;
}

void UpdateIpdLabelResponse::setResult(const LabelUpdateResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateIpdLabelResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateIpdLabelResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


