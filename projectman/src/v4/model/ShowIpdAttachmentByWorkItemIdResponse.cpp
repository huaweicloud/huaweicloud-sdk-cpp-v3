

#include "huaweicloud/projectman/v4/model/ShowIpdAttachmentByWorkItemIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIpdAttachmentByWorkItemIdResponse::ShowIpdAttachmentByWorkItemIdResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

ShowIpdAttachmentByWorkItemIdResponse::~ShowIpdAttachmentByWorkItemIdResponse() = default;

void ShowIpdAttachmentByWorkItemIdResponse::validate()
{
}

web::json::value ShowIpdAttachmentByWorkItemIdResponse::toJson() const
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
bool ShowIpdAttachmentByWorkItemIdResponse::fromJson(const web::json::value& val)
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
            std::vector<AttachmentEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowIpdAttachmentByWorkItemIdResponse::getStatus() const
{
    return status_;
}

void ShowIpdAttachmentByWorkItemIdResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowIpdAttachmentByWorkItemIdResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowIpdAttachmentByWorkItemIdResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowIpdAttachmentByWorkItemIdResponse::getMessage() const
{
    return message_;
}

void ShowIpdAttachmentByWorkItemIdResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowIpdAttachmentByWorkItemIdResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowIpdAttachmentByWorkItemIdResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<AttachmentEntity>& ShowIpdAttachmentByWorkItemIdResponse::getResult()
{
    return result_;
}

void ShowIpdAttachmentByWorkItemIdResponse::setResult(const std::vector<AttachmentEntity>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowIpdAttachmentByWorkItemIdResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowIpdAttachmentByWorkItemIdResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


