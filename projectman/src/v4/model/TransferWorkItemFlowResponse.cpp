

#include "huaweicloud/projectman/v4/model/TransferWorkItemFlowResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




TransferWorkItemFlowResponse::TransferWorkItemFlowResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

TransferWorkItemFlowResponse::~TransferWorkItemFlowResponse() = default;

void TransferWorkItemFlowResponse::validate()
{
}

web::json::value TransferWorkItemFlowResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool TransferWorkItemFlowResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string TransferWorkItemFlowResponse::getStatus() const
{
    return status_;
}

void TransferWorkItemFlowResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool TransferWorkItemFlowResponse::statusIsSet() const
{
    return statusIsSet_;
}

void TransferWorkItemFlowResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string TransferWorkItemFlowResponse::getMessage() const
{
    return message_;
}

void TransferWorkItemFlowResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool TransferWorkItemFlowResponse::messageIsSet() const
{
    return messageIsSet_;
}

void TransferWorkItemFlowResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


