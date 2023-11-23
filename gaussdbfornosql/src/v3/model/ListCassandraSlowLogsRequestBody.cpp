

#include "huaweicloud/gaussdbfornosql/v3/model/ListCassandraSlowLogsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListCassandraSlowLogsRequestBody::ListCassandraSlowLogsRequestBody()
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
    keyspaceKeywordsIsSet_ = false;
    tableKeywordsIsSet_ = false;
    maxCostTime_ = 0;
    maxCostTimeIsSet_ = false;
    minCostTime_ = 0;
    minCostTimeIsSet_ = false;
}

ListCassandraSlowLogsRequestBody::~ListCassandraSlowLogsRequestBody() = default;

void ListCassandraSlowLogsRequestBody::validate()
{
}

web::json::value ListCassandraSlowLogsRequestBody::toJson() const
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
    if(keyspaceKeywordsIsSet_) {
        val[utility::conversions::to_string_t("keyspace_keywords")] = ModelBase::toJson(keyspaceKeywords_);
    }
    if(tableKeywordsIsSet_) {
        val[utility::conversions::to_string_t("table_keywords")] = ModelBase::toJson(tableKeywords_);
    }
    if(maxCostTimeIsSet_) {
        val[utility::conversions::to_string_t("max_cost_time")] = ModelBase::toJson(maxCostTime_);
    }
    if(minCostTimeIsSet_) {
        val[utility::conversions::to_string_t("min_cost_time")] = ModelBase::toJson(minCostTime_);
    }

    return val;
}
bool ListCassandraSlowLogsRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("keyspace_keywords"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyspace_keywords"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyspaceKeywords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_keywords"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_keywords"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableKeywords(refVal);
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
    return ok;
}


std::string ListCassandraSlowLogsRequestBody::getStartTime() const
{
    return startTime_;
}

void ListCassandraSlowLogsRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListCassandraSlowLogsRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListCassandraSlowLogsRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListCassandraSlowLogsRequestBody::getEndTime() const
{
    return endTime_;
}

void ListCassandraSlowLogsRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListCassandraSlowLogsRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListCassandraSlowLogsRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListCassandraSlowLogsRequestBody::getLimit() const
{
    return limit_;
}

void ListCassandraSlowLogsRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListCassandraSlowLogsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListCassandraSlowLogsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListCassandraSlowLogsRequestBody::getLineNum() const
{
    return lineNum_;
}

void ListCassandraSlowLogsRequestBody::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool ListCassandraSlowLogsRequestBody::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void ListCassandraSlowLogsRequestBody::unsetlineNum()
{
    lineNumIsSet_ = false;
}

std::string ListCassandraSlowLogsRequestBody::getOperateType() const
{
    return operateType_;
}

void ListCassandraSlowLogsRequestBody::setOperateType(const std::string& value)
{
    operateType_ = value;
    operateTypeIsSet_ = true;
}

bool ListCassandraSlowLogsRequestBody::operateTypeIsSet() const
{
    return operateTypeIsSet_;
}

void ListCassandraSlowLogsRequestBody::unsetoperateType()
{
    operateTypeIsSet_ = false;
}

std::string ListCassandraSlowLogsRequestBody::getNodeId() const
{
    return nodeId_;
}

void ListCassandraSlowLogsRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListCassandraSlowLogsRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListCassandraSlowLogsRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::vector<std::string>& ListCassandraSlowLogsRequestBody::getKeywords()
{
    return keywords_;
}

void ListCassandraSlowLogsRequestBody::setKeywords(const std::vector<std::string>& value)
{
    keywords_ = value;
    keywordsIsSet_ = true;
}

bool ListCassandraSlowLogsRequestBody::keywordsIsSet() const
{
    return keywordsIsSet_;
}

void ListCassandraSlowLogsRequestBody::unsetkeywords()
{
    keywordsIsSet_ = false;
}

std::vector<std::string>& ListCassandraSlowLogsRequestBody::getKeyspaceKeywords()
{
    return keyspaceKeywords_;
}

void ListCassandraSlowLogsRequestBody::setKeyspaceKeywords(const std::vector<std::string>& value)
{
    keyspaceKeywords_ = value;
    keyspaceKeywordsIsSet_ = true;
}

bool ListCassandraSlowLogsRequestBody::keyspaceKeywordsIsSet() const
{
    return keyspaceKeywordsIsSet_;
}

void ListCassandraSlowLogsRequestBody::unsetkeyspaceKeywords()
{
    keyspaceKeywordsIsSet_ = false;
}

std::vector<std::string>& ListCassandraSlowLogsRequestBody::getTableKeywords()
{
    return tableKeywords_;
}

void ListCassandraSlowLogsRequestBody::setTableKeywords(const std::vector<std::string>& value)
{
    tableKeywords_ = value;
    tableKeywordsIsSet_ = true;
}

bool ListCassandraSlowLogsRequestBody::tableKeywordsIsSet() const
{
    return tableKeywordsIsSet_;
}

void ListCassandraSlowLogsRequestBody::unsettableKeywords()
{
    tableKeywordsIsSet_ = false;
}

int32_t ListCassandraSlowLogsRequestBody::getMaxCostTime() const
{
    return maxCostTime_;
}

void ListCassandraSlowLogsRequestBody::setMaxCostTime(int32_t value)
{
    maxCostTime_ = value;
    maxCostTimeIsSet_ = true;
}

bool ListCassandraSlowLogsRequestBody::maxCostTimeIsSet() const
{
    return maxCostTimeIsSet_;
}

void ListCassandraSlowLogsRequestBody::unsetmaxCostTime()
{
    maxCostTimeIsSet_ = false;
}

int32_t ListCassandraSlowLogsRequestBody::getMinCostTime() const
{
    return minCostTime_;
}

void ListCassandraSlowLogsRequestBody::setMinCostTime(int32_t value)
{
    minCostTime_ = value;
    minCostTimeIsSet_ = true;
}

bool ListCassandraSlowLogsRequestBody::minCostTimeIsSet() const
{
    return minCostTimeIsSet_;
}

void ListCassandraSlowLogsRequestBody::unsetminCostTime()
{
    minCostTimeIsSet_ = false;
}

}
}
}
}
}


