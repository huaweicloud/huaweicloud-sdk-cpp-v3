

#include "huaweicloud/cce/v3/model/CheckTaskStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CheckTaskStatus::CheckTaskStatus()
{
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    riskListIsSet_ = false;
}

CheckTaskStatus::~CheckTaskStatus() = default;

void CheckTaskStatus::validate()
{
}

web::json::value CheckTaskStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(riskListIsSet_) {
        val[utility::conversions::to_string_t("riskList")] = ModelBase::toJson(riskList_);
    }

    return val;
}
bool CheckTaskStatus::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("riskList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("riskList"));
        if(!fieldValue.is_null())
        {
            std::vector<CheckTaskRisk> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskList(refVal);
        }
    }
    return ok;
}


std::string CheckTaskStatus::getStatus() const
{
    return status_;
}

void CheckTaskStatus::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CheckTaskStatus::statusIsSet() const
{
    return statusIsSet_;
}

void CheckTaskStatus::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CheckTaskStatus::getMessage() const
{
    return message_;
}

void CheckTaskStatus::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CheckTaskStatus::messageIsSet() const
{
    return messageIsSet_;
}

void CheckTaskStatus::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<CheckTaskRisk>& CheckTaskStatus::getRiskList()
{
    return riskList_;
}

void CheckTaskStatus::setRiskList(const std::vector<CheckTaskRisk>& value)
{
    riskList_ = value;
    riskListIsSet_ = true;
}

bool CheckTaskStatus::riskListIsSet() const
{
    return riskListIsSet_;
}

void CheckTaskStatus::unsetriskList()
{
    riskListIsSet_ = false;
}

}
}
}
}
}


