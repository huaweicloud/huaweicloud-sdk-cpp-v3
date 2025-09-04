

#include "huaweicloud/gaussdb/v3/model/HtapErrorLogDetailResponse_error_log_list.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




HtapErrorLogDetailResponse_error_log_list::HtapErrorLogDetailResponse_error_log_list()
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

HtapErrorLogDetailResponse_error_log_list::~HtapErrorLogDetailResponse_error_log_list() = default;

void HtapErrorLogDetailResponse_error_log_list::validate()
{
}

web::json::value HtapErrorLogDetailResponse_error_log_list::toJson() const
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
bool HtapErrorLogDetailResponse_error_log_list::fromJson(const web::json::value& val)
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


std::string HtapErrorLogDetailResponse_error_log_list::getNodeId() const
{
    return nodeId_;
}

void HtapErrorLogDetailResponse_error_log_list::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool HtapErrorLogDetailResponse_error_log_list::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void HtapErrorLogDetailResponse_error_log_list::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string HtapErrorLogDetailResponse_error_log_list::getTime() const
{
    return time_;
}

void HtapErrorLogDetailResponse_error_log_list::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool HtapErrorLogDetailResponse_error_log_list::timeIsSet() const
{
    return timeIsSet_;
}

void HtapErrorLogDetailResponse_error_log_list::unsettime()
{
    timeIsSet_ = false;
}

std::string HtapErrorLogDetailResponse_error_log_list::getLevel() const
{
    return level_;
}

void HtapErrorLogDetailResponse_error_log_list::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool HtapErrorLogDetailResponse_error_log_list::levelIsSet() const
{
    return levelIsSet_;
}

void HtapErrorLogDetailResponse_error_log_list::unsetlevel()
{
    levelIsSet_ = false;
}

std::string HtapErrorLogDetailResponse_error_log_list::getContent() const
{
    return content_;
}

void HtapErrorLogDetailResponse_error_log_list::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool HtapErrorLogDetailResponse_error_log_list::contentIsSet() const
{
    return contentIsSet_;
}

void HtapErrorLogDetailResponse_error_log_list::unsetcontent()
{
    contentIsSet_ = false;
}

std::string HtapErrorLogDetailResponse_error_log_list::getLineNum() const
{
    return lineNum_;
}

void HtapErrorLogDetailResponse_error_log_list::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool HtapErrorLogDetailResponse_error_log_list::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void HtapErrorLogDetailResponse_error_log_list::unsetlineNum()
{
    lineNumIsSet_ = false;
}

}
}
}
}
}


