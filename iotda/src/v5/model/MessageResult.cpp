

#include "huaweicloud/iotda/v5/model/MessageResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




MessageResult::MessageResult()
{
    status_ = "";
    statusIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    finishedTime_ = "";
    finishedTimeIsSet_ = false;
}

MessageResult::~MessageResult() = default;

void MessageResult::validate()
{
}

web::json::value MessageResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(finishedTimeIsSet_) {
        val[utility::conversions::to_string_t("finished_time")] = ModelBase::toJson(finishedTime_);
    }

    return val;
}
bool MessageResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finished_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finished_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishedTime(refVal);
        }
    }
    return ok;
}


std::string MessageResult::getStatus() const
{
    return status_;
}

void MessageResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool MessageResult::statusIsSet() const
{
    return statusIsSet_;
}

void MessageResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string MessageResult::getCreatedTime() const
{
    return createdTime_;
}

void MessageResult::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool MessageResult::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void MessageResult::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string MessageResult::getFinishedTime() const
{
    return finishedTime_;
}

void MessageResult::setFinishedTime(const std::string& value)
{
    finishedTime_ = value;
    finishedTimeIsSet_ = true;
}

bool MessageResult::finishedTimeIsSet() const
{
    return finishedTimeIsSet_;
}

void MessageResult::unsetfinishedTime()
{
    finishedTimeIsSet_ = false;
}

}
}
}
}
}


