

#include "huaweicloud/rds/v3/model/ErrorLogItem.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ErrorLogItem::ErrorLogItem()
{
    time_ = "";
    timeIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    lineNum_ = "";
    lineNumIsSet_ = false;
}

ErrorLogItem::~ErrorLogItem() = default;

void ErrorLogItem::validate()
{
}

web::json::value ErrorLogItem::toJson() const
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
    if(lineNumIsSet_) {
        val[utility::conversions::to_string_t("line_num")] = ModelBase::toJson(lineNum_);
    }

    return val;
}

bool ErrorLogItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("line_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("line_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLineNum(refVal);
        }
    }
    return ok;
}

std::string ErrorLogItem::getTime() const
{
    return time_;
}

void ErrorLogItem::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool ErrorLogItem::timeIsSet() const
{
    return timeIsSet_;
}

void ErrorLogItem::unsettime()
{
    timeIsSet_ = false;
}

std::string ErrorLogItem::getLevel() const
{
    return level_;
}

void ErrorLogItem::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ErrorLogItem::levelIsSet() const
{
    return levelIsSet_;
}

void ErrorLogItem::unsetlevel()
{
    levelIsSet_ = false;
}

std::string ErrorLogItem::getContent() const
{
    return content_;
}

void ErrorLogItem::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool ErrorLogItem::contentIsSet() const
{
    return contentIsSet_;
}

void ErrorLogItem::unsetcontent()
{
    contentIsSet_ = false;
}

std::string ErrorLogItem::getLineNum() const
{
    return lineNum_;
}

void ErrorLogItem::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool ErrorLogItem::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void ErrorLogItem::unsetlineNum()
{
    lineNumIsSet_ = false;
}

}
}
}
}
}


