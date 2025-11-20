

#include "huaweicloud/cce/v3/model/CheckTaskRisk.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CheckTaskRisk::CheckTaskRisk()
{
    riskName_ = "";
    riskNameIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

CheckTaskRisk::~CheckTaskRisk() = default;

void CheckTaskRisk::validate()
{
}

web::json::value CheckTaskRisk::toJson() const
{
    web::json::value val = web::json::value::object();

    if(riskNameIsSet_) {
        val[utility::conversions::to_string_t("riskName")] = ModelBase::toJson(riskName_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool CheckTaskRisk::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("riskName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("riskName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
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


std::string CheckTaskRisk::getRiskName() const
{
    return riskName_;
}

void CheckTaskRisk::setRiskName(const std::string& value)
{
    riskName_ = value;
    riskNameIsSet_ = true;
}

bool CheckTaskRisk::riskNameIsSet() const
{
    return riskNameIsSet_;
}

void CheckTaskRisk::unsetriskName()
{
    riskNameIsSet_ = false;
}

std::string CheckTaskRisk::getLevel() const
{
    return level_;
}

void CheckTaskRisk::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool CheckTaskRisk::levelIsSet() const
{
    return levelIsSet_;
}

void CheckTaskRisk::unsetlevel()
{
    levelIsSet_ = false;
}

std::string CheckTaskRisk::getStatus() const
{
    return status_;
}

void CheckTaskRisk::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CheckTaskRisk::statusIsSet() const
{
    return statusIsSet_;
}

void CheckTaskRisk::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CheckTaskRisk::getMessage() const
{
    return message_;
}

void CheckTaskRisk::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CheckTaskRisk::messageIsSet() const
{
    return messageIsSet_;
}

void CheckTaskRisk::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


