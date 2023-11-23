

#include "huaweicloud/gaussdbfornosql/v3/model/ListMongodbSlowLogsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListMongodbSlowLogsRequestBody::ListMongodbSlowLogsRequestBody()
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
    databaseKeywordsIsSet_ = false;
    collectionKeywordsIsSet_ = false;
    maxCostTime_ = 0;
    maxCostTimeIsSet_ = false;
    minCostTime_ = 0;
    minCostTimeIsSet_ = false;
}

ListMongodbSlowLogsRequestBody::~ListMongodbSlowLogsRequestBody() = default;

void ListMongodbSlowLogsRequestBody::validate()
{
}

web::json::value ListMongodbSlowLogsRequestBody::toJson() const
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
    if(databaseKeywordsIsSet_) {
        val[utility::conversions::to_string_t("database_keywords")] = ModelBase::toJson(databaseKeywords_);
    }
    if(collectionKeywordsIsSet_) {
        val[utility::conversions::to_string_t("collection_keywords")] = ModelBase::toJson(collectionKeywords_);
    }
    if(maxCostTimeIsSet_) {
        val[utility::conversions::to_string_t("max_cost_time")] = ModelBase::toJson(maxCostTime_);
    }
    if(minCostTimeIsSet_) {
        val[utility::conversions::to_string_t("min_cost_time")] = ModelBase::toJson(minCostTime_);
    }

    return val;
}
bool ListMongodbSlowLogsRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("database_keywords"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_keywords"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseKeywords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("collection_keywords"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("collection_keywords"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCollectionKeywords(refVal);
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


std::string ListMongodbSlowLogsRequestBody::getStartTime() const
{
    return startTime_;
}

void ListMongodbSlowLogsRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListMongodbSlowLogsRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListMongodbSlowLogsRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListMongodbSlowLogsRequestBody::getEndTime() const
{
    return endTime_;
}

void ListMongodbSlowLogsRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListMongodbSlowLogsRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListMongodbSlowLogsRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListMongodbSlowLogsRequestBody::getLimit() const
{
    return limit_;
}

void ListMongodbSlowLogsRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMongodbSlowLogsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListMongodbSlowLogsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListMongodbSlowLogsRequestBody::getLineNum() const
{
    return lineNum_;
}

void ListMongodbSlowLogsRequestBody::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool ListMongodbSlowLogsRequestBody::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void ListMongodbSlowLogsRequestBody::unsetlineNum()
{
    lineNumIsSet_ = false;
}

std::string ListMongodbSlowLogsRequestBody::getOperateType() const
{
    return operateType_;
}

void ListMongodbSlowLogsRequestBody::setOperateType(const std::string& value)
{
    operateType_ = value;
    operateTypeIsSet_ = true;
}

bool ListMongodbSlowLogsRequestBody::operateTypeIsSet() const
{
    return operateTypeIsSet_;
}

void ListMongodbSlowLogsRequestBody::unsetoperateType()
{
    operateTypeIsSet_ = false;
}

std::string ListMongodbSlowLogsRequestBody::getNodeId() const
{
    return nodeId_;
}

void ListMongodbSlowLogsRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListMongodbSlowLogsRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListMongodbSlowLogsRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::vector<std::string>& ListMongodbSlowLogsRequestBody::getKeywords()
{
    return keywords_;
}

void ListMongodbSlowLogsRequestBody::setKeywords(const std::vector<std::string>& value)
{
    keywords_ = value;
    keywordsIsSet_ = true;
}

bool ListMongodbSlowLogsRequestBody::keywordsIsSet() const
{
    return keywordsIsSet_;
}

void ListMongodbSlowLogsRequestBody::unsetkeywords()
{
    keywordsIsSet_ = false;
}

std::vector<std::string>& ListMongodbSlowLogsRequestBody::getDatabaseKeywords()
{
    return databaseKeywords_;
}

void ListMongodbSlowLogsRequestBody::setDatabaseKeywords(const std::vector<std::string>& value)
{
    databaseKeywords_ = value;
    databaseKeywordsIsSet_ = true;
}

bool ListMongodbSlowLogsRequestBody::databaseKeywordsIsSet() const
{
    return databaseKeywordsIsSet_;
}

void ListMongodbSlowLogsRequestBody::unsetdatabaseKeywords()
{
    databaseKeywordsIsSet_ = false;
}

std::vector<std::string>& ListMongodbSlowLogsRequestBody::getCollectionKeywords()
{
    return collectionKeywords_;
}

void ListMongodbSlowLogsRequestBody::setCollectionKeywords(const std::vector<std::string>& value)
{
    collectionKeywords_ = value;
    collectionKeywordsIsSet_ = true;
}

bool ListMongodbSlowLogsRequestBody::collectionKeywordsIsSet() const
{
    return collectionKeywordsIsSet_;
}

void ListMongodbSlowLogsRequestBody::unsetcollectionKeywords()
{
    collectionKeywordsIsSet_ = false;
}

int32_t ListMongodbSlowLogsRequestBody::getMaxCostTime() const
{
    return maxCostTime_;
}

void ListMongodbSlowLogsRequestBody::setMaxCostTime(int32_t value)
{
    maxCostTime_ = value;
    maxCostTimeIsSet_ = true;
}

bool ListMongodbSlowLogsRequestBody::maxCostTimeIsSet() const
{
    return maxCostTimeIsSet_;
}

void ListMongodbSlowLogsRequestBody::unsetmaxCostTime()
{
    maxCostTimeIsSet_ = false;
}

int32_t ListMongodbSlowLogsRequestBody::getMinCostTime() const
{
    return minCostTime_;
}

void ListMongodbSlowLogsRequestBody::setMinCostTime(int32_t value)
{
    minCostTime_ = value;
    minCostTimeIsSet_ = true;
}

bool ListMongodbSlowLogsRequestBody::minCostTimeIsSet() const
{
    return minCostTimeIsSet_;
}

void ListMongodbSlowLogsRequestBody::unsetminCostTime()
{
    minCostTimeIsSet_ = false;
}

}
}
}
}
}


