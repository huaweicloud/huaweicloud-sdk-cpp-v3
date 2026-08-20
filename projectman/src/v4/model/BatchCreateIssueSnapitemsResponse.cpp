

#include "huaweicloud/projectman/v4/model/BatchCreateIssueSnapitemsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchCreateIssueSnapitemsResponse::BatchCreateIssueSnapitemsResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

BatchCreateIssueSnapitemsResponse::~BatchCreateIssueSnapitemsResponse() = default;

void BatchCreateIssueSnapitemsResponse::validate()
{
}

web::json::value BatchCreateIssueSnapitemsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool BatchCreateIssueSnapitemsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            BatchCreateSnapshotResponse_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
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


BatchCreateSnapshotResponse_result BatchCreateIssueSnapitemsResponse::getResult() const
{
    return result_;
}

void BatchCreateIssueSnapitemsResponse::setResult(const BatchCreateSnapshotResponse_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool BatchCreateIssueSnapitemsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void BatchCreateIssueSnapitemsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string BatchCreateIssueSnapitemsResponse::getStatus() const
{
    return status_;
}

void BatchCreateIssueSnapitemsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchCreateIssueSnapitemsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void BatchCreateIssueSnapitemsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string BatchCreateIssueSnapitemsResponse::getMessage() const
{
    return message_;
}

void BatchCreateIssueSnapitemsResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool BatchCreateIssueSnapitemsResponse::messageIsSet() const
{
    return messageIsSet_;
}

void BatchCreateIssueSnapitemsResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


