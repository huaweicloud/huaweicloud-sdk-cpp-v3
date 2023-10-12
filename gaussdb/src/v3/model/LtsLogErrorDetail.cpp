

#include "huaweicloud/gaussdb/v3/model/LtsLogErrorDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




LtsLogErrorDetail::LtsLogErrorDetail()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    lineNum_ = "";
    lineNumIsSet_ = false;
}

LtsLogErrorDetail::~LtsLogErrorDetail() = default;

void LtsLogErrorDetail::validate()
{
}

web::json::value LtsLogErrorDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
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
bool LtsLogErrorDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
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


std::string LtsLogErrorDetail::getNodeId() const
{
    return nodeId_;
}

void LtsLogErrorDetail::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool LtsLogErrorDetail::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void LtsLogErrorDetail::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string LtsLogErrorDetail::getTime() const
{
    return time_;
}

void LtsLogErrorDetail::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool LtsLogErrorDetail::timeIsSet() const
{
    return timeIsSet_;
}

void LtsLogErrorDetail::unsettime()
{
    timeIsSet_ = false;
}

std::string LtsLogErrorDetail::getLevel() const
{
    return level_;
}

void LtsLogErrorDetail::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool LtsLogErrorDetail::levelIsSet() const
{
    return levelIsSet_;
}

void LtsLogErrorDetail::unsetlevel()
{
    levelIsSet_ = false;
}

std::string LtsLogErrorDetail::getContent() const
{
    return content_;
}

void LtsLogErrorDetail::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool LtsLogErrorDetail::contentIsSet() const
{
    return contentIsSet_;
}

void LtsLogErrorDetail::unsetcontent()
{
    contentIsSet_ = false;
}

std::string LtsLogErrorDetail::getLineNum() const
{
    return lineNum_;
}

void LtsLogErrorDetail::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool LtsLogErrorDetail::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void LtsLogErrorDetail::unsetlineNum()
{
    lineNumIsSet_ = false;
}

}
}
}
}
}


