

#include "huaweicloud/dds/v3/model/ListLtsSlowLogsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListLtsSlowLogsRequestBody::ListLtsSlowLogsRequestBody()
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

ListLtsSlowLogsRequestBody::~ListLtsSlowLogsRequestBody() = default;

void ListLtsSlowLogsRequestBody::validate()
{
}

web::json::value ListLtsSlowLogsRequestBody::toJson() const
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

bool ListLtsSlowLogsRequestBody::fromJson(const web::json::value& val)
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

std::string ListLtsSlowLogsRequestBody::getStartTime() const
{
    return startTime_;
}

void ListLtsSlowLogsRequestBody::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListLtsSlowLogsRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListLtsSlowLogsRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListLtsSlowLogsRequestBody::getEndTime() const
{
    return endTime_;
}

void ListLtsSlowLogsRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListLtsSlowLogsRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListLtsSlowLogsRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListLtsSlowLogsRequestBody::getLimit() const
{
    return limit_;
}

void ListLtsSlowLogsRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListLtsSlowLogsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListLtsSlowLogsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListLtsSlowLogsRequestBody::getLineNum() const
{
    return lineNum_;
}

void ListLtsSlowLogsRequestBody::setLineNum(const std::string& value)
{
    lineNum_ = value;
    lineNumIsSet_ = true;
}

bool ListLtsSlowLogsRequestBody::lineNumIsSet() const
{
    return lineNumIsSet_;
}

void ListLtsSlowLogsRequestBody::unsetlineNum()
{
    lineNumIsSet_ = false;
}

std::string ListLtsSlowLogsRequestBody::getOperateType() const
{
    return operateType_;
}

void ListLtsSlowLogsRequestBody::setOperateType(const std::string& value)
{
    operateType_ = value;
    operateTypeIsSet_ = true;
}

bool ListLtsSlowLogsRequestBody::operateTypeIsSet() const
{
    return operateTypeIsSet_;
}

void ListLtsSlowLogsRequestBody::unsetoperateType()
{
    operateTypeIsSet_ = false;
}

std::string ListLtsSlowLogsRequestBody::getNodeId() const
{
    return nodeId_;
}

void ListLtsSlowLogsRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListLtsSlowLogsRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListLtsSlowLogsRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::vector<std::string>& ListLtsSlowLogsRequestBody::getKeywords()
{
    return keywords_;
}

void ListLtsSlowLogsRequestBody::setKeywords(const std::vector<std::string>& value)
{
    keywords_ = value;
    keywordsIsSet_ = true;
}

bool ListLtsSlowLogsRequestBody::keywordsIsSet() const
{
    return keywordsIsSet_;
}

void ListLtsSlowLogsRequestBody::unsetkeywords()
{
    keywordsIsSet_ = false;
}

std::vector<std::string>& ListLtsSlowLogsRequestBody::getDatabaseKeywords()
{
    return databaseKeywords_;
}

void ListLtsSlowLogsRequestBody::setDatabaseKeywords(const std::vector<std::string>& value)
{
    databaseKeywords_ = value;
    databaseKeywordsIsSet_ = true;
}

bool ListLtsSlowLogsRequestBody::databaseKeywordsIsSet() const
{
    return databaseKeywordsIsSet_;
}

void ListLtsSlowLogsRequestBody::unsetdatabaseKeywords()
{
    databaseKeywordsIsSet_ = false;
}

std::vector<std::string>& ListLtsSlowLogsRequestBody::getCollectionKeywords()
{
    return collectionKeywords_;
}

void ListLtsSlowLogsRequestBody::setCollectionKeywords(const std::vector<std::string>& value)
{
    collectionKeywords_ = value;
    collectionKeywordsIsSet_ = true;
}

bool ListLtsSlowLogsRequestBody::collectionKeywordsIsSet() const
{
    return collectionKeywordsIsSet_;
}

void ListLtsSlowLogsRequestBody::unsetcollectionKeywords()
{
    collectionKeywordsIsSet_ = false;
}

int32_t ListLtsSlowLogsRequestBody::getMaxCostTime() const
{
    return maxCostTime_;
}

void ListLtsSlowLogsRequestBody::setMaxCostTime(int32_t value)
{
    maxCostTime_ = value;
    maxCostTimeIsSet_ = true;
}

bool ListLtsSlowLogsRequestBody::maxCostTimeIsSet() const
{
    return maxCostTimeIsSet_;
}

void ListLtsSlowLogsRequestBody::unsetmaxCostTime()
{
    maxCostTimeIsSet_ = false;
}

int32_t ListLtsSlowLogsRequestBody::getMinCostTime() const
{
    return minCostTime_;
}

void ListLtsSlowLogsRequestBody::setMinCostTime(int32_t value)
{
    minCostTime_ = value;
    minCostTimeIsSet_ = true;
}

bool ListLtsSlowLogsRequestBody::minCostTimeIsSet() const
{
    return minCostTimeIsSet_;
}

void ListLtsSlowLogsRequestBody::unsetminCostTime()
{
    minCostTimeIsSet_ = false;
}

}
}
}
}
}


