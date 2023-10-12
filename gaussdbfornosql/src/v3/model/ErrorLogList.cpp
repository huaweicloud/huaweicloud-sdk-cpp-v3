

#include "huaweicloud/gaussdbfornosql/v3/model/ErrorLogList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ErrorLogList::ErrorLogList()
{
    nodeName_ = "";
    nodeNameIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
}

ErrorLogList::~ErrorLogList() = default;

void ErrorLogList::validate()
{
}

web::json::value ErrorLogList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeNameIsSet_) {
        val[utility::conversions::to_string_t("node_name")] = ModelBase::toJson(nodeName_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}
bool ErrorLogList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
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


std::string ErrorLogList::getNodeName() const
{
    return nodeName_;
}

void ErrorLogList::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool ErrorLogList::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void ErrorLogList::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string ErrorLogList::getLevel() const
{
    return level_;
}

void ErrorLogList::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ErrorLogList::levelIsSet() const
{
    return levelIsSet_;
}

void ErrorLogList::unsetlevel()
{
    levelIsSet_ = false;
}

std::string ErrorLogList::getTime() const
{
    return time_;
}

void ErrorLogList::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool ErrorLogList::timeIsSet() const
{
    return timeIsSet_;
}

void ErrorLogList::unsettime()
{
    timeIsSet_ = false;
}

std::string ErrorLogList::getContent() const
{
    return content_;
}

void ErrorLogList::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool ErrorLogList::contentIsSet() const
{
    return contentIsSet_;
}

void ErrorLogList::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


