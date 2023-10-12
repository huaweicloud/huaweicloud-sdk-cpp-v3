

#include "huaweicloud/cts/v3/model/Lts.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




Lts::Lts()
{
    isLtsEnabled_ = false;
    isLtsEnabledIsSet_ = false;
    logGroupName_ = "";
    logGroupNameIsSet_ = false;
    logTopicName_ = "";
    logTopicNameIsSet_ = false;
}

Lts::~Lts() = default;

void Lts::validate()
{
}

web::json::value Lts::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isLtsEnabledIsSet_) {
        val[utility::conversions::to_string_t("is_lts_enabled")] = ModelBase::toJson(isLtsEnabled_);
    }
    if(logGroupNameIsSet_) {
        val[utility::conversions::to_string_t("log_group_name")] = ModelBase::toJson(logGroupName_);
    }
    if(logTopicNameIsSet_) {
        val[utility::conversions::to_string_t("log_topic_name")] = ModelBase::toJson(logTopicName_);
    }

    return val;
}
bool Lts::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_lts_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_lts_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsLtsEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_topic_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_topic_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogTopicName(refVal);
        }
    }
    return ok;
}


bool Lts::isIsLtsEnabled() const
{
    return isLtsEnabled_;
}

void Lts::setIsLtsEnabled(bool value)
{
    isLtsEnabled_ = value;
    isLtsEnabledIsSet_ = true;
}

bool Lts::isLtsEnabledIsSet() const
{
    return isLtsEnabledIsSet_;
}

void Lts::unsetisLtsEnabled()
{
    isLtsEnabledIsSet_ = false;
}

std::string Lts::getLogGroupName() const
{
    return logGroupName_;
}

void Lts::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool Lts::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void Lts::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

std::string Lts::getLogTopicName() const
{
    return logTopicName_;
}

void Lts::setLogTopicName(const std::string& value)
{
    logTopicName_ = value;
    logTopicNameIsSet_ = true;
}

bool Lts::logTopicNameIsSet() const
{
    return logTopicNameIsSet_;
}

void Lts::unsetlogTopicName()
{
    logTopicNameIsSet_ = false;
}

}
}
}
}
}


