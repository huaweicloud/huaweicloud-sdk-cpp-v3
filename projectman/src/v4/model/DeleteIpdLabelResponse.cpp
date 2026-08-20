

#include "huaweicloud/projectman/v4/model/DeleteIpdLabelResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DeleteIpdLabelResponse::DeleteIpdLabelResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

DeleteIpdLabelResponse::~DeleteIpdLabelResponse() = default;

void DeleteIpdLabelResponse::validate()
{
}

web::json::value DeleteIpdLabelResponse::toJson() const
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
bool DeleteIpdLabelResponse::fromJson(const web::json::value& val)
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
            LabelEntity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string DeleteIpdLabelResponse::getStatus() const
{
    return status_;
}

void DeleteIpdLabelResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeleteIpdLabelResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DeleteIpdLabelResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DeleteIpdLabelResponse::getMessage() const
{
    return message_;
}

void DeleteIpdLabelResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool DeleteIpdLabelResponse::messageIsSet() const
{
    return messageIsSet_;
}

void DeleteIpdLabelResponse::unsetmessage()
{
    messageIsSet_ = false;
}

LabelEntity DeleteIpdLabelResponse::getResult() const
{
    return result_;
}

void DeleteIpdLabelResponse::setResult(const LabelEntity& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DeleteIpdLabelResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DeleteIpdLabelResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


