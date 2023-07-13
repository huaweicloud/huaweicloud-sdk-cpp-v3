

#include "huaweicloud/lts/v2/model/Annotations.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




Annotations::Annotations()
{
    message_ = "";
    messageIsSet_ = false;
    logInfo_ = "";
    logInfoIsSet_ = false;
    currentValue_ = "";
    currentValueIsSet_ = false;
    oldAnnotations_ = "";
    oldAnnotationsIsSet_ = false;
}

Annotations::~Annotations() = default;

void Annotations::validate()
{
}

web::json::value Annotations::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(logInfoIsSet_) {
        val[utility::conversions::to_string_t("log_info")] = ModelBase::toJson(logInfo_);
    }
    if(currentValueIsSet_) {
        val[utility::conversions::to_string_t("current_value")] = ModelBase::toJson(currentValue_);
    }
    if(oldAnnotationsIsSet_) {
        val[utility::conversions::to_string_t("old_annotations")] = ModelBase::toJson(oldAnnotations_);
    }

    return val;
}

bool Annotations::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("old_annotations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_annotations"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldAnnotations(refVal);
        }
    }
    return ok;
}

std::string Annotations::getMessage() const
{
    return message_;
}

void Annotations::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool Annotations::messageIsSet() const
{
    return messageIsSet_;
}

void Annotations::unsetmessage()
{
    messageIsSet_ = false;
}

std::string Annotations::getLogInfo() const
{
    return logInfo_;
}

void Annotations::setLogInfo(const std::string& value)
{
    logInfo_ = value;
    logInfoIsSet_ = true;
}

bool Annotations::logInfoIsSet() const
{
    return logInfoIsSet_;
}

void Annotations::unsetlogInfo()
{
    logInfoIsSet_ = false;
}

std::string Annotations::getCurrentValue() const
{
    return currentValue_;
}

void Annotations::setCurrentValue(const std::string& value)
{
    currentValue_ = value;
    currentValueIsSet_ = true;
}

bool Annotations::currentValueIsSet() const
{
    return currentValueIsSet_;
}

void Annotations::unsetcurrentValue()
{
    currentValueIsSet_ = false;
}

std::string Annotations::getOldAnnotations() const
{
    return oldAnnotations_;
}

void Annotations::setOldAnnotations(const std::string& value)
{
    oldAnnotations_ = value;
    oldAnnotationsIsSet_ = true;
}

bool Annotations::oldAnnotationsIsSet() const
{
    return oldAnnotationsIsSet_;
}

void Annotations::unsetoldAnnotations()
{
    oldAnnotationsIsSet_ = false;
}

}
}
}
}
}


