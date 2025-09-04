

#include "huaweicloud/gaussdb/v3/model/HtapErrorLogQueryRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




HtapErrorLogQueryRequestBody::HtapErrorLogQueryRequestBody()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    lineNum_ = "";
    lineNumIsSet_ = false;
}

HtapErrorLogQueryRequestBody::~HtapErrorLogQueryRequestBody() = default;

void HtapErrorLogQueryRequestBody::validate()
{
}

web::json::value HtapErrorLogQueryRequestBody::toJson() const
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
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(lineNumIsSet_) {
        val[utility::conversions::to_string_t("line_num")] = ModelBase::toJson(lineNum_);
    }

    return val;
}
bool HtapErrorLogQueryRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
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
    return ok;
}


std::string HtapErrorLogQueryRequestBody::getNodeId() const
{
    return nodeId_;
}

void HtapErrorLogQueryRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool HtapErrorLogQueryRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void HtapErrorLogQueryRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string HtapErrorLogQueryRequestBody::getStartTime() const
{
    return startTime_;
}

void HtapErrorLogQueryRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool HtapErrorLogQueryRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void HtapErrorLogQueryRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string HtapErrorLogQueryRequestBody::getEndTime() const
{
    return endTime_;
}

void HtapErrorLogQueryRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool HtapErrorLogQueryRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void HtapErrorLogQueryRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string HtapErrorLogQueryRequestBody::getLevel() const
{
    return level_;
}

void HtapErrorLogQueryRequestBody::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool HtapErrorLogQueryRequestBody::levelIsSet() const
{
    return levelIsSet_;
}

void HtapErrorLogQueryRequestBody::unsetlevel()
{
    levelIsSet_ = false;
}

int32_t HtapErrorLogQueryRequestBody::getLimit() const
{
    return limit_;
}

void HtapErrorLogQueryRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool HtapErrorLogQueryRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void HtapErrorLogQueryRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string HtapErrorLogQueryRequestBody::getLineNum() const
{
    return lineNum_;
}

void HtapErrorLogQueryRequestBody::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool HtapErrorLogQueryRequestBody::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void HtapErrorLogQueryRequestBody::unsetlineNum()
{
    lineNumIsSet_ = false;
}

}
}
}
}
}


