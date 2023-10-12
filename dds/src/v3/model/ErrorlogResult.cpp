

#include "huaweicloud/dds/v3/model/ErrorlogResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ErrorlogResult::ErrorlogResult()
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

ErrorlogResult::~ErrorlogResult() = default;

void ErrorlogResult::validate()
{
}

web::json::value ErrorlogResult::toJson() const
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
bool ErrorlogResult::fromJson(const web::json::value& val)
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


std::string ErrorlogResult::getNodeName() const
{
    return nodeName_;
}

void ErrorlogResult::setNodeName(const std::string& value)
{
    nodeName_ = value;
    nodeNameIsSet_ = true;
}

bool ErrorlogResult::nodeNameIsSet() const
{
    return nodeNameIsSet_;
}

void ErrorlogResult::unsetnodeName()
{
    nodeNameIsSet_ = false;
}

std::string ErrorlogResult::getLevel() const
{
    return level_;
}

void ErrorlogResult::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ErrorlogResult::levelIsSet() const
{
    return levelIsSet_;
}

void ErrorlogResult::unsetlevel()
{
    levelIsSet_ = false;
}

std::string ErrorlogResult::getTime() const
{
    return time_;
}

void ErrorlogResult::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool ErrorlogResult::timeIsSet() const
{
    return timeIsSet_;
}

void ErrorlogResult::unsettime()
{
    timeIsSet_ = false;
}

std::string ErrorlogResult::getContent() const
{
    return content_;
}

void ErrorlogResult::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool ErrorlogResult::contentIsSet() const
{
    return contentIsSet_;
}

void ErrorlogResult::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


