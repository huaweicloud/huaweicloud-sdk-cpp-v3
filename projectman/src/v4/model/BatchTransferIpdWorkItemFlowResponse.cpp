

#include "huaweicloud/projectman/v4/model/BatchTransferIpdWorkItemFlowResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchTransferIpdWorkItemFlowResponse::BatchTransferIpdWorkItemFlowResponse()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resultIsSet_ = false;
}

BatchTransferIpdWorkItemFlowResponse::~BatchTransferIpdWorkItemFlowResponse() = default;

void BatchTransferIpdWorkItemFlowResponse::validate()
{
}

web::json::value BatchTransferIpdWorkItemFlowResponse::toJson() const
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
bool BatchTransferIpdWorkItemFlowResponse::fromJson(const web::json::value& val)
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
            BatchResultVOIssueWithReasonVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string BatchTransferIpdWorkItemFlowResponse::getStatus() const
{
    return status_;
}

void BatchTransferIpdWorkItemFlowResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchTransferIpdWorkItemFlowResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchTransferIpdWorkItemFlowResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string BatchTransferIpdWorkItemFlowResponse::getMessage() const
{
    return message_;
}

void BatchTransferIpdWorkItemFlowResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool BatchTransferIpdWorkItemFlowResponse::messageIsSet() const
{
    return messageIsSet_;
}

void BatchTransferIpdWorkItemFlowResponse::unsetmessage()
{
    messageIsSet_ = false;
}

BatchResultVOIssueWithReasonVO BatchTransferIpdWorkItemFlowResponse::getResult() const
{
    return result_;
}

void BatchTransferIpdWorkItemFlowResponse::setResult(const BatchResultVOIssueWithReasonVO& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchTransferIpdWorkItemFlowResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchTransferIpdWorkItemFlowResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


