

#include "huaweicloud/rds/v3/model/ErrorLog.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ErrorLog::ErrorLog()
{
    time_ = "";
    timeIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
}

ErrorLog::~ErrorLog() = default;

void ErrorLog::validate()
{
}

web::json::value ErrorLog::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}

bool ErrorLog::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    return ok;
}

std::string ErrorLog::getTime() const
{
    return time_;
}

void ErrorLog::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool ErrorLog::timeIsSet() const
{
    return timeIsSet_;
}

void ErrorLog::unsettime()
{
    timeIsSet_ = false;
}

std::string ErrorLog::getLevel() const
{
    return level_;
}

void ErrorLog::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ErrorLog::levelIsSet() const
{
    return levelIsSet_;
}

void ErrorLog::unsetlevel()
{
    levelIsSet_ = false;
}

std::string ErrorLog::getContent() const
{
    return content_;
}

void ErrorLog::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool ErrorLog::contentIsSet() const
{
    return contentIsSet_;
}

void ErrorLog::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


