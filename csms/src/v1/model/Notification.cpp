

#include "huaweicloud/csms/v1/model/Notification.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




Notification::Notification()
{
    targetType_ = "";
    targetTypeIsSet_ = false;
    targetId_ = "";
    targetIdIsSet_ = false;
    targetName_ = "";
    targetNameIsSet_ = false;
}

Notification::~Notification() = default;

void Notification::validate()
{
}

web::json::value Notification::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetTypeIsSet_) {
        val[utility::conversions::to_string_t("target_type")] = ModelBase::toJson(targetType_);
    }
    if(targetIdIsSet_) {
        val[utility::conversions::to_string_t("target_id")] = ModelBase::toJson(targetId_);
    }
    if(targetNameIsSet_) {
        val[utility::conversions::to_string_t("target_name")] = ModelBase::toJson(targetName_);
    }

    return val;
}
bool Notification::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetName(refVal);
        }
    }
    return ok;
}


std::string Notification::getTargetType() const
{
    return targetType_;
}

void Notification::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool Notification::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void Notification::unsettargetType()
{
    targetTypeIsSet_ = false;
}

std::string Notification::getTargetId() const
{
    return targetId_;
}

void Notification::setTargetId(const std::string& value)
{
    targetId_ = value;
    targetIdIsSet_ = true;
}

bool Notification::targetIdIsSet() const
{
    return targetIdIsSet_;
}

void Notification::unsettargetId()
{
    targetIdIsSet_ = false;
}

std::string Notification::getTargetName() const
{
    return targetName_;
}

void Notification::setTargetName(const std::string& value)
{
    targetName_ = value;
    targetNameIsSet_ = true;
}

bool Notification::targetNameIsSet() const
{
    return targetNameIsSet_;
}

void Notification::unsettargetName()
{
    targetNameIsSet_ = false;
}

}
}
}
}
}


