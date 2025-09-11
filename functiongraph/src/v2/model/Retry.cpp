

#include "huaweicloud/functiongraph/v2/model/Retry.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




Retry::Retry()
{
    name_ = "";
    nameIsSet_ = false;
    delay_ = 0L;
    delayIsSet_ = false;
    maxAttempts_ = 0L;
    maxAttemptsIsSet_ = false;
}

Retry::~Retry() = default;

void Retry::validate()
{
}

web::json::value Retry::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }
    if(maxAttemptsIsSet_) {
        val[utility::conversions::to_string_t("max_attempts")] = ModelBase::toJson(maxAttempts_);
    }

    return val;
}
bool Retry::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_attempts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_attempts"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxAttempts(refVal);
        }
    }
    return ok;
}


std::string Retry::getName() const
{
    return name_;
}

void Retry::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Retry::nameIsSet() const
{
    return nameIsSet_;
}

void Retry::unsetname()
{
    nameIsSet_ = false;
}

int64_t Retry::getDelay() const
{
    return delay_;
}

void Retry::setDelay(int64_t value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool Retry::delayIsSet() const
{
    return delayIsSet_;
}

void Retry::unsetdelay()
{
    delayIsSet_ = false;
}

int64_t Retry::getMaxAttempts() const
{
    return maxAttempts_;
}

void Retry::setMaxAttempts(int64_t value)
{
    maxAttempts_ = value;
    maxAttemptsIsSet_ = true;
}

bool Retry::maxAttemptsIsSet() const
{
    return maxAttemptsIsSet_;
}

void Retry::unsetmaxAttempts()
{
    maxAttemptsIsSet_ = false;
}

}
}
}
}
}


