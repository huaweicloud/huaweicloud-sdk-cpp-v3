

#include "huaweicloud/gaussdbfornosql/v3/model/ListInfluxdbSlowLogsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListInfluxdbSlowLogsRequestBody::ListInfluxdbSlowLogsRequestBody()
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
    keywords_ = "";
    keywordsIsSet_ = false;
    maxCostTime_ = 0;
    maxCostTimeIsSet_ = false;
    minCostTime_ = 0;
    minCostTimeIsSet_ = false;
    database_ = "";
    databaseIsSet_ = false;
    retentionPolicy_ = "";
    retentionPolicyIsSet_ = false;
}

ListInfluxdbSlowLogsRequestBody::~ListInfluxdbSlowLogsRequestBody() = default;

void ListInfluxdbSlowLogsRequestBody::validate()
{
}

web::json::value ListInfluxdbSlowLogsRequestBody::toJson() const
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
    if(databaseIsSet_) {
        val[utility::conversions::to_string_t("database")] = ModelBase::toJson(database_);
    }
    if(retentionPolicyIsSet_) {
        val[utility::conversions::to_string_t("retention_policy")] = ModelBase::toJson(retentionPolicy_);
    }

    return val;
}
bool ListInfluxdbSlowLogsRequestBody::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeywords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_cost_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_cost_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxCostTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_cost_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_cost_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinCostTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retention_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionPolicy(refVal);
        }
    }
    return ok;
}


std::string ListInfluxdbSlowLogsRequestBody::getStartTime() const
{
    return startTime_;
}

void ListInfluxdbSlowLogsRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListInfluxdbSlowLogsRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListInfluxdbSlowLogsRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListInfluxdbSlowLogsRequestBody::getEndTime() const
{
    return endTime_;
}

void ListInfluxdbSlowLogsRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListInfluxdbSlowLogsRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListInfluxdbSlowLogsRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListInfluxdbSlowLogsRequestBody::getLimit() const
{
    return limit_;
}

void ListInfluxdbSlowLogsRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInfluxdbSlowLogsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListInfluxdbSlowLogsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInfluxdbSlowLogsRequestBody::getLineNum() const
{
    return lineNum_;
}

void ListInfluxdbSlowLogsRequestBody::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool ListInfluxdbSlowLogsRequestBody::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void ListInfluxdbSlowLogsRequestBody::unsetlineNum()
{
    lineNumIsSet_ = false;
}

std::string ListInfluxdbSlowLogsRequestBody::getOperateType() const
{
    return operateType_;
}

void ListInfluxdbSlowLogsRequestBody::setOperateType(const std::string& value)
{
    operateType_ = value;
    operateTypeIsSet_ = true;
}

bool ListInfluxdbSlowLogsRequestBody::operateTypeIsSet() const
{
    return operateTypeIsSet_;
}

void ListInfluxdbSlowLogsRequestBody::unsetoperateType()
{
    operateTypeIsSet_ = false;
}

std::string ListInfluxdbSlowLogsRequestBody::getNodeId() const
{
    return nodeId_;
}

void ListInfluxdbSlowLogsRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListInfluxdbSlowLogsRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListInfluxdbSlowLogsRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ListInfluxdbSlowLogsRequestBody::getKeywords() const
{
    return keywords_;
}

void ListInfluxdbSlowLogsRequestBody::setKeywords(const std::string& value)
{
    keywords_ = value;
    keywordsIsSet_ = true;
}

bool ListInfluxdbSlowLogsRequestBody::keywordsIsSet() const
{
    return keywordsIsSet_;
}

void ListInfluxdbSlowLogsRequestBody::unsetkeywords()
{
    keywordsIsSet_ = false;
}

int32_t ListInfluxdbSlowLogsRequestBody::getMaxCostTime() const
{
    return maxCostTime_;
}

void ListInfluxdbSlowLogsRequestBody::setMaxCostTime(int32_t value)
{
    maxCostTime_ = value;
    maxCostTimeIsSet_ = true;
}

bool ListInfluxdbSlowLogsRequestBody::maxCostTimeIsSet() const
{
    return maxCostTimeIsSet_;
}

void ListInfluxdbSlowLogsRequestBody::unsetmaxCostTime()
{
    maxCostTimeIsSet_ = false;
}

int32_t ListInfluxdbSlowLogsRequestBody::getMinCostTime() const
{
    return minCostTime_;
}

void ListInfluxdbSlowLogsRequestBody::setMinCostTime(int32_t value)
{
    minCostTime_ = value;
    minCostTimeIsSet_ = true;
}

bool ListInfluxdbSlowLogsRequestBody::minCostTimeIsSet() const
{
    return minCostTimeIsSet_;
}

void ListInfluxdbSlowLogsRequestBody::unsetminCostTime()
{
    minCostTimeIsSet_ = false;
}

std::string ListInfluxdbSlowLogsRequestBody::getDatabase() const
{
    return database_;
}

void ListInfluxdbSlowLogsRequestBody::setDatabase(const std::string& value)
{
    database_ = value;
    databaseIsSet_ = true;
}

bool ListInfluxdbSlowLogsRequestBody::databaseIsSet() const
{
    return databaseIsSet_;
}

void ListInfluxdbSlowLogsRequestBody::unsetdatabase()
{
    databaseIsSet_ = false;
}

std::string ListInfluxdbSlowLogsRequestBody::getRetentionPolicy() const
{
    return retentionPolicy_;
}

void ListInfluxdbSlowLogsRequestBody::setRetentionPolicy(const std::string& value)
{
    retentionPolicy_ = value;
    retentionPolicyIsSet_ = true;
}

bool ListInfluxdbSlowLogsRequestBody::retentionPolicyIsSet() const
{
    return retentionPolicyIsSet_;
}

void ListInfluxdbSlowLogsRequestBody::unsetretentionPolicy()
{
    retentionPolicyIsSet_ = false;
}

}
}
}
}
}


