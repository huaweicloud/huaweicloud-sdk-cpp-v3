

#include "huaweicloud/gaussdb/v3/model/LtsLogErrorQueryRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




LtsLogErrorQueryRequest::LtsLogErrorQueryRequest()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    lineNum_ = "";
    lineNumIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
}

LtsLogErrorQueryRequest::~LtsLogErrorQueryRequest() = default;

void LtsLogErrorQueryRequest::validate()
{
}

web::json::value LtsLogErrorQueryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(lineNumIsSet_) {
        val[utility::conversions::to_string_t("line_num")] = ModelBase::toJson(lineNum_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }

    return val;
}

bool LtsLogErrorQueryRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    return ok;
}

std::string LtsLogErrorQueryRequest::getNodeId() const
{
    return nodeId_;
}

void LtsLogErrorQueryRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool LtsLogErrorQueryRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void LtsLogErrorQueryRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string LtsLogErrorQueryRequest::getStartTime() const
{
    return startTime_;
}

void LtsLogErrorQueryRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool LtsLogErrorQueryRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void LtsLogErrorQueryRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string LtsLogErrorQueryRequest::getEndTime() const
{
    return endTime_;
}

void LtsLogErrorQueryRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool LtsLogErrorQueryRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void LtsLogErrorQueryRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t LtsLogErrorQueryRequest::getLimit() const
{
    return limit_;
}

void LtsLogErrorQueryRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool LtsLogErrorQueryRequest::limitIsSet() const
{
    return limitIsSet_;
}

void LtsLogErrorQueryRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string LtsLogErrorQueryRequest::getLineNum() const
{
    return lineNum_;
}

void LtsLogErrorQueryRequest::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool LtsLogErrorQueryRequest::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void LtsLogErrorQueryRequest::unsetlineNum()
{
    lineNumIsSet_ = false;
}

std::string LtsLogErrorQueryRequest::getLevel() const
{
    return level_;
}

void LtsLogErrorQueryRequest::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool LtsLogErrorQueryRequest::levelIsSet() const
{
    return levelIsSet_;
}

void LtsLogErrorQueryRequest::unsetlevel()
{
    levelIsSet_ = false;
}

}
}
}
}
}


