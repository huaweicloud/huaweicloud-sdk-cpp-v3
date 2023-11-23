

#include "huaweicloud/gaussdbfornosql/v3/model/ListRedisSlowLogsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListRedisSlowLogsRequestBody::ListRedisSlowLogsRequestBody()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    lineNum_ = "";
    lineNumIsSet_ = false;
    operateType_ = "";
    operateTypeIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    keywordsIsSet_ = false;
    maxCostTime_ = 0.0;
    maxCostTimeIsSet_ = false;
    minCostTime_ = 0.0;
    minCostTimeIsSet_ = false;
}

ListRedisSlowLogsRequestBody::~ListRedisSlowLogsRequestBody() = default;

void ListRedisSlowLogsRequestBody::validate()
{
}

web::json::value ListRedisSlowLogsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(operateTypeIsSet_) {
        val[utility::conversions::to_string_t("operate_type")] = ModelBase::toJson(operateType_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(keywordsIsSet_) {
        val[utility::conversions::to_string_t("keywords")] = ModelBase::toJson(keywords_);
    }
    if(maxCostTimeIsSet_) {
        val[utility::conversions::to_string_t("max_cost_time")] = ModelBase::toJson(maxCostTime_);
    }
    if(minCostTimeIsSet_) {
        val[utility::conversions::to_string_t("min_cost_time")] = ModelBase::toJson(minCostTime_);
    }

    return val;
}
bool ListRedisSlowLogsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("operate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keywords"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keywords"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeywords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_cost_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_cost_time"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxCostTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_cost_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_cost_time"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinCostTime(refVal);
        }
    }
    return ok;
}


std::string ListRedisSlowLogsRequestBody::getStartTime() const
{
    return startTime_;
}

void ListRedisSlowLogsRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListRedisSlowLogsRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListRedisSlowLogsRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListRedisSlowLogsRequestBody::getEndTime() const
{
    return endTime_;
}

void ListRedisSlowLogsRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListRedisSlowLogsRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListRedisSlowLogsRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListRedisSlowLogsRequestBody::getLimit() const
{
    return limit_;
}

void ListRedisSlowLogsRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRedisSlowLogsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListRedisSlowLogsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRedisSlowLogsRequestBody::getLineNum() const
{
    return lineNum_;
}

void ListRedisSlowLogsRequestBody::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool ListRedisSlowLogsRequestBody::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void ListRedisSlowLogsRequestBody::unsetlineNum()
{
    lineNumIsSet_ = false;
}

std::string ListRedisSlowLogsRequestBody::getOperateType() const
{
    return operateType_;
}

void ListRedisSlowLogsRequestBody::setOperateType(const std::string& value)
{
    operateType_ = value;
    operateTypeIsSet_ = true;
}

bool ListRedisSlowLogsRequestBody::operateTypeIsSet() const
{
    return operateTypeIsSet_;
}

void ListRedisSlowLogsRequestBody::unsetoperateType()
{
    operateTypeIsSet_ = false;
}

std::string ListRedisSlowLogsRequestBody::getNodeId() const
{
    return nodeId_;
}

void ListRedisSlowLogsRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListRedisSlowLogsRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListRedisSlowLogsRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::vector<std::string>& ListRedisSlowLogsRequestBody::getKeywords()
{
    return keywords_;
}

void ListRedisSlowLogsRequestBody::setKeywords(const std::vector<std::string>& value)
{
    keywords_ = value;
    keywordsIsSet_ = true;
}

bool ListRedisSlowLogsRequestBody::keywordsIsSet() const
{
    return keywordsIsSet_;
}

void ListRedisSlowLogsRequestBody::unsetkeywords()
{
    keywordsIsSet_ = false;
}

double ListRedisSlowLogsRequestBody::getMaxCostTime() const
{
    return maxCostTime_;
}

void ListRedisSlowLogsRequestBody::setMaxCostTime(double value)
{
    maxCostTime_ = value;
    maxCostTimeIsSet_ = true;
}

bool ListRedisSlowLogsRequestBody::maxCostTimeIsSet() const
{
    return maxCostTimeIsSet_;
}

void ListRedisSlowLogsRequestBody::unsetmaxCostTime()
{
    maxCostTimeIsSet_ = false;
}

double ListRedisSlowLogsRequestBody::getMinCostTime() const
{
    return minCostTime_;
}

void ListRedisSlowLogsRequestBody::setMinCostTime(double value)
{
    minCostTime_ = value;
    minCostTimeIsSet_ = true;
}

bool ListRedisSlowLogsRequestBody::minCostTimeIsSet() const
{
    return minCostTimeIsSet_;
}

void ListRedisSlowLogsRequestBody::unsetminCostTime()
{
    minCostTimeIsSet_ = false;
}

}
}
}
}
}


