

#include "huaweicloud/projectman/v4/model/ListIssueSprintSnapshotsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssueSprintSnapshotsResponse::ListIssueSprintSnapshotsResponse()
{
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ListIssueSprintSnapshotsResponse::~ListIssueSprintSnapshotsResponse() = default;

void ListIssueSprintSnapshotsResponse::validate()
{
}

web::json::value ListIssueSprintSnapshotsResponse::toJson() const
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
bool ListIssueSprintSnapshotsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<SnapshotsVO> refVal;
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


std::vector<SnapshotsVO>& ListIssueSprintSnapshotsResponse::getResult()
{
    return result_;
}

void ListIssueSprintSnapshotsResponse::setResult(const std::vector<SnapshotsVO>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListIssueSprintSnapshotsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListIssueSprintSnapshotsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListIssueSprintSnapshotsResponse::getStatus() const
{
    return status_;
}

void ListIssueSprintSnapshotsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListIssueSprintSnapshotsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListIssueSprintSnapshotsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListIssueSprintSnapshotsResponse::getMessage() const
{
    return message_;
}

void ListIssueSprintSnapshotsResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ListIssueSprintSnapshotsResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ListIssueSprintSnapshotsResponse::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


